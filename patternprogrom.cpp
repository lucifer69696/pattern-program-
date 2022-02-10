using namespace std ;

#include<iostream>
int main(){






   cout<<"\n \n \n welcome to pattern program"<<"\n"<<"for $ pattern press 1"<<"\n";


cout<<"for ! pattern press 2 "<<"\n"<<"for @ pattern press 3 "<<"\n";

cout<<"for # pattern press 4 "<<"\n"<<"for % pattern press 5 "<<"\n";

cout<<"for ^ pattern press 6 "<<"\n"<<"for & pattern press 7 "<<"\n";

cout<<"for * pattern press 8 "<<"\n"<<"for  ~ pattern press 9 "<<"\n";


cout<<"for coco pattern press 10 "<<"\n";

int m ;

cin>>m;

 int r = m;

switch (r)
{
case 1: for(int s = 0; s<10 ;s++){

for(int j =0; j<s ; j++){

   cout<<"$";
}
cout<<"\n";

}

break ;
case 2: for(int s = 0; s<10 ;s++){

for(int j =0; j<s ; j++){

   cout<<"!";
}
cout<<"\n";

}

break ;
case 3: for(int s = 0; s<10 ;s++){

for(int j =0; j<s ; j++){

   cout<<"@";
}
cout<<"\n";

}

break ;


case 4: for(int s = 0; s<10 ;s++){

for(int j =0; j<s ; j++){

   cout<<"#";
}
cout<<"\n";

}

break ;


case 5: for(int s = 0; s<10 ;s++){

for(int j =0; j<s ; j++){

   cout<<"%";
}
cout<<"\n";

}

break ;

case 6: for(int s = 0; s<10 ;s++){

for(int j =0; j<s ; j++){

   cout<<"^";
}
cout<<"\n";

}

break ;

case 7: for(int s = 0; s<10 ;s++){

for(int j =0; j<s ; j++){

   cout<<"&";
}
cout<<"\n";

}

break ;

case 8: for(int s = 0; s<10 ;s++){

for(int j =0; j<s ; j++){

   cout<<"*";
}
cout<<"\n";

}

break ;

case 9: for(int s = 0; s<10 ;s++){

for(int j =0; j<s ; j++){

   cout<<"~";
}
cout<<"\n";

}

break ;

case 10: for(int s = 0; s<10 ;s++){

for(int j =0; j<s ; j++){

   cout<<"coco";
}
cout<<"\n";

}

break ;
default:cout<<"this pattern is not available \n " ;
break;
}

cout<<"thank for visting my program have a good day \n \n \n ";
   return 0 ;
}