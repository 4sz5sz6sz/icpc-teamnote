string a,b,c;
cin >> a; // cin은 버퍼에 엔터가 남아있음.
cin.ignore(); // 입력 버퍼 비우기

// getline 함수는 버퍼에 엔터 포함 X
getline(cin, b); 
getline(cin, c);