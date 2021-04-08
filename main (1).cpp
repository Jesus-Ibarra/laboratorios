#include <iostream>
#include <cstdlib>
#include <time.h>

//NOMBRES: CARLOS DANIEL LORA LARIOS (SAB 9-12)
//        Jesus Antonio Ibarra Agudelo(jueves 6-9)

using namespace std;

int main()
{
    cout << "Hello World!" << endl;


    short a,n;
    float pi=0,x,y,resul;
    long long int mul;
    int A,B,N,suma=0,contador=1,DESDE=0, HASTA=100,mes,dia,w=1,z=0,aux=0;
    int num=1,cont=0,n0,k;
    srand(time(NULL));
    bool band=true, band2=true,primo=true,signo;
    char letra,caract;
    int g;
    int ejercicio;
    int num1,num2;
    int resultado;
    float result=0;
    float promedio;
    int copia;
    int nr;
    int ban;
    float e;
    int intentos;
    int horas,minutos,segundos;

    cout<<"ingrese el numero del ejercicio";
    cin>>ejercicio;

   //ejercicio 2


    switch(ejercicio){

    case 1:

        cout << "Ingrese dos numeros A y B: ";
        cin >>A>>B;
        cout << "El residuo de la division A/B es: "<< A%B <<endl;

    break;


    case 2:

        //Ejercicio 2. Escriba un programa que pida un número N e imprima en pantalla si es par o impar.
        cout<< "ingrese un numero";
        int num;
        cin>>num;

        if(num%2==0){

           cout << "el numero es par";

        }
        else{

            cout<<"el numero es impar";
        }

        break;

    case 3:
        cout<<"Ingrese dos numeros A y B: ";
        cin>>A>>B;
        if(A>B){cout<<A<<" es mayor"<<endl;}
        else{cout << B <<" es mayor"<<endl;}

    break;


    case 4:

       // Ejercicio 4. Escriba un programa que pida dos números A y B e imprima en pantalla el menor.

        cin>>num1;

        cin>>num2;

        if(num1<num2){

            cout<<num1<<"es menor que"<<num2;

        }else{

            cout<<num1<<" es mayor que "<<num2;


        }

        break;

    case 5:
        cout<<"Ingrese dos numeros A y B: ";
        cin>>A>>B;
        cout<<A<<"/"<<B<<" = ";
        if(2*(A%B)>=B){
            cout<<A/B+1<<endl;
        }
        else{
            cout<<A/B<<endl;
        }

    break;

      case 6:

        /*Escriba un programa que pida dos números A y B e imprima en pantalla la potencia
        AB, sin hacer uso de librerías matemáticas.
        Ej: si se ingresan 5 y 3 se debe imprimir:
        5∧3=125 */


        cout<<"ingrese un numero(base) ";
        cin >> num1;
        cout<<"ingrese un numero(exponente) ";
        cin >> num2;
        resultado=1;
        for(int i=0;i<num2;i++){


            resultado=num1*resultado;

        }
        cout<<resultado;

        break;

    case 7:
        cout<<"Ingrese un numero N: ";
        cin>>N;
        for(int i=0;i<=N;i++){
            suma+=i;
            }
        cout<<"La sumatoria desde 0 hasta "<<N<<" es: "<<suma<<endl;

    break;

      case 8:

        /*Ejercicio 8. Escriba un programa que pida un número N e imprima en pantalla su factorial.
       Ej: si se ingresa 5: 5!=1*2*3*4*5=120, por lo que se debe imprimir:
       5!=120*/

      cout<<"ingrese un numero para hacer su factorial";
      cin>>num;

      resultado=num;

      for(int i=1;i<num;i++){

          int  disminuir= num-i;
          resultado=resultado*disminuir;

      }

      cout<<resultado;


        break;

    case 9://perimetro=2*pi*r; area=pi*r^2,pi=3.1416
        cout<<"Ingrese un numero N: ";
        cin>>N;
        cout<<"El perimetro del circulo es de: "<<2*3.1416*N<<endl;
        cout<<"El area del circulo es de: "<<3.1416*(N*N)<<endl;

    break;

     case 10:

       /* Escriba un programa que pida un número N e imprima en pantalla todos los múlti-
        plos de dicho número entre 1 y 100.

        Ej: si se ingresa 33 se debe imprimir:
        Multiplos de 33 menores que 100:
        33
        66
        99*/

        cout<<"ingrese un numero";
        cin>>num;

        for(int i=num;i>=num and i<100;i++){

            if(i%num == 0){

                cout<<i<<" es multiplo de "<<num<<"\n";
            }
        }


        break;


    case 11:
        cout<<"Ingrese un numero N: ";
        cin>>N;
        for(int i=1;i<=10;i++){
            cout<<N<<" x "<<i<<" = "<<N*i<<endl;
        }

    break;



    case 12:

        /*Ejercicio 12. Escriba un programa que pida un número N e imprima todas las potencias desde N1
hasta N5


Ej: si se ingresa 3 se debe imprimir:
3∧1=3
3∧2=9
3∧3=27
3∧4=81
3∧5=243
*/
        cout<<"hola mundo";
        cout<<"ingrese un numero";

        cin>>num1;
        resultado=1;
        for(int i=1;i<6;i++){

            //int a= num1;

            resultado=num1*resultado;

            cout<<num1<<" elevado a "<<i<<"="<<resultado<<"\n";
          }

        break;

    case 13:
        cout<<"Ingrese un numero N: ";
        cin>>N;
        cout<<"Sus divisores son: "<<endl;
        for(int i=1;i<=N;i++){
            mul=N%i;
            if(mul==0){cout<<i<<endl;}
        }

    break;

    case 14:

        /*Ejercicio 14. Escriba un programa que imprima dos columnas paralelas, una con los números del
        1 al 50 y otra con los números del 50 al 1.
        Ej: las primeras lineas a imprimir serían:
        1 50
        2 49
        3 48*/

        for(int i=1,j=50;i<=50 and j>=1;i++,j--){

            cout<<i<<"  "<<j<<"\n";
        }

    case 15:
        do{cout<<"Ingrese un numero N: ";
        cin>>N;
        suma+=N;

    }while(N!=0);
    cout<<"El resultado de la sumatoria es: "<<suma<<endl;

    break;

    case 16:

        /*Ejercicio 16. Escriba un programa que pida constantemente números hasta que se ingrese el nú-
        mero cero e imprima en pantalla el promedio de los números ingresados (excluyendo el cero).

        Ej: si se ingresan 1, 2, 3, 0 se debe imprimir:
        El promedio es: 2*/

        while(a==false){

            cout<<"ingrese un numero";

            cin>>num1;

            if(num1==0){
                break;
            }

            cout << num1;

            result=num1+result;

            cont++;

    }
       promedio=result/cont;

       cout<<"El promedio es "<<promedio;


        break;


    case 17:
        cout<<"Ingrese un numero: ";
        cin>>N;
        for(int i=0;N!=0;i++){
            if(i==0){A=N;
                B=N;}
            else{
                if(N>A){A=N;}
                else{B=N;}
            }
            cout<<"Ingrese un numero: ";
            cin>>N;
        }
        cout<<"El numero mayor fue: "<<A<<endl;

    break;

    case 18:

        /*Ejercicio 18. Escriba un programa que pida un número N e imprima si es o no un cuadrado per-
        fecto.

        Ej: si se ingresa 9 se debe imprimir:
        9 es un cuadrado perfecto.
        y si se ingresa 8 se debe imprimir:
        8 NO es un cuadrado perfecto.
        */

        cout<<"ingrese un numero"<<"\n";
        cin >> num1;
        resultado=1;

        for(int i=1;i<num1;i++){

            resultado=i*i;

            if(resultado==num1){

                cout<<num1<<" es un cuadrado perfecto";

                break;
            }
            else if(i==num1-1){

                cout<<num1<<" no es un cuadrado perfecto";
            }
        }

        break;


    case 19:
        cout<<"Ingrese un numero N: ";
        cin>>N;
        for(int i=2;i<N;i++){
            if(N%i==0){primo=false;}
        }
        if(N<=1){cout << "el numero no es primo"<<endl;}
        else if(primo==true){cout<<"El numero es primo"<<endl;}
        else{cout<<"El numero no es primo"<<endl;}

    break;

     case 20: /*Escriba un programa que pida un número N e imprima si es o no un palíndromo
                (igual de derecha a izquierda que de izquierda a derecha).
                Ej: si se ingresa 121 se debe imprimir:
                121 es un numero palindromo.
                y si se ingresa 123 se debe imprimir:
                123 NO es un numero palindromo.*/
        cout<<"ingrese un numero para comprobar si es palindromo";
        cin>>num;
        copia=num;
        nr=0;

        do{

            nr=10*nr+(num%10);
            num/=10;
        }while(num!=0);
        cout << "El numero "<< copia << " al reves es "<< nr<< endl;


        break;

    case 21:
        cout<<"Ingrese una letra: ";
        cin>>letra;
        if(letra>=97 and letra<=122){
            letra-=32;
            cout<<letra<<endl;
        }
        else if(letra>=65 and letra<=90){
            letra+=32;
            cout<<letra<<endl;
        }

    break;

    case 22:

        /*Escriba un programa que pida una cantidad entera de segundos y la imprima en
formato horas:minutos:segundos.
Ej: si se ingresa 7777 se debe imprimir:
2:9:37*/



        cout<<"ingrese un numero";

        cin>> num;

        horas = num/3600;

        num1= num%3600;

        minutos = num1/60;

        segundos= num1%60;

        cout<<horas<<":"<<minutos<<":"<<segundos;

        break;

    case 23:
        cout<<"Ingrese dos numeros A y B:";
        cin>>A>>B;
        N=A;
        if(B>N){N=B;}
        while((N%A!=0)||(N%B!=0)){
            N++;
        }
        cout<<"El MCM de "<<A<<" y "<<B<<" es: "<<N<<endl;

    break;



    case 24:


      /*Ejercicio 24. Escriba un programa que pida una número entero e imprima un cuadrado de dicho
tamaño, los bordes del cuadrado deben estar hechos con el carácter `+' y el interior debe estar vacío.
Ej: si se ingresa 4 se debe imprimir:
++++
+  +
+  +
++++*/

        cout<<"ingrese un numero n para el lado del cuadrado";
        cin>>num;

        for(unsigned short f=1;f<=num;f++){

            for(unsigned short c=1;c<=num;c++){

                if(c==1|| c==num|| f==1 || f==num){

                    cout<<"+";

                }else{
                    cout<<" ";
                }

            }

            cout << endl;
}

        break;
    case 25:
        cout<<"Ingrese una cantidad de numeros: ";
        cin>>N;
        while(N/10>0){
            N=N/10;
            contador++;
        }
    cout<<N<<" tiene "<<contador<<" cifras"<<endl;

    break;
    case 26:


        /*Escriba un programa que pida tres números e imprima el tipo de triangulo (isósce-
les, equilátero, escaleno) que se formaría, si sus lados tienen la longitud denida por los números

ingresados. Tenga en cuenta el caso en que los números ingresados no forman un triángulo.
Ej: si se ingresan 3, 3 y 5 se debe imprimir:
Se forma un triangulo isosceles.
y si se ingresan 3, 3 y 6 se debe imprimir:
Las longitudes ingresadas no forman un triangulo.*/

        cout<<"ingrese los numeros";
        cin>>num;
        cin>>num1;
        cin>>num2;
        ban=0;


        while(ban==0){

            if((num + num1)>num2) ban=0;

            else{ ban =1;
                break;
            }

            if((num + num2)>num1) ban=0;

                else{ ban =1;
                    break;

            }

           if((num1 + num2)>num) ban=0;

                    else{ ban =1;
                        break;
                     }
           break;
      }

        if(ban==1) cout<< "no se puede formar un triangulo con estos lados";

        else{

            if(num == num1 and num == num2 ) cout << "se forma un triangulo equilatero"<<endl;

            else if(num == num1|| num == num2 || num1 == num2) cout << "se forma un triangulo isosceles"<<endl;

            else cout<< " se forma un triangulo escaleno"<<endl;

        }

        break;
    case 27:
        cout<<"Ingrese dos numeros: ";
        cin>>x>>y;
        cout<<"Ingrese una opcion: "<<endl;;
        cout<<"1= suma"<<endl;
        cout<<"2= resta"<<endl;
        cout<<"3= multiplicacion"<<endl;
        cout<<"4= division"<<endl;
        cin>>N;
        switch(N){
        case 1:
            resul=x+y;
            cout<<x<<"+"<<y<<" = "<<resul<<endl;
        break;

        case 2:
            resul=x-y;
            cout<<x<<"-"<<y<<" = "<<resul<<endl;
        break;

        case 3:
            resul=x*y;
            cout<<x<<"*"<<y<<" = "<<resul<<endl;
        break;

        case 4:
            resul=x/y;
            cout<<x<<"/"<<y<<" = "<<resul<<endl;
        break;
        }

    break;



       case 28:



       /* Ejercicio 28. Escriba un programa que encuentre el valor aproximado de pi en base a la siguiente
        suma innita:

        π = 4(1 − 1/3+ 1/5 - 1/7 + 1/9...)
si se ingresa 3 π = 4(1 −
1
3 +
1
5
) = 3,46667, por lo que se debe imprimir:

pi es aproximadamente: 3.46667*/



        cout<<"ingrese un numero"<<endl;

        cin>>num;

        num1=0;

        pi=0;

        float j;

        j=1;

        for(int i=1,ind=1;i<=num;i++,ind++){

            if(ind%2!=0) pi=(1/j)+ pi;

            else pi= pi - (1/j);

            num1+=1;

            j+=2;
        }

        pi= 4*pi;

        cout<<"pi es aproximadamente: "<<pi<<endl;

        break;

    case 29://La fórmula general sería rand()%(INTERVALO+1)+MINIMO
    cout << "Numeros aleatorios entre " << DESDE << " y " << HASTA << endl;
    for (int i = 1; i <= 1; i ++){
            N = rand()%(HASTA-DESDE+1)+DESDE;
            cout << N << " "<<endl;

     cout<<"Es este su numero?"<<endl;
     cout<<"1=Si"<<endl<<"0=No"<<endl;
     cin>>signo;
     if(signo==1){cout<<"Se ha encontrado el numero y es: "<<N<<endl;
               // band=false;}
     }
     else  if(signo==0){
         while(band==true){
             cout<<"Si no lo es, de una pista: "<<endl;
             cout<<"60: < "<<endl<<"61: = "<<endl<<"62: > "<<endl;
             cin>>caract;
             if(caract==60){
                 for (int i = 1; i <= 1; i ++){
                     N = rand()%(N-DESDE+1)+DESDE;
                     cout << N << " "<<endl;}
                  }
              else if(caract==61){cout<<"Se ha encontrado el numero y es: "<<N<<endl;
                   band=false;
                }

               else{
                 for (int i = 1; i <= 1; i ++){
                     N = rand()%(HASTA-N+1)+N;
                     cout << N << " "<<endl;}
             }
            }
     }
    }

    break;


    case 30:

        /*
        Escriba un programa que genere un número aleatorio A (entre 0 y 100) y le pida al
        usuario que lo adivine, el usuario ingresa un número B y el programa le dirá si B es mayor o menor
        que A, esto se repetirá hasta que el usuario adivine el número, en ese momento el programa le dirá
        el número de intentos que tardo el usuario en adivinar el número.*/

        ban=0;

        srand(time(NULL));
        num1= rand()%100;

        intentos= 0;
        while(ban==0){

            intentos +=1;

            cout<<"ingrese un numero: "<<endl;

            cin>>num;

            if(num<num1) cout<<"el numero es mayor que "<<num<<endl;

            else if(num>num1) cout<< " el numero es menor que "<<num<<endl;

            else break;
        }

        cout<<"correcto, el numero es "<< num1<<endl;

        cout<<"numero de intentos: "<<intentos;

        break;

    case 31:
        cout<<"Ingrese una letra: ";
        cin>>letra;
        if(letra==97||letra==101||letra==105||letra==111||letra==117){
            cout<<letra<< " Es una vocal"<<endl;
        }
        else if(letra==65||letra==69||letra==73||letra==79||letra==85){
            cout<<letra<<" Es una vocal"<<endl;
        }
        else if(letra>=65 && letra<=90){
            cout<<letra<<" Es una consonante"<<endl;
        }
        else if(letra>=97 && letra<=122){
            cout<<letra<<" Es una consonante"<<endl;
        }
        else{
            cout<<"No es ni vocal ni consonante"<<endl;
        }

    break;



    case 32:

        /*
Se necesita un programa que permita determinar la mínima combinación de billetes
y monedas para una cantidad de dinero determinada. Los billetes en circulación son de $50.000,
$20.000, $10.000, $5.000, $2.000 y $1.000, y las monedas son de $500, $200, $100 y $50.

Hacer un programa que entregue el número de billetes y monedas de cada denominación para com-
pletar la cantidad deseada. Si por medio de los billetes y monedas disponibles no se puede lograr la

cantidad deseada, el sistema deberá decir lo que resta para lograrla.
Ej: si se ingresa 47810, el programa debe imprimir:
50000 : 0
20000: 2
10000 : 0
5000: 1
2000 : 1
1000: 0
500 : 1
200: 1
100 : 1
50: 0
Faltante: 10*/

        cout << "ingrese la cantidad de dinero deseada";
        cin >> num;
        num1=10000;

        for(int j=0;j<3;j++){
            for(int i=0;i<3;i++){
                cout<<(i*i-4*i+5)*num1 << ":"<< num/((i*i-4*i+5)*num1)<< endl;
                num=num%((i*i-4*i+5)*num1);
            }
            num1/=10;
        }

        cout << "50:"<< num/50 << "\nFaltante :" << num%50 << endl;

        break;

    case 33:
        cout << "Ingrese dia y luego mes: ";
        cin >> dia >> mes;
        if(dia>=1 && dia<=31 && mes>=1 && mes<=12){
            if(mes==2){
                if(dia<=28) {cout << "Fecha valida!" <<endl;}
                else if(dia == 29) {cout << "Fecha valida en bisiesto!" <<endl;}
                else {cout << "Fecha invalida! " << endl;}
        }
        else if(mes<=7){
            if(mes%2==1){ cout << "Fecha valida!" <<endl;}
            else if(dia<=30)  {cout << "Fecha valida"<<endl;}
            }
        else if(mes<=7){
            if(mes%2==1) {cout << "Fecha valida!" <<endl;}
            else if(dia<=30)  {cout << "Fecha valida!" <<endl;}
            else {cout << "Fecha invalida! " << endl;}
        }
        else{
            if(mes%2==0){ cout << "Fecha valida!" <<endl;}
            else if(dia<=30)  {cout << "Fecha valida!" <<endl;}
            else {cout << "Fecha invalida! " << endl;}
        }
    }
    else {cout << "Fecha invalida! " << endl;}


    break;


    case 34:

        /*Escriba un programa para leer dos números enteros con el siguiente signicado: el
valor del primer número representa una hora del día en un reloj de 24 horas, de modo que 1245
representa las doce y cuarenta y cinco de la tarde. El segundo entero representa un tiempo de du-
ración de la misma manera, por lo que 345 representa tres horas y 45 minutos. El programa debe
sumar esta duración primer número, y el resultado será impreso en la misma notación, en este caso
1630, que es el tiempo de 3 horas y 45 minutos después de 12:45.
Nota: el formato de salida debe ser: La hora es 1630.
Otra nota: se debe imprimir un mensaje como el siguiente cuando uno de los datos ingresados en
inválido: 1560 es un tiempo invalido.*/

        int segundos_horas;
        int segundos_minutos;
        int segundosnum;

        cout<<"ingrese el primer numero entero "<<endl;

        cin>>num;

        if((num%1000)%100 < 60){

        cout << "ingrese el segundo numero entero "<< endl;

        cin >> num1;

        if((num1%1000)%100 <60){


        for(int i=0; i<2;i++){


        minutos=(num%1000)%100;

        segundos_horas = ((num-minutos)/100)*3600;

        segundos_minutos = minutos*60;

        segundos = segundos_horas + segundos_minutos;

        if(i==0) segundosnum=segundos;

        num=num1;
        }

        segundos= segundosnum + segundos;

        if(segundos>86400) segundos-=86400;

        horas = segundos/3600;

        num2= segundos%3600;

        minutos = num2/60;

        cout<<horas<<minutos;

            }else cout<< "Este numero no puede ser ingresado";

        }else cout<< "Este numero no puede ser ingresado";

        break;

    case 35://2*N-2=c
        cout<<"Ingrese un numero impar: ";
        cin>>N;

        A = N;
        contador =  A- 1;
        for (k = 1; k <= A; k+=2) {
            for (B = 0; B <= contador; B++){
                cout<<" ";   }
            contador-=2;
            for (B = 0; B <= 2*k-2; B++){
                if (B%2 ==0) {
                    cout<<"*";
                } else {
                    cout<<" ";
                } }
            cout<<"\n"<<endl;
        }
        contador = 1;
        for (k = 1; k <= A - 1; k+=2) {
            for (B = 0; B <= contador; B++){
                cout<<" ";}
            contador+=2;
            for (B =1 ;B <= 2*(A-k)-2; B++){
                if (B%2 ==0) {
                    cout<<"*";
                } else {
                    cout<<" ";
                }}

            cout<<"\n"<<endl;
        }


    break;

    case 36:

        /*Escriba un programa que encuentre el valor aproximado del número de euler en base
a la siguiente suma innita:
e = 1/0! + 1/1! + 1/2! + 1/3! + 1/4! + 1/5!*/

        float factorial;

        factorial=1;

        cout<<"ingrese un numero"<<endl;

        cin>>num;

        e=0;

        j=0;

        for(int i=0;i<num;i++){

            for(int n=1;n<=j;n++){

                factorial= n*factorial;
            }

            if (i==0) factorial = 1;

            e=(1/factorial)+ e;

            j+=1;

            factorial= 1;
        }

        cout<<"e es aproximadamente: "<<e<<endl;

        break;

    case 37:
        cout<<"Ingrese un numero: ";
        cin>>N;
        while(aux<N){
            for(int i=0;i<N;i++){
                cout<<w<<endl;
                aux=w;
                if(aux%2==0){
                    suma+=aux;
                }
                w+=z;
                z=aux;
            }
            z=w;
            w=aux;
        }
        cout << "Sum: " << suma << endl;

    break;


    case 38:
        /*Escriba un programa que reciba 3 números a, b, c, y calcule la suma de todos los
múltiplos de a y b que sean menores a c. Tenga en cuenta no sumar 2 veces los múltiplos comunes.
Ej: para a=3, b=5 y c=10. Se sumarían 3+6+9+5=23
Para a=5, b=7 y c=36. Se sumarían 5+10+15+20+25+30+35+7+14+21+28 = 210.
Nota: el formato de salida debe ser:
m11 + m12 + m13 + . . . + m21 + m22 + m23. . . = sumatoria.
m11 representa el primer múltiplo de a y así sucesivamente. m21 representa el primer múltiplo de b
y así sucesivamente.*/

        cout<< "ingrese el primer numero";

        cin>>num;

        cout<< "Ingrese el segundo numero";

        cin>> num1;

        cout << "Ingrese el tercer numero";

        cin>>num2;

        resultado=0;



        for(int i=num;i>=num and i<num2;i++){

            if(i%num == 0){

                for (int j=num1;j>=num1 and j<num2;j++){

                    if(j%num1==0 and j==i){

                        a = true;

                        break;
                    }

                }

                if(a ==true) resultado+=0;
                if(a==false) resultado+=i;

                //cout<<i<<" es multiplo de "<<num<<"\n";


            }
        }

        for(int j=num1;j>=num and j<num2;j++){

            if(j%num1 == 0) resultado +=j;
        }

        cout<< resultado;

        break;

    case 39:
        cout<<"Ingrese un numero N: ";
        cin>>N;
        while(N != 0){
            A = N % 10;
            N /= 10;
            cont=1;
            contador=1;
            while(contador<=A){
                cont=cont*A;
                contador++;
            }
            suma += cont;
        }
        cout<<"El resultado de la suma es: "<<suma<<endl;

    break;




    case 40:

        /*Escriba un programa que reciba un número n e imprima el enésimo número primo.
Ej: Si recibe 4 el programa debe imprimir 7.
Nota: la salida del programa debe ser: El primo numero 4 es: 7.*/

        cout<<"Ingrese un numero";

        cin>>num;

        num1=0;

          for(int j=1;j>=0;j++){

              for(int n=1;n<=j;n++ ){

                  if(j%n==0) resultado+=1;
              }

              if(resultado==2) num1+=1;

              if(num1==num){

                  cout<<j;

                  break;

              }

              resultado=0;

        }


        break;

    case 41:
        cout<<"Ingrese un valor de n: ";
        cin >> n;
        for(int i=1;band2;i++){
            mul=n+i;
            band=true;
            for(int j=n-1;band;j--){
                if(mul%j!=0)band=false;
                if(j==1){band2=false;
                band=false;}
            }
        }
        cout <<"El minimo comun multiplo de todos los enteros entre 1 y "<< n <<" es: "<< mul <<endl;
     break;


    case  42:

        /*Escriba un programa que calcula el máximo factor primo de un número.
Ej: Si se recibe 33 el programa debe imprimir 11.
Nota: la salida del programa debe ser: El mayor factor primo de 33 es: 11.*/

        cin>>num;


        for(int j=1;j<num;j++){

            for(int n=1;n<=j;n++ ){

                if(j%n==0) cont+=1;
            }

            if(cont==2 and num%j==0) resultado = j;

            cont=0;
    }
        cout<< "el mayor factor primo de "<< num<<" es " << resultado;

        break;

    case 43:
        cout<<"Ingrese un numero: ";
        cin>>N;
        for(int i=1;i<N;i++){
            //verifica si es primo
            cont=0;
            for(int j=1;j<=i;j++)
                if(i%j==0 && i%1==0)
                 cont++;

                if(cont==2){
                    cout<<i<<" "<<endl;
                    suma+=i;
                }
        }
        cout<<"El resultado de la suma es: "<< suma <<endl;

    break;




    case 44:

        for(int i=100;i<=999;i++){

            for(int j=i;j<=999;j++){

                num = i*j;

                num1= num;

                nr=0;

                do{
                    nr=10*nr+(num%10);
                    num/=10;

                }while(num!=0);

                if(num1==nr && num1> resultado) resultado = num1;
            }
        }

        cout<<resultado<<endl;

        break;

    case 45://num=1,(sum)res=2;(res)suma=0

        cout<<"Ingrese un numero impar: ";
        cin>>N;

        for(int f=0;f<N;f++){
            for(int c=0;c<N;c++){
                if(f>c && f>=N-c-1){
                    n0=2*(1+f)-N;
                    cout<<n0*n0-2*(n0-1)-c+N-1-f<<"\t";
                }
                else if(f<=c && f>N-c-1){
                    n0=N-1-c;
                    cout<<(N-2*(1+n0))*(N-2*(1+n0))+1+f-(n0+1)<<"\t";
                }
                else if(f<=c && f<=N-c-1){
                    cout<<(N-2*f)*(N-2*f-1)+1+c-f<<"\t";
                }
                else{
                    cout<<(N-2*c)*(N-2*c-1)+1-f+c<<"\t";
                }
            }
            cout<<endl<<endl<<endl;
        }

    case 46:

       /* La serie de Collatz se conforma con la siguiente regla: sea n un elemento de la serie,
        si n es par, el siguiente elemento es n/2, y si n es impar, el siguiente elemento es 3n+1.
        Escriba un programa que reciba un número k y calcule cual es el elemento inicial j (semilla), menor
        que k, que produce la serie más larga y diga cuantos términos m tiene la serie.
        Tip: la serie termina al llegar a un elemento cuyo valor sea 1.
        Ej: para la semilla 13: 13, 40, 20, 10, 5, 16, 8, 4, 2, 1
        Nota: la salida del programa debe ser:
        La serie mas larga es con la semilla: j, teniendo m terminos.
        Otra nota: se le dará una bonicación si imprime la serie.*/

        cin>>num;

        resultado=0;

        cont=0;

        contador=0;

        for(int i=1;i<=num;i++){

            for(int j=i;j>0;j=resultado){

                if(resultado==1) break;

                if(j%2!=0) resultado= (3*j)+1;

                else resultado/=2;

                cont+=1;

            }

            if(cont>contador){
                contador=cont ;
                num1= i;

             }
            cont=0;
            resultado=0;
        }

        cout<< "La serie mas larga es con la semilla "<<num1<<" teniendo "<<contador<< "terminos";

        break;


    case 47:
        cout<<"ingrese un numero k: ";
        cin>>k;

        for(int i=1;i>0;i++){

            A=i*(i+1)/2;
            cont=0;

            for(int j=1;j<=A;j++){

                mul=A%j;

                if(mul==0){
                    cont++;
                }
            }
                if(cont>k){

                    cout<<"el numero es "<< A << " que tiene "<< cont << " divisores ";
                    break;
                }
            }

        //default:

        //cout<< "el numero ingresado no existe"<<endl;

        break;
   }
      return 0;
}





