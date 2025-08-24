typedef pair<int,int> pi;
struct cmp1{
	bool operator()(const pi &a, const pi &b){
		if(a.X != b.X) return a.X > b.X;
		return a.Y > b.Y;
	}
}; //X에 대해 오름차순
priority_queue<pi,vector<pi>,cmp1> que;

bool cmp2(const pi &a, const pi &b){
	if(a.X != b.X) return a.X > b.X;
	return a.Y > b.Y;
} //X에 대해 내림차순
sort(arr.begin(),arr.end(),cmp2);
