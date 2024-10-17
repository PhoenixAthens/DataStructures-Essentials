#include <map>
#include <iostream>
using std::cout;
template<typename K, typename V>
class interval_map {
    friend void IntervalMapTest(); //probably there for testing purposes <a:AK>
    V m_valBegin; //
    
    
public:
    std::map<K,V> m_map;
    // constructor associates whole range of K with val
    template<typename V_forward>
    interval_map(V_forward&& val): m_valBegin(std::forward<V_forward>(val)){
        //V_forward&& means, the function is called when passing in a rvalue <a:AK>
        //std::forward<V_forward>(val) will assign it as it is with its properties to m_valBegin <a:AK>
        
    }

    // Assign value val to interval [keyBegin, keyEnd).
    // Overwrite previous values in this interval.
    // Conforming to the C++ Standard Library conventions, the interval
    // includes keyBegin, but excludes keyEnd.
    // If !( keyBegin < keyEnd ), this designates an empty interval,
    // and assign must do nothing.
    template<typename V_forward>
    void assign( K const& keyBegin, K const& keyEnd, V_forward&& val )
        requires (std::is_same<std::remove_cvref_t<V_forward>, V>::value){
            auto kb_lb = m_map.lower_bound(keyBegin);
            auto ke_lb = m_map.lower_bound(keyEnd);
            
            if((!(keyBegin < keyEnd) && !(keyEnd < keyBegin)) || !( keyBegin < keyEnd )) {
                        return;
            }else if(m_map.empty() || kb_lb == m_map.end()){ //insertion on far right or first insertion (works correct)
                m_map[keyBegin] = val;
                m_map[keyEnd] = m_valBegin;
            }else if(kb_lb == ke_lb && kb_lb == m_map.begin()){ // insertion on far left (works correct)
                m_map[keyBegin]=val;
                if((*ke_lb).first != keyEnd){
                    m_map[keyEnd]=m_valBegin;
                }
                auto valueFromKeyEnd = m_map[keyEnd];
                while((*ke_lb).second==valueFromKeyEnd){
                    m_map.erase(ke_lb++);
                }
            }else if(kb_lb == ke_lb && kb_lb != m_map.begin()){ // insertion in btw (without overlap)
                //inserting between any range of values
                auto tempDefault = (*(--kb_lb)).second;
                
                //when value before is not same as value to be inserted
                if(tempDefault!=val){
                    m_map[keyBegin] = val;
                    if(keyEnd != (*ke_lb).first){
                        if((*ke_lb).second == tempDefault){
                            m_map.erase(ke_lb);
                        }
                        m_map[keyEnd]=tempDefault;
                    }else{
                        if((*ke_lb).second == val){
                            m_map.erase(ke_lb);
                        }
                    }
                }
            }else if(kb_lb != ke_lb){ //insertion in btw (with overlap)
                //deal with conflict where left value touches
                //deal with conflict where ke_lb equals map.end()
                //deal with conflict where ke_lb and kb_lb are different
                //deal with conflict where keybegin and a previous key collide!
                //in-btw but kb_lb != ke_lb (you know like -6,2,'H'
                auto temp_kb_lb = kb_lb;
                auto prevVal = (temp_kb_lb==m_map.begin())?m_valBegin:(*(--temp_kb_lb)).second;
                auto tempIter = kb_lb;
                if(ke_lb==m_map.end() && kb_lb!=m_map.begin()){ //keyEnd exceeds map_key limits
                    if(prevVal != val){
                        m_map[keyBegin]=val;
                        prevVal = val;
                        tempIter = ++m_map.lower_bound(keyBegin);
                    }
                    if(prevVal!=m_valBegin)m_map[keyEnd]=m_valBegin;
                    auto end = m_map.lower_bound(keyEnd);
                    while(tempIter != end){
                        m_map.erase(tempIter++);
                    }
                
                }else if(ke_lb==m_map.end() && kb_lb==m_map.begin()){
                    m_map.clear();
                    if(val!=m_valBegin){
                        m_map[keyBegin]=val;
                        m_map[keyEnd]=m_valBegin;
                    }else{
                        m_map[keyBegin]=val;
                    }
                    //and this
                }else if(kb_lb == m_map.begin() && ke_lb != m_map.end()){
                    auto prevToEnd = (*(--ke_lb)).second;
                    ++ke_lb;
                    
                    if((*ke_lb).first == keyEnd){ //if so just remove elements in btw
                        auto tempRemover = ke_lb;
                        if((*ke_lb).second == val){
                            ++tempRemover;
                        }
                        m_map[keyBegin]=val;
                        auto kb_lb_copy = ++m_map.lower_bound(keyBegin);
                        while(kb_lb_copy!=tempRemover){
                            m_map.erase(kb_lb_copy++);
                        }
                    }else{
                        if(prevToEnd != val){
                            m_map[keyEnd] = prevToEnd;
                        }
                        m_map[keyBegin]=val;
                        auto kb_lb_copy = ++m_map.lower_bound(keyBegin);
                        auto end = m_map.lower_bound(keyEnd);
                        while(kb_lb_copy != end){
                            m_map.erase(kb_lb_copy++);
                        }
                    }
                }else{
                    //over-write values, touching keybegin, ending in the middle
                    //overwrite values, starting in the middle, touching keyend
                    //start in the middle end in another middle
                    auto kb_lb_prev = (*(--kb_lb)).second;
                    ++kb_lb;
                    auto ke_lb_prev = (*(--ke_lb)).second;
                    ++ke_lb;
                    auto startRemove = kb_lb;
                    auto endRemove = ke_lb;
                    if((*kb_lb).first == keyBegin && (*ke_lb).first != keyEnd){ //hittin end
                        //fix the code below
                        
                        //check for equal to prev and next of ke_lb
                        if(ke_lb_prev != val){
                            m_map[keyEnd]=ke_lb_prev;
                            endRemove = m_map.lower_bound(keyEnd);
                        }
                        
                        if(kb_lb_prev != val){
                            m_map[keyBegin] = val;
                            startRemove++;
                        }
                        
                    }else if((*kb_lb).first != keyBegin && (*ke_lb).first == keyEnd){ //hitting start
                        auto valToBeEntered = val;
                        
                        //dealing with left side
                        if(valToBeEntered != kb_lb_prev){
                            m_map[keyBegin] = valToBeEntered;
                            startRemove = ++m_map.lower_bound(keyBegin);
                        }

                        //dealing with right side
                        if(valToBeEntered==(*ke_lb).second){
                            ++endRemove;
                            if(endRemove!=m_map.end()){
                                auto nextKey = (*(endRemove)).first;
                                endRemove = m_map.lower_bound(nextKey);
                                m_map.erase(ke_lb);
                            }else{
                                if(valToBeEntered != m_valBegin){
                                    m_map[keyEnd] = m_valBegin;
                                }
                            }
                        }
                    }else if((*kb_lb).first == keyBegin && (*ke_lb).first == keyEnd){ //hitting both
                        //check prev if same
                        if(kb_lb_prev != val){
                            m_map[keyBegin] = val;
                            startRemove++;
                        }
                        //check last if same
                        if((*ke_lb).second == val){
                            endRemove = ++ke_lb;
                            //m_map.erase(--ke_lb);
                        }
                    }else{
                        startRemove = kb_lb++;
                        endRemove = ke_lb;
                        if(kb_lb_prev != val){
                            m_map[keyBegin] = val;
                            startRemove = ++m_map.lower_bound(keyBegin);
                        }
                        if(ke_lb_prev != val){
                            m_map[keyEnd] = ke_lb_prev;
                            endRemove = m_map.lower_bound(keyEnd);
                        }
                    }
                    while(startRemove!=endRemove){
                        m_map.erase(startRemove++);
                    }
                }
                //else if(){} //deal with the middle in the middle case, where we pluck values for keys from other previous keys in the map
                
            }
    }
    
