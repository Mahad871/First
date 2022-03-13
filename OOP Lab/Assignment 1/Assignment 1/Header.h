//#pragma once
//#include <iostream>	
//using namespace std;
//
//
//char* convertToTapCode(char*sen) {
//
//	char* ans = new char[20000];
//
//	char cipher[5][5] = { { 'a','b','c','d','e' },
//						{ 'f','g','h','i','j' },
//						{ 'l','m','n','o','p' },
//						{ 'q','r','s','t','u' },
//						{ 'v','w','x','y','z' } };
//	int i,j,z=0,l,m,n=0,num=0;
//	
//	for (l = 0; sen[l] >= 'a' && sen[l] <= 'z'; l++) {
//
//		for (i = 0; i < 5; i++) {
//
//			for (j = 0; j < 5; j++){ 
//
//				if (sen[l] == cipher[i][j]) {
//				
//					for (m = 0; m < i+1; m++,n++) {
//
//						ans[n] = '.';
//					//	cout << ".";
//					}
//					ans[n] = ' ';
//					n++;
//				//	cout << " ";
//					for (m = 0; m < j + 1; m++,n++) {
//						ans[n] = '.';
//					//	cout << ".";
//					}
//				
//				}
//				else if (sen[l] == 'k') {
//					//cout << ". ...";
//					ans[n] = '.';
//					n++;
//					ans[n] = ' ';
//					n++;
//					for (int s = 0; s < 2; s++, n++)
//						ans[n] = '.';
//				}
//			
//			
//			}							
//		}
//		ans[n] = ' ';
//		n++;
//		ans[n] = ' ';
//		n++;
//		//cout << "  ";
//	}
//
//	//cout << endl;
//	for ( z = 0; ans[z] == '.' || ans[z] == ' '; z++) {
//		
//		if (ans[z] == '.' || ans[z] == ' ')
//			num++;
//		else
//			continue;
//
//	}
//
//	char* ret = new char[z];
//
//	for (int x = 0; x < z+4 ; x++) {
//
//		ret[x] = NULL;
//	}
//	
//	for (int x = 0; x<z; x++) {
//		
//		ret[x] = ans[x];
//	}
//		
//	return ret;
//}
//
//char* convertToString(char*tap) {
//
//	char cipher[5][5] = { { 'a','b','c','d','e' },
//						{ 'f','g','h','i','j' },
//						{ 'l','m','n','o','p' },
//						{ 'q','r','s','t','u' },
//						{ 'v','w','x','y','z' } };
//	int i=0, j=0,k,l, m,space=0;
//
//	for (l = 0; tap[l] == '.' || tap[l] == ' '; l++) {
//
//		
//		if (1) {
//
//			if (tap[l] == ' ' && space==0)
//				space = 1;
//			
//			else if (tap[l] == '.' && space == 0)
//				i++;
//			else if (tap[l] == '.' && space == 1)
//				j++;			
//			
//			else if (tap[l-1] == ' ') {
//				space = 0;
//				
//				cout << cipher[i-1][j-1];
//
//				i = 0, j = 0;
//			}
//
//		}
//		
//		
//		
//	}
//	cout << cipher[i - 1][j - 1];
//
//	
//	
//	return 0;
//
//}
//
////void removePunctuation(char* str) {
////	
////	int count=0,i,j,k,space=0;
////
////	
////
////	for (i = 0; str[i] != NULL; i++,count) {
////
////		if (str[i] == ' ' && str[i + 1] == ' ') {
////
////			str[i]='?';
////		}
////		if (str[i] == '.' || str[i] == '~' || str[i] == '@' || str[i] == '#' || str[i] == '$' || str[i] == '%' || str[i] == '^' || str[i] == '&' || str[i] == '*' || str[i] == '(' || str[i] == ')' || str[i] == '_' || str[i] == '+' || str[i] == '=' || str[i] == '\"' || str[i] == ';' || str[i] == ':' || str[i] == '/' || str[i] == '?')
////			count++;
////	}
////	
////
////	i=i-count;
////	char* ans = new char[i];
////
////	for (j = 0; j<i+4; j++) {
////
////		ans[j] = NULL;
////
////	}
////
////
////	for (j=0,i = 0; str[i] != NULL; i++) {
////
////		if (str[i] == '.' || str[i] == '~' || str[i] == '@' || str[i] == '#' || str[i] == '$' || str[i] == '%' || str[i] == '^' || str[i] == '&' || str[i] == '*' || str[i] == '(' || str[i] == ')' || str[i] == '_' || str[i] == '+' || str[i] == '=' || str[i] == '\"' || str[i] == ';' || str[i] == ':' || str[i] == '/' || str[i] == '?')
////			continue;
////		
////		else  {
////			ans[j] = str[i];
////			j++;
////		}
////
////	}
////
////	cout << ans;
////
////
////}