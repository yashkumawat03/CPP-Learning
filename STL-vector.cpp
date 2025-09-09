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
    pair<int<int>p = {1,3};
    cout << p.first << " " << p.second;
    
    pair<int,pair<int,int>> p = {1,{3,4}}
    cout << p.first << " " << p.second.first << " " << p.second.second;

    pair<int,int>arr[]= {{1,2},{2,5},{5,1}}
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