#include <iostream>
#include <stdio.h>
#include <vector>
#include <string>
#include <cstring>
#include <stdlib.h>
using namespace std;

class empleado{
private:
    string num_carnet;
    string nombre;
    int fecha_nacimiento;
    int categoria;
    float salario;
    string direccion;
    string telefono;
    string correo;

public:

   empleado(string num_carnet, string nombre, int fecha_nacimiento,int categoria,float salario,string direccion,string telefono,string correo) : num_carnet(num_carnet), nombre(nombre), fecha_nacimiento(fecha_nacimiento),categoria(categoria),salario(salario),direccion(direccion),telefono(telefono),correo(correo) {}

  
    string getnum_carnet() const { return num_carnet; }
    string getnombre() const { return nombre; }
    int getfecha_nacimiento() const { return fecha_nacimiento; }
    int getcategoria()const {return categoria;}
    float getsalario() const {return salario;}
    string getdireccion()const {return direccion;}
    string gettelefono()const {return telefono;}
    string getcorreo()const {return correo;}
    
    
    void setnum_carnet(string nuevocarnet) { num_carnet = nuevocarnet; }
    void setnombre(int nuevonombre) { nombre = nuevonombre; }
    void setfecha_nacimiento(int nuevafecha) {fecha_nacimiento = nuevafecha;}
    void setcategoria(int nuevacategoria) { categoria = nuevacategoria; }
    void setsalario(float nuevosalario) { salario = nuevosalario;}
    void setdireccion(string nuevadireccion) { direccion = nuevadireccion; }
    void settelefono(string nuevotelefono) {telefono =nuevotelefono ;}
    void setcorreo(string nuevocorreo) { correo= nuevocorreo;}
    
    void mostrarInfo() const {
        cout << "Carnet del empleado: "<<num_carnet<<endl;
        cout << "nombre del empleado: "<<nombre<<endl;
        cout << "Fecha de nacimiento del empleado: "<<fecha_nacimiento<<endl;
        for(int i=0;i<3;i++){
		if(categoria<=2){
		printf("\n%s ",(i== 1 ? "Administrador" : "Operario"));
	    }
	    if(categoria>2){
	    printf("\nPeon ");
	    }
	    }
        cout << "Salario del empleado: "<<salario<<endl;
        cout << "direccion del empleado: "<<direccion<<endl;
        cout << "telefono del empleado: "<<telefono<<endl;
		cout << "correo del empleado: "<<correo<<endl;
    }
};
/*
class proyecto{
private:
    int cod_unico_proyecto;
    string nombre;
    string fecha_inicio;
    string fecha_final;
    
public:

};
*/

void agregar_empleado(vector<empleado>&empleados){
	string num_carnet,nombre,direccion,telefono,correo;
    int fecha_nacimiento,categoria;
    float salario;
    bool resul=0;
    int edad;
    do{
    cout << "Ingrese el numero de carnet del empleado: ";
    cin >> num_carnet;
    do{
      resul=false;
      cout<< "Ingrese el nombre del empleado: ";
      cin.ignore(); 
      getline(cin, nombre);		
	  for(auto &emple : empleados){
		if(emple.getnombre() == nombre){
		resul=true;	
	    cout<<"Usted ya ingreso este nombre de empleado digite otro\n";
	    system("pause");
		} else {
 		}
       }
      }while(resul==1);
      
      cout<< "ingrese la fecha de nacimiento del empleado: ";
      cin>> fecha_nacimiento;
      do{
      cout<< "ingrese la caterogia del empleado si es: administrador=1 operario=2 peon=3 ";
      cin >>categoria;
      if(categoria>3){
      	cout<<"La categoria ingresada no existe";
      }else{
	  }
      }while(categoria>3);
      cout<< "ingrese el salario del empleado: ";
      cin>>salario;
      if((salario<250,000) && (salario>500,000) ){
      	salario=250,000;
      }
      cout<< "ingrese la direccion del empleado: ";
      cin>> direccion;
      cout<< "ingrese el telefono del empleado: ";
      cin>> telefono;
      
      do{
      resul=false;
      cout<< "Ingrese el correo del empleado: ";
      cin>>correo;  	
	  for(auto &emple : empleados){
		if(emple.getcorreo() == correo){
		resul=true;	
	    cout<<"Usted ya ingreso este correo de empleado digite otro\n";
	    system("pause");
		} else {
 		}
       }
      }while(resul==1);
 	
	  edad=2024-fecha_nacimiento;
	  if (edad<18){
	  	
		cout<<"El empleado es menor de edad por lo tanto no puede ser contratado";
	  
	  }else{
	  	
	  }
	}while(edad<18);
}

int main(){
vector<empleado> empleados;

    int opcion;
    do {
        cout << "\n--- Menú Principal ---\n";
        cout << "1. Agregar Empleado\n";
        cout << "2. consultar Empleado\n";
        cout << "3. modificar Empleado\n";
        cout << "4. Agregar proyecto\n";
        cout << "5. consultar proyecto\n";
        cout << "6. modificar proyecto\n";
        cout << "7. informacion del proyecto\n";
        cout << "8. Salir\n";
        cout << "Seleccione una opción: ";
        cin >> opcion;

        switch (opcion) {
            case 1: agregar_empleado(empleados); break;
            case 2: 
			       cout << "lista de empleados:\n";
                   for (const auto &e : empleados) e.mostrarInfo();
                   break;
            /*case 3: ; break;
            case 4:; break;
            case 5: ; break;
            case 6: (notas); break;
            case 7:
                cout << "lista de empleados:\n";
                for (const auto &e : empleados) e.mostrarInfo();
                break;
           case 8:
            case 9: cout << "Saliendo del programa...\n"; break;
            default: cout << "Opción inválida.\n"; break;
        */}
    } while (opcion != 9);

    return 0;

};
