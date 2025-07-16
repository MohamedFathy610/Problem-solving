import 'dart:io';

void main ()
{
    
    // problem 1
    /*
    print('What is your name ?');
    String? name = stdin.readLineSync();
    print('Hi,$name What is your age ?');
    int? age = int.tryParse(stdin.readLineSync()!);
    num ageto100 = 100- age!;
    print('You have $ageto100 to be 100 years old ');
    */
    //prblem 2 
    /*
    print ('Enter a number ');
    int? num = int .parse(stdin.readLineSync()!);
    if (num % 2 ==0)
    print('Even');
    else 
    print ('Odd');
    */
    // problem 3
   /*
    List <int> a = [1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89];
    for ( int i in a){
        if (i<5)print (i);
    };
    */
    // problem 4 
    /*
    print('Enter you rnumber ');
    int num = int .parse(stdin.readLineSync().toString());
    for (int i=1;i<=num ;i++)
    {
        if (num %i ==0)
        print(i);
    }
    */
    // problem 5
    /*
    List <int> a = [1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89];
    List <int> b = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13];
    Set c = {...a,...b};
    print(c);
    */
     //problem 6
    /*
    print('Enter a String ');
    String? s = stdin.readLineSync();
   
   if( s != null && s.isNotEmpty) {
    String reverseds = s.split('').reversed.join();
    if (reverseds == s)
    print('paillondorm');
    else print('Not paillondorm');
  } else {
    print('No input provided.');
  }
    */
     //problem 7
    /*
    List <int> a = [1, 4, 9, 16, 25, 36, 49, 64, 81, 100];
    List <int> newList =[] ;
    for (int arr in a)
    {
      if (arr %2 == 0)
      {newList.add(arr);}
    }
    print (newList);
    */
       //problem 8
    /*
    print('Enter your name :');
    String? name = stdin.readLineSync();
    play(name!);

    // حط الكومنت الي تحت برا ال main وبعد كده شغل 
    /*
import 'dart:math';

int comp=0,ply=0;
int getplychoose(String name){
  print('$name,enter your choose :');
  print(' 1 - rock /n 2- paper /n 3- scissors :');
  int? plychoose = int.parse(stdin.readLineSync().toString());
  if (plychoose >3 || plychoose<1)
  {
    print ('Not valid choose');
    getplychoose( name);
  }
  plychoose --;
  return plychoose;
}
void wantToComplate(String name)
{
   print('Do you want to complate ? 1 manes yes 0 manes no ');
   int want = int.parse(stdin.readLineSync().toString());
   if (want >1 || want<0)
  {
    print ('Not valid choose');
    wantToComplate(name);
  }
  if (want ==1) play(name);
  else if (want ==0){
    comp =0;
    ply =0;
    exit(0);
  }
}
void play(String name ){
   List<String> options = ["rock", "paper", "scissors"];

    int plychoose = getplychoose(name);
    Random random = new Random();
    int compchoose =random.nextInt(3);
    print("You choosed : ${options[plychoose]}");
    print("Computer choossed : ${options[compchoose]}");

    if (plychoose == 0)
    {
      if (compchoose ==0 ) print('Draw !');
      else if (compchoose ==1){
        print("Computer win !");
        comp ++;
      }
      else if (compchoose == 2)
      {
        print("$name win !");
        ply ++;
      }

    }
    else  if (plychoose == 1)
    {
      if (compchoose ==1 ) print('Draw !');
      else if (compchoose ==2){
        print("Computer win !");
        comp ++;
      }
      else if (compchoose == 0)
      {
        print("$name win !");
        ply ++;
      }
    }
    else  if (plychoose == 2)
    {
      if (compchoose ==2 ) print('Draw !');
      else if (compchoose ==0){
        print("Computer win !");
        comp ++;
      }
      else if (compchoose == 1)
      {
        print("$name win !");
        ply ++;
      }
    }

    print('Final score :');
    print('You : $ply');
    print('Computer : $comp');

   wantToComplate(name);
}
*/
*/



}
