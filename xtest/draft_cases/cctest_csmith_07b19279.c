// SPDX-License-Identifier: MIT
// cctest_csmith_07b19279.c --- cctest case csmith_07b19279 (csmith seed 129077881)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xe82adc5 */

#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <math.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

static unsigned int crc32_tab[256];
static unsigned int crc32_context = 0xFFFFFFFFUL;

static void crc32_gentab(void)
{
   int i, j;
   unsigned int crc;
   for (i = 0; i < 256; i++) {
      crc = (unsigned int)i;
      for (j = 0; j < 8; j++)
         crc = (crc & 1U) ? ((crc >> 1) ^ 0xEDB88320UL) : (crc >> 1);
      crc32_tab[i] = crc;
   }
}

static void crc32_byte(unsigned char b)
{
   crc32_context = ((crc32_context >> 8) & 0x00FFFFFFUL) ^
                   crc32_tab[(crc32_context ^ (unsigned int)b) & 0xFFU];
}

static void transparent_crc(unsigned long long val, const char *vname, int flag)
{
   int i;
   (void)vname;
   (void)flag;
   for (i = 0; i < 8; i++)
      crc32_byte((unsigned char)((val >> (i * 8)) & 0xFFULL));
}

static void platform_main_begin(void) {}

static int8_t
safe_unary_minus_func_int8_t_s(int8_t si )
{
 
  return
    -si;
}
static int8_t
safe_add_func_int8_t_s_s(int8_t si1, int8_t si2 )
{
 
  return
    (si1 + si2);
}
static int8_t
safe_sub_func_int8_t_s_s(int8_t si1, int8_t si2 )
{
 
  return
    (si1 - si2);
}
static int8_t
safe_mul_func_int8_t_s_s(int8_t si1, int8_t si2 )
{
 
  return
    si1 * si2;
}
static int8_t
safe_mod_func_int8_t_s_s(int8_t si1, int8_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-128)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static int8_t
safe_div_func_int8_t_s_s(int8_t si1, int8_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-128)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 / si2);
}
static int8_t
safe_lshift_func_int8_t_s_s(int8_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((127) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static int8_t
safe_lshift_func_int8_t_s_u(int8_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((127) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static int8_t
safe_rshift_func_int8_t_s_s(int8_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :
    (left >> ((int)right));
}
static int8_t
safe_rshift_func_int8_t_s_u(int8_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static int16_t
safe_unary_minus_func_int16_t_s(int16_t si )
{
 
  return
    -si;
}
static int16_t
safe_add_func_int16_t_s_s(int16_t si1, int16_t si2 )
{
 
  return
    (si1 + si2);
}
static int16_t
safe_sub_func_int16_t_s_s(int16_t si1, int16_t si2 )
{
 
  return
    (si1 - si2);
}
static int16_t
safe_mul_func_int16_t_s_s(int16_t si1, int16_t si2 )
{
 
  return
    si1 * si2;
}
static int16_t
safe_mod_func_int16_t_s_s(int16_t si1, int16_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-32767-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static int16_t
safe_div_func_int16_t_s_s(int16_t si1, int16_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-32767-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 / si2);
}
static int16_t
safe_lshift_func_int16_t_s_s(int16_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((32767) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static int16_t
safe_lshift_func_int16_t_s_u(int16_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((32767) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static int16_t
safe_rshift_func_int16_t_s_s(int16_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :
    (left >> ((int)right));
}
static int16_t
safe_rshift_func_int16_t_s_u(int16_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static int32_t
safe_unary_minus_func_int32_t_s(int32_t si )
{
 
  return
    (si==(-2147483647-1)) ?
    ((si)) :
    -si;
}
static int32_t
safe_add_func_int32_t_s_s(int32_t si1, int32_t si2 )
{
 
  return
    (((si1>0) && (si2>0) && (si1 > ((2147483647)-si2))) || ((si1<0) && (si2<0) && (si1 < ((-2147483647-1)-si2)))) ?
    ((si1)) :
    (si1 + si2);
}
static int32_t
safe_sub_func_int32_t_s_s(int32_t si1, int32_t si2 )
{
 
  return
    (((si1^si2) & (((si1 ^ ((si1^si2) & (~(2147483647))))-si2)^si2)) < 0) ?
    ((si1)) :
    (si1 - si2);
}
static int32_t
safe_mul_func_int32_t_s_s(int32_t si1, int32_t si2 )
{
 
  return
    (((si1 > 0) && (si2 > 0) && (si1 > ((2147483647) / si2))) || ((si1 > 0) && (si2 <= 0) && (si2 < ((-2147483647-1) / si1))) || ((si1 <= 0) && (si2 > 0) && (si1 < ((-2147483647-1) / si2))) || ((si1 <= 0) && (si2 <= 0) && (si1 != 0) && (si2 < ((2147483647) / si1)))) ?
    ((si1)) :
    si1 * si2;
}
static int32_t
safe_mod_func_int32_t_s_s(int32_t si1, int32_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-2147483647-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static int32_t
safe_div_func_int32_t_s_s(int32_t si1, int32_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-2147483647-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 / si2);
}
static int32_t
safe_lshift_func_int32_t_s_s(int32_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((2147483647) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static int32_t
safe_lshift_func_int32_t_s_u(int32_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((2147483647) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static int32_t
safe_rshift_func_int32_t_s_s(int32_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :
    (left >> ((int)right));
}
static int32_t
safe_rshift_func_int32_t_s_u(int32_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static int64_t
safe_unary_minus_func_int64_t_s(int64_t si )
{
 
  return
    (si==(-9223372036854775807L -1)) ?
    ((si)) :
    -si;
}
static int64_t
safe_add_func_int64_t_s_s(int64_t si1, int64_t si2 )
{
 
  return
    (((si1>0) && (si2>0) && (si1 > ((9223372036854775807L)-si2))) || ((si1<0) && (si2<0) && (si1 < ((-9223372036854775807L -1)-si2)))) ?
    ((si1)) :
    (si1 + si2);
}
static int64_t
safe_sub_func_int64_t_s_s(int64_t si1, int64_t si2 )
{
 
  return
    (((si1^si2) & (((si1 ^ ((si1^si2) & (~(9223372036854775807L))))-si2)^si2)) < 0) ?
    ((si1)) :
    (si1 - si2);
}
static int64_t
safe_mul_func_int64_t_s_s(int64_t si1, int64_t si2 )
{
 
  return
    (((si1 > 0) && (si2 > 0) && (si1 > ((9223372036854775807L) / si2))) || ((si1 > 0) && (si2 <= 0) && (si2 < ((-9223372036854775807L -1) / si1))) || ((si1 <= 0) && (si2 > 0) && (si1 < ((-9223372036854775807L -1) / si2))) || ((si1 <= 0) && (si2 <= 0) && (si1 != 0) && (si2 < ((9223372036854775807L) / si1)))) ?
    ((si1)) :
    si1 * si2;
}
static int64_t
safe_mod_func_int64_t_s_s(int64_t si1, int64_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-9223372036854775807L -1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static int64_t
safe_div_func_int64_t_s_s(int64_t si1, int64_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-9223372036854775807L -1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 / si2);
}
static int64_t
safe_lshift_func_int64_t_s_s(int64_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((9223372036854775807L) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static int64_t
safe_lshift_func_int64_t_s_u(int64_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((9223372036854775807L) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static int64_t
safe_rshift_func_int64_t_s_s(int64_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :
    (left >> ((int)right));
}
static int64_t
safe_rshift_func_int64_t_s_u(int64_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static uint8_t
safe_unary_minus_func_uint8_t_u(uint8_t ui )
{
 
  return -ui;
}
static uint8_t
safe_add_func_uint8_t_u_u(uint8_t ui1, uint8_t ui2 )
{
 
  return ui1 + ui2;
}
static uint8_t
safe_sub_func_uint8_t_u_u(uint8_t ui1, uint8_t ui2 )
{
 
  return ui1 - ui2;
}
static uint8_t
safe_mul_func_uint8_t_u_u(uint8_t ui1, uint8_t ui2 )
{
 
  return ((unsigned int)ui1) * ((unsigned int)ui2);
}
static uint8_t
safe_mod_func_uint8_t_u_u(uint8_t ui1, uint8_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static uint8_t
safe_div_func_uint8_t_u_u(uint8_t ui1, uint8_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 / ui2);
}
static uint8_t
safe_lshift_func_uint8_t_u_s(uint8_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((255) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static uint8_t
safe_lshift_func_uint8_t_u_u(uint8_t left, unsigned int right )
{
 
  return
    ((((unsigned int)right) >= 32) || (left > ((255) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static uint8_t
safe_rshift_func_uint8_t_u_s(uint8_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :
    (left >> ((int)right));
}
static uint8_t
safe_rshift_func_uint8_t_u_u(uint8_t left, unsigned int right )
{
 
  return
    (((unsigned int)right) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static uint16_t
safe_unary_minus_func_uint16_t_u(uint16_t ui )
{
 
  return -ui;
}
static uint16_t
safe_add_func_uint16_t_u_u(uint16_t ui1, uint16_t ui2 )
{
 
  return ui1 + ui2;
}
static uint16_t
safe_sub_func_uint16_t_u_u(uint16_t ui1, uint16_t ui2 )
{
 
  return ui1 - ui2;
}
static uint16_t
safe_mul_func_uint16_t_u_u(uint16_t ui1, uint16_t ui2 )
{
 
  return ((unsigned int)ui1) * ((unsigned int)ui2);
}
static uint16_t
safe_mod_func_uint16_t_u_u(uint16_t ui1, uint16_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static uint16_t
safe_div_func_uint16_t_u_u(uint16_t ui1, uint16_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 / ui2);
}
static uint16_t
safe_lshift_func_uint16_t_u_s(uint16_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((65535) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static uint16_t
safe_lshift_func_uint16_t_u_u(uint16_t left, unsigned int right )
{
 
  return
    ((((unsigned int)right) >= 32) || (left > ((65535) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static uint16_t
safe_rshift_func_uint16_t_u_s(uint16_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :
    (left >> ((int)right));
}
static uint16_t
safe_rshift_func_uint16_t_u_u(uint16_t left, unsigned int right )
{
 
  return
    (((unsigned int)right) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static uint32_t
safe_unary_minus_func_uint32_t_u(uint32_t ui )
{
 
  return -ui;
}
static uint32_t
safe_add_func_uint32_t_u_u(uint32_t ui1, uint32_t ui2 )
{
 
  return ui1 + ui2;
}
static uint32_t
safe_sub_func_uint32_t_u_u(uint32_t ui1, uint32_t ui2 )
{
 
  return ui1 - ui2;
}
static uint32_t
safe_mul_func_uint32_t_u_u(uint32_t ui1, uint32_t ui2 )
{
 
  return ((unsigned int)ui1) * ((unsigned int)ui2);
}
static uint32_t
safe_mod_func_uint32_t_u_u(uint32_t ui1, uint32_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static uint32_t
safe_div_func_uint32_t_u_u(uint32_t ui1, uint32_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 / ui2);
}
static uint32_t
safe_lshift_func_uint32_t_u_s(uint32_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((4294967295U) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static uint32_t
safe_lshift_func_uint32_t_u_u(uint32_t left, unsigned int right )
{
 
  return
    ((((unsigned int)right) >= 32) || (left > ((4294967295U) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static uint32_t
safe_rshift_func_uint32_t_u_s(uint32_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :
    (left >> ((int)right));
}
static uint32_t
safe_rshift_func_uint32_t_u_u(uint32_t left, unsigned int right )
{
 
  return
    (((unsigned int)right) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static uint64_t
safe_unary_minus_func_uint64_t_u(uint64_t ui )
{
 
  return -ui;
}
static uint64_t
safe_add_func_uint64_t_u_u(uint64_t ui1, uint64_t ui2 )
{
 
  return ui1 + ui2;
}
static uint64_t
safe_sub_func_uint64_t_u_u(uint64_t ui1, uint64_t ui2 )
{
 
  return ui1 - ui2;
}
static uint64_t
safe_mul_func_uint64_t_u_u(uint64_t ui1, uint64_t ui2 )
{
 
  return ((unsigned long long)ui1) * ((unsigned long long)ui2);
}
static uint64_t
safe_mod_func_uint64_t_u_u(uint64_t ui1, uint64_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static uint64_t
safe_div_func_uint64_t_u_u(uint64_t ui1, uint64_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 / ui2);
}
static uint64_t
safe_lshift_func_uint64_t_u_s(uint64_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((18446744073709551615UL) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static uint64_t
safe_lshift_func_uint64_t_u_u(uint64_t left, unsigned int right )
{
 
  return
    ((((unsigned int)right) >= 32) || (left > ((18446744073709551615UL) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static uint64_t
safe_rshift_func_uint64_t_u_s(uint64_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :
    (left >> ((int)right));
}
static uint64_t
safe_rshift_func_uint64_t_u_u(uint64_t left, unsigned int right )
{
 
  return
    (((unsigned int)right) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static float
safe_add_func_float_f_f(float sf1, float sf2 )
{
 
  return
    (fabsf((0.5f * sf1) + (0.5f * sf2)) > (0.5f * FLT_MAX)) ?
    (sf1) :
    (sf1 + sf2);
}
static float
safe_sub_func_float_f_f(float sf1, float sf2 )
{
 
  return
    (fabsf((0.5f * sf1) - (0.5f * sf2)) > (0.5f * FLT_MAX)) ?
    (sf1) :
    (sf1 - sf2);
}
static float
safe_mul_func_float_f_f(float sf1, float sf2 )
{
 
  return
    (fabsf((0x1.0p-100f * sf1) * (0x1.0p-28f * sf2)) > (0x1.0p-100f * (0x1.0p-28f * FLT_MAX))) ?
    (sf1) :
    (sf1 * sf2);
}
static float
safe_div_func_float_f_f(float sf1, float sf2 )
{
 
  return
    ((fabsf(sf2) < 1.0f) && (((sf2 == 0.0f) || (fabsf((0x1.0p-49f * sf1) / (0x1.0p100f * sf2))) > (0x1.0p-100f * (0x1.0p-49f * FLT_MAX))))) ?
    (sf1) :
    (sf1 / sf2);
}
static double
safe_add_func_double_f_f(double sf1, double sf2 )
{
 
  return
    (fabs((0.5 * sf1) + (0.5 * sf2)) > (0.5 * DBL_MAX)) ?
    (sf1) :
    (sf1 + sf2);
}
static double
safe_sub_func_double_f_f(double sf1, double sf2 )
{
 
  return
    (fabs((0.5 * sf1) - (0.5 * sf2)) > (0.5 * DBL_MAX)) ?
    (sf1) :
    (sf1 - sf2);
}
static double
safe_mul_func_double_f_f(double sf1, double sf2 )
{
 
  return
    (fabs((0x1.0p-100 * sf1) * (0x1.0p-924 * sf2)) > (0x1.0p-100 * (0x1.0p-924 * DBL_MAX))) ?
    (sf1) :
    (sf1 * sf2);
}
static double
safe_div_func_double_f_f(double sf1, double sf2 )
{
 
  return
    ((fabs(sf2) < 1.0) && (((sf2 == 0.0) || (fabs((0x1.0p-974 * sf1) / (0x1.0p100 * sf2))) > (0x1.0p-100 * (0x1.0p-974 * DBL_MAX))))) ?
    (sf1) :
    (sf1 / sf2);
}
static int32_t
safe_convert_func_float_to_int32_t(float sf1 )
{
 
  return
    ((sf1 <= (-2147483647-1)) || (sf1 >= (2147483647))) ?
    ((2147483647)) :
    ((int32_t)(sf1));
}

// Options:   -s 129077881 -o /tmp/csmith_gen_oxtc266g/csmith.c --concise --no-volatiles --no-volatile-pointers --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


struct S0 {
   signed f0 : 27;
   signed f1 : 6;
};

struct S1 {
   struct S0  f0;
   const int8_t  f1;
   uint8_t  f2;
};

struct S2 {
   signed f0 : 27;
   int8_t  f1;
   signed f2 : 23;
   struct S1  f3;
   unsigned f4 : 22;
   unsigned f5 : 24;
   unsigned f6 : 18;
};

union U3 {
   int8_t * f0;
   const int32_t  f1;
   uint32_t  f2;
   uint64_t  f3;
};


static uint32_t g_2 = 0xD8CF4C59L;
static int32_t g_6 = 0L;
static int32_t g_7 = 1L;
static uint16_t g_12 = 0x9034L;
static int64_t g_49 = 0x6825D0BC5DE30EA3LL;
static uint32_t g_51 = 4294967295UL;
static uint8_t g_56 = 255UL;
static int8_t *g_57 = (void*)0;
static int32_t g_62 = 0xA6DD7547L;
static int16_t g_72 = 0x06B0L;
static uint16_t g_73 = 0xA1A0L;
static union U3 g_80 = {0};
static int16_t g_105 = (-1L);
static int64_t g_107 = 0xD0F622502BEA8462LL;
static uint32_t g_111 = 0x81461015L;
static int16_t g_120[2][1][6] = {{{1L,1L,1L,1L,1L,1L}},{{1L,1L,1L,1L,1L,1L}}};
static int32_t g_122 = 0L;
static struct S1 g_129 = {{8270,-0},1L,9UL};
static uint64_t g_170 = 0x9DECBAA91CE0F096LL;
static uint64_t g_192 = 0xE49BDA0E2562001ALL;
static const union U3 *g_198[4] = {&g_80,&g_80,&g_80,&g_80};
static const union U3 **g_197 = &g_198[3];
static uint32_t g_213 = 0x4C8A0437L;
static int32_t g_237 = 0xB632DDB2L;
static uint8_t g_238 = 6UL;
static struct S1 g_289[5][5][6] = {{{{{-9257,0},8L,0xA7L},{{9652,-1},0x1EL,8UL},{{8217,6},-3L,0xBDL},{{3072,-3},0x46L,255UL},{{-3086,-1},-1L,4UL},{{10134,-1},0xC1L,0UL}},{{{5999,-0},-8L,0UL},{{-9257,0},8L,0xA7L},{{8217,6},-3L,0xBDL},{{10943,-1},0xF1L,246UL},{{-2804,-7},0xA9L,0x4BL},{{-7188,-2},0x25L,2UL}},{{{2064,3},0L,2UL},{{10943,-1},0xF1L,246UL},{{10134,-1},0xC1L,0UL},{{-4512,7},-4L,248UL},{{7927,1},0x4EL,0xFFL},{{-2804,-7},0xA9L,0x4BL}},{{{-4512,7},-4L,248UL},{{7927,1},0x4EL,0xFFL},{{-2804,-7},0xA9L,0x4BL},{{5193,-4},0xA7L,7UL},{{-10251,-1},0x47L,255UL},{{-7720,-7},1L,6UL}},{{{-10851,-6},0x56L,255UL},{{10134,-1},0xC1L,0UL},{{-2700,-4},0xFFL,0UL},{{-2752,-2},0L,0UL},{{-10425,7},0xB9L,248UL},{{-2752,-2},0L,0UL}}},{{{{-8799,-6},0x9AL,0xBBL},{{10965,-0},1L,0xE8L},{{-8799,-6},0x9AL,0xBBL},{{7927,1},0x4EL,0xFFL},{{-7720,-7},1L,6UL},{{10027,-3},-1L,0xEBL}},{{{5193,-4},0xA7L,7UL},{{-11291,4},0x8CL,0x6CL},{{8217,6},-3L,0xBDL},{{-9565,-1},0x5BL,1UL},{{10027,-3},-1L,0xEBL},{{1471,-7},0x99L,0x6EL}},{{{-9006,4},1L,252UL},{{-10251,-1},0x47L,255UL},{{-2700,-4},0xFFL,0UL},{{-9565,-1},0x5BL,1UL},{{-10090,-3},0x26L,248UL},{{7927,1},0x4EL,0xFFL}},{{{5193,-4},0xA7L,7UL},{{-8799,-6},0x9AL,0xBBL},{{-4837,3},0L,251UL},{{7927,1},0x4EL,0xFFL},{{-2700,-4},0xFFL,0UL},{{-2607,6},0L,1UL}},{{{-8799,-6},0x9AL,0xBBL},{{-2752,-2},0L,0UL},{{10943,-1},0xF1L,246UL},{{-10851,-6},0x56L,255UL},{{2064,3},0L,2UL},{{9652,-1},0x1EL,8UL}}},{{{{-4512,7},-4L,248UL},{{-7720,-7},1L,6UL},{{-9006,4},1L,252UL},{{4412,-7},0x70L,0xDFL},{{5722,3},0L,255UL},{{5722,3},0L,255UL}},{{{10134,-1},0xC1L,0UL},{{-2804,-7},0xA9L,0x4BL},{{-2804,-7},0xA9L,0x4BL},{{10134,-1},0xC1L,0UL},{{4412,-7},0x70L,0xDFL},{{-9565,-1},0x5BL,1UL}},{{{-7720,-7},1L,6UL},{{-7188,-2},0x25L,2UL},{{-9257,0},8L,0xA7L},{{-2700,-4},0xFFL,0UL},{{10965,-0},1L,0xE8L},{{10943,-1},0xF1L,246UL}},{{{-10090,-3},0x26L,248UL},{{10134,-1},0xC1L,0UL},{{5999,-0},-8L,0UL},{{5193,-4},0xA7L,7UL},{{10965,-0},1L,0xE8L},{{-3086,-1},-1L,4UL}},{{{5722,3},0L,255UL},{{-7188,-2},0x25L,2UL},{{2064,3},0L,2UL},{{-10251,-1},0x47L,255UL},{{4412,-7},0x70L,0xDFL},{{-10425,7},0xB9L,248UL}}},{{{{3196,1},-1L,0UL},{{-2804,-7},0xA9L,0x4BL},{{-4512,7},-4L,248UL},{{3072,-3},0x46L,255UL},{{5722,3},0L,255UL},{{-2700,-4},0xFFL,0UL}},{{{-3086,-1},-1L,4UL},{{-7720,-7},1L,6UL},{{-10851,-6},0x56L,255UL},{{5722,3},0L,255UL},{{2064,3},0L,2UL},{{-2804,-7},0xA9L,0x4BL}},{{{-2700,-4},0xFFL,0UL},{{-2752,-2},0L,0UL},{{-10425,7},0xB9L,248UL},{{-2752,-2},0L,0UL},{{-2700,-4},0xFFL,0UL},{{10134,-1},0xC1L,0UL}},{{{1140,-6},0x2CL,0x3FL},{{-8799,-6},0x9AL,0xBBL},{{3072,-3},0x46L,255UL},{{-7188,-2},0x25L,2UL},{{-10090,-3},0x26L,248UL},{{8217,6},-3L,0xBDL}},{{{-9565,-1},0x5BL,1UL},{{-10251,-1},0x47L,255UL},{{9652,-1},0x1EL,8UL},{{-8799,-6},0x9AL,0xBBL},{{10027,-3},-1L,0xEBL},{{8217,6},-3L,0xBDL}}},{{{{-10985,5},2L,0x95L},{{-11291,4},0x8CL,0x6CL},{{3072,-3},0x46L,255UL},{{9652,-1},0x1EL,8UL},{{-7720,-7},1L,6UL},{{10134,-1},0xC1L,0UL}},{{{10027,-3},-1L,0xEBL},{{10965,-0},1L,0xE8L},{{-10425,7},0xB9L,248UL},{{-10985,5},2L,0x95L},{{-8799,-6},0x9AL,0xBBL},{{-2804,-7},0xA9L,0x4BL}},{{{-4837,3},0L,251UL},{{-6116,-3},0L,0x33L},{{-10851,-6},0x56L,255UL},{{8217,6},-3L,0xBDL},{{1471,-7},0x99L,0x6EL},{{-2700,-4},0xFFL,0UL}},{{{-10425,7},0xB9L,248UL},{{-9257,0},8L,0xA7L},{{-4512,7},-4L,248UL},{{-4512,7},-4L,248UL},{{-9257,0},8L,0xA7L},{{-10425,7},0xB9L,248UL}},{{{9652,-1},0x1EL,8UL},{{-2700,-4},0xFFL,0UL},{{2064,3},0L,2UL},{{10965,-0},1L,0xE8L},{{3196,1},-1L,0UL},{{-3086,-1},-1L,4UL}}}};
static int8_t g_308 = 0x74L;
static int16_t g_321 = 0xDC1FL;
static int64_t *g_366 = &g_49;
static int64_t **g_365 = &g_366;
static int64_t ***g_364 = &g_365;
static uint32_t g_392 = 0x04423AFDL;
static uint16_t *g_427 = &g_73;
static uint16_t * const *g_426 = &g_427;
static uint16_t * const **g_425 = &g_426;
static uint16_t g_437 = 1UL;
static struct S0 *g_456 = &g_289[0][4][4].f0;
static int32_t g_458 = (-6L);
static int32_t g_460 = 0L;
static uint32_t g_461 = 4294967286UL;
static int32_t *g_505 = &g_122;
static struct S2 g_520 = {5478,0x7BL,-641,{{6817,-2},0x9FL,0UL},498,880,173};
static int16_t *g_522[6][6][5] = {{{&g_72,&g_321,&g_72,(void*)0,&g_120[1][0][2]},{&g_120[1][0][2],&g_72,&g_120[1][0][2],&g_72,&g_120[1][0][2]},{&g_72,&g_321,&g_105,&g_120[1][0][2],&g_72},{&g_72,&g_72,&g_120[1][0][2],&g_120[1][0][2],&g_120[1][0][2]},{&g_120[1][0][2],(void*)0,&g_120[1][0][2],&g_321,&g_72},{&g_72,&g_120[1][0][2],&g_72,&g_321,&g_120[1][0][2]}},{{&g_72,&g_120[1][0][2],&g_120[1][0][2],&g_120[1][0][2],&g_120[1][0][2]},{&g_120[1][0][2],&g_120[1][0][2],&g_72,&g_120[1][0][2],&g_105},{(void*)0,&g_120[1][0][2],&g_120[1][0][2],&g_72,&g_120[1][0][2]},{(void*)0,&g_120[1][0][2],&g_120[1][0][2],(void*)0,&g_72},{(void*)0,&g_120[1][0][2],&g_105,&g_72,&g_72},{&g_120[1][0][2],(void*)0,&g_120[1][0][2],&g_72,&g_120[1][0][2]}},{{&g_72,&g_72,&g_72,&g_72,&g_105},{&g_72,&g_321,&g_72,(void*)0,&g_120[1][0][2]},{&g_120[1][0][2],(void*)0,&g_72,(void*)0,&g_120[1][0][2]},{&g_321,&g_120[1][0][2],&g_120[1][0][2],&g_120[1][0][2],&g_72},{&g_321,&g_72,(void*)0,&g_120[1][0][2],&g_120[1][0][2]},{&g_120[1][0][2],&g_72,&g_120[1][0][2],&g_120[1][0][2],&g_72}},{{&g_120[1][0][2],&g_120[1][0][2],&g_72,&g_120[1][0][2],&g_120[1][0][2]},{&g_72,(void*)0,&g_120[1][0][2],&g_120[1][0][2],(void*)0},{(void*)0,&g_105,&g_72,&g_120[1][0][2],&g_120[1][0][2]},{&g_72,&g_105,&g_120[1][0][2],(void*)0,&g_72},{&g_72,(void*)0,(void*)0,&g_72,(void*)0},{&g_72,&g_120[1][0][2],&g_120[1][0][2],&g_321,(void*)0}},{{(void*)0,&g_72,&g_72,&g_72,&g_72},{&g_72,&g_72,(void*)0,&g_321,&g_120[1][0][2]},{&g_120[1][0][2],&g_120[1][0][2],(void*)0,&g_72,(void*)0},{&g_120[1][0][2],(void*)0,&g_72,(void*)0,&g_120[1][0][2]},{&g_321,&g_120[1][0][2],&g_120[1][0][2],&g_120[1][0][2],&g_72},{&g_321,&g_72,(void*)0,&g_120[1][0][2],&g_120[1][0][2]}},{{&g_120[1][0][2],&g_72,&g_120[1][0][2],&g_120[1][0][2],&g_72},{&g_120[1][0][2],&g_120[1][0][2],&g_72,&g_120[1][0][2],&g_120[1][0][2]},{&g_72,(void*)0,&g_120[1][0][2],&g_120[1][0][2],(void*)0},{(void*)0,&g_105,&g_72,&g_120[1][0][2],&g_120[1][0][2]},{&g_72,&g_105,&g_120[1][0][2],(void*)0,&g_72},{&g_72,(void*)0,(void*)0,&g_72,(void*)0}}};
static int16_t **g_521[3][3][5] = {{{&g_522[1][5][1],&g_522[4][1][2],(void*)0,&g_522[1][5][1],&g_522[3][0][4]},{(void*)0,&g_522[2][3][1],&g_522[1][2][2],(void*)0,&g_522[1][2][2]},{(void*)0,(void*)0,&g_522[1][5][1],&g_522[1][5][1],&g_522[1][2][2]}},{{&g_522[5][2][4],&g_522[1][4][1],&g_522[4][1][2],(void*)0,&g_522[3][0][4]},{&g_522[4][1][4],(void*)0,(void*)0,&g_522[2][2][1],(void*)0},{&g_522[2][2][1],&g_522[1][4][1],&g_522[1][5][1],&g_522[1][5][1],&g_522[1][4][1]}},{{&g_522[3][0][4],(void*)0,&g_522[1][5][1],&g_522[1][5][1],&g_522[2][3][1]},{(void*)0,&g_522[2][3][1],&g_522[1][5][1],&g_522[2][2][1],(void*)0},{&g_522[1][5][1],&g_522[4][1][2],(void*)0,(void*)0,&g_522[5][2][4]}}};
static uint8_t g_580 = 3UL;
static int32_t g_618[3] = {(-1L),(-1L),(-1L)};
static uint8_t g_666 = 255UL;
static int32_t ** const g_707 = (void*)0;
static int8_t g_767 = 0xD4L;
static uint16_t g_919[3] = {65535UL,65535UL,65535UL};
static uint8_t g_966[7] = {1UL,1UL,1UL,1UL,1UL,1UL,1UL};
static int32_t g_969 = (-1L);
static int64_t g_996 = 0x872E20BF935938A6LL;
static uint32_t g_1060 = 0x5A122A92L;
static uint16_t **g_1071 = &g_427;
static int64_t g_1125[2] = {0L,0L};
static uint8_t g_1126 = 0x59L;
static int16_t g_1137 = 0x7D41L;
static uint16_t g_1138 = 0x089DL;
static int32_t g_1145 = 0x014F9C21L;
static uint32_t g_1146[2] = {0xC0469ECDL,0xC0469ECDL};
static int64_t g_1149 = 0x68D1FDF2B92812B5LL;
static uint8_t g_1150 = 6UL;
static int16_t ***g_1160 = &g_521[0][0][3];
static int16_t ****g_1159 = &g_1160;
static uint32_t g_1196 = 1UL;
static const struct S1 *g_1219[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
static const struct S1 **g_1218 = &g_1219[1];
static struct S1 *g_1240[4][6][6] = {{{&g_520.f3,(void*)0,&g_289[0][4][4],&g_289[4][0][2],(void*)0,&g_520.f3},{&g_289[0][4][4],&g_289[0][4][4],&g_289[2][0][4],&g_520.f3,(void*)0,&g_520.f3},{&g_129,&g_520.f3,&g_129,&g_129,(void*)0,(void*)0},{&g_289[0][4][4],&g_289[2][0][4],&g_289[0][4][4],&g_289[0][4][2],&g_520.f3,(void*)0},{&g_289[3][2][4],&g_289[0][4][4],&g_129,&g_289[0][4][2],&g_289[0][4][2],&g_129},{&g_289[0][4][4],&g_289[0][4][4],&g_520.f3,&g_129,&g_289[0][4][4],&g_129}},{{&g_129,&g_129,&g_289[0][4][4],&g_289[0][4][4],&g_289[2][0][4],&g_520.f3},{&g_289[4][0][2],&g_129,&g_289[0][4][4],&g_289[3][2][4],&g_289[0][4][4],&g_129},{&g_520.f3,&g_289[3][2][4],&g_520.f3,&g_520.f3,&g_289[2][3][4],&g_129},{&g_520.f3,&g_289[2][3][4],&g_129,&g_289[0][4][4],&g_520.f3,(void*)0},{(void*)0,&g_289[2][3][4],&g_289[0][4][4],&g_289[0][4][4],&g_289[2][3][4],(void*)0},{&g_289[2][3][4],&g_289[3][2][4],&g_129,&g_129,&g_289[0][4][4],&g_289[0][4][4]}},{{&g_289[0][4][4],&g_129,&g_520.f3,&g_289[4][0][2],&g_289[2][0][4],&g_289[0][4][2]},{&g_289[0][4][4],&g_129,&g_289[4][0][2],&g_129,&g_289[0][4][4],&g_289[0][4][4]},{&g_289[2][3][4],&g_289[0][4][4],&g_289[2][0][4],&g_289[0][4][4],&g_289[0][4][2],&g_520.f3},{(void*)0,&g_289[0][4][4],&g_289[0][4][2],&g_289[0][4][4],&g_520.f3,&g_520.f3},{&g_520.f3,&g_289[2][0][4],&g_289[2][0][4],&g_520.f3,(void*)0,&g_289[0][4][4]},{&g_520.f3,&g_520.f3,&g_289[4][0][2],&g_289[3][2][4],&g_129,&g_289[0][4][2]}},{{&g_289[4][0][2],(void*)0,&g_520.f3,&g_289[0][4][4],&g_129,&g_289[0][4][4]},{&g_129,&g_520.f3,&g_129,&g_129,(void*)0,(void*)0},{&g_289[0][4][4],&g_289[2][0][4],&g_289[0][4][4],&g_289[0][4][2],&g_520.f3,(void*)0},{&g_289[3][2][4],&g_289[0][4][4],&g_129,&g_289[0][4][2],&g_289[0][4][2],&g_129},{&g_289[0][4][4],&g_289[0][4][4],&g_520.f3,&g_129,&g_289[0][4][4],&g_129},{&g_129,&g_129,&g_289[0][4][4],&g_289[0][4][4],&g_289[2][0][4],&g_520.f3}}};
static struct S1 **g_1239[7][7] = {{&g_1240[2][0][2],&g_1240[1][3][2],&g_1240[2][0][2],&g_1240[2][0][2],&g_1240[2][0][2],&g_1240[1][3][2],&g_1240[2][0][2]},{&g_1240[3][5][2],&g_1240[2][0][2],&g_1240[1][3][2],&g_1240[0][2][5],&g_1240[2][0][2],&g_1240[1][0][2],(void*)0},{(void*)0,&g_1240[1][0][2],&g_1240[0][5][3],&g_1240[2][0][2],&g_1240[2][0][2],&g_1240[2][0][2],&g_1240[2][0][2]},{&g_1240[1][3][2],&g_1240[2][0][2],&g_1240[1][3][2],&g_1240[2][0][2],&g_1240[2][2][3],(void*)0,&g_1240[1][0][2]},{&g_1240[1][3][2],&g_1240[0][2][5],&g_1240[2][0][2],&g_1240[1][0][2],(void*)0,&g_1240[2][0][2],(void*)0},{(void*)0,&g_1240[3][5][2],(void*)0,(void*)0,&g_1240[3][5][2],(void*)0,&g_1240[2][5][1]},{&g_1240[3][5][2],&g_1240[2][0][2],(void*)0,(void*)0,&g_1240[0][5][3],&g_1240[2][0][2],&g_1240[2][2][3]}};
static int64_t g_1272 = 0L;
static int32_t g_1274[1][3][3] = {{{0x5DED6F29L,0x5DED6F29L,0x5DED6F29L},{0x747CD362L,0xC3EF377FL,0x747CD362L},{0x5DED6F29L,0x5DED6F29L,0x5DED6F29L}}};
static int32_t g_1276 = 8L;
static int32_t g_1277[4] = {0x185AED21L,0x185AED21L,0x185AED21L,0x185AED21L};
static struct S1 g_1322[4] = {{{4672,-6},0x01L,246UL},{{4672,-6},0x01L,246UL},{{4672,-6},0x01L,246UL},{{4672,-6},0x01L,246UL}};
static struct S2 *g_1340 = (void*)0;
static const uint64_t g_1349 = 18446744073709551615UL;
static uint64_t *g_1470 = &g_192;
static struct S1 **** const g_1558 = (void*)0;
static int16_t g_1561 = 0x461CL;
static const int16_t g_1581 = (-3L);
static const int16_t *g_1580 = &g_1581;
static const int16_t **g_1579[2][5][6] = {{{&g_1580,&g_1580,&g_1580,&g_1580,&g_1580,&g_1580},{&g_1580,&g_1580,&g_1580,&g_1580,&g_1580,&g_1580},{&g_1580,&g_1580,&g_1580,&g_1580,&g_1580,&g_1580},{&g_1580,&g_1580,&g_1580,&g_1580,&g_1580,&g_1580},{&g_1580,&g_1580,&g_1580,&g_1580,&g_1580,&g_1580}},{{&g_1580,&g_1580,&g_1580,&g_1580,&g_1580,&g_1580},{&g_1580,&g_1580,&g_1580,&g_1580,&g_1580,&g_1580},{&g_1580,&g_1580,&g_1580,&g_1580,&g_1580,&g_1580},{&g_1580,&g_1580,&g_1580,&g_1580,&g_1580,&g_1580},{&g_1580,&g_1580,&g_1580,&g_1580,&g_1580,&g_1580}}};
static const int16_t ***g_1578 = &g_1579[1][3][0];
static int32_t *g_1693 = &g_6;
static struct S2 g_1795 = {10971,0xA6L,-1196,{{4663,6},7L,0x9EL},1244,236,408};
static struct S2 g_1797[2] = {{-1818,0xAEL,1747,{{-10843,-1},0L,0x5FL},23,662,362},{-1818,0xAEL,1747,{{-10843,-1},0L,0x5FL},23,662,362}};
static struct S2 ***g_1857 = (void*)0;
static uint16_t g_1874 = 0xB932L;
static int16_t ** const *g_1883 = &g_521[2][1][3];
static union U3 *g_1916 = &g_80;
static union U3 **g_1915 = &g_1916;
static union U3 * const *g_1919[3] = {(void*)0,(void*)0,(void*)0};
static union U3 g_1922 = {0};
static union U3 g_1923 = {0};
static union U3 * const g_1921[5] = {&g_1922,&g_1922,&g_1922,&g_1922,&g_1922};
static union U3 * const *g_1920 = &g_1921[0];
static struct S0 * const *g_1976 = &g_456;
static struct S0 * const **g_1975 = &g_1976;
static int64_t * const *g_1996 = &g_366;
static int64_t * const **g_1995[4][3][6] = {{{&g_1996,&g_1996,&g_1996,&g_1996,&g_1996,&g_1996},{&g_1996,&g_1996,&g_1996,(void*)0,(void*)0,&g_1996},{&g_1996,(void*)0,&g_1996,(void*)0,&g_1996,(void*)0}},{{(void*)0,&g_1996,(void*)0,&g_1996,(void*)0,&g_1996},{&g_1996,(void*)0,(void*)0,&g_1996,&g_1996,&g_1996},{&g_1996,&g_1996,&g_1996,&g_1996,&g_1996,&g_1996}},{{&g_1996,&g_1996,&g_1996,&g_1996,(void*)0,(void*)0},{(void*)0,&g_1996,&g_1996,(void*)0,&g_1996,&g_1996},{&g_1996,(void*)0,(void*)0,(void*)0,&g_1996,&g_1996}},{{&g_1996,(void*)0,&g_1996,&g_1996,&g_1996,&g_1996},{&g_1996,(void*)0,&g_1996,&g_1996,&g_1996,&g_1996},{(void*)0,&g_1996,&g_1996,&g_1996,(void*)0,&g_1996}}};
static int64_t * const ***g_1994 = &g_1995[3][1][1];
static int64_t * const **** const g_1993[2][7][4] = {{{(void*)0,&g_1994,(void*)0,&g_1994},{(void*)0,&g_1994,(void*)0,&g_1994},{(void*)0,&g_1994,(void*)0,&g_1994},{(void*)0,&g_1994,(void*)0,&g_1994},{(void*)0,&g_1994,(void*)0,&g_1994},{(void*)0,&g_1994,(void*)0,&g_1994},{(void*)0,&g_1994,(void*)0,&g_1994}},{{(void*)0,&g_1994,(void*)0,&g_1994},{(void*)0,&g_1994,(void*)0,&g_1994},{(void*)0,&g_1994,(void*)0,&g_1994},{(void*)0,&g_1994,(void*)0,&g_1994},{(void*)0,&g_1994,(void*)0,&g_1994},{(void*)0,&g_1994,(void*)0,&g_1994},{(void*)0,&g_1994,(void*)0,&g_1994}}};
static int32_t g_2005 = (-1L);
static uint16_t g_2007 = 0x9DA2L;
static int8_t **g_2024 = &g_57;
static uint64_t **g_2028 = &g_1470;
static uint64_t ***g_2027 = &g_2028;
static uint32_t g_2048 = 0xA113FDEFL;
static uint8_t g_2228 = 0x50L;
static uint16_t g_2250 = 0x4EFBL;
static uint8_t *g_2276[2] = {(void*)0,(void*)0};
static uint32_t g_2381[1][5] = {{0UL,0UL,0UL,0UL,0UL}};
static uint64_t g_2390 = 1UL;
static uint32_t *g_2545 = &g_1196;
static uint32_t **g_2544 = &g_2545;
static uint32_t g_2564 = 8UL;
static struct S2 g_2626 = {7542,1L,-495,{{-8414,-4},-1L,0UL},568,2001,21};



static struct S1  func_1(void);
static struct S1  func_13(int32_t  p_14, uint16_t * p_15, int32_t  p_16);
static int16_t  func_19(uint16_t  p_20, uint16_t  p_21);
static uint16_t  func_22(int32_t ** p_23, uint16_t * p_24, uint16_t * p_25, uint16_t * p_26);
static int32_t ** func_27(int64_t  p_28, uint32_t  p_29, struct S2  p_30, int8_t * p_31);
static union U3  func_32(const int8_t  p_33, struct S1  p_34, int8_t * p_35);
static struct S1  func_36(int32_t  p_37, int8_t * p_38, int8_t * const  p_39, struct S2  p_40, int32_t ** p_41);
static int16_t  func_42(int8_t * p_43, int8_t  p_44);




static struct S1  func_1(void)
{ 
    int8_t l_48 = 0x8DL;
    int32_t l_1386 = 0L;
    uint16_t l_1387[7][6][2] = {{{0x8396L,0x568EL},{2UL,0x568EL},{0x8396L,0xFECAL},{0xFECAL,0x8396L},{0x568EL,2UL},{0x568EL,0x8396L}},{{0xFECAL,0xFECAL},{0x8396L,0x568EL},{2UL,0x568EL},{0x8396L,0xFECAL},{0xFECAL,0x8396L},{0x568EL,2UL}},{{0x568EL,0x8396L},{0xFECAL,0xFECAL},{0x8396L,0x568EL},{2UL,0x568EL},{0x8396L,0xFECAL},{0xFECAL,0x8396L}},{{0x568EL,2UL},{0x568EL,0x8396L},{0xFECAL,0xFECAL},{0x8396L,0x568EL},{2UL,0x568EL},{0x8396L,0xFECAL}},{{0xFECAL,0x8396L},{0x568EL,2UL},{0x568EL,0x8396L},{0xFECAL,0xFECAL},{0x8396L,0x568EL},{2UL,0x568EL}},{{0x8396L,0xFECAL},{0xFECAL,0x8396L},{0x568EL,2UL},{0x568EL,0x8396L},{0xFECAL,0xFECAL},{0x8396L,0x568EL}},{{2UL,0x568EL},{0x8396L,0xFECAL},{0xFECAL,0x8396L},{0x568EL,2UL},{0x568EL,0x8396L},{0xFECAL,0xFECAL}}};
    uint64_t *l_1468 = &g_170;
    int8_t **l_1511 = (void*)0;
    int32_t l_1513 = (-1L);
    struct S0 ***l_1517 = (void*)0;
    int32_t l_1519 = 0x767F5272L;
    int8_t l_1562 = 0L;
    const int8_t l_1571[2][3][5] = {{{0L,0L,0L,0L,0L},{0L,0L,0L,0L,0L},{0L,0L,0L,0L,0L}},{{0L,0L,0L,0L,0L},{0L,0L,0L,0L,0L},{0L,0L,0L,0L,0L}}};
    struct S2 l_1574[4] = {{-595,0x4BL,1577,{{-11212,-4},6L,0xF4L},975,2914,220},{-595,0x4BL,1577,{{-11212,-4},6L,0xF4L},975,2914,220},{-595,0x4BL,1577,{{-11212,-4},6L,0xF4L},975,2914,220},{-595,0x4BL,1577,{{-11212,-4},6L,0xF4L},975,2914,220}};
    int32_t l_1626[3];
    uint32_t l_1629[2];
    int16_t ***l_1630 = &g_521[2][0][4];
    struct S2 l_1638 = {-2249,-1L,1771,{{9238,3},-4L,0xAFL},1341,3722,194};
    uint8_t l_1667[1];
    struct S1 *l_1673 = &g_1322[3];
    struct S2 l_1691 = {-823,0xE7L,-1153,{{7829,-6},1L,9UL},790,16,170};
    uint32_t l_1692 = 0UL;
    uint16_t ** const l_1778 = &g_427;
    struct S2 *l_1794 = &g_1795;
    union U3 l_1820[3][2] = {{{0},{0}},{{0},{0}},{{0},{0}}};
    struct S2 **l_1860 = (void*)0;
    struct S2 ***l_1859 = &l_1860;
    uint16_t l_1866 = 0x20CDL;
    uint16_t l_1899[4] = {65535UL,65535UL,65535UL,65535UL};
    uint32_t l_1913 = 4294967293UL;
    int32_t l_1924 = 0x1A866F6EL;
    uint16_t l_1946 = 65534UL;
    int32_t *l_1952 = &l_1519;
    int32_t *l_1953 = &l_1519;
    int32_t *l_1954 = &g_7;
    int32_t *l_1955[2][5] = {{&g_122,&g_62,&g_122,&l_1386,&l_1386},{&g_122,&g_62,&g_122,&l_1386,&l_1386}};
    uint64_t l_1956 = 0x774D80F3D72B3FA0LL;
    uint8_t *l_1961[7][5] = {{&l_1667[0],&l_1638.f3.f2,&l_1638.f3.f2,&l_1667[0],&l_1638.f3.f2},{&g_1322[3].f2,&g_1322[3].f2,&g_1126,&g_1322[3].f2,&g_1322[3].f2},{&l_1638.f3.f2,&l_1667[0],&l_1638.f3.f2,&l_1638.f3.f2,&l_1667[0]},{&g_1322[3].f2,&g_1795.f3.f2,&g_1795.f3.f2,&g_1322[3].f2,&g_1795.f3.f2},{&l_1667[0],&l_1667[0],&l_1667[0],&l_1667[0],&l_1667[0]},{&g_1795.f3.f2,&g_1322[3].f2,&g_1795.f3.f2,&g_1795.f3.f2,&g_1322[3].f2},{&l_1667[0],&l_1638.f3.f2,&l_1667[0],&l_1638.f3.f2,&l_1667[0]}};
    struct S2 l_1968[2] = {{5194,-4L,-533,{{-10385,1},0xA7L,0xE7L},1680,898,291},{5194,-4L,-533,{{-10385,1},0xA7L,0xE7L},1680,898,291}};
    int32_t l_1970 = 9L;
    int8_t *l_1971 = &g_520.f1;
    uint16_t l_1972 = 0x7454L;
    int16_t l_1974 = 0L;
    int64_t ****l_1992 = &g_364;
    int64_t *****l_1991 = &l_1992;
    int8_t l_2023 = 0x4DL;
    int64_t l_2084 = 6L;
    uint32_t l_2085[3];
    union U3 * const **l_2100 = &g_1919[0];
    uint8_t *l_2112 = (void*)0;
    int32_t *l_2147[4][1][3];
    int64_t **l_2177 = &g_366;
    uint8_t l_2227[1][2][3];
    uint32_t *l_2237 = &g_1060;
    uint32_t **l_2236[7][2] = {{(void*)0,&l_2237},{&l_2237,(void*)0},{&l_2237,&l_2237},{(void*)0,&l_2237},{&l_2237,(void*)0},{&l_2237,&l_2237},{(void*)0,&l_2237}};
    int32_t l_2319 = 0x4E135D9DL;
    int8_t l_2401 = 9L;
    uint32_t l_2448 = 0x9F24154FL;
    uint64_t l_2461 = 0UL;
    struct S1 l_2463 = {{-9885,1},-8L,0x5BL};
    uint64_t ***l_2477 = &g_2028;
    int8_t l_2481[5][7] = {{0x4AL,0x53L,0L,0L,0L,0x53L,0x4AL},{1L,0xEEL,0L,0x4EL,0L,0xEEL,1L},{0x4AL,0x53L,0L,0L,0L,0x53L,0x4AL},{1L,0xEEL,0L,0x4EL,0L,0xEEL,1L},{0x4AL,0x53L,0L,0L,0L,0x53L,0x4AL}};
    uint8_t l_2576 = 0UL;
    uint32_t l_2606 = 0x6C8994D7L;
    int64_t l_2662 = 0x639893BE5045A569LL;
    uint64_t l_2663[6] = {0x1592F310CBC8FC12LL,0x1592F310CBC8FC12LL,0x1592F310CBC8FC12LL,0x1592F310CBC8FC12LL,0x1592F310CBC8FC12LL,0x1592F310CBC8FC12LL};
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_1626[i] = (-2L);
    for (i = 0; i < 2; i++)
        l_1629[i] = 0xADCDF505L;
    for (i = 0; i < 1; i++)
        l_1667[i] = 255UL;
    for (i = 0; i < 3; i++)
        l_2085[i] = 0x9437048CL;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 3; k++)
                l_2147[i][j][k] = &g_7;
        }
    }
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 3; k++)
                l_2227[i][j][k] = 0x2FL;
        }
    }
    return (*l_1673);
}



static struct S1  func_13(int32_t  p_14, uint16_t * p_15, int32_t  p_16)
{ 
    int8_t l_1394 = 0xA7L;
    uint32_t *l_1413 = (void*)0;
    uint32_t *l_1414 = &g_51;
    uint32_t l_1415[2];
    uint32_t l_1416 = 4294967295UL;
    int32_t *l_1417 = &g_1277[1];
    int32_t *l_1418[4];
    int8_t l_1419 = 0x53L;
    uint16_t l_1420 = 65535UL;
    struct S1 l_1423 = {{11157,-4},0x85L,255UL};
    int i;
    for (i = 0; i < 2; i++)
        l_1415[i] = 4UL;
    for (i = 0; i < 4; i++)
        l_1418[i] = &g_1277[1];
    l_1417 = ((((safe_sub_func_int16_t_s_s(((p_14 = (safe_lshift_func_uint16_t_u_s((safe_rshift_func_int16_t_s_s(l_1394, ((safe_lshift_func_uint16_t_u_u((safe_mul_func_int16_t_s_s(((((safe_rshift_func_int16_t_s_u(((safe_rshift_func_int8_t_s_u(l_1394, 7)) < (l_1394 == (p_16 & ((g_520 , ((((safe_mul_func_int8_t_s_s(((((*l_1414) = (safe_lshift_func_uint8_t_u_u(((safe_lshift_func_uint8_t_u_s((((***g_425) = (safe_lshift_func_int8_t_s_s((((g_1322[3].f1 || (safe_sub_func_uint32_t_u_u(0x0B96C4B4L, (-10L)))) | (*p_15)) || 0x77L), p_14))) >= 0x917EL), l_1394)) > p_16), g_1322[3].f1))) , l_1415[1]) == g_308), 0x0FL)) & 0x96L) & g_62) && 0xAE959947L)) & 2L)))), 10)) , 0xE5AFD416006C81AELL) < 18446744073709551611UL) == 8UL), p_16)), 7)) != 1UL))), l_1415[0]))) , l_1416), 65532UL)) >= 18446744073709551615UL) ^ 0xEC4BD52D71B13EEELL) , l_1414);
    ++l_1420;
    return l_1423;
}



static int16_t  func_19(uint16_t  p_20, uint16_t  p_21)
{ 
    int32_t *l_928 = &g_460;
    uint32_t *l_930[7] = {&g_213,&g_213,&g_213,&g_213,&g_213,&g_213,&g_213};
    uint32_t **l_929 = &l_930[1];
    uint32_t ***l_931 = &l_929;
    union U3 l_941[5][2][4] = {{{{0},{0},{0},{0}},{{0},{0},{0},{0}}},{{{0},{0},{0},{0}},{{0},{0},{0},{0}}},{{{0},{0},{0},{0}},{{0},{0},{0},{0}}},{{{0},{0},{0},{0}},{{0},{0},{0},{0}}},{{{0},{0},{0},{0}},{{0},{0},{0},{0}}}};
    int32_t l_942[7][2][1] = {{{0x4C96F36FL},{0x4C96F36FL}},{{(-1L)},{0x8F6FFC9AL}},{{(-1L)},{0x4C96F36FL}},{{0x4C96F36FL},{(-1L)}},{{0x8F6FFC9AL},{(-1L)}},{{0x4C96F36FL},{0x4C96F36FL}},{{(-1L)},{0x8F6FFC9AL}}};
    uint8_t l_995 = 0x6BL;
    const int16_t * const l_1034[4][7] = {{&g_72,&g_120[1][0][2],&g_120[1][0][2],&g_72,&g_120[1][0][2],&g_120[1][0][2],&g_72},{&g_120[0][0][2],&g_105,&g_120[0][0][2],&g_120[0][0][2],&g_105,&g_120[0][0][2],&g_120[0][0][2]},{&g_72,&g_72,&g_105,&g_72,&g_72,&g_105,&g_72},{&g_105,&g_120[0][0][2],&g_120[0][0][2],&g_105,&g_120[0][0][2],&g_120[0][0][2],&g_105}};
    int8_t l_1064 = 1L;
    uint16_t **l_1069[4][5][3] = {{{(void*)0,&g_427,&g_427},{&g_427,(void*)0,&g_427},{&g_427,&g_427,&g_427},{&g_427,&g_427,&g_427},{(void*)0,&g_427,&g_427}},{{&g_427,&g_427,&g_427},{&g_427,&g_427,&g_427},{(void*)0,&g_427,&g_427},{&g_427,(void*)0,&g_427},{&g_427,&g_427,&g_427}},{{&g_427,&g_427,&g_427},{(void*)0,&g_427,&g_427},{(void*)0,(void*)0,&g_427},{&g_427,&g_427,&g_427},{&g_427,(void*)0,&g_427}},{{&g_427,&g_427,&g_427},{&g_427,&g_427,&g_427},{&g_427,&g_427,&g_427},{&g_427,&g_427,&g_427},{&g_427,&g_427,&g_427}}};
    int64_t l_1076 = 0x3C8A1FB9EDB35B80LL;
    struct S0 l_1115 = {1375,7};
    union U3 *l_1141 = (void*)0;
    int16_t * const **l_1162[3];
    int16_t * const ** const * const l_1161 = &l_1162[0];
    int32_t l_1175 = 0L;
    int64_t **l_1180 = &g_366;
    struct S1 l_1187 = {{5958,0},0x4CL,246UL};
    int32_t l_1193 = 5L;
    uint32_t l_1233 = 0xEBB41607L;
    uint32_t l_1278 = 0x7777931AL;
    struct S1 *l_1321 = &g_1322[3];
    int32_t l_1352 = (-5L);
    uint32_t l_1364 = 18446744073709551607UL;
    uint8_t *l_1371 = (void*)0;
    uint8_t *l_1372 = (void*)0;
    uint8_t *l_1373[1][5][7] = {{{&g_129.f2,&g_520.f3.f2,&g_129.f2,&g_129.f2,&g_520.f3.f2,&g_129.f2,&g_129.f2},{(void*)0,(void*)0,&g_580,(void*)0,(void*)0,&g_580,(void*)0},{&g_520.f3.f2,&g_129.f2,&g_129.f2,&g_520.f3.f2,&g_129.f2,&g_129.f2,&g_520.f3.f2},{&g_1126,(void*)0,&g_1126,&g_1126,(void*)0,&g_1126,&g_1126},{&g_520.f3.f2,&g_520.f3.f2,&g_1150,&g_520.f3.f2,&g_520.f3.f2,&g_1150,&g_520.f3.f2}}};
    const union U3 **l_1382 = &g_198[3];
    int32_t *l_1383 = &g_1145;
    int8_t **l_1384 = &g_57;
    struct S2 l_1385[3][3] = {{{4641,-8L,1759,{{2959,-6},1L,255UL},1295,1526,226},{4641,-8L,1759,{{2959,-6},1L,255UL},1295,1526,226},{4641,-8L,1759,{{2959,-6},1L,255UL},1295,1526,226}},{{4641,-8L,1759,{{2959,-6},1L,255UL},1295,1526,226},{4641,-8L,1759,{{2959,-6},1L,255UL},1295,1526,226},{4641,-8L,1759,{{2959,-6},1L,255UL},1295,1526,226}},{{4641,-8L,1759,{{2959,-6},1L,255UL},1295,1526,226},{4641,-8L,1759,{{2959,-6},1L,255UL},1295,1526,226},{4641,-8L,1759,{{2959,-6},1L,255UL},1295,1526,226}}};
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_1162[i] = (void*)0;
    (*g_456) = (*g_456);
lbl_999:
    (*l_928) = (-1L);
    l_942[3][1][0] &= ((((((*l_931) = l_929) == &l_930[1]) < (safe_rshift_func_int16_t_s_s((safe_div_func_uint16_t_u_u((safe_unary_minus_func_int64_t_s(p_20)), (safe_add_func_int32_t_s_s(((*l_928) = (safe_rshift_func_int16_t_s_s((*l_928), 13))), 0x71C07053L)))), 4))) || ((((l_941[3][0][3] , (p_21 > 0xDE0DL)) , p_20) , (void*)0) == l_930[0])) != p_20);
    if ((*l_928))
    { 
lbl_1108:
        for (g_192 = 0; g_192 < 7; g_192 += 1)
        {
            for (g_213 = 0; g_213 < 2; g_213 += 1)
            {
                for (g_437 = 0; g_437 < 1; g_437 += 1)
                {
                    l_942[g_192][g_213][g_437] = (-1L);
                }
            }
        }
    }
    else
    { 
        const struct S2 *l_945[3][4][7] = {{{(void*)0,(void*)0,&g_520,(void*)0,&g_520,&g_520,(void*)0},{&g_520,(void*)0,&g_520,&g_520,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&g_520,(void*)0,(void*)0,&g_520,&g_520},{&g_520,(void*)0,&g_520,&g_520,&g_520,(void*)0,&g_520}},{{&g_520,&g_520,(void*)0,&g_520,&g_520,&g_520,(void*)0},{&g_520,&g_520,&g_520,(void*)0,(void*)0,&g_520,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,&g_520,&g_520,(void*)0},{&g_520,(void*)0,&g_520,&g_520,(void*)0,&g_520,(void*)0}},{{(void*)0,(void*)0,&g_520,&g_520,&g_520,&g_520,(void*)0},{(void*)0,(void*)0,&g_520,(void*)0,&g_520,&g_520,(void*)0},{&g_520,(void*)0,&g_520,&g_520,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&g_520,(void*)0,(void*)0,&g_520,&g_520}}};
        const struct S2 **l_944[7][1] = {{(void*)0},{&l_945[0][1][4]},{(void*)0},{(void*)0},{&l_945[0][1][4]},{(void*)0},{(void*)0}};
        const struct S2 ***l_943[7] = {&l_944[1][0],&l_944[1][0],&l_944[1][0],&l_944[1][0],&l_944[1][0],&l_944[1][0],&l_944[1][0]};
        int32_t *l_949 = (void*)0;
        int32_t l_955 = 0x765B65EDL;
        int32_t l_956 = (-9L);
        int32_t l_957 = 0x184B2CD0L;
        int32_t l_958 = (-6L);
        int32_t l_959 = (-3L);
        int32_t l_961 = 8L;
        int32_t l_962[5][1] = {{(-2L)},{0xC91034D3L},{(-2L)},{0xC91034D3L},{(-2L)}};
        const struct S0 *l_1059 = (void*)0;
        const struct S0 ** const l_1058 = &l_1059;
        const struct S0 ** const * const l_1057[5] = {&l_1058,&l_1058,&l_1058,&l_1058,&l_1058};
        const int16_t * const *l_1082 = &l_1034[1][4];
        const int16_t * const **l_1081 = &l_1082;
        int32_t *l_1164 = &l_955;
        uint64_t l_1169 = 18446744073709551615UL;
        int64_t **l_1174 = &g_366;
        int8_t *l_1177 = &g_520.f1;
        struct S2 l_1178 = {-10839,8L,2243,{{-2208,-3},0x17L,0xF8L},305,771,52};
        int32_t l_1188 = 0x12FDBB56L;
        const union U3 l_1212 = {0};
        int32_t l_1294 = 0xBFBB0B27L;
        int64_t ****l_1332 = &g_364;
        int64_t *****l_1331 = &l_1332;
        int i, j, k;
        for (g_767 = 3; (g_767 >= 0); g_767 -= 1)
        { 
            const struct S2 ***l_946 = &l_944[1][0];
            int32_t l_960 = (-4L);
            int32_t l_963 = (-2L);
            int32_t l_964 = 0L;
            int32_t l_965 = 0x730B4977L;
            uint8_t l_970[5] = {0x6AL,0x6AL,0x6AL,0x6AL,0x6AL};
            const union U3 **l_998 = &g_198[3];
            const int16_t *l_1035 = (void*)0;
            const int16_t **l_1036 = &l_1035;
            int32_t **l_1062 = &g_505;
            int32_t *** const l_1061 = &l_1062;
            int32_t l_1087 = (-1L);
            struct S0 l_1114 = {9341,6};
            struct S1 l_1129 = {{3335,-4},-9L,0x16L};
            int i;
            for (g_111 = 0; (g_111 <= 3); g_111 += 1)
            { 
                int32_t l_951 = 6L;
                int32_t l_954[5][5] = {{0x055EBCEEL,0x055EBCEEL,1L,0x055EBCEEL,0x055EBCEEL},{1L,1L,1L,1L,(-5L)},{0x055EBCEEL,0xEAEF271FL,0xEAEF271FL,0x055EBCEEL,0xEAEF271FL},{1L,1L,(-5L),1L,1L},{1L,0xEAEF271FL,1L,1L,0xEAEF271FL}};
                int64_t ****l_977 = &g_364;
                int i, j;
                l_946 = l_943[6];
                if ((((*l_928) != ((void*)0 != &g_198[g_111])) , p_21))
                { 
                    int32_t *l_950 = (void*)0;
                    l_950 = l_949;
                    l_949 = &g_7;
                    if ((*l_949))
                        break;
                }
                else
                { 
                    int32_t *l_952 = &l_951;
                    int32_t *l_953[6][4][4] = {{{(void*)0,(void*)0,&g_460,&l_951},{&l_942[4][1][0],(void*)0,&l_942[4][1][0],&g_460},{(void*)0,&g_7,(void*)0,(void*)0},{(void*)0,&l_951,(void*)0,&g_7}},{{&g_7,(void*)0,(void*)0,&g_7},{(void*)0,&g_460,(void*)0,&l_942[4][1][0]},{(void*)0,&l_942[4][1][0],&l_942[4][1][0],&l_942[6][0][0]},{&l_942[4][1][0],&l_942[6][0][0],&g_460,&l_942[6][0][0]}},{{(void*)0,&l_942[4][1][0],&l_951,&l_942[4][1][0]},{&g_62,&g_460,&l_942[6][0][0],&g_7},{&l_951,(void*)0,&g_7,&g_7},{&l_951,&l_951,&l_942[6][0][0],(void*)0}},{{&g_62,&g_7,&l_951,&g_460},{(void*)0,(void*)0,&g_460,&l_951},{&l_942[4][1][0],(void*)0,&l_942[4][1][0],&g_460},{(void*)0,&g_7,(void*)0,(void*)0}},{{(void*)0,&l_951,(void*)0,&g_7},{&g_7,(void*)0,(void*)0,&g_7},{(void*)0,&g_460,(void*)0,&l_942[4][1][0]},{(void*)0,&l_942[4][1][0],&l_942[4][1][0],&l_942[6][0][0]}},{{&l_942[4][1][0],&l_942[6][0][0],&g_460,&l_942[6][0][0]},{(void*)0,&l_942[4][1][0],&l_951,&l_942[4][1][0]},{&g_62,&g_460,&l_942[6][0][0],&g_7},{&l_951,(void*)0,&g_7,&g_7}}};
                    int i, j, k;
                    g_966[4]++;
                    l_970[2]++;
                    return p_21;
                }
                if ((!p_20))
                { 
                    uint16_t l_974 = 7UL;
                    --l_974;
                }
                else
                { 
                    int64_t *****l_978 = &l_977;
                    uint64_t l_997 = 0xC12BF3566B6B953ELL;
                    int i;
                    (*l_928) &= (g_122 = (-4L));
                    l_963 = ((((*l_978) = l_977) == (g_520 , &g_364)) & ((l_965 = ((((safe_mod_func_uint16_t_u_u((safe_add_func_int16_t_s_s((((safe_lshift_func_int8_t_s_u((safe_mod_func_int8_t_s_s(((safe_div_func_uint16_t_u_u(((l_941[3][0][3] , (*g_366)) >= ((safe_div_func_int32_t_s_s((safe_sub_func_int64_t_s_s(((safe_mod_func_uint8_t_u_u(p_20, l_965)) < (***g_364)), (*g_366))), p_21)) , 0UL)), p_20)) > l_995), 1UL)), p_20)) < l_970[3]) <= g_996), 0xC3D3L)), 1L)) >= l_997) , &g_198[3]) == l_998)) < (-1L)));
                }
            }
            for (g_122 = 3; (g_122 >= 0); g_122 -= 1)
            { 
                uint32_t l_1021 = 0x7322099DL;
                for (g_237 = 0; (g_237 <= 0); g_237 += 1)
                { 
                    int32_t *l_1000 = &l_956;
                    int32_t *l_1001 = (void*)0;
                    int32_t *l_1002 = (void*)0;
                    int32_t *l_1003 = &g_460;
                    int32_t *l_1004 = &g_62;
                    int32_t *l_1005 = (void*)0;
                    int32_t *l_1006 = &l_957;
                    int32_t *l_1007 = &l_959;
                    int32_t *l_1008 = (void*)0;
                    int32_t *l_1009 = &l_959;
                    int32_t *l_1010 = (void*)0;
                    int32_t *l_1011 = &l_942[2][0][0];
                    int32_t *l_1012 = &l_955;
                    int32_t *l_1013 = &l_956;
                    int32_t *l_1014 = &l_942[3][0][0];
                    int32_t *l_1015 = &l_959;
                    int32_t *l_1016 = &l_962[4][0];
                    int32_t *l_1017 = &l_942[3][1][0];
                    int32_t *l_1018 = &l_957;
                    int32_t *l_1019 = &l_958;
                    int32_t *l_1020[1][1];
                    int i, j;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 1; j++)
                            l_1020[i][j] = (void*)0;
                    }
                    if (g_122)
                        goto lbl_999;
                    if (l_962[g_122][g_237])
                        continue;
                    l_962[(g_122 + 1)][g_237] = l_965;
                    if (g_520.f3.f1)
                        goto lbl_999;
                    --l_1021;
                }
                for (g_129.f2 = 0; (g_129.f2 <= 3); g_129.f2 += 1)
                { 
                    return l_1021;
                }
            }
            if ((safe_add_func_uint8_t_u_u(((*l_928) , (((safe_sub_func_uint16_t_u_u(p_20, p_21)) ^ (safe_mod_func_uint8_t_u_u((g_966[5]++), (safe_rshift_func_int16_t_s_u((l_1034[1][4] != ((*l_1036) = l_1035)), 2))))) ^ ((g_520 , (safe_rshift_func_uint16_t_u_s((*l_928), 9))) != p_20))), p_21)))
            { 
                uint32_t l_1054 = 5UL;
                uint16_t ***l_1070[6];
                uint32_t l_1085 = 1UL;
                int i;
                for (i = 0; i < 6; i++)
                    l_1070[i] = &l_1069[0][1][2];
                if (((safe_mul_func_int16_t_s_s((safe_add_func_uint16_t_u_u((l_964 >= ((g_966[4] ^= g_289[0][4][4].f0.f1) || (safe_add_func_int64_t_s_s(p_21, ((***g_364) = ((safe_lshift_func_int16_t_s_s((safe_rshift_func_int8_t_s_s(p_20, 6)), 12)) ^ (safe_mod_func_int16_t_s_s(((safe_add_func_uint64_t_u_u((((+(p_20 , l_1054)) <= (((((g_170++) >= ((l_1057[4] == (void*)0) == g_289[0][4][4].f0.f1)) , p_20) & l_1054) & p_20)) & 0UL), 4UL)) | g_767), g_1060)))))))), 1UL)), p_21)) , p_20))
                { 
                    int64_t l_1063 = 0x639B9C84C09EDF4CLL;
                    (*l_928) = (l_1061 != &l_1062);
                    (*l_928) = (l_1064 = l_1063);
                    if (p_21)
                        continue;
                }
                else
                { 
                    if (p_20)
                        break;
                }
                if (((**g_365) , (0x0CAAL || ((***g_425) = (&g_197 == ((safe_rshift_func_int16_t_s_s((((safe_mul_func_int8_t_s_s((-1L), (((*g_425) != (g_1071 = l_1069[0][1][2])) , ((safe_mul_func_uint16_t_u_u(((safe_div_func_uint32_t_u_u(g_460, 4294967290UL)) | l_962[1][0]), l_1076)) == l_1054)))) , (*l_928)) <= l_1054), 3)) , &g_197))))))
                { 
                    uint16_t l_1077 = 65535UL;
                    int16_t *l_1078 = &g_120[0][0][1];
                    uint8_t l_1088 = 0x32L;
                    int i;
                    (*l_928) = ((((((((*l_1078) |= l_1077) && p_20) , ((((safe_add_func_uint8_t_u_u(((void*)0 == l_1081), ((safe_mul_func_uint16_t_u_u(l_1085, ((+((g_129.f0.f0 | (l_941[3][0][3] , p_21)) != (**g_426))) ^ (-3L)))) & (*l_928)))) != (*g_427)) & 2L) >= l_1054)) == l_1077) == l_1087) , l_1077) != p_21);
                    if (l_1077)
                        continue;
                    if (l_1088)
                        break;
                }
                else
                { 
                    struct S2 *l_1089 = &g_520;
                    struct S2 *l_1091 = &g_520;
                    struct S2 **l_1090 = &l_1091;
                    uint16_t l_1105 = 0xB434L;
                    (*g_456) = (*g_456);
                    (**l_1061) = (g_520 , (void*)0);
                    (*l_928) = ((((l_1089 == ((*l_1090) = &g_520)) < (safe_rshift_func_int16_t_s_s((safe_div_func_uint32_t_u_u(((((safe_rshift_func_int16_t_s_s((safe_unary_minus_func_uint16_t_u(p_20)), ((0x5FD1D5A53642F7ADLL & (safe_lshift_func_uint8_t_u_u(g_520.f2, 4))) == p_21))) | (((safe_mul_func_uint8_t_u_u((safe_add_func_int32_t_s_s(9L, (*l_928))), p_20)) , l_1105) <= l_1085)) >= (***g_425)) < (*l_928)), p_21)), 15))) , g_520.f4) < 0UL);
                    return p_21;
                }
                (*l_928) = g_520.f6;
            }
            else
            { 
                uint64_t l_1110 = 0x7578F003B4A2B45CLL;
                for (g_392 = (-22); (g_392 < 42); ++g_392)
                { 
                    int32_t *l_1109 = (void*)0;
                    struct S0 l_1113 = {9800,-6};
                    if (g_520.f3.f1)
                        goto lbl_1108;
                    (**l_1061) = (void*)0;
                    --l_1110;
                    l_1114 = l_1113;
                    if (p_20)
                        continue;
                }
            }
            l_1115 = l_1114;
            if ((g_580 , p_20))
            { 
                int32_t l_1123 = (-1L);
                int32_t l_1124[5][2] = {{0x191901C1L,(-1L)},{0x675AB5D8L,0x675AB5D8L},{0x675AB5D8L,(-1L)},{0x191901C1L,3L},{(-1L),3L}};
                int64_t l_1142 = 0x6030C2B817658FB2LL;
                int i, j;
                for (l_956 = (-7); (l_956 != (-7)); l_956 = safe_add_func_int8_t_s_s(l_956, 6))
                { 
                    struct S0 l_1118[6] = {{8717,-7},{8717,-7},{8717,-7},{8717,-7},{8717,-7},{8717,-7}};
                    int32_t *l_1119 = &l_962[4][0];
                    int32_t *l_1120 = &g_460;
                    int32_t *l_1121 = (void*)0;
                    int32_t *l_1122[7] = {&l_942[5][1][0],&l_942[5][1][0],&l_942[5][1][0],&l_942[5][1][0],&l_942[5][1][0],&l_942[5][1][0],&l_942[5][1][0]};
                    int i;
                    (*g_456) = l_1118[3];
                    --g_1126;
                    (*l_928) = (l_1129 , g_520.f5);
                    if (g_6)
                        continue;
                }
                for (g_321 = 0; (g_321 > 11); g_321 = safe_add_func_uint8_t_u_u(g_321, 6))
                { 
                    int32_t *l_1132 = &l_942[3][1][0];
                    int32_t *l_1133 = &l_955;
                    int32_t *l_1134 = &l_962[2][0];
                    int32_t *l_1135 = &l_959;
                    int32_t *l_1136[2];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_1136[i] = (void*)0;
                    g_1138--;
                    if (p_21)
                        continue;
                    l_1141 = &l_941[2][1][1];
                }
                if (l_1142)
                { 
                    (*l_1062) = &l_958;
                }
                else
                { 
                    int32_t *l_1143 = (void*)0;
                    int32_t *l_1144[2];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_1144[i] = &l_955;
                    --g_1146[0];
                    ++g_1150;
                }
            }
            else
            { 
                return p_21;
            }
        }
        (*l_1164) |= (safe_div_func_uint8_t_u_u((safe_add_func_int16_t_s_s((safe_mul_func_int16_t_s_s(((((*g_427) = (g_1159 == l_1161)) , (!((((0x80409CEF87B8F6C7LL | 0xFD4619093E3BA692LL) == (l_1115 , p_21)) && 4UL) ^ 0xE20F0717L))) , 1L), p_20)), (*l_928))), (*l_928)));
        for (g_1137 = 0; (g_1137 <= 22); g_1137 = safe_add_func_uint64_t_u_u(g_1137, 7))
        { 
            int32_t *l_1167 = &l_962[2][0];
            int32_t *l_1168[6][5];
            struct S0 l_1172 = {-2112,-1};
            int32_t *l_1176 = &g_618[1];
            int32_t l_1201 = 0L;
            int32_t *l_1213 = &g_122;
            int16_t **l_1237 = (void*)0;
            struct S1 l_1242[3] = {{{5359,-5},0L,1UL},{{5359,-5},0L,1UL},{{5359,-5},0L,1UL}};
            const uint16_t l_1259[7][2] = {{0UL,0UL},{0UL,0UL},{0UL,0UL},{0UL,0UL},{0UL,0UL},{0UL,0UL},{0UL,0UL}};
            uint16_t l_1295[7][6] = {{0x4FCCL,65532UL,0x4FCCL,65530UL,0xF9B8L,65530UL},{0x4FCCL,65532UL,0x4FCCL,65530UL,0xF9B8L,65530UL},{0x4FCCL,65532UL,0x4FCCL,65530UL,0xF9B8L,65530UL},{0x4FCCL,65532UL,0x4FCCL,65530UL,0xF9B8L,65530UL},{0x4FCCL,65532UL,0x4FCCL,65530UL,0xF9B8L,65530UL},{0x4FCCL,65532UL,0x4FCCL,65530UL,0xF9B8L,65530UL},{0x4FCCL,65532UL,0x4FCCL,65530UL,0xF9B8L,65530UL}};
            int64_t l_1298 = 0x9439C14072C6B8DDLL;
            int i, j;
            for (i = 0; i < 6; i++)
            {
                for (j = 0; j < 5; j++)
                    l_1168[i][j] = &l_955;
            }
            --l_1169;
            (*l_928) = ((func_36(((*l_1176) = ((l_1172 , l_1172) , (safe_unary_minus_func_int32_t_s(((((*l_1167) = ((void*)0 != l_1174)) , (l_1175 = ((g_321 | g_238) & p_20))) < (*g_427)))))), l_1177, &g_308, l_1178, &l_1164) , (void*)0) != (void*)0);
        }
        for (g_1150 = 0; (g_1150 > 49); ++g_1150)
        { 
            const uint16_t *l_1304[2];
            const uint16_t **l_1303 = &l_1304[1];
            const uint16_t ***l_1305 = (void*)0;
            int32_t l_1329 = 0L;
            int32_t *l_1336 = &g_460;
            int32_t *l_1362 = &l_1352;
            int32_t *l_1363[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            int i;
            for (i = 0; i < 2; i++)
                l_1304[i] = &g_73;
            (*l_928) ^= ((-9L) <= ((**l_1174) = ((l_1303 = l_1303) != &l_1304[1])));
            for (g_460 = 3; (g_460 < (-25)); g_460 = safe_sub_func_int32_t_s_s(g_460, 4))
            { 
                struct S1 *l_1320 = &g_129;
                struct S1 *l_1326 = &g_520.f3;
                struct S1 ** const l_1325 = &l_1326;
                struct S1 ** const *l_1324[2][7];
                struct S1 ** const **l_1323 = &l_1324[0][6];
                struct S1 ***l_1327[5][3] = {{&g_1239[0][1],&g_1239[0][1],&g_1239[0][1]},{&g_1239[3][0],&g_1239[0][1],&g_1239[0][1]},{&g_1239[0][1],&g_1239[0][1],(void*)0},{&g_1239[3][0],&g_1239[0][1],&g_1239[3][0]},{&g_1239[0][1],&g_1239[0][1],(void*)0}};
                int32_t l_1328 = (-7L);
                uint64_t l_1330 = 0x6EAD029DC78D610DLL;
                int i, j;
                for (i = 0; i < 2; i++)
                {
                    for (j = 0; j < 7; j++)
                        l_1324[i][j] = &l_1325;
                }
                l_962[2][0] ^= ((g_289[0][4][4].f0.f0 = (p_20 || p_21)) | (!(safe_mod_func_int64_t_s_s((l_1329 = (((safe_add_func_int64_t_s_s((((((!((((safe_lshift_func_uint8_t_u_u(1UL, 2)) | (safe_mul_func_uint16_t_u_u(((safe_rshift_func_int8_t_s_u(p_20, ((((&l_1187 == (l_1321 = l_1320)) && (((*l_1323) = &g_1239[0][1]) != l_1327[2][0])) & p_21) >= 4294967288UL))) <= (*l_1164)), l_1328))) && (-1L)) == l_1329)) , l_1330) , l_1331) != &l_1332) , p_20), 0xC3DA1B5BFD5A1B5DLL)) || 0L) , 0xDEC7F02BB0B0F96CLL)), (*l_928)))));
            }
            for (l_958 = (-24); (l_958 < (-4)); l_958 = safe_add_func_int16_t_s_s(l_958, 5))
            { 
                struct S2 *l_1339 = &l_1178;
                int32_t l_1345 = 0x3B69AD35L;
                if (((*l_928) | p_20))
                { 
                    int32_t **l_1335[4] = {&l_949,&l_949,&l_949,&l_949};
                    int i;
                    if (p_21)
                        break;
                    g_505 = (l_1336 = &l_1329);
                }
                else
                { 
                    int32_t **l_1337 = (void*)0;
                    int32_t **l_1338 = &l_1336;
                    if (p_20)
                        break;
                    (*l_1338) = &l_1329;
                    g_456 = g_456;
                    (*g_456) = (*g_456);
                }
                g_1340 = l_1339;
                for (g_238 = 0; (g_238 <= 0); g_238 += 1)
                { 
                    int i, j, k;
                    if (l_942[(g_238 + 5)][g_238][g_238])
                        break;
                }
                for (g_1276 = 1; (g_1276 >= 0); g_1276 -= 1)
                { 
                    int64_t *****l_1348[3];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_1348[i] = &l_1332;
                    (*l_1164) ^= g_1125[g_1276];
                    (*l_1164) = (((3UL > ((safe_mod_func_int32_t_s_s(((*l_928) < (safe_sub_func_int32_t_s_s(l_1345, ((safe_div_func_int32_t_s_s(((*l_1336) = ((g_1125[g_1276] < (*l_928)) < ((l_1187.f0 , l_1348[0]) == l_1348[2]))), g_1150)) | g_1145)))), 6L)) < g_1349)) , l_1115) , (*l_928));
                }
            }
            (*l_1336) = (g_1322[3].f0.f0 = ((*l_1164) = (((*l_928) > ((l_1352 < ((*l_1336) != (((safe_unary_minus_func_uint8_t_u(0x63L)) | ((safe_div_func_uint8_t_u_u((safe_div_func_int8_t_s_s((*l_928), (*l_928))), ((safe_rshift_func_int16_t_s_s((safe_mod_func_uint64_t_u_u(((g_2 , (*l_928)) | (*l_1336)), p_20)), 15)) ^ g_1137))) < 0xFF5A4142L)) < g_107))) , (*l_928))) > p_21)));
            l_1364++;
        }
        return (*l_928);
    }
    l_1187.f0 = ((safe_mod_func_int8_t_s_s((safe_add_func_uint8_t_u_u((g_1126--), (((((((safe_sub_func_uint16_t_u_u(((((((safe_rshift_func_uint16_t_u_u((((g_1239[0][3] = (void*)0) != &l_1321) || (&g_1160 == ((*l_1321) , &l_1162[0]))), 15)) > (*l_928)) && 0x7431E23EL) & p_21) || p_20) <= (***g_425)), p_21)) & g_1146[1]) || (*g_427)) , &g_666) != &l_995) || (*l_928)) <= (*g_427)))), (*l_928))) , l_1115);
    return p_20;
}



static uint16_t  func_22(int32_t ** p_23, uint16_t * p_24, uint16_t * p_25, uint16_t * p_26)
{ 
    uint32_t l_923 = 0x79AEFDB8L;
    for (g_129.f2 = 0; (g_129.f2 == 4); g_129.f2 = safe_add_func_int32_t_s_s(g_129.f2, 1))
    { 
        int32_t *l_924 = (void*)0;
        int32_t **l_925 = &l_924;
        struct S0 l_926 = {-1943,-0};
        (*l_925) = (l_923 , ((*p_23) = l_924));
        (*g_456) = l_926;
    }
    return (*g_427);
}



static int32_t ** func_27(int64_t  p_28, uint32_t  p_29, struct S2  p_30, int8_t * p_31)
{ 
    int16_t l_768[6][6][3] = {{{0x8E85L,(-8L),0x8E85L},{0x9165L,0xA9C9L,0xE189L},{0x8E85L,(-10L),0x14B6L},{0x9165L,(-1L),0x9165L},{0x8E85L,0xAD9EL,0x326BL},{0x9165L,0x918CL,0x3EEDL}},{{0x8E85L,(-8L),0x8E85L},{0x9165L,0xA9C9L,0xE189L},{0x8E85L,(-10L),0x14B6L},{0x9165L,(-1L),0x9165L},{0x8E85L,0xAD9EL,0x326BL},{0x9165L,0x918CL,0x3EEDL}},{{0x8E85L,(-8L),0x8E85L},{0x9165L,0xA9C9L,0xE189L},{0x8E85L,(-10L),0x14B6L},{0x9165L,(-1L),0x9165L},{0x8E85L,0xAD9EL,0x326BL},{0x9165L,0x918CL,0x3EEDL}},{{0x8E85L,(-8L),0x8E85L},{0x9165L,0xA9C9L,0xE189L},{0x8E85L,(-10L),0x14B6L},{0x9165L,(-1L),0x9165L},{0x8E85L,0xAD9EL,0x326BL},{0x9165L,0x918CL,0x3EEDL}},{{0x8E85L,(-8L),0x8E85L},{0x9165L,0xA9C9L,0xE189L},{0x8E85L,(-10L),0x14B6L},{0x9165L,(-1L),0x9165L},{0x8E85L,0xAD9EL,0x326BL},{0x9165L,0x918CL,0x3EEDL}},{{0x8E85L,(-8L),0x8E85L},{0x9165L,0xA9C9L,0xE189L},{0x8E85L,(-10L),0x14B6L},{0x9165L,(-1L),0x9165L},{0x8E85L,0xAD9EL,0x326BL},{0x9165L,0x918CL,0x3EEDL}}};
    int32_t *l_779 = &g_6;
    uint8_t *l_784 = &g_56;
    uint32_t *l_789 = (void*)0;
    uint32_t *l_790 = &g_213;
    uint32_t *l_791 = &g_392;
    uint32_t *l_794 = &g_461;
    int32_t **l_849 = &g_505;
    union U3 l_853 = {0};
    int32_t l_894[5][3][5] = {{{0xC2707A34L,(-1L),0xBEF0E865L,0xBBE9C045L,(-5L)},{0xC2707A34L,(-8L),(-8L),1L,(-4L)},{(-5L),(-1L),(-8L),0xC2AD2BFEL,(-2L)}},{{(-9L),0xFEF74FF4L,0xBEF0E865L,1L,(-2L)},{(-4L),0xBBE9C045L,4L,0xBBE9C045L,(-4L)},{(-9L),0xBBE9C045L,2L,(-8L),(-5L)}},{{(-5L),0xFEF74FF4L,4L,(-8L),(-5L)},{0xC2707A34L,(-1L),0xBEF0E865L,0xBBE9C045L,(-5L)},{0xC2707A34L,(-8L),(-8L),1L,(-4L)}},{{(-5L),(-1L),(-8L),0xC2AD2BFEL,(-2L)},{(-9L),0xFEF74FF4L,0xBEF0E865L,1L,(-2L)},{(-4L),0xBBE9C045L,4L,0xBBE9C045L,(-4L)}},{{(-9L),0x3C19C0B7L,(-8L),1L,0L},{0L,6L,0L,1L,0xBBE9C045L},{(-1L),0xCE97BC95L,0x512F5BF4L,0x3C19C0B7L,0L}}};
    uint8_t l_902 = 1UL;
    struct S0 l_910 = {8631,-6};
    int i, j, k;
    (*g_505) = (0x3EE1B4F8L | l_768[2][1][2]);
    (*g_505) ^= ((safe_mul_func_int16_t_s_s(((safe_mul_func_int8_t_s_s(0x0DL, (safe_div_func_uint64_t_u_u(((safe_add_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s((l_779 != l_779), ((safe_rshift_func_int8_t_s_s((safe_mul_func_uint8_t_u_u(p_30.f2, ((*l_784)--))), 0)) > (safe_rshift_func_int16_t_s_u((((*l_790) &= 0x3A90E706L) , 0x06B0L), 1))))), (((*l_794) ^= (--(*l_791))) >= ((safe_sub_func_int16_t_s_s(p_30.f3.f0.f1, p_30.f3.f0.f0)) | 0x123D4B78L)))) < p_30.f3.f2), 1UL)))) || (*l_779)), (*l_779))) == (*l_779));
    l_779 = &g_62;
    for (g_107 = 0; (g_107 <= 25); g_107++)
    { 
        uint32_t l_819 = 0xFC8C4E31L;
        struct S0 *l_822 = (void*)0;
        int32_t l_852 = 7L;
        int64_t l_884 = 1L;
        int64_t l_901 = 0x7C193594B6E9C83CLL;
        const int16_t l_911[4] = {0x1227L,0x1227L,0x1227L,0x1227L};
        int i;
    }
    return &g_505;
}



static union U3  func_32(const int8_t  p_33, struct S1  p_34, int8_t * p_35)
{ 
    int32_t **l_721 = (void*)0;
    int32_t **l_722 = (void*)0;
    int32_t **l_723[7][2] = {{&g_505,&g_505},{(void*)0,(void*)0},{&g_505,(void*)0},{(void*)0,&g_505},{&g_505,(void*)0},{(void*)0,&g_505},{(void*)0,(void*)0}};
    union U3 l_764 = {0};
    int i, j;
    g_505 = &g_122;
    for (g_105 = 0; (g_105 != 18); ++g_105)
    { 
        uint64_t l_749 = 7UL;
        const int32_t l_750 = 0x85DD9BDDL;
        for (g_51 = (-22); (g_51 != 18); g_51 = safe_add_func_uint64_t_u_u(g_51, 4))
        { 
            struct S0 l_730 = {-3923,0};
            for (g_72 = 0; (g_72 != 12); g_72++)
            { 
                struct S0 l_731 = {5093,-0};
                uint8_t *l_748[7][7] = {{(void*)0,(void*)0,&g_238,&g_56,(void*)0,&g_56,&g_238},{(void*)0,(void*)0,&g_238,&g_56,(void*)0,&g_56,&g_238},{(void*)0,(void*)0,&g_238,&g_56,(void*)0,&g_56,&g_238},{(void*)0,(void*)0,&g_238,&g_56,(void*)0,&g_56,&g_238},{(void*)0,(void*)0,&g_238,&g_56,(void*)0,&g_56,&g_238},{(void*)0,(void*)0,&g_238,&g_56,(void*)0,&g_56,&g_238},{(void*)0,(void*)0,&g_238,&g_56,(void*)0,&g_56,&g_238}};
                uint64_t l_751 = 18446744073709551606UL;
                uint32_t l_752 = 18446744073709551615UL;
                int i, j;
                l_731 = l_730;
                (*g_505) = (+((safe_mul_func_uint8_t_u_u((safe_div_func_uint8_t_u_u((p_33 <= (-7L)), (safe_lshift_func_int16_t_s_s(((safe_mod_func_uint8_t_u_u((safe_add_func_int8_t_s_s((safe_unary_minus_func_uint16_t_u(((((safe_div_func_int8_t_s_s(((((g_520 , (0x563EF6D47E534A1DLL || ((*g_426) != (*g_426)))) <= (safe_mod_func_uint8_t_u_u((l_749 |= g_520.f1), l_750))) == p_33) > 0x6783CF189FCC8E9ELL), g_460)) , (*g_456)) , (***g_364)) , p_34.f0.f1))), l_750)), g_62)) & p_34.f0.f1), p_33)))), l_751)) , l_750));
                --l_752;
                g_129.f0.f0 = (g_129.f0.f1 = (0x53L <= (safe_div_func_int32_t_s_s((safe_add_func_int8_t_s_s((((safe_div_func_int64_t_s_s(((((*g_505) = ((p_34.f2 == 65535UL) >= ((+p_34.f2) < l_749))) , 0xEA76L) > (safe_sub_func_uint32_t_u_u(g_129.f2, g_289[0][4][4].f2))), g_7)) && p_34.f1) > g_105), l_752)), l_752))));
            }
        }
    }
    return l_764;
}



static struct S1  func_36(int32_t  p_37, int8_t * p_38, int8_t * const  p_39, struct S2  p_40, int32_t ** p_41)
{ 
    uint64_t l_623[2][7][5] = {{{18446744073709551614UL,1UL,0x4E54378250759897LL,1UL,18446744073709551614UL},{0UL,0x349D456E84E1E6BFLL,0x75B43022E0A39F4CLL,0xD961B57C31FC31C3LL,0x349D456E84E1E6BFLL},{18446744073709551614UL,0xC4841554CD750943LL,0xC4841554CD750943LL,18446744073709551614UL,0UL},{1UL,0x85693481B34DDAC9LL,4UL,0x349D456E84E1E6BFLL,0x349D456E84E1E6BFLL},{6UL,18446744073709551614UL,6UL,0UL,18446744073709551614UL},{0x349D456E84E1E6BFLL,0x75B43022E0A39F4CLL,0xD961B57C31FC31C3LL,0x349D456E84E1E6BFLL,0xD961B57C31FC31C3LL},{0xB860160B365CF25FLL,0xB860160B365CF25FLL,0x4E54378250759897LL,18446744073709551614UL,1UL}},{{0UL,1UL,0xD961B57C31FC31C3LL,0xD961B57C31FC31C3LL,1UL},{1UL,0xC4841554CD750943LL,6UL,1UL,0UL},{0x85693481B34DDAC9LL,1UL,4UL,1UL,0x85693481B34DDAC9LL},{6UL,0xB860160B365CF25FLL,0xC4841554CD750943LL,0UL,0xB860160B365CF25FLL},{0x85693481B34DDAC9LL,0x75B43022E0A39F4CLL,0x75B43022E0A39F4CLL,0x85693481B34DDAC9LL,0xD961B57C31FC31C3LL},{1UL,18446744073709551614UL,0x4E54378250759897LL,0xB860160B365CF25FLL,0xB860160B365CF25FLL},{0UL,0x85693481B34DDAC9LL,0UL,0xD961B57C31FC31C3LL,0x85693481B34DDAC9LL}}};
    int32_t l_625[3];
    int32_t *l_663[4][6][2] = {{{&l_625[2],&l_625[0]},{&g_62,(void*)0},{(void*)0,&g_62},{&l_625[2],(void*)0},{(void*)0,&l_625[2]},{&g_460,&g_122}},{{&l_625[2],&g_122},{&g_460,&l_625[2]},{(void*)0,(void*)0},{&l_625[2],&g_62},{(void*)0,(void*)0},{&g_62,&l_625[0]}},{{&l_625[2],&l_625[2]},{&l_625[2],&g_460},{&l_625[0],&l_625[2]},{(void*)0,&g_122},{(void*)0,&l_625[2]},{&l_625[0],&g_460}},{{&l_625[2],&l_625[2]},{&l_625[2],&l_625[0]},{&g_460,(void*)0},{(void*)0,(void*)0},{&l_625[2],&g_122},{&g_122,&g_62}}};
    int64_t ****l_683[1][2][1];
    int32_t l_699 = 0x676D2D3FL;
    union U3 l_713 = {0};
    union U3 *l_716 = (void*)0;
    union U3 **l_715 = &l_716;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_625[i] = (-10L);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 1; k++)
                l_683[i][j][k] = (void*)0;
        }
    }
    for (g_237 = 0; (g_237 <= 0); g_237 += 1)
    { 
        uint64_t l_584 = 0UL;
        struct S1 *l_587 = (void*)0;
        int32_t l_639 = 1L;
        int32_t l_645 = (-1L);
        union U3 l_653 = {0};
        ++l_584;
        l_587 = &g_289[0][4][0];
        for (p_37 = 0; (p_37 <= 0); p_37 += 1)
        { 
            struct S0 * const l_588[3][4][6] = {{{&g_129.f0,&g_289[0][4][4].f0,&g_129.f0,&g_289[0][4][4].f0,&g_129.f0,&g_129.f0},{&g_289[0][4][4].f0,&g_289[0][4][4].f0,&g_289[0][4][4].f0,&g_289[0][4][4].f0,&g_129.f0,&g_289[0][4][4].f0},{&g_289[0][4][4].f0,&g_129.f0,&g_289[0][4][4].f0,&g_289[0][4][4].f0,&g_289[0][4][4].f0,&g_289[0][4][4].f0},{&g_129.f0,&g_129.f0,&g_289[0][4][4].f0,&g_129.f0,&g_289[0][4][4].f0,&g_129.f0}},{{&g_289[0][4][4].f0,&g_129.f0,&g_129.f0,&g_129.f0,&g_129.f0,&g_289[0][4][4].f0},{&g_129.f0,&g_289[0][4][4].f0,&g_129.f0,&g_289[0][4][4].f0,&g_129.f0,&g_129.f0},{&g_289[0][4][4].f0,&g_289[0][4][4].f0,&g_289[0][4][4].f0,&g_289[0][4][4].f0,&g_129.f0,&g_289[0][4][4].f0},{&g_289[0][4][4].f0,&g_129.f0,&g_289[0][4][4].f0,&g_289[0][4][4].f0,&g_289[0][4][4].f0,&g_289[0][4][4].f0}},{{&g_129.f0,&g_129.f0,&g_289[0][4][4].f0,&g_129.f0,&g_289[0][4][4].f0,&g_129.f0},{&g_289[0][4][4].f0,&g_129.f0,&g_129.f0,&g_129.f0,&g_129.f0,&g_289[0][4][4].f0},{&g_129.f0,&g_289[0][4][4].f0,&g_129.f0,&g_289[0][4][4].f0,&g_129.f0,&g_129.f0},{&g_289[0][4][4].f0,&g_289[0][4][4].f0,&g_289[0][4][4].f0,&g_289[0][4][4].f0,&g_129.f0,&g_289[0][4][4].f0}}};
            struct S0 **l_589[5];
            struct S0 **l_590 = (void*)0;
            struct S0 **l_591 = &g_456;
            const uint64_t *l_598 = &g_170;
            int32_t l_604 = 1L;
            int32_t l_644 = 4L;
            uint16_t l_646 = 0x12E5L;
            int i, j, k;
            for (i = 0; i < 5; i++)
                l_589[i] = &g_456;
            (*l_591) = l_588[0][2][0];
            for (l_584 = 0; (l_584 <= 4); l_584 += 1)
            { 
                return p_40.f3;
            }
            for (g_458 = 0; (g_458 >= 0); g_458 -= 1)
            { 
                int16_t ***l_597[1][3][2] = {{{&g_521[1][2][1],&g_521[1][2][1]},{&g_521[1][2][1],&g_521[1][2][1]},{&g_521[1][2][1],&g_521[1][2][1]}}};
                int16_t ****l_596 = &l_597[0][2][0];
                int16_t ***l_600[3][5][1] = {{{&g_521[0][1][1]},{&g_521[1][2][4]},{&g_521[0][1][1]},{&g_521[1][2][4]},{&g_521[0][1][1]}},{{&g_521[1][2][4]},{&g_521[0][1][1]},{&g_521[1][2][4]},{&g_521[0][1][1]},{&g_521[1][2][4]}},{{&g_521[0][1][1]},{&g_521[1][2][4]},{&g_521[0][1][1]},{&g_521[1][2][4]},{&g_521[0][1][1]}}};
                int16_t ****l_599 = &l_600[2][4][0];
                uint32_t *l_603 = &g_392;
                int32_t *l_605 = &g_460;
                int64_t *l_624 = &g_107;
                int32_t l_643[4][3] = {{0x65DB7CFDL,0x65DB7CFDL,(-1L)},{0xEC4D1DF3L,(-1L),(-1L)},{(-1L),0xDBD26865L,0x194118A9L},{0xEC4D1DF3L,0xDBD26865L,0xEC4D1DF3L}};
                int i, j, k;
                (*l_605) = (safe_rshift_func_uint8_t_u_s(((g_120[(g_237 + 1)][g_458][(g_458 + 1)] | (safe_lshift_func_uint8_t_u_s(((g_120[(g_237 + 1)][g_237][(g_237 + 4)] > ((*l_603) = ((((*p_39) = ((*p_38) = (((*l_596) = &g_521[0][1][1]) == ((*l_599) = (((void*)0 == l_598) , &g_521[2][1][4]))))) ^ (safe_mod_func_uint32_t_u_u(0xFF75268AL, l_584))) > p_40.f3.f1))) && 0x9960L), 4))) | (-8L)), l_604));
                if ((safe_rshift_func_int8_t_s_u(((safe_add_func_int16_t_s_s((safe_mul_func_uint16_t_u_u(((*g_366) | ((*l_624) = (0x52L != (safe_div_func_int32_t_s_s(((safe_add_func_uint16_t_u_u(((safe_add_func_uint32_t_u_u(g_618[2], ((**g_426) != ((-1L) > (safe_lshift_func_int16_t_s_u((0x912BL <= (safe_div_func_uint64_t_u_u(l_623[1][6][4], 0x12AFFEC663EAFB20LL))), 15)))))) , p_37), l_604)) | (-6L)), p_40.f3.f2))))), 0x8DB8L)), l_584)) >= 0x9FL), 7)))
                { 
                    if (g_192)
                        break;
                }
                else
                { 
                    int32_t *l_626 = &g_62;
                    int32_t *l_627 = &g_460;
                    int32_t *l_628 = &l_625[0];
                    int32_t *l_629 = &l_604;
                    int32_t *l_630 = &g_62;
                    int32_t *l_631 = &g_122;
                    int32_t *l_632 = &g_460;
                    int32_t *l_633 = &g_460;
                    int32_t *l_634 = &l_625[2];
                    int32_t *l_635 = &l_625[2];
                    int32_t *l_636 = (void*)0;
                    int32_t *l_637 = (void*)0;
                    int32_t *l_638 = &l_625[2];
                    int32_t *l_640 = &g_62;
                    int32_t *l_641 = &l_604;
                    int32_t *l_642[5];
                    int i;
                    for (i = 0; i < 5; i++)
                        l_642[i] = &g_122;
                    l_646++;
                }
                for (g_170 = 0; (g_170 <= 0); g_170 += 1)
                { 
                    (*l_605) = ((safe_rshift_func_uint8_t_u_u((safe_mod_func_int32_t_s_s((l_653 , (!l_639)), ((*l_603) = (0L ^ (**g_365))))), g_237)) , (p_40.f3.f0.f0 = ((safe_lshift_func_int8_t_s_s(l_646, 5)) < ((((&g_364 == &g_364) < 0xEE3D49E8L) , &g_308) == p_38))));
                }
            }
        }
    }
    g_122 = (((safe_add_func_uint32_t_u_u(g_289[0][4][4].f2, ((p_40.f6 , (safe_div_func_int32_t_s_s((l_625[2] | l_623[1][0][1]), l_623[1][6][4]))) | (-3L)))) || (safe_sub_func_uint64_t_u_u(l_623[0][5][3], 0xFAFB608B2789D47FLL))) < g_520.f3.f1);
    for (g_51 = 0; (g_51 <= 2); g_51 += 1)
    { 
        int8_t l_665 = 0xB3L;
        uint32_t l_679 = 2UL;
        int32_t l_680 = 0x8D941A17L;
        int16_t *l_686 = &g_72;
        struct S1 l_693 = {{-5803,5},7L,0xF2L};
        int64_t l_696 = (-9L);
        int8_t l_697 = 0x73L;
        uint32_t l_698 = 0xB8693C76L;
        for (g_460 = 0; (g_460 <= 2); g_460 += 1)
        { 
            struct S1 l_676 = {{9643,-7},0x46L,0UL};
            int i;
            g_520.f0 = ((!g_618[g_460]) && l_665);
            g_666++;
            if (l_665)
                break;
            for (g_520.f1 = 0; (g_520.f1 != (-24)); g_520.f1 = safe_sub_func_uint8_t_u_u(g_520.f1, 8))
            { 
                if ((((***g_425) , &g_170) != &g_192))
                { 
                    return g_520.f3;
                }
                else
                { 
                    struct S0 *l_671 = &g_520.f3.f0;
                    int32_t * const l_672 = (void*)0;
                    int32_t **l_673 = &l_663[1][4][0];
                    (*l_671) = ((*g_456) = (*g_456));
                    (*l_673) = l_672;
                }
                for (g_437 = 0; (g_437 < 10); g_437++)
                { 
                    return l_676;
                }
            }
        }
        g_520.f3.f0.f0 = p_40.f4;
        l_680 = ((safe_lshift_func_uint8_t_u_u((l_679 > p_40.f1), 1)) || (g_308 | 0UL));
        p_40.f3.f0.f1 = (safe_div_func_int32_t_s_s(((l_680 |= (((l_683[0][1][0] != ((l_665 >= (safe_lshift_func_int16_t_s_s(((((*l_686) = 0x257DL) < (safe_mod_func_uint32_t_u_u(0xC02D5F35L, (safe_lshift_func_int8_t_s_s((safe_add_func_int64_t_s_s(p_40.f3.f0.f0, ((l_693 , ((((safe_mod_func_uint16_t_u_u(((((p_40 , l_696) < p_40.f0) != l_697) != g_51), l_698)) | l_693.f0.f1) > l_693.f2) != p_40.f1)) , p_40.f3.f2))), l_679))))) > l_665), l_699))) , l_683[0][1][0])) <= (**g_426)) , (**g_365))) , p_40.f3.f2), g_618[0]));
    }
    if ((safe_lshift_func_int8_t_s_s((*p_39), 6)))
    { 
        union U3 l_706[1][6] = {{{0},{0},{0},{0},{0},{0}}};
        const int32_t l_714 = 0L;
        int32_t l_717 = 9L;
        int i, j;
        l_717 = (safe_rshift_func_int16_t_s_s(((--(*g_427)) == ((((l_706[0][2] , ((void*)0 == g_707)) && (safe_add_func_int8_t_s_s((safe_sub_func_int32_t_s_s((+(0x27F6B718L >= (-5L))), g_520.f4)), ((((l_713 , p_40.f3.f2) , 0xAEL) > 0xEDL) & l_714)))) , (void*)0) != l_715)), 13));
    }
    else
    { 
        uint64_t l_718 = 0x18F8445BA885F137LL;
        (*p_41) = (*p_41);
        (*g_456) = (*g_456);
        --l_718;
    }
    return p_40.f3;
}



static int16_t  func_42(int8_t * p_43, int8_t  p_44)
{ 
    uint32_t l_58 = 0xD46FEDEAL;
    int32_t l_69 = (-7L);
    int64_t *l_83 = &g_49;
    int16_t *l_88 = &g_72;
    int32_t l_110 = 0x66F7480EL;
    int64_t l_161 = 0xF5E3F86CA3B944F5LL;
    uint8_t *l_173 = &g_129.f2;
    int32_t l_191 = 0x267AAC25L;
    int32_t *l_218 = &l_191;
    struct S0 l_225 = {-4744,-5};
    int32_t l_229[6][2][6] = {{{0x97578CB1L,1L,0x0F0F3967L,(-6L),0x0F0F3967L,1L},{0x2B7744F4L,(-6L),0x9C1A7F16L,1L,(-1L),3L}},{{1L,(-1L),3L,0x0F0F3967L,0xE8A56362L,0x033FFB02L},{(-1L),(-1L),0x256F5496L,0x256F5496L,(-1L),(-1L)}},{{(-1L),(-6L),1L,0x2677F0ADL,0x0F0F3967L,5L},{0x256F5496L,1L,0xE8A56362L,0x97578CB1L,(-8L),6L}},{{0x256F5496L,0x2677F0ADL,0x97578CB1L,0x2677F0ADL,0x256F5496L,0x0F0F3967L},{(-1L),0x0F0F3967L,(-8L),0x256F5496L,6L,0x2B7744F4L}},{{(-1L),5L,6L,0x0F0F3967L,0x2B7744F4L,0x2B7744F4L},{1L,(-8L),(-8L),1L,0x033FFB02L,0x0F0F3967L}},{{0x2B7744F4L,0x9C1A7F16L,0x97578CB1L,(-6L),0x2677F0ADL,6L},{0x97578CB1L,(-1L),0xE8A56362L,5L,0x2677F0ADL,5L}}};
    int32_t l_230 = 0x0BCFF1FCL;
    uint64_t *l_247[6][7] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_170,&g_192,&g_170,&g_170,&g_192,&g_170,&g_170},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_192,&g_170,&g_170,&g_192,&g_170,&g_170,&g_192},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_192,&g_192,&g_170,&g_192,&g_192,&g_170,&g_192}};
    uint32_t l_284[3][7][5] = {{{18446744073709551615UL,1UL,0x1B913420L,1UL,18446744073709551615UL},{8UL,0x6385176CL,0UL,0xBC38D9B2L,0x0EA851A2L},{0xBE0B4FA1L,0xBC94A9F2L,0xDE3B3F70L,0x63CF0B93L,0x63CF0B93L},{1UL,0x5C2DBD2CL,1UL,0x6385176CL,0x0EA851A2L},{0xFAD74BA8L,0x63CF0B93L,0xBC94A9F2L,0xA1A4CF78L,18446744073709551615UL},{0x0EA851A2L,9UL,0x552D051CL,0x6AAFB0FEL,0UL},{0xDE3B3F70L,0xA3C4AB22L,0xBC94A9F2L,18446744073709551615UL,0x49D92129L}},{{18446744073709551606UL,18446744073709551608UL,1UL,0x6EA3173BL,1UL},{0xA5461076L,0xDE3B3F70L,0xDE3B3F70L,0xA5461076L,1UL},{18446744073709551606UL,0x6AAFB0FEL,0UL,0x275CEDE9L,0x5D4D9921L},{0xDE3B3F70L,0x1D2EC96DL,0x1B913420L,0xBC94A9F2L,0x1B913420L},{0x0EA851A2L,0xDA4B8048L,0x5D4D9921L,0x275CEDE9L,0UL},{0xFAD74BA8L,0xA1A4CF78L,1UL,0xA5461076L,0xDE3B3F70L},{1UL,0x6EA3173BL,1UL,0x6EA3173BL,1UL}},{{0xBE0B4FA1L,0xA1A4CF78L,0x49D92129L,18446744073709551615UL,0xBC94A9F2L},{8UL,0xDA4B8048L,0UL,0x6AAFB0FEL,0x552D051CL},{18446744073709551615UL,0x1D2EC96DL,18446744073709551615UL,0xA1A4CF78L,0xBC94A9F2L},{0x60489EA2L,0x6AAFB0FEL,0x0EA851A2L,0x6385176CL,1UL},{0xBC94A9F2L,0xDE3B3F70L,0x63CF0B93L,0x63CF0B93L,0xDE3B3F70L},{0UL,18446744073709551608UL,0x0EA851A2L,0xBC38D9B2L,0UL},{0x1D2EC96DL,0xA3C4AB22L,18446744073709551615UL,1UL,0x1B913420L}}};
    struct S1 *l_287 = &g_129;
    uint64_t l_293 = 1UL;
    union U3 *l_319 = &g_80;
    uint32_t l_482 = 1UL;
    int64_t ***l_510 = (void*)0;
    int64_t l_512 = 1L;
    int32_t *l_575 = (void*)0;
    int32_t *l_576 = &l_69;
    int32_t *l_577 = &l_229[3][0][4];
    int32_t *l_578 = &g_122;
    int32_t *l_579[2][5][4] = {{{&l_229[0][0][4],&l_229[0][0][4],(void*)0,&g_62},{&g_62,&l_230,(void*)0,&l_230},{&l_229[0][0][4],&l_69,(void*)0,(void*)0},{&l_230,&l_69,&l_69,&l_230},{&l_69,&l_230,&l_229[0][0][4],&g_62}},{{&l_69,&l_229[0][0][4],&l_69,(void*)0},{&l_230,&g_62,(void*)0,(void*)0},{&l_229[0][0][4],&l_229[0][0][4],(void*)0,&g_62},{&g_62,&l_230,(void*)0,&l_230},{&l_229[0][0][4],&l_69,(void*)0,(void*)0}}};
    int i, j, k;
lbl_397:
    if (l_58)
    { 
        int64_t l_70[2];
        int32_t l_71 = 0xB2BF7FA1L;
        struct S0 l_89 = {-8816,2};
        uint32_t l_126 = 18446744073709551606UL;
        int32_t *l_131 = &l_69;
        int i;
        for (i = 0; i < 2; i++)
            l_70[i] = 5L;
        for (l_58 = 15; (l_58 <= 52); l_58++)
        { 
            int32_t *l_61 = &g_62;
            int32_t *l_63 = &g_62;
            int32_t *l_64 = &g_62;
            int32_t *l_65 = &g_62;
            int32_t *l_66 = &g_62;
            int32_t *l_67 = &g_62;
            int32_t *l_68[6][3][5] = {{{(void*)0,(void*)0,&g_7,(void*)0,(void*)0},{&g_7,&g_7,&g_7,&g_7,(void*)0},{(void*)0,&g_6,&g_6,&g_6,(void*)0}},{{&g_62,&g_6,&g_6,&g_62,&g_7},{&g_7,&g_6,&g_6,(void*)0,&g_6},{&g_62,&g_62,&g_7,&g_62,&g_62}},{{&g_6,&g_6,(void*)0,(void*)0,&g_6},{(void*)0,&g_62,&g_62,&g_62,&g_62},{(void*)0,&g_6,&g_7,&g_6,&g_6}},{{&g_62,&g_62,&g_62,&g_7,&g_62},{&g_6,&g_6,&g_6,(void*)0,&g_6},{&g_62,&g_62,(void*)0,&g_7,&g_7}},{{(void*)0,&g_6,(void*)0,(void*)0,(void*)0},{(void*)0,&g_62,&g_62,&g_62,(void*)0},{&g_6,&g_6,&g_6,&g_6,(void*)0}},{{&g_62,&g_62,&g_62,(void*)0,&g_62},{&g_7,&g_6,(void*)0,&g_6,&g_7},{&g_62,&g_62,(void*)0,(void*)0,&g_6}}};
            struct S0 l_76[4][1] = {{{4446,-6}},{{4446,-6}},{{4446,-6}},{{4446,-6}}};
            int32_t l_78 = 6L;
            union U3 l_96 = {0};
            int32_t l_121 = 0x13D9F7CDL;
            int i, j, k;
            ++g_73;
            if (l_69)
                break;
            for (g_49 = 0; (g_49 <= 1); g_49 += 1)
            { 
                struct S0 *l_77 = &l_76[2][0];
                uint8_t *l_79 = &g_56;
                int16_t *l_87 = (void*)0;
                uint16_t *l_102 = (void*)0;
                int32_t l_103[4][5];
                uint32_t l_104 = 0UL;
                int64_t *l_106 = &g_107;
                uint32_t l_123 = 0UL;
                int32_t **l_130[7][6][6] = {{{&l_63,&l_63,&l_63,(void*)0,&l_63,(void*)0},{&l_68[2][0][3],&l_63,&l_68[5][0][2],&l_63,&l_68[2][0][3],(void*)0},{&l_63,(void*)0,&l_63,&l_63,&l_63,&l_61},{&l_68[2][0][3],(void*)0,&l_68[5][0][2],(void*)0,&l_68[2][0][3],&l_61},{&l_63,&l_63,&l_63,(void*)0,&l_63,(void*)0},{&l_68[2][0][3],&l_63,&l_68[5][0][2],&l_63,&l_68[2][0][3],(void*)0}},{{&l_63,(void*)0,&l_63,&l_63,&l_63,&l_61},{&l_68[2][0][3],(void*)0,&l_68[5][0][2],(void*)0,&l_68[2][0][3],&l_61},{&l_63,&l_63,&l_63,(void*)0,&l_63,(void*)0},{&l_68[2][0][3],&l_63,&l_68[5][0][2],&l_63,&l_68[2][0][3],(void*)0},{&l_63,(void*)0,&l_63,&l_63,&l_63,&l_61},{&l_68[2][0][3],(void*)0,&l_68[5][0][2],(void*)0,&l_68[2][0][3],&l_61}},{{&l_63,&l_63,&l_63,(void*)0,&l_63,(void*)0},{&l_68[2][0][3],&l_63,&l_68[5][0][2],&l_63,&l_68[2][0][3],(void*)0},{&l_63,(void*)0,&l_63,&l_63,&l_63,&l_61},{&l_68[2][0][3],(void*)0,&l_68[5][0][2],(void*)0,&l_68[2][0][3],&l_61},{&l_63,&l_63,&l_63,(void*)0,&l_68[5][0][2],&l_63},{&l_65,&l_68[5][0][2],&l_65,&l_68[5][0][2],&l_65,&l_63}},{{&l_68[5][0][2],&l_63,&l_63,&l_68[5][0][2],&l_68[5][0][2],(void*)0},{&l_65,&l_63,&l_65,&l_63,&l_65,(void*)0},{&l_68[5][0][2],&l_68[5][0][2],&l_63,&l_63,&l_68[5][0][2],&l_63},{&l_65,&l_68[5][0][2],&l_65,&l_68[5][0][2],&l_65,&l_63},{&l_68[5][0][2],&l_63,&l_63,&l_68[5][0][2],&l_68[5][0][2],(void*)0},{&l_65,&l_63,&l_65,&l_63,&l_65,(void*)0}},{{&l_68[5][0][2],&l_68[5][0][2],&l_63,&l_63,&l_68[5][0][2],&l_63},{&l_65,&l_68[5][0][2],&l_65,&l_68[5][0][2],&l_65,&l_63},{&l_68[5][0][2],&l_63,&l_63,&l_68[5][0][2],&l_68[5][0][2],(void*)0},{&l_65,&l_63,&l_65,&l_63,&l_65,(void*)0},{&l_68[5][0][2],&l_68[5][0][2],&l_63,&l_63,&l_68[5][0][2],&l_63},{&l_65,&l_68[5][0][2],&l_65,&l_68[5][0][2],&l_65,&l_63}},{{&l_68[5][0][2],&l_63,&l_63,&l_68[5][0][2],&l_68[5][0][2],(void*)0},{&l_65,&l_63,&l_65,&l_63,&l_65,(void*)0},{&l_68[5][0][2],&l_68[5][0][2],&l_63,&l_63,&l_68[5][0][2],&l_63},{&l_65,&l_68[5][0][2],&l_65,&l_68[5][0][2],&l_65,&l_63},{&l_68[5][0][2],&l_63,&l_63,&l_68[5][0][2],&l_68[5][0][2],(void*)0},{&l_65,&l_63,&l_65,&l_63,&l_65,(void*)0}},{{&l_68[5][0][2],&l_68[5][0][2],&l_63,&l_63,&l_68[5][0][2],&l_63},{&l_65,&l_68[5][0][2],&l_65,&l_68[5][0][2],&l_65,&l_63},{&l_68[5][0][2],&l_63,&l_63,&l_68[5][0][2],&l_68[5][0][2],(void*)0},{&l_65,&l_63,&l_65,&l_63,&l_65,(void*)0},{&l_68[5][0][2],&l_68[5][0][2],&l_63,&l_63,&l_68[5][0][2],&l_63},{&l_65,&l_68[5][0][2],&l_65,&l_68[5][0][2],&l_65,&l_63}}};
                int i, j, k;
                for (i = 0; i < 4; i++)
                {
                    for (j = 0; j < 5; j++)
                        l_103[i][j] = 0x28C401F3L;
                }
                if ((((((*l_77) = l_76[2][0]) , (l_70[g_49] < (l_70[g_49] > (g_6 >= ((*l_79) = l_78))))) == (g_80 , (l_69 = (p_44 <= p_44)))) > 18446744073709551615UL))
                { 
                    union U3 *l_81 = &g_80;
                    union U3 **l_82 = &l_81;
                    (*l_66) ^= 0xCC9215A1L;
                    (*l_82) = l_81;
                    return g_72;
                }
                else
                { 
                    uint16_t *l_84 = &g_73;
                    int32_t l_85 = (-1L);
                    int16_t *l_86 = &g_72;
                    (*l_65) = ((void*)0 == l_83);
                    l_69 &= (((*l_84) = (((g_7 >= 0xD142722CL) != (*l_65)) && 0xB5D76640L)) | ((*l_86) = l_85));
                    (*l_67) = ((l_87 = (void*)0) != l_88);
                    (*l_77) = l_89;
                    if (g_51)
                        continue;
                }
                if ((safe_sub_func_int16_t_s_s(((((((*l_106) ^= (g_62 == ((g_80.f3 = g_51) & (g_105 = (safe_rshift_func_uint16_t_u_u((l_70[g_49] & (((safe_div_func_uint64_t_u_u((0xC131L & (((l_96 , (l_71 = (g_72 = (p_44 > (l_103[0][3] = ((safe_sub_func_uint8_t_u_u(((safe_rshift_func_uint16_t_u_s((+((g_72 & l_70[g_49]) <= g_72)), (*l_64))) , 0xAAL), l_69)) | 0xA00283E5L)))))) , l_104) > (*l_67))), g_62)) , p_44) <= p_44)), 11)))))) > 0xC50EEEE7CDA8B219LL) | l_69) == g_49) == l_58), p_44)))
                { 
                    int32_t **l_108 = &l_68[5][0][2];
                    int32_t l_109 = 0xD718789BL;
                    (*l_108) = ((*l_77) , (void*)0);
                    if (l_69)
                        break;
                    if (g_105)
                        continue;
                    g_111++;
                }
                else
                { 
                    const int32_t *l_115 = &g_80.f1;
                    const int32_t **l_114 = &l_115;
                    const int32_t *l_117[3][7] = {{&l_103[0][3],&g_62,&g_6,&g_80.f1,&g_80.f1,&g_6,&g_62},{&l_103[0][3],&g_62,&l_71,&l_103[0][3],&l_69,&l_69,&l_103[0][3]},{&l_71,&g_62,&l_71,&l_69,&g_62,&g_62,&g_62}};
                    const int32_t **l_116 = &l_117[2][5];
                    int32_t l_118 = 0xCDA5772CL;
                    int8_t l_119 = (-7L);
                    int i, j;
                    (*l_116) = ((*l_114) = &l_110);
                    ++l_123;
                    if (l_123)
                        continue;
                    ++l_126;
                    (*l_114) = (g_129 , ((*l_116) = (void*)0));
                }
                l_131 = &l_71;
            }
        }
    }
    else
    { 
        int32_t *l_132 = &g_62;
        int32_t **l_133 = &l_132;
        const union U3 *l_179 = &g_80;
        int32_t l_181 = 0x34D09820L;
        int32_t l_209 = (-8L);
        int32_t l_210 = 0x82BAD39FL;
        int32_t l_211 = 4L;
        int32_t l_212 = 0xDA3CCD9CL;
lbl_150:
        (*l_133) = l_132;
        (**l_133) = 1L;
        for (g_56 = (-12); (g_56 <= 48); g_56 = safe_add_func_uint16_t_u_u(g_56, 4))
        { 
            struct S1 l_138[1] = {{{-2288,0},-1L,1UL}};
            struct S0 *l_159 = (void*)0;
            struct S2 l_162 = {9112,0xAFL,2602,{{-1046,-0},0x01L,255UL},500,776,504};
            int i;
            if (p_44)
            { 
                int32_t l_143 = 0x8FEB0CFFL;
                uint16_t *l_149 = &g_73;
                int64_t * const l_163 = &g_49;
                int32_t l_190 = 6L;
                struct S0 *l_195 = &l_162.f3.f0;
                if (((safe_mul_func_uint16_t_u_u((l_138[0] , p_44), (safe_lshift_func_uint16_t_u_u(p_44, ((*l_149) = (safe_add_func_int32_t_s_s((((l_143 > p_44) > 0x1AEF994BCA523A44LL) || (safe_sub_func_int64_t_s_s((~(safe_sub_func_int8_t_s_s(((l_69 || p_44) <= 0x87L), 0x9BL))), 0L))), 4294967288UL))))))) <= g_72))
                { 
                    uint64_t *l_160 = &g_80.f3;
                    int32_t *l_164 = (void*)0;
                    int32_t *l_165 = &g_122;
                    uint64_t *l_168 = (void*)0;
                    uint64_t *l_169[3][4] = {{&g_170,(void*)0,(void*)0,&g_170},{(void*)0,&g_170,(void*)0,(void*)0},{&g_170,&g_170,(void*)0,&g_170}};
                    uint32_t *l_178 = &l_58;
                    int32_t *l_180[3];
                    int i, j;
                    for (i = 0; i < 3; i++)
                        l_180[i] = &l_110;
                    if (g_107)
                        goto lbl_150;
                    if (g_105)
                        break;
                    (*l_165) &= (safe_mod_func_int8_t_s_s((safe_lshift_func_uint16_t_u_u(((l_138[0].f0.f0 || (0x43L ^ (&g_107 != ((((((*l_160) = ((safe_sub_func_int8_t_s_s((p_44 & 0xBAC1L), (l_143 , (safe_rshift_func_uint16_t_u_s(((void*)0 == l_159), l_143))))) < p_44)) || l_161) >= l_138[0].f0.f0) , l_162) , l_163)))) < 0x967B358CL), l_110)), (**l_133)));
                    l_181 ^= (((((safe_lshift_func_int16_t_s_s(((*l_88) = ((g_73 , (((*l_178) = (((--g_170) < ((void*)0 == l_173)) | ((*l_132) < ((((g_122 || ((l_149 == (((((safe_sub_func_int64_t_s_s(((*l_163) = ((safe_mul_func_uint16_t_u_u(g_129.f0.f0, 0xD2FDL)) >= 0xBFBABA671F50AE74LL)), 0UL)) == p_44) , 4UL) > g_129.f1) , &g_73)) , 0x0BABL)) , 0xF822DF4C28BF459CLL) > (*l_132)) || 0x36L)))) , g_111)) || 0xDFBDL)), 11)) || g_72) , l_179) == (void*)0) & g_120[1][0][2]);
                }
                else
                { 
                    int32_t *l_182 = &g_122;
                    int32_t *l_183 = &l_110;
                    int32_t *l_184 = &l_143;
                    int32_t *l_185 = &g_122;
                    int32_t *l_186 = &l_181;
                    int32_t *l_187 = &g_62;
                    int32_t *l_188 = &l_181;
                    int32_t *l_189[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_189[i] = &l_69;
                    g_192--;
                    (**l_133) |= ((void*)0 == &g_73);
                }
                (*l_195) = g_129.f0;
            }
            else
            { 
                if ((**l_133))
                    break;
            }
            (*l_133) = &g_62;
            (**l_133) = (safe_unary_minus_func_int32_t_s(p_44));
            if (l_162.f3.f0.f0)
                goto lbl_150;
            g_197 = g_197;
        }
        for (g_72 = 0; (g_72 >= 10); ++g_72)
        { 
            int32_t *l_201 = (void*)0;
            int32_t *l_202 = &l_181;
            int32_t *l_203 = &g_122;
            int32_t *l_204 = &l_69;
            int32_t *l_205 = &l_181;
            int32_t *l_206 = &l_110;
            int32_t *l_207 = &l_181;
            int32_t *l_208[2];
            int i;
            for (i = 0; i < 2; i++)
                l_208[i] = &l_191;
            --g_213;
        }
        for (l_110 = 0; (l_110 > 23); l_110++)
        { 
            return p_44;
        }
    }
lbl_262:
    (*l_218) = (0x4AL || ((void*)0 != &l_161));
    if ((((*l_218) , (safe_div_func_int32_t_s_s((-1L), ((*l_218) = (safe_rshift_func_uint8_t_u_s((*l_218), 4)))))) >= (safe_mul_func_uint16_t_u_u(((g_129.f0 = l_225) , (0xC6B9L & (g_73 = (safe_add_func_int8_t_s_s(((safe_unary_minus_func_int16_t_s(l_229[0][0][4])) < (((((-2L) <= l_225.f1) | 0x66L) > l_161) > 0x15568798L)), l_230))))), p_44))))
    { 
        int32_t **l_231 = (void*)0;
        int32_t **l_232 = &l_218;
        int32_t l_233[4][4][7] = {{{(-2L),0x29163425L,0x34C24281L,0x29163425L,(-2L),0x29163425L,0L},{(-7L),1L,0x06D39F52L,0x28B3A168L,0xFB38D032L,(-7L),0xFD0524EEL},{(-1L),(-1L),(-1L),(-6L),0L,(-4L),0L},{(-7L),0x28B3A168L,0x28B3A168L,(-7L),1L,0x06D39F52L,0x28B3A168L}},{{0x3A0128C6L,0x29163425L,0L,(-6L),0L,0x29163425L,0x3A0128C6L},{0L,0xFB38D032L,1L,0x28B3A168L,0L,0L,0x28B3A168L},{(-1L),(-1L),(-1L),(-4L),(-1L),0xC06EC849L,0L},{0xFB38D032L,0xFD0524EEL,1L,1L,1L,0x28B3A168L,0xFD0524EEL}},{{0x34C24281L,(-4L),0L,0xC06EC849L,(-2L),0xC06EC849L,0L},{0L,0L,0x28B3A168L,1L,0xFB38D032L,0L,(-1L)},{0L,(-4L),(-1L),(-4L),0L,0x29163425L,(-1L)},{(-7L),0xFD0524EEL,0x06D39F52L,0xFB38D032L,0xFB38D032L,0x06D39F52L,0xFD0524EEL}},{{0L,(-1L),1L,(-6L),(-2L),(-4L),(-2L)},{(-7L),0xFB38D032L,0x28B3A168L,0x06D39F52L,1L,(-7L),0x28B3A168L},{0L,0x29163425L,(-1L),(-6L),(-1L),0x29163425L,0L},{0L,0x28B3A168L,1L,0xFB38D032L,0L,(-1L),0x28B3A168L}}};
        int32_t *l_234 = &l_110;
        int32_t *l_235[7] = {&l_69,&l_233[2][0][2],&l_69,&l_69,&l_233[2][0][2],&l_69,&l_69};
        int16_t l_236 = (-2L);
        int i, j, k;
        (*l_232) = &g_62;
        g_238++;
    }
    else
    { 
        int32_t *l_241 = (void*)0;
        int32_t *l_242 = &l_230;
        struct S1 l_248 = {{11058,0},-1L,255UL};
        int16_t *l_255 = &g_120[1][0][5];
        uint16_t l_271[2];
        struct S1 *l_288 = &g_289[0][4][4];
        int64_t **l_357 = &l_83;
        int64_t *** const l_356 = &l_357;
        int32_t l_390 = 1L;
        int32_t l_391 = (-1L);
        union U3 *l_398 = &g_80;
        int32_t l_407 = 0L;
        uint16_t **l_411 = (void*)0;
        uint8_t *l_492 = &l_248.f2;
        uint8_t *l_493 = &g_56;
        int32_t l_567 = (-1L);
        int i;
        for (i = 0; i < 2; i++)
            l_271[i] = 65535UL;
        (*l_242) |= ((*l_218) = 0xF8B939B4L);
        if ((0L | ((safe_mul_func_int16_t_s_s((((*l_173) = (safe_add_func_uint64_t_u_u((l_247[0][4] == &g_170), (l_248 , g_51)))) & g_49), (safe_sub_func_int64_t_s_s(((g_2 > 0x3890L) ^ 0xD8A2L), (*l_218))))) < (*l_218))))
        { 
            union U3 *l_256 = &g_80;
            int32_t l_278 = 0x5EE7065CL;
            int32_t l_280 = 0xDD54A5A2L;
            int32_t l_281 = 0xD38EBB08L;
            int32_t l_282 = 0x3ED0F16CL;
            uint8_t *l_296 = &g_129.f2;
            int32_t l_322 = (-1L);
            uint64_t *l_335 = (void*)0;
            uint32_t l_338 = 0xD82E38CEL;
            union U3 **l_354 = &l_256;
            union U3 ***l_353 = &l_354;
            int64_t ****l_367 = &g_364;
            uint32_t l_368[6][3][5];
            int i, j, k;
            for (i = 0; i < 6; i++)
            {
                for (j = 0; j < 3; j++)
                {
                    for (k = 0; k < 5; k++)
                        l_368[i][j][k] = 0UL;
                }
            }
            g_62 ^= (safe_div_func_uint32_t_u_u(((safe_lshift_func_int16_t_s_s(((g_192 < (g_129.f1 ^ (&g_120[1][0][2] != l_255))) | ((void*)0 != l_256)), (safe_sub_func_int64_t_s_s(p_44, p_44)))) & p_44), p_44));
            for (l_248.f2 = (-8); (l_248.f2 < 13); l_248.f2 = safe_add_func_int64_t_s_s(l_248.f2, 2))
            { 
                uint16_t *l_272 = (void*)0;
                uint16_t *l_273 = &g_73;
                int32_t l_279 = 8L;
                int32_t l_283 = 0x255ED363L;
                int32_t l_292 = 0xE1C54564L;
                int32_t **l_297 = &l_218;
                int8_t *l_307 = &g_308;
                union U3 *l_320 = &g_80;
                int32_t l_325 = 0xD0CF6ABFL;
                struct S1 **l_328 = &l_287;
                uint64_t *l_336 = &g_170;
                uint32_t *l_337 = &l_58;
                uint32_t l_339 = 0x3697CAC5L;
                int32_t *l_340 = &l_292;
                for (g_111 = 0; (g_111 <= 5); g_111 += 1)
                { 
                    int32_t **l_261 = &l_242;
                    (*l_261) = (void*)0;
                    if (g_73)
                        goto lbl_262;
                }
            }
            (*l_218) = (((*l_296)++) >= ((safe_sub_func_uint32_t_u_u(((safe_mod_func_int64_t_s_s(0xB463BC3F93BFE93ELL, (((safe_sub_func_int64_t_s_s(((safe_add_func_uint16_t_u_u((g_2 | 18446744073709551615UL), ((safe_rshift_func_uint16_t_u_u((((*l_353) = &l_319) == (void*)0), 10)) , (((((~p_44) < (g_238 , 0L)) & l_278) || 0xDB2FL) , 65530UL)))) , p_44), g_129.f0.f1)) & g_73) || (-6L)))) >= p_44), p_44)) , g_2));
            if ((((void*)0 == l_356) || (safe_div_func_uint16_t_u_u((safe_div_func_uint32_t_u_u((safe_div_func_uint64_t_u_u(p_44, p_44)), (((*l_296) = (((*l_367) = g_364) == (void*)0)) && g_308))), 0xC8C2L))))
            { 
                int32_t **l_371 = (void*)0;
                int32_t **l_372 = (void*)0;
                int32_t **l_373 = &l_241;
                (*l_218) = (l_368[0][2][3] < (g_62 > (g_7 <= (safe_lshift_func_int16_t_s_u(g_6, 15)))));
                (*l_373) = (void*)0;
            }
            else
            { 
                struct S0 *l_374 = (void*)0;
                struct S0 *l_375 = &l_225;
                int32_t l_387 = (-5L);
                int32_t l_388 = 0xCEFD5815L;
                int32_t l_389[5][1] = {{6L},{3L},{6L},{3L},{6L}};
                int i, j;
                (*l_375) = l_225;
                for (g_56 = 0; (g_56 <= 1); g_56 += 1)
                { 
                    int32_t l_376 = 0L;
                    int32_t *l_377 = &l_191;
                    int32_t *l_378 = &l_69;
                    int32_t *l_379 = &g_62;
                    int32_t *l_380 = &g_62;
                    int32_t *l_381 = &g_122;
                    int32_t *l_382 = (void*)0;
                    int32_t *l_383 = (void*)0;
                    int32_t *l_384 = (void*)0;
                    int32_t *l_385 = (void*)0;
                    int32_t *l_386[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_386[i] = &l_230;
                    ++g_392;
                }
            }
        }
        else
        { 
            int32_t *l_395 = (void*)0;
            struct S0 *l_396 = &g_129.f0;
            int64_t * const l_402 = &g_49;
            int16_t l_417[6] = {0x20BDL,0x20BDL,0x20BDL,0x20BDL,0x20BDL,0x20BDL};
            struct S2 l_455[4] = {{-3500,-1L,1689,{{2832,1},0x1DL,1UL},2012,3311,152},{-3500,-1L,1689,{{2832,1},0x1DL,1UL},2012,3311,152},{-3500,-1L,1689,{{2832,1},0x1DL,1UL},2012,3311,152},{-3500,-1L,1689,{{2832,1},0x1DL,1UL},2012,3311,152}};
            int32_t l_464 = (-1L);
            int i;
lbl_484:
            (*l_396) = ((p_44 ^ ((void*)0 != l_395)) , g_129.f0);
            for (g_308 = 3; (g_308 >= 0); g_308 -= 1)
            { 
                if (g_289[0][4][4].f0.f0)
                    break;
                if (p_44)
                    goto lbl_397;
                for (g_192 = 0; g_192 < 3; g_192 += 1)
                {
                    for (g_62 = 0; g_62 < 7; g_62 += 1)
                    {
                        for (l_230 = 0; l_230 < 5; l_230 += 1)
                        {
                            l_284[g_192][g_62][l_230] = 0x92546ABEL;
                        }
                    }
                }
            }
            for (g_129.f2 = 0; (g_129.f2 <= 1); g_129.f2 += 1)
            { 
                uint64_t l_401 = 0x2B3286809131B508LL;
                int32_t l_403[7][6] = {{0L,0xF22B5428L,0x5D3EBFB3L,0L,(-1L),9L},{0x59BBE5D6L,9L,0x5D3EBFB3L,9L,0x59BBE5D6L,0x33ABA20BL},{1L,9L,0L,0xE83A8E64L,(-1L),0xE83A8E64L},{1L,0xF22B5428L,1L,9L,0L,0xE83A8E64L},{0x59BBE5D6L,0x33ABA20BL,0L,0L,0L,0x33ABA20BL},{0L,0xF22B5428L,0x5D3EBFB3L,0L,(-1L),9L},{0x59BBE5D6L,9L,0x5D3EBFB3L,9L,0x59BBE5D6L,0x33ABA20BL}};
                int16_t *l_428 = &g_321;
                int8_t l_457 = 0x44L;
                int16_t l_459 = 5L;
                int i, j;
                g_122 &= (p_44 ^ (((l_319 = l_398) != (*g_197)) <= ((safe_lshift_func_uint8_t_u_u(((3UL && (((*l_218) ^= (l_401 = p_44)) , ((void*)0 == l_402))) <= g_129.f0.f0), g_72)) <= p_44)));
                if (g_2)
                { 
                    int32_t *l_404 = &l_403[5][4];
                    int32_t *l_405 = &l_403[6][4];
                    int32_t *l_406[2];
                    uint8_t l_408 = 0xC5L;
                    int i;
                    for (i = 0; i < 2; i++)
                        l_406[i] = &l_390;
                    --l_408;
                }
                else
                { 
                    uint16_t ***l_412 = &l_411;
                    uint32_t *l_422 = (void*)0;
                    int32_t *l_429 = &l_403[0][4];
                    int32_t *l_430 = (void*)0;
                    int32_t *l_431 = &l_191;
                    int32_t *l_432 = &l_391;
                    int32_t *l_433 = &l_390;
                    int32_t *l_434 = &l_390;
                    int32_t *l_435 = &l_391;
                    int32_t *l_436[2];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_436[i] = &l_391;
                    (*l_412) = l_411;
                    g_62 &= (((-7L) & ((((safe_rshift_func_uint16_t_u_s((safe_sub_func_int8_t_s_s(0L, l_417[1])), (safe_sub_func_uint16_t_u_u((safe_div_func_int8_t_s_s((g_129.f0.f1 & (((((g_111++) || (g_80.f2 = g_120[1][0][2])) != (&l_411 != g_425)) , (void*)0) == (void*)0)), 0xC6L)), (*l_242))))) ^ p_44) , l_428) == (void*)0)) || (***g_364));
                    ++g_437;
                    (*l_435) ^= (g_237 != ((safe_lshift_func_int8_t_s_s((safe_mod_func_int32_t_s_s(((((safe_add_func_uint32_t_u_u((l_403[6][4] &= l_401), (safe_div_func_int64_t_s_s(((((*l_396) , (safe_rshift_func_uint8_t_u_u(p_44, (!((safe_sub_func_uint32_t_u_u(((((safe_rshift_func_uint8_t_u_u(p_44, (l_455[2] , ((void*)0 == g_456)))) & 0x3AE9033FL) | g_321) && l_457), 1UL)) && p_44))))) , g_62) | 0x6A27L), 0x884551AED713EB59LL)))) <= p_44) && g_458) , 0x1D5E6907L), 0x38D90144L)), (*l_218))) , g_321));
                    g_461--;
                }
                (*l_242) = p_44;
                (*l_218) = (-10L);
                return l_464;
            }
            if (((safe_sub_func_uint64_t_u_u((safe_sub_func_uint64_t_u_u((l_482 = (((((safe_mul_func_uint16_t_u_u((((((*l_242) = (*l_218)) ^ ((+((((l_225 , 0x5D95L) & ((*l_255) = ((((safe_mod_func_uint64_t_u_u(g_129.f1, (p_44 && (safe_div_func_uint8_t_u_u(((safe_lshift_func_uint8_t_u_s(((*l_173) = ((safe_mul_func_int8_t_s_s((safe_sub_func_int32_t_s_s(((void*)0 != (*l_357)), g_105)), 0xCCL)) == 0x068D99A13CDD8DD2LL)), 7)) == p_44), 0x8AL))))) & (*g_366)) >= (*g_366)) || (*g_366)))) || (**g_365)) , g_6)) || p_44)) != g_392) <= g_105), g_6)) == 0xE74F3D35L) > g_51) | g_129.f1) && (-7L))), g_49)), (**g_365))) & (-1L)))
            { 
                struct S0 l_483 = {-11150,4};
                (*g_456) = l_483;
                if (l_225.f1)
                    goto lbl_484;
                (*l_218) |= g_461;
            }
            else
            { 
                for (l_293 = 0; (l_293 != 46); ++l_293)
                { 
                    uint32_t l_487[2];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_487[i] = 0x39455564L;
                    return l_487[0];
                }
            }
        }
        if ((0x48L < ((*l_493) = ((*l_492) = ((p_44 = 8L) != ((safe_div_func_int64_t_s_s((*l_218), 0x8F82C1DCA76B4989LL)) < (g_192 = (g_170 = ((safe_sub_func_uint64_t_u_u(g_105, 5L)) > ((*l_173) = (*l_218)))))))))))
        { 
            uint16_t l_497 = 1UL;
            int32_t l_502 = 0x5AC3EFE7L;
            int16_t l_503 = (-1L);
            int8_t *l_504[7] = {&g_308,&g_308,&g_308,&g_308,&g_308,&g_308,&g_308};
            int i;
            (*l_218) = g_120[1][0][2];
            if ((safe_lshift_func_int8_t_s_s(0L, (((p_44 = ((+((g_122 && (l_497 <= (l_502 = ((*l_218) = ((***g_364) |= (safe_lshift_func_int16_t_s_u((18446744073709551615UL != (safe_mod_func_int64_t_s_s(0x21046994A4AE2C1ALL, p_44))), 9))))))) ^ l_503)) ^ 0xCE3DAF94L)) >= l_225.f0) || g_289[0][4][4].f0.f0))))
            { 
                g_505 = (void*)0;
            }
            else
            { 
                int32_t *l_506 = &l_229[3][1][5];
                int32_t **l_507 = &l_242;
                (*l_507) = l_506;
            }
        }
        else
        { 
            struct S0 l_508 = {-10457,1};
            struct S0 *l_509 = &l_508;
            const struct S1 *l_525 = &g_129;
            const struct S1 **l_524[6] = {&l_525,&l_525,&l_525,&l_525,&l_525,&l_525};
            int i;
            (*l_509) = ((*g_456) = l_508);
            for (g_392 = 0; (g_392 <= 1); g_392 += 1)
            { 
                int8_t l_511 = (-1L);
                int64_t ** const *l_539 = &g_365;
                int32_t *l_547 = &l_110;
                int32_t l_554 = (-1L);
                uint8_t l_568[5][1][2] = {{{255UL,250UL}},{{255UL,255UL}},{{250UL,255UL}},{{255UL,0xC4L}},{{250UL,250UL}}};
                int i, j, k;
                if (((l_508.f1 , (((l_510 == l_510) > l_511) , l_512)) >= (((safe_div_func_uint16_t_u_u(((((*l_218) | (safe_lshift_func_uint16_t_u_u((((((!((((safe_mod_func_int16_t_s_s(((*l_88) = (((***g_425) ^ p_44) , g_49)), (**g_426))) == 0x169A8579L) , g_520) , g_458)) , l_511) <= g_192) | l_511) , p_44), (***g_425)))) > p_44) != (*l_218)), 0x3AF9L)) != l_511) || l_508.f1)))
                { 
                    if (l_508.f0)
                        break;
                    (*g_505) ^= ((*l_218) = p_44);
                }
                else
                { 
                    int16_t ***l_523 = &g_521[0][1][1];
                    int i;
                    g_198[g_392] = g_198[g_392];
                    (*l_523) = g_521[0][1][1];
                    if (l_511)
                        continue;
                    (*g_505) = (0x584EA779FA9AB713LL == (l_524[0] != (void*)0));
                    (*g_505) = (safe_add_func_uint8_t_u_u((safe_add_func_int32_t_s_s(((safe_div_func_int16_t_s_s((l_508.f1 = (~((safe_mul_func_int8_t_s_s(((*g_505) || (p_44 == (safe_rshift_func_int16_t_s_u((*l_218), 0)))), ((safe_add_func_int16_t_s_s((p_44 || ((void*)0 == l_539)), ((safe_mod_func_int8_t_s_s(((safe_sub_func_uint16_t_u_u(((!(safe_mul_func_uint8_t_u_u(0xD5L, (-1L)))) , l_508.f0), l_508.f0)) & 4294967291UL), g_520.f3.f2)) > l_508.f1))) >= g_129.f0.f0))) != (*l_218)))), (*g_427))) >= 4L), (-5L))), 0xFBL));
                }
                if (l_511)
                    break;
                for (g_49 = 0; (g_49 <= 1); g_49 += 1)
                { 
                    int32_t *l_550 = &l_69;
                    int32_t *l_551 = &g_122;
                    int32_t *l_552 = &g_460;
                    int32_t *l_553 = &l_110;
                    int32_t *l_555 = &g_62;
                    int32_t *l_556 = &g_62;
                    int32_t *l_557 = &g_62;
                    int32_t *l_558 = &g_460;
                    int32_t *l_559 = (void*)0;
                    int32_t *l_560 = &l_554;
                    int32_t *l_561 = &l_229[1][1][2];
                    int32_t *l_562 = &l_69;
                    int32_t *l_563 = (void*)0;
                    int32_t *l_564 = &l_230;
                    int32_t *l_565 = &g_122;
                    int32_t *l_566[3];
                    int32_t **l_571 = (void*)0;
                    int32_t **l_572 = &l_547;
                    int i;
                    for (i = 0; i < 3; i++)
                        l_566[i] = &g_62;
                    g_505 = l_547;
                }
            }
        }
        for (g_51 = 0; (g_51 <= 35); g_51++)
        { 
            (*l_218) = (*l_218);
        }
    }
    g_580--;
    return p_44;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_6, "g_6", print_hash_value);
    transparent_crc(g_7, "g_7", print_hash_value);
    transparent_crc(g_12, "g_12", print_hash_value);
    transparent_crc(g_49, "g_49", print_hash_value);
    transparent_crc(g_51, "g_51", print_hash_value);
    transparent_crc(g_56, "g_56", print_hash_value);
    transparent_crc(g_62, "g_62", print_hash_value);
    transparent_crc(g_72, "g_72", print_hash_value);
    transparent_crc(g_73, "g_73", print_hash_value);
    transparent_crc(g_105, "g_105", print_hash_value);
    transparent_crc(g_107, "g_107", print_hash_value);
    transparent_crc(g_111, "g_111", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(g_120[i][j][k], "g_120[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_122, "g_122", print_hash_value);
    transparent_crc(g_129.f0.f0, "g_129.f0.f0", print_hash_value);
    transparent_crc(g_129.f0.f1, "g_129.f0.f1", print_hash_value);
    transparent_crc(g_129.f1, "g_129.f1", print_hash_value);
    transparent_crc(g_129.f2, "g_129.f2", print_hash_value);
    transparent_crc(g_170, "g_170", print_hash_value);
    transparent_crc(g_192, "g_192", print_hash_value);
    transparent_crc(g_213, "g_213", print_hash_value);
    transparent_crc(g_237, "g_237", print_hash_value);
    transparent_crc(g_238, "g_238", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(g_289[i][j][k].f0.f0, "g_289[i][j][k].f0.f0", print_hash_value);
                transparent_crc(g_289[i][j][k].f0.f1, "g_289[i][j][k].f0.f1", print_hash_value);
                transparent_crc(g_289[i][j][k].f1, "g_289[i][j][k].f1", print_hash_value);
                transparent_crc(g_289[i][j][k].f2, "g_289[i][j][k].f2", print_hash_value);

            }
        }
    }
    transparent_crc(g_308, "g_308", print_hash_value);
    transparent_crc(g_321, "g_321", print_hash_value);
    transparent_crc(g_392, "g_392", print_hash_value);
    transparent_crc(g_437, "g_437", print_hash_value);
    transparent_crc(g_458, "g_458", print_hash_value);
    transparent_crc(g_460, "g_460", print_hash_value);
    transparent_crc(g_461, "g_461", print_hash_value);
    transparent_crc(g_520.f0, "g_520.f0", print_hash_value);
    transparent_crc(g_520.f1, "g_520.f1", print_hash_value);
    transparent_crc(g_520.f2, "g_520.f2", print_hash_value);
    transparent_crc(g_520.f3.f0.f0, "g_520.f3.f0.f0", print_hash_value);
    transparent_crc(g_520.f3.f0.f1, "g_520.f3.f0.f1", print_hash_value);
    transparent_crc(g_520.f3.f1, "g_520.f3.f1", print_hash_value);
    transparent_crc(g_520.f3.f2, "g_520.f3.f2", print_hash_value);
    transparent_crc(g_520.f4, "g_520.f4", print_hash_value);
    transparent_crc(g_520.f5, "g_520.f5", print_hash_value);
    transparent_crc(g_520.f6, "g_520.f6", print_hash_value);
    transparent_crc(g_580, "g_580", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_618[i], "g_618[i]", print_hash_value);

    }
    transparent_crc(g_666, "g_666", print_hash_value);
    transparent_crc(g_767, "g_767", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_919[i], "g_919[i]", print_hash_value);

    }
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_966[i], "g_966[i]", print_hash_value);

    }
    transparent_crc(g_969, "g_969", print_hash_value);
    transparent_crc(g_996, "g_996", print_hash_value);
    transparent_crc(g_1060, "g_1060", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_1125[i], "g_1125[i]", print_hash_value);

    }
    transparent_crc(g_1126, "g_1126", print_hash_value);
    transparent_crc(g_1137, "g_1137", print_hash_value);
    transparent_crc(g_1138, "g_1138", print_hash_value);
    transparent_crc(g_1145, "g_1145", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_1146[i], "g_1146[i]", print_hash_value);

    }
    transparent_crc(g_1149, "g_1149", print_hash_value);
    transparent_crc(g_1150, "g_1150", print_hash_value);
    transparent_crc(g_1196, "g_1196", print_hash_value);
    transparent_crc(g_1272, "g_1272", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_1274[i][j][k], "g_1274[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_1276, "g_1276", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_1277[i], "g_1277[i]", print_hash_value);

    }
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_1322[i].f0.f0, "g_1322[i].f0.f0", print_hash_value);
        transparent_crc(g_1322[i].f0.f1, "g_1322[i].f0.f1", print_hash_value);
        transparent_crc(g_1322[i].f1, "g_1322[i].f1", print_hash_value);
        transparent_crc(g_1322[i].f2, "g_1322[i].f2", print_hash_value);

    }
    transparent_crc(g_1349, "g_1349", print_hash_value);
    transparent_crc(g_1561, "g_1561", print_hash_value);
    transparent_crc(g_1581, "g_1581", print_hash_value);
    transparent_crc(g_1795.f0, "g_1795.f0", print_hash_value);
    transparent_crc(g_1795.f1, "g_1795.f1", print_hash_value);
    transparent_crc(g_1795.f2, "g_1795.f2", print_hash_value);
    transparent_crc(g_1795.f3.f0.f0, "g_1795.f3.f0.f0", print_hash_value);
    transparent_crc(g_1795.f3.f0.f1, "g_1795.f3.f0.f1", print_hash_value);
    transparent_crc(g_1795.f3.f1, "g_1795.f3.f1", print_hash_value);
    transparent_crc(g_1795.f3.f2, "g_1795.f3.f2", print_hash_value);
    transparent_crc(g_1795.f4, "g_1795.f4", print_hash_value);
    transparent_crc(g_1795.f5, "g_1795.f5", print_hash_value);
    transparent_crc(g_1795.f6, "g_1795.f6", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_1797[i].f0, "g_1797[i].f0", print_hash_value);
        transparent_crc(g_1797[i].f1, "g_1797[i].f1", print_hash_value);
        transparent_crc(g_1797[i].f2, "g_1797[i].f2", print_hash_value);
        transparent_crc(g_1797[i].f3.f0.f0, "g_1797[i].f3.f0.f0", print_hash_value);
        transparent_crc(g_1797[i].f3.f0.f1, "g_1797[i].f3.f0.f1", print_hash_value);
        transparent_crc(g_1797[i].f3.f1, "g_1797[i].f3.f1", print_hash_value);
        transparent_crc(g_1797[i].f3.f2, "g_1797[i].f3.f2", print_hash_value);
        transparent_crc(g_1797[i].f4, "g_1797[i].f4", print_hash_value);
        transparent_crc(g_1797[i].f5, "g_1797[i].f5", print_hash_value);
        transparent_crc(g_1797[i].f6, "g_1797[i].f6", print_hash_value);

    }
    transparent_crc(g_1874, "g_1874", print_hash_value);
    transparent_crc(g_2005, "g_2005", print_hash_value);
    transparent_crc(g_2007, "g_2007", print_hash_value);
    transparent_crc(g_2048, "g_2048", print_hash_value);
    transparent_crc(g_2228, "g_2228", print_hash_value);
    transparent_crc(g_2250, "g_2250", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_2381[i][j], "g_2381[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_2390, "g_2390", print_hash_value);
    transparent_crc(g_2564, "g_2564", print_hash_value);
    transparent_crc(g_2626.f0, "g_2626.f0", print_hash_value);
    transparent_crc(g_2626.f1, "g_2626.f1", print_hash_value);
    transparent_crc(g_2626.f2, "g_2626.f2", print_hash_value);
    transparent_crc(g_2626.f3.f0.f0, "g_2626.f3.f0.f0", print_hash_value);
    transparent_crc(g_2626.f3.f0.f1, "g_2626.f3.f0.f1", print_hash_value);
    transparent_crc(g_2626.f3.f1, "g_2626.f3.f1", print_hash_value);
    transparent_crc(g_2626.f3.f2, "g_2626.f3.f2", print_hash_value);
    transparent_crc(g_2626.f4, "g_2626.f4", print_hash_value);
    transparent_crc(g_2626.f5, "g_2626.f5", print_hash_value);
    transparent_crc(g_2626.f6, "g_2626.f6", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
