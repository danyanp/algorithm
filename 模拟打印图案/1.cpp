#include<iostream>
using namespace std;
int main(){
    //һ��
    // for(int i=0;i<10;i++){
    //     cout << "*" <<endl;
    // } 
    
    //һ��  
    // for(int i=0;i<10;i++){
    //     cout << "*" <<" ";
    // }
    
    //������
    // for(int i=0;i<5;i++){
    //     for(int j=0;j<5;j++){
    //         cout << "*" <<" ";
    //     }
    //     cout <<endl;
    // }
    
    //����������
    // for(int i=1;i<5;i++){
    //     for(int j=i;j>0;j--){
    //         cout <<"*";
    //     }
    //     cout <<endl;
    // }
    
    //����������
    // for(int i=5;i>0;i--){
    //     for(int j=i;j>0;j--){
    //         cout<<"*";
    //     }
    //     cout <<endl;
    // }
    
    //����������
    //     for(int i=1;i<=5;i++){
    //         //��ӡ�ո�
    //         for(int j=5-i;j>0;j--){
	//             cout <<" ";
	//         }
	//         //��ӡ*��
	//         for(int k=i;k>0;k--){
	//             cout <<"*";
	//         }
	//         cout << endl;
	//     }
	
	//����������
	//    for(int i=5;i>0;i--){
	//        //��ӡ�ո�
	//        for(int j=5-i;j>0;j--){
	//             cout << " ";
	//         }
	//        //��ӡ*��
	//        for(int k=i;k>0;k--){
	//            cout <<"*";
	//        }
	//        cout << endl;
	//    }
	
	//����������
	//int n = 5;
	//	for(int i=1;i<n;i++){
	//		 //��ӡ�ո�
	//		for(int k=n-i-1;k>0;k--){
	//			cout <<" ";
	//		}
	//		//��ӡ*��1,3,5,7,9,----2n-1
	//		for(int j=1;j<=2*i-1;j++){
	//			cout << "*";
	//		}
	//		cout << endl;
	//	} 
	
 	//���������� 
	//	int n = 9;
	//	 
	//	for(int i=1;i<=5;i++){
	//		//��ӡ�ո�
	//		for(int k=i-1;k>0;k--){
	//			cout<<" ";
	//		} 
	//		//��ӡ*��1,3,5,7,9,----2n-1
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
			//��ӡ�ո�
			for(int k=i-1;k>0;k--){
				cout<<" ";
			} 
			//��ӡ*��1,3,5,7,9,----2n-1
			for(int j=n-(i-1)*2;j>0;j--){
				cout<<"*";
			} 
			cout << endl;
	}
	
	
	
	
	
	
	
	
	
	 
    return 0;
}
