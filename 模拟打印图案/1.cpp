#include<iostream>
using namespace std;
int main(){
    //一竖
    // for(int i=0;i<10;i++){
    //     cout << "*" <<endl;
    // } 
    
    //一行  
    // for(int i=0;i<10;i++){
    //     cout << "*" <<" ";
    // }
    
    //正方形
    // for(int i=0;i<5;i++){
    //     for(int j=0;j<5;j++){
    //         cout << "*" <<" ";
    //     }
    //     cout <<endl;
    // }
    
    //下左三角形
    // for(int i=1;i<5;i++){
    //     for(int j=i;j>0;j--){
    //         cout <<"*";
    //     }
    //     cout <<endl;
    // }
    
    //上左三角形
    // for(int i=5;i>0;i--){
    //     for(int j=i;j>0;j--){
    //         cout<<"*";
    //     }
    //     cout <<endl;
    // }
    
    //下右三角形
    //     for(int i=1;i<=5;i++){
    //         //打印空格
    //         for(int j=5-i;j>0;j--){
	//             cout <<" ";
	//         }
	//         //打印*号
	//         for(int k=i;k>0;k--){
	//             cout <<"*";
	//         }
	//         cout << endl;
	//     }
	
	//上右三角形
	//    for(int i=5;i>0;i--){
	//        //打印空格
	//        for(int j=5-i;j>0;j--){
	//             cout << " ";
	//         }
	//        //打印*号
	//        for(int k=i;k>0;k--){
	//            cout <<"*";
	//        }
	//        cout << endl;
	//    }
	
	//上正三角形
	//int n = 5;
	//	for(int i=1;i<n;i++){
	//		 //打印空格
	//		for(int k=n-i-1;k>0;k--){
	//			cout <<" ";
	//		}
	//		//打印*号1,3,5,7,9,----2n-1
	//		for(int j=1;j<=2*i-1;j++){
	//			cout << "*";
	//		}
	//		cout << endl;
	//	} 
	
 	//下正三角形 
	//	int n = 9;
	//	 
	//	for(int i=1;i<=5;i++){
	//		//打印空格
	//		for(int k=i-1;k>0;k--){
	//			cout<<" ";
	//		} 
	//		//打印*号1,3,5,7,9,----2n-1
	//		for(int j=n-(i-1)*2;j>0;j--){
	//			cout<<"*";
	//		} 
	//		cout << endl;
	//		
	//	}
	
	int n,b=1;
	int sum=0;
	cin >> n;
	while(b<9){
		
	}
	cout<<b<<endl;
	
		for(int i=1;i<5;i++){
			//打印空格
			for(int k=i-1;k>0;k--){
				cout<<" ";
			} 
			//打印*号1,3,5,7,9,----2n-1
			for(int j=n-(i-1)*2;j>0;j--){
				cout<<"*";
			} 
			cout << endl;
	}
	
	
	
	
	
	
	
	
	
	 
    return 0;
}
