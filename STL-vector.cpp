/*
C++ STL(Standard template Library)
STL is one of the unique abilities of C++ which makes it stand out from every other programming language. 
STL stands for standard template library which contains a lot of pre-defined templates in terms of containers and classes 
which makes it very easy for developers or programmers to implement different data structures easily 
without having to write complete code and worry about space-time complexities.

C++ STL is divided into 4 parts

Algorithms
Containers
Functions
Iterators

*/

// Pairs



void explainPair() {
    pair<int,int>p = {1,3};
    cout << p.first << " " << p.second;
    
    pair<int,pair<int,int>> p = {1,{3,4}};
    cout << p.first << " " << p.second.first << " " << p.second.second;

    pair<int,int>arr[]= {{1,2},{2,5},{5,1}};
    cout<<arr[1].second;  // 5

}


/*
What is Vector?
Vectors in STL are basically dynamic arrays that have the ability to change size whenever elements are added or deleted from them.
Vector elements can be easily accessed and traversed using iterators.
A vector stores elements in contiguous memory locations.

Syntax:
vector<object_type> variable_name;
Example:

vector<int> v1;
vector<char> v2;
vector<string> v3;
*/

//Containers
//1. Vectors

void explainVector(){
    vector<int>v;     // it creates an empty container { }
    v.push_back(1);   // {1}
    v.emplace_back(2);  //{1,2}

    vector <pair<int, int>> vec;  

    v.push_back({1,2});   
    v.emplace_back(1,2);

    vector<int> v(5);

    vector<int> v1(5,100); //{100,100,100,100,100}

    vector<int> v1(5,20);
    vector<int> v2(v1);

    // How do you access elements in vector
    v = {20,10,15,5,7}
    v[1] = 10
    v[3] = 5

    // Other way is through iterators

    // Iterator -> Points to memory where elemts is lying

    vector<int>::iterator it = v.begin();  //{20,10,15,6,7}  
    it++;
    cout << *(it) << " ";  //10

    // v.begin points to memory where 20 is 
    // It will not print 20 it is just pointing to the memory

    it = it + 2;
    cout << *(it) << " ";

    vector<int>:: iterator it = v.end(); // {10,20,30,40}

    v.end() -> Points to the memory location rights after 40. If we want to access 40 we will do it--

    vector<int>::iterator it = v.rend(); 
    // rend -> reverse end memory location before 10

    vector<int>::iterator it = v.rbegin();
    // rbegin -> reverse begin -> it points to 40 -> i++ it points to 30 and so on // { 40,30,20,10 }
    
    cout<<v[0]<<" "<<v.at(0);
    cout<<v.back()<<" ";

    for(vector<int>::iterator it=v.begin();it!=(v.end(); it++){
    cout<<*(it)<<" ";
    }

    for(auto it=v.begin();it!=v.end();it++)
    {
    cout<<*(it)<<" ";
    }

    //Deletion in vector
    //{10,20,30,13}
    v.erase(v.begin()+1);  // {10,12,13}

    //{10,20,12,23,35}
    v.erase(v.begin()+2,v.begin()+4);  // {110,20,35}  //{start,end} -> end is not included

    //Insert function
    vector<int>v(2,100);  //{100,100}
    v.insert(v.begin(),300);  //{300,100,100}
    v.insert(v.begin()+1,2,10);  //{300,10,10,100,100}

    vector<int>copy(2,50);    //{50,50}
    v.insert<v.begin(),copy.begin();copy.end();   //{50,50,300,10,10,100,100}

    cout<<v.size();

    //{10,20}
    v.pop_back();  //{10}  -> delete the last element

    // v1 -> {10,20}
    // v2 -> {30,40}
    v1.swap(v2); // v1 -> {30,40}   v 2 -> {10,20}

    v.clear();  // erase the entire vector
    cout<<v.empty();
}


void explainlist() {
    list<int> ls;
    ls.push_back(2);// {2}
    ls.emplace_back(4); //{2,4}

    ls.push_front(5); //{5,2,4};
    ls.emplace_front(); {2,4};
}





void explainDeque() {
     deque<int>dq;
     dq.push_back(1); // {1}
     dq.emplace_back(2); // {1,2}
     dq.push_front(4);//{4,1,2}
     dq.emplace_front(3);//{3,4,1,2}

     dq.pop_back(); // {3,4,1}
     dq.pop_front();//{4,1}

     dq.back();
     dq.front();

     //rest functions same as vector
     //begin , end , rbegin , rend , clear , insert, size ,swap

}



void explainPQ(){
    priority_queue<int>pq;

    pq.push(5);//{5}
    pq.push(2);//{5,2}
    pq.push(8);//{8,5,2}
    pq.emplace(10);//{10,8,5,2}

    cout<< pq.top(); //prints 10
    pq.pop();//{8,5,2}
    cout<<pq.top(); // prints 8
    // size swap empty function same as others
    // minimum heap
    priority_queue<int, vector<int>,greater<int>> pq;
    pq.push(5);//{5}
    pq.push(2);//{2,5}
    pq.push(8);//{2,5,8}
    pq.emplace(10);//{2,5,8,10}

    cout<< pq.top(); //prints 2

    
}


void explainSet(){
    set<int>st;
    st.insert(1);//{1}
    st.emplace(2);//{1,2}
    st.insert(2);//{1,2}
    st.insert(4);//{1,2,4}
    st.insert(3);//{1,2,3,4}

    //Functionality of insert in vector
    //can be used also, that only increase efficiency

    //begin(), end() , rbegin(), rend(), size(),
    //empty() and swap() are same as those of above 
    //{1,2,3,4,5}
    auto it = st.find(3);
    //{1,2,3,4,5}
    auto it = st.find(6);
    //{1,4,5}
    st.erase(5); //erases 5 // takes logarithmic time
    
    int cnt = st.count(1);

    auto it=st.find(3);
    st.erase(it);// it takes constant time
    // {1,2,3,4,5}
    auto it1 = st.find(2);
    auto it2 = st.find(4);
    st.erase(it1,it2); //after erase {1,4,5} {first,last}
    //lower_bound() and upper_bound() function works in same way as in vector it does.
    //This is syntax 
    auto it = st.lower_bound(2);
    auto it = st.upper_bound(3);


}




void explainMultiSet() {
    //everything is same as set
    // only stores duplicate elements also 

    multiset<int>ms;
    ms.insert(1); //{1}
    ms.insert(1);//{1,1}
    ms.insert(1); //{1,1,1}

    ms.erased(1); //all 1's erased
    int cnt = ms.count(1);
    //only a single one erase

    ms.erase(ms.find(1),ms.find(1)+2);
    // rest all function same as set
}



void explainUSet(){
    unordered_set<int> st;
    /*
    lower_bound() and upper_bound() function doesnot works .
    rest all functions are same as above
    it doesnot stores in any partuicular order it has a better complexity
    than set  in most cases , except some when collision happens 
    */
}


void explainMap(){
    map<int , int> mpp;
    map<int , pair<int,int>> mpp;
    map<pair<int,int>,int> mpp;

    mpp[1]=2;
    mpp.emplace({3,1});
    mpp.insert({2,4});
    mpp[{2,3}] = 10;

    for(auto it : mpp){
        cout << it.first <<" "<< it.second << endl;

    }
    cout<< mpp[1];
    cout<<mpp[5];
     auto it = mpp.find(3);
     cout<< *(it).second;

     auto it = mpp.find(5);
     // this is the syntax
    auto it = mpp.lower_bound(2);
    auto it = mpp.upeer_bound(3);
    // erase , swap , size , empty are same as above




}





void explainMultimap() {
    // everything smae as map , only it can store multiple keys 
    // only mpp[key] cannot be used here

}

void explainUnorderedMap() {
    //same as set and unordered_Set differences
     
}


bool comp(pair<int,int>p1, pair<int,int>p2) {
    if(p1.second < p2.second){
        return true;   
    } else if(p1.second == p2.second){
        if(p1.first>p2.second) return true;

    }
    return false;
}




void explainExtra(){

    sort(a,a+n);
    sort(v.begin() ,v.end());

    sort(a+2 , a+4);
    sort(a,a+n, greater<int>);
    pair<int,int>a[] = {{1,2},{2,1},{4,1}};

    //sort it acc to second element
    //if second element is same , then sort 
    //it acc to first element but in descending

    sort(a,a+n,comp)
    // {4,1},{2,1},{1,2}};

    int num = 7;
    int cnt = __builtin_popcount();

    long long num = 165786578687;
    int cnt = __builtin_popcountll();

    string s = "123";
    sort(s.begin(),s.end());

    do{
        cout<< s << endl;
    } while(next_permutation(s.begin(),s.end()));
 

    int maxi = *max_element(a,a+n);

}
int main(){
    explainExtra();
    return 0;

}