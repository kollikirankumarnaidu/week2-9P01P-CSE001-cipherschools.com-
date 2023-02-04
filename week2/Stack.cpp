#include <bits/stdc++.h>
// #include<bits/stdc++.h>
// using namespace std;

// int main(){

//     stack<int> st; //creating a stack..

//     st.push(2);//push 2 into the stack
//     st.push(5);
//     st.push(3);
//     cout<<st.size()<<endl;
//     cout<<st.top()<<endl;
//     st.pop();
//     cout<<st.top()<<endl;


// }

#include<bits/stdc++.h>
using namespace std;
class Stack{
int top;
int cap;
int size;
int *arr;
public :
Stack(int cap){
arr = new int[cap];
top = -1;
size = 0;
this->cap = cap;
}
void _push(int x){
 if(size == cap){
cout << "Overflow\n";
return;
}
arr[++top] = x;
size++;
}
void _pop(){
if(size == 0){
cout << "Underflow\n";
return;
}
top--;
}
int _size(){
return this->size;
 }
bool _empty(){
return size == 0;
}
int _top(){
if(size == 0){
cout << "Underflow\n";
}
return arr[top];
}
};

int main() {
Stack st(10);
st._push(2);
cout << st._top();

int main(){

    stack<int> st; //creating a stack..

    st.push(2);//push 2 into the stack
    st.push(5);
    st.push(3);
    cout<<st.top()<<endl;
    st.push(1);
    cout<<st.size()<<endl;
    st.push(5);
    st.push(3);
    cout<<st.top()<<endl;
    st.push(1);
    st.pop();
    cout<<st.size()<<endl;
    st.pop();
    st.top();
    cout<<st.top()<<endl;
    cout<<st.empty();

    st.pop();


}