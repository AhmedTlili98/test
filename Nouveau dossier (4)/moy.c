#include <stdio.h>
#include <cs50.h>
float moy(float (t),float(d),float( e));

int main (void){

    float   tp_system=get_float ("donner note Tp: " );
        float ds_system=get_float ("donner note ds: " );
       float ex_system=get_float ("donner note examen: ");
       float  tp_technologie=get_float ("donner note Tp: " );
        float ds_technologie=get_float ("donner note ds: " );
       float ex_technologie=get_float ("donner note examen: ");
      float   tp_bati=get_float ("donner note Tp: " );
        float ds_bati=get_float ("donner note ds: " );
       float ex_bati=get_float ("donner note examen: ");
       float tp_mahmoud=get_float ("donner note Tp: " );
        float ds_mahmoud=get_float ("donner note ds: " );
       float ex_mahmoud=get_float ("donner note examen: ");
       float tp_auto=get_float ("donner note Tp: " );
        float ds_auto=get_float ("donner note ds: " );
       float ex_auto=get_float ("donner note examen: ");
float tp_inst=get_float ("donner note Tp: " );
        float ds_inst=get_float ("donner note ds: " );
       float ex_inst=get_float ("donner note examen: ");
float tp_signal=get_float ("donner note Tp: " );
        float ds_signal=get_float ("donner note ds: " );
       float ex_signal=get_float ("donner note examen: ");
       float tp_hannen=get_float ("donner note Tp: " );
        float ds_hannen=get_float ("donner note ds: " );
       float ex_hannen=get_float ("donner note examen: ");
       float tp_angl=get_float ("donner note Tp: " );
        float ds_angl=get_float ("donner note ds: " );
       float ex_angl=get_float ("donner note examen: ");
       float tp_fran=get_float ("donner note Tp: " );
        float ds_fran=get_float ("donner note ds: " );
       float ex_fran=get_float ("donner note examen: ");







       float M1 =moy(tp_system,ds_system,ex_system);
    float M2 =moy(tp_technologie,ds_technologie,ex_technologie);
    float M=(M2+2*M1)/3
float M3 =moy(tp_bati,ds_bati,ex_bati);
float M4 =moy(tp_mahmoud,ds_mahmoud,ex_mahmoud);
float M5 =moy(tp_auto,ds_auto,ex_auto);
float M6 =moy(tp_inst,ds_inst,ex_inst);
float M7 =moy(tp_signal,ds_signal,ex_signal);
    float M8 =moy(tp_hannen,ds_hannen,ex_hannen);
        float M9 =moy(tp_angl,ds_angl,ex_angl);
          float M10 =moy(tp_fran,ds_fran,ex_fran);

float moyenne=0;
moyenne=(M+M3+M4+M5+M6+M7+M8+M9+M10)/9;
if(moyenne=<10){
    printf("nchallah s2 5ir votre_moyenne est= %f \n",moyenne);
}else {
    printf("ya3tik esse7a ya jmel moyenne= %f \n",moyenne);
}

}

float moy(float (t),float(d),float(e)){

    if(t == 0){
   float moy =.3*d+.7*e;
           return  moy;
        }
        else{        float moy=.15*t+.15*d+.7*e;

            return  moy;
        }
}
