//
//  main.cpp
//  match_base
//
//  Created by moulay on 5/13/17.
//  Copyright © 2017 moulay. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    
    int temp=0, n=0, i, count=0;
    
    cout<<"Enter your number : ";
    cin>>n;
    temp = n;
    
    while(temp>0){
        
        temp= temp/2;
        count++;
    }
    
    int *array = new int[count];
    
    for(i=0; i<count; i++){
        
        array[i] = n%2;
        n = n/2;
    }
    
    cout<<"the binary number is : ";
    
    for(i=0;i<count;i++){
        
        cout<<array[count-i-1];
        
    }
    
    cout<<endl<<endl;
    
    delete [] array;
    
    return 0;
}