    // look-up of the value associated with key
    V const& operator[]( K const& key ) const {
        auto it=m_map.upper_bound(key);
        if(it==m_map.begin()) {
            return m_valBegin;
        } else {
            return (--it)->second;
        }
    }
};
int main(int argc, char** argv){
//    std::map<int,int> mapO{{-2,'A'},{-10,'B'},{0,'C'},{2,'D'},{8,'E'}};
//    auto it = mapO.lower_bound(8);
//    ++it;
    // -10->B, -2->A, 0->C, 2->D, 8->E
    //std::cout << std::distance(mapO.begin(),mapO.lower_bound(1)) << "\n";
//    cout << (*mapO.lower_bound(1)).first << "\n"; //1 is the lower_bound of 2
//    cout << (*(--mapO.lower_bound(-10))).first << "\n"; //1 is the lower_bound of 2
//    cout << (mapO.lower_bound(9) == mapO.end()) << "\n";
//    cout << ((mapO.lower_bound(-10)) == (mapO.begin())) << "\n";
//    cout << "===================================" << std::endl;
//    cout << (*mapO.upper_bound(2)).first << std::endl;
//    cout << std::endl;
    
    auto i_map = new interval_map<int,char>('A');
    //let's fix far left first
    i_map->assign(2,5,'B');
    i_map->assign(-7,-1,'C');
    i_map->assign(-14,-7,'C'); //insertion on far left
    i_map->assign(0,1,'D');
    i_map->assign(-10,-5,'C');
    i_map->assign(-10,-5,'K');
    i_map->assign(-4,-1,'E');
    i_map->assign(3,8,'B');
    i_map->assign(-9,8,'K');
    i_map->assign(-15,9,'L');
    
    i_map->assign(-15,0,'D');
    
    i_map->assign(-15,-7,'K');
    
    i_map->assign(-12,-3,'A');
    
    i_map->assign(-12,-3,'E');
    i_map->assign(-10,3,'B');
    
    i_map->assign(-14,-8,'K'); //this falls under insertion with collisions!
    i_map->assign(5,10,'A'); //this also falls under insertion with collision since ke_lb!=kb_lb
//
    i_map->assign(2, 5, 'B');
    i_map->assign(-7,-1,'C');
    i_map->assign(0,1,'D');//fix in the middle without conflict
    i_map->assign(6,10,'E');
    i_map->assign(-6,3,'F');
//
    i_map->assign(-5,2,'F');
    i_map->assign(-8,12,'G');
    i_map->assign(6,8,'H');
    
    i_map->assign(-9,4,'J' );
    
    i_map->assign(-14,2,'C');
    i_map->assign(2, 4, 'K');
    i_map->assign(-10, 0, 'O');
    i_map->assign(-12,3,'B');
    i_map->assign(-15,-15,'Y');
    
    for(auto a: i_map->m_map){
        cout << a.first << ", " << a.second << "\n";
    }
    //-7, C
//    -6, F
//    3, B
//    5, A
//    6, E
//    10, A
    cout<<"\n";
//    -7, C
//    -6, F
//    2, A
//    6, E
//    10, A
}






//-14, C
//-10, K
//-5, C
//-4, E
//-1, A
//0, D
//1, A
//2, B
//5, A

