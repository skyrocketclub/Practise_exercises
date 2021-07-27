#include <iostream>
#include <vector>
using namespace std;

int main() {
   
    /*
     * The program is supposed to ask the user to input how many vectors
     * The for Vector one, How many values does vector 1 have? 
     * Then input them
     * Same for Vector 2 and Vector 3, and then Output them all...
     * */
//    cout<<"How many data items do you have? ";
//    cin>> num_items;
//    vector <int> data {};
//    
//    for(int i {1}; i<= num_items; i++){
//        int data_item {};
//        cout<<"Enter data item"<< i<<" : ";
//        cin>>data_item;
//        data.push_back(data_item);
//        
//    }
//    for (auto val: data)
//        cout<<val<<endl;
            int no_vectors{}, no_elements{}, data_item {};
            vector <int> data;
            vector<vector<int>>bigdata;
            cout<<"How many Vectors are available here? "<<endl;
            cin>>no_vectors;//User inputs the number of Vectors...
            cout<<"There are "<<no_vectors<<" number of vectors"<<endl;
            
                for(int i {1}; i<=no_vectors; i++){
                    cout<<"How many elements does vector "<<i<<" have? : ";
                    cin>>no_elements;
                
                    for (int j {1}; j<= no_elements; j++){
                        cout<<"Element "<<j<<" : ";
                        cin>>data_item;
                        data.push_back (data_item);
                    }
                    bigdata.push_back(data);
                    data = {};
                }
               int  l= no_vectors-1;
                for (int n {0}; n<no_vectors; n++){
                     cout<<"Vector "<<no_vectors-l<<" : ";
                    for(int m {0}; m< no_elements; m++)
                    {
                        cout<< bigdata.at(n).at(m)<<" ";
                    }
                    cout<<endl;
                    l--;
                } 
    return 0;
}