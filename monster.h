class monster{
private:
	string name;
	int hp,potion;
public:
	//  void Attack(moster &);
   // void heal();
    monster(string="Proifon", int=100,int=10);
   //~monster();
};
monster::monster(string n,int h,int p){

  name=n;
  hp=h;
  potion=p;
  cout<<"Monster "<<name <<" is created"<<endl;
}