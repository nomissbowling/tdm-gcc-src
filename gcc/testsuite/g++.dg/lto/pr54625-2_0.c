/* { dg-lto-do link } */
/* { dg-lto-options { { -O0 -flto -w } { -O2 -flto -w } }  } */
/* { dg-extra-ld-options { -r -nostdlib -flinker-output=nolto-rel } } */

float a;
double sin ();
void
update_filter ()
{
  a = sin (0);
}
