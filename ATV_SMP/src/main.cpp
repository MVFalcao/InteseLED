#include "mbed.h"

PwmOut light = {(p5)}; //LED ports definition// p5 - Orange
Serial se;
int i = 0;           //contador de tempo para botao apertado
float intense = 1.0; // intensidade da luz

void ChangeState(char val);
void InState();
void Changetick();
void Count();

int main()
{
  char valor;
  se.scanf("%c", valor);
  ChangeState(valor);
}

void ChangeState(char val)
{
  if (val == '+')
    light = light + 0.05;
  else if (val == '-')
    light = light - 0.05;
  else if (val == '*')
    light = intense;
  else if (val == '/')
    light = 0.0;
}
