void SapXepChuoi(int n, char[][200]){
	printf("Nhap so luong chuoi trong mang la:");
	scanf("%d",&n);
	char ars[n][200];
	for(int i=0;i<n;i++){
		printf("Nhap chuoi thu %d: ",i);
		scanf("%s",ars[i]);
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n-i-1;j++){
			char s[200];
			if(strcmp(ars[j],ars[j+1])>0){
				strcpy(s,ars[j]);
				strcpy(ars[j],ars[j+1]);
				strcpy(ars[j+1],s);
			}
		}
	}
	printf("Cac chuoi sau khi sap xep dung theo thu tu bang chu cai la:\n");
	for(int i=0;i<n;i++){
		printf("%s\n",ars[i]);
	}
}
