#include <iostream>
#include <vector>
using namespace std;

int main() {
  
  //Create Vector1 and Vector2
  vector<int> vector1;
  vector<int> vector2;
  
  //Add 10 and 20 to Vector1 using push_back
  vector1.push_back(10);
  vector1.push_back(20);
  
  //Display the elements of vector1 and the size of it
  cout<<"Vector1 : " <<endl;
  cout<<vector1.at(0)<<" "<< vector1.at(1)<<endl;
  cout<<"The size of the vector is "<< vector1.size()<<endl;

  cout<<"-----------------"<<endl;

  //Add 100 and 200 to Vectore using push_back
  vector2.push_back(100);
  vector2.push_back(200);

  //Create a 2 dimensional vector called Vector2D and add Vector 1 and Vector2 using push_back
  vector<vector<int>> vector2_d;
  vector2_d.push_back(vector1);
  vector2_d.push_back(vector2);

  //Display the elements of vector2D and the size of it
  cout<<"Vector2_d : " <<endl;
  cout<< vector2_d.at(0).at(0)<<" "<< vector2_d.at(0).at(1)<<endl;
  cout<< vector2_d.at(1).at(0)<<" "<< vector2_d.at(1).at(1)<<endl;
  cout<<"The size of the vector is " << vector2_d.size()<<endl;
  
  cout<<"-----------------"<<endl;

  //Replace vector1 first element by 1000 and display vector2
  vector1.at(0) = 1000;
  cout<<"Vector2_d : " <<endl;
  cout<< vector2_d.at(0).at(0)<<" "<< vector2_d.at(0).at(1)<<endl;
  cout<< vector2_d.at(1).at(0)<<" "<< vector2_d.at(1).at(1)<<endl;
  
  cout<<"-----------------"<<endl;

  //Display the elements of vector1
  cout<<"Vector1 : " <<endl;
  cout<<vector1.at(0)<<" "<< vector1.at(1)<<endl;
}