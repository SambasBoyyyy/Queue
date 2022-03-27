#include <iostream>
#include "Queue.cpp"

using namespace std;

int main(){

/*QueueType <int> n;

 for (int i = 0; i < 4; i++)
 {
     int input;
     cin>>input;
     n.enque(input);
 }
 cout<<"ojfaojf"<<endl;
 */
 /*QueueType<int> aux;

  while (!n.isEmpty())
     {
         cout<<n.Front()<<endl;
         aux.enque(n.Front());
         n.deque();
     }
     cout<<"ojfaojf"<<endl;
 while (!aux.isEmpty())
     {
       cout<<aux.Front()<<endl;
       n.enque(aux.Front());
       aux.deque();

     }
 cout<<"ojfaojf"<<endl;
 */
// Stack<int> stack;


 /*while (!n.isEmpty())
 {
     stack.Push(n.Front());

 }
 cout<<"ojfaojf"<<endl;
 while (!stack.isEmpty())
 {
     cout<<stack.Top()<<endl;
     stack.Pop();
 }
 */

QueueType<string> q;


string str = "1";
q.enque(str);

int ask;
cin>>ask;

while(ask--){
        string s1 = q.Front();
          q.deque();
          cout<<s1<<endl;

          string s2=s1;

          q.enque(s1.append("0"));
          q.enque(s2.append("1"));

}


}
