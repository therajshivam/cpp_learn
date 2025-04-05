#include<bits/stdc++.h>
#include<iostream>
using namespace std;

// pairs
void explainPair() {
    // storing pairs
    pair<int, int> p = {1, 3};

    // accesing first and last elmet of the pair
    cout << p.first << " " << p.second;

    // storing many variables (nested pairs)
    pair<int, pair<int, int>> q = {1, {3, 4}};

    // accessing elmts of nested pairs
    cout << q. first << " " << q.second.second << " " << q.second.first << endl;

    // declaring pair array
    pair<int, int> arr[] = { {1,2}, {2,9}, {5,1}};

    // accessing array
    cout<< arr[1].second;  // gives output 9
}


// vectors
void explainVector() {

// DECLARATION IN A VECTOR

    // declaring vector
    vector<int> v;

    // adding elemts in vector
    v.push_back(1);
    v.emplace_back(2);

    // declation of vector of pair data type
    vector<pair<int, int>>vec;

    // adding elmts in pair vector
    vec.push_back({1,2});
    vec.emplace_back(1, 2);

    // declaration
    vector<int> v(5, 100); // 5 is size; vector contains 5 instances of 100

    vector<int> v(5); // 5 instances of garbage value

    vector<int> v1(5, 20); // declare container of 5 instances of 20
    vector<int> v2(v1); // coping the container in other variable

// ITERATORS IN A VECTOR

    // how to access elements in a vector
    // 1. using v[0] or v.at(0) ... we dont use v.at
    cout << v[0];

    // 2. using iterators
    // iterator points directly on the memory not on the element
    vector<int>::iterator it = v.begin(); // points the begining element of the memory of vector

    // v = [20, 10, 5, 6, 0, 1]

    it++; // moves to next +1 element
    cout << *(it) << " "; // access in memory, * means start
    // prints 10

    it = it + 2;
    cout << *(it) << " "; // prints 6

    // End and Reverse iterators
    // {10, 20, 30, 40}

     vector<int>::iterator it = v.end();
    //  v.end() will point somewhere right after 40
    // it-- will move to the 40

    // these two never used;
    // reverse end and reverse begin
    //  vector<int>::iterator it = v.rend(); // before 10
    //  vector<int>::iterator it = v.rbegin(); //at 40; i++ will move to 30

// PRINTING IN A VECTOR

    // printing the vector
    cout << v[0];
    cout << v.back() << " "; //print the last elmt

    // {10, 20, 30}
    // prints entire vector; starts from 10 and ends at 30
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
        cout << *(it) << " ";
    }

    // shortcut; auto
    for (auto it = v.begin(); it != v.end(); it++) {
        cout << *(it) << " ";
    }
    
    // for each loop
    for (auto it : v) {
        cout << it << " ";
    }

// DELETION IN A VECTOR

    // {10, 20, 12, 23}
    // erases only one element
    v.erase(v.begin()+1); // erases 20 ; {10, 12, 23} 

    // {10, 20, 12, 23, 35}
    v.erase(v.begin() + 2, v.begin() + 4); // {10, 20, 35}

// INSERT Function

    vector<int>v(2,100); // {100, 100} ; inserting two hundreds
    v.insert(v.begin(), 300); // {300, 100, 100} ; inserting 300 at the beginning
    v.insert(v.begin() + 1, 5); // inserts 5 after 1st index
    v.insert(v.begin() + 1, 2, 10); // {300, 10, 10, 100, 100}

    // inserting one vector into another vector
    vector<int> copy(2, 50); // {50, 50}
    v.insert(v.begin(), copy.begin(), copy.end()); // {50, 50, 300, 10, 10, 100, 100}

// More functions

    // {10, 20}
    cout << v.size(); // 2 ; size of vector

    // {10, 20}
    v.pop_back(); // {10} ; pops out the last element

    // v1 -> {10, 20}
    // v2 -> {30, 40}
    v1.swap(v2); // v1 -> {30, 40} , v2 -> {10, 20}

    v.clear(); // erases the entire vector

    cout << v.empty(); // if he vector has nothing it will say true else false

}

void explainList() {

    list<int> ls;

    ls.push_back(2); // {2}
    ls.emplace_back(4); // {2, 4}

    ls.push_front(5); // {5, 2, 4}
    ls.emplace_front(); // {2, 4}

    // rest functions same as vector
    // begin, end, rbegin, rend, clear, insert, size, swap

    // insert in a vector consumes more time complexity
    // list gives pushing elements at the front
}

void explainDeque() {

    deque<int>dq;
    dq.push_back(1); // {1}
    dq.emplace_back(2); // {1, 2}
    dq.push_front(4); // {4, 1, 2}
    dq.emplace_front(4); // {3, 4, 1, 2}

    dq.pop_back(); // {3, 4, 1}
    dq.pop_front(); // {4, 1}

    dq.back();
    dq.front();

    // rest functions same as vector
}

void explainStack() {
    // LIFO

    stack<int> st;
    st.push(1); // {1}
    st.push(2); // {2, 1}
    st.push(3); // {3, 2, 1}
    st.push(3); // {3, 3, 2, 1}
    st.emplace(5); // {5, 3, 3, 2, 1}

    cout << st.top(); 
    //print 5 ; 5 is still in the stack ; {5, 3, 3, 2, 1}
    // "** st[2] is invalid" ; indexing is not allowed in stack

    // there are only three functions : push, pop, top ; TC : O(1)

    st.pop(); // st looks like {3, 3, 2, 1} ; deletes the 5

    cout << st.top(); // 3

    cout << st.size(); // 4

    cout << st.empty(); //flase

    stack<int>st1, st2;
    st1.swap(st2);
}

void explainQueue() {
    // FIFO
    // all operations are in O(1)

    queue<int> q;
    q.push(1); // {1}
    q.push(2); // {1, 2}
    q.push(4); // {1, 2, 4}

    q.back() += 5; // {1, 2, 9} ; at last

    cout << q.front(); // prints 9

    // Q = {1, 2, 9}
    cout << q.front(); // prints 1

    q.pop(); // {2, 9} ; deletes

    cout << q.front(); // prints 2

    // size, swap, empty as stack
}

// Priority Queue
void explainPQ() {

    // largest value element apears at the top

    priority_queue<int>pq;
    // Max heap
    pq.push(5); // {5}
    pq.push(2); // {5, 2}
    pq.push(8); // {8, 5, 2}
    pq.push(10); // {10, 8, 5, 2}

    cout << pq.top(); // prints 10

    pq.pop(); // {8, 5, 2}; deletes the largest value element

    cout << pq.top(); // prints 8

    // size, swap, empty as stack

    // Minimum Heap
    priority_queue<int , vector<int>, greater<int>> pq;
    pq.push(5); // {5}
    pq.push(2); // {2, 5}
    pq.push(8); // {2, 5, 8}
    pq.emplace(10); // {2, 5, 8, 10}

    cout << pq.top(); // prints 2

    // push, pop -> TC : log n
    // top -> o(n)

}

// Set
void explainSet() {
    // sorted and unique

    set<int>st;
    st.insert(1); // {1}
    st.emplace(2); // {1, 2}
    st.insert(2); // {1, 2}
    st.insert(4); // {1, 2, 4}
    st.insert(3); // {1, 2, 3, 4}

    // Functionality of insert in vector
    // can be used also, tha only increases efficiency

    // begin(), end(), rbegin(), rend(), size()
    // empty(), and swap() are same as those of above

    // {1, 2, 3, 4 , 5}
    auto it = st.find(3); // iterator return 3
    
    auto it = st.find(6); // return st.end

    // {1, 4, 5}
    st.erase(5);
    // erases 5 ; takes logarithmic time

    int cnt = st.count(1);
    // if its present then gives one else 0

    auto it = st.find(3);
    st.erase(it); // it takes constant time

    auto itl = st.find(2);
    auto it2 = st.find(4);
    st.erase(itl, it2); // after erase {1, 4, 5} (first, last)

    // lower_bound() and upper_bound() function works in the same way as in vector it does.
    // This is the syntax

    auto it = st.lower_bound(2);
    auto it = st.upper_bound(3);

    // everything happens in log n TC
}

void explainMultiset() {
    // everything is same as set
    // it is sorted
    // stores duplicate elements also

    multiset<int>ms;
    ms.insert(1); // {1}
    ms.insert(1); // {1, 1}
    ms.insert(1); // {1, 1, 1}

    ms.erase(1); // all 1's erased
    
    int count = ms.count(1);

    // only a single 1 is erased
    ms.erase(ms.find(1));

    ms.erase(ms.find(1), ms.find(1)+2);

    // rest all function same as set 
}

void explainUnorderedSet(){
    unordered_set<int> st;
    // lower_bound and upper_bound function does not works, 
    // rest all functions are same
    // as above, it does not store in any 
    // particular order it has a better complexity
    // han set in most cases, except some when collision happens
}

void explainMap() {
    unordered set<int>
}
 

int main() {
}