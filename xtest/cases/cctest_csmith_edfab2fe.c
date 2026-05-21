// SPDX-License-Identifier: MIT
// cctest_csmith_edfab2fe.c --- cctest case csmith_edfab2fe (csmith seed 3992630014)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x7611972a */

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

// Options:   -s 3992630014 -o /tmp/csmith_gen_12r535uj/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   int32_t  f0;
   int16_t  f1;
   uint64_t  f2;
   int8_t  f3;
};

struct S1 {
   int8_t  f0;
   int32_t  f1;
   int8_t  f2;
   const uint8_t  f3;
   int64_t  f4;
};

union U3 {
   int32_t  f0;
   const int64_t  f1;
};


static struct S0 g_2 = {0x443EB606L,1L,0UL,0x45L};
static struct S1 g_15[1] = {{0x3FL,0x00457023L,0x7DL,255UL,0xBD29A2A67F6A191ALL}};
static struct S0 g_33 = {0xD2440699L,3L,1UL,0xD2L};
static uint32_t g_38 = 1UL;
static int64_t g_49 = 0x711A46C428827C80LL;
static int32_t g_68 = (-1L);
static uint64_t g_78 = 0x03452746A0FEE19ALL;
static uint16_t g_137 = 0xE671L;
static int16_t g_193[3] = {0xB15EL,0xB15EL,0xB15EL};
static uint32_t g_194 = 18446744073709551609UL;
static int16_t g_197 = (-1L);
static int32_t g_199 = (-5L);
static uint16_t g_200 = 0x6627L;
static int16_t g_206 = (-1L);
static uint64_t g_207 = 18446744073709551615UL;
static int64_t g_232 = 0xE662B0B001798D41LL;
static uint32_t g_233[5] = {0x8C3DD0E6L,0x8C3DD0E6L,0x8C3DD0E6L,0x8C3DD0E6L,0x8C3DD0E6L};
static int32_t g_237 = (-4L);
static uint8_t g_247[3][4] = {{1UL,1UL,1UL,1UL},{1UL,1UL,1UL,1UL},{1UL,1UL,1UL,1UL}};
static int64_t g_257 = (-1L);
static int32_t g_258 = 0x50A2B0F9L;
static int16_t g_259[5] = {0L,0L,0L,0L,0L};
static uint8_t g_260 = 0x70L;
static uint16_t g_286 = 65526UL;



static int16_t  func_1(void);
static int16_t  func_6(struct S1  p_7, uint32_t  p_8);
static struct S1  func_9(uint64_t  p_10, uint64_t  p_11, uint16_t  p_12, struct S1  p_13, int16_t  p_14);
static int32_t  func_16(const struct S1  p_17, const int8_t  p_18, uint32_t  p_19, uint32_t  p_20);




static int16_t  func_1(void)
{ 
    struct S0 l_3 = {0x66A07563L,1L,0x07207182B4746A1CLL,-10L};
    int32_t l_390 = 0x6F4876AAL;
    int64_t l_432 = 2L;
    uint16_t l_444 = 0x9FC3L;
    int32_t l_450 = (-6L);
    l_3 = g_2;
    if ((l_3.f2 < (l_3.f1 != func_6(func_9(l_3.f3, g_2.f3, g_2.f0, g_15[0], g_15[0].f3), g_15[0].f0))))
    { 
        struct S0 l_380 = {0x45CCDEC9L,6L,0xCB627330C4BFC31FLL,0x8AL};
        int32_t l_387 = 0x97EF6E7BL;
        int8_t l_391[4][4] = {{(-3L),1L,1L,(-3L)},{1L,(-3L),1L,1L},{(-3L),(-3L),0xE1L,(-3L)},{(-3L),1L,1L,(-3L)}};
        int32_t l_410 = 1L;
        int32_t l_440[1];
        int i, j;
        for (i = 0; i < 1; i++)
            l_440[i] = (-10L);
        if (((((g_15[0].f2 != 0UL) <= l_3.f2) != 8L) >= g_247[2][1]))
        { 
            uint32_t l_389 = 4294967289UL;
            uint32_t l_413 = 4294967290UL;
            int32_t l_414 = (-1L);
            for (l_3.f2 = 21; (l_3.f2 == 29); l_3.f2 = safe_add_func_int64_t_s_s(l_3.f2, 6))
            { 
                int64_t l_394 = 0x3D67D67424AEB1D1LL;
                g_68 ^= (safe_div_func_uint8_t_u_u(g_258, (g_15[0].f2 = (l_380 , (safe_lshift_func_uint16_t_u_s((safe_mod_func_uint16_t_u_u((g_200--), (l_387 && (l_390 = (+(((g_2 , l_3.f3) | l_389) ^ g_2.f2)))))), l_391[0][1]))))));
                g_199 = (safe_mod_func_uint16_t_u_u(l_394, (g_137 = (safe_rshift_func_uint16_t_u_u(((safe_unary_minus_func_uint64_t_u((0x9D72CE77L <= g_137))) || (safe_rshift_func_int8_t_s_u(l_389, g_206))), 14)))));
                l_410 &= ((safe_mul_func_int8_t_s_s(((g_233[3] > (((((safe_lshift_func_uint8_t_u_s((safe_lshift_func_int8_t_s_u(l_391[1][2], ((g_2.f0 || ((safe_mul_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_s(0xCEL, 5)), g_2.f1)) , g_137)) || l_394))), 0)) != g_15[0].f4) >= (-10L)) >= 0L) <= l_391[0][1])) && l_3.f0), 0UL)) < 0UL);
            }
            g_258 = (g_137 || g_259[1]);
            l_414 = (0x7C6E5AD4D929B021LL != ((safe_mul_func_int8_t_s_s(g_137, ((l_390 < (l_413 = l_389)) , l_380.f2))) , 0xC26506CFC8072FBCLL));
        }
        else
        { 
            int8_t l_419 = 0xB1L;
            int32_t l_434[5];
            int i;
            for (i = 0; i < 5; i++)
                l_434[i] = 0x0D667F98L;
            if ((g_15[0].f1 = g_260))
            { 
                int16_t l_433 = 0x7758L;
                g_15[0].f1 &= ((l_434[1] ^= ((((safe_lshift_func_int8_t_s_u((g_33.f3 &= (safe_mod_func_int32_t_s_s((l_391[0][3] ^ (g_68 ^= l_419)), (safe_add_func_int16_t_s_s((((+(!(safe_mod_func_uint32_t_u_u((safe_rshift_func_uint16_t_u_u((safe_mod_func_uint64_t_u_u((((l_3 , (safe_rshift_func_uint8_t_u_u(((0xAB92L == l_432) , l_433), l_419))) ^ l_391[0][1]) , g_193[2]), 18446744073709551610UL)), l_390)), g_2.f2)))) != g_259[0]) > l_391[2][3]), g_206))))), l_433)) ^ g_199) , (-1L)) ^ 0xBEL)) < g_247[2][1]);
            }
            else
            { 
                l_390 = ((safe_sub_func_uint32_t_u_u((!(l_434[1] |= (g_15[0].f4 > l_3.f2))), (safe_div_func_uint8_t_u_u(g_33.f3, 251UL)))) , 0x099852C7L);
                l_440[0] = l_419;
                g_33 = g_2;
            }
        }
        l_390 = g_15[0].f1;
    }
    else
    { 
        uint64_t l_441 = 18446744073709551615UL;
        g_15[0].f1 = g_237;
        --l_441;
    }
    g_68 = ((l_444 < (((l_390 = (safe_mul_func_int8_t_s_s(l_432, g_33.f2))) != ((!((l_450 = (g_137 |= ((g_2.f1 = (g_33.f1 = ((g_78 &= (g_207 |= (((safe_add_func_uint8_t_u_u(0x3EL, g_247[2][1])) ^ g_2.f2) | g_49))) != l_432))) >= g_233[2]))) == g_33.f3)) == g_2.f2)) < l_3.f0)) && l_432);
    return g_257;
}



static int16_t  func_6(struct S1  p_7, uint32_t  p_8)
{ 
    uint32_t l_149 = 0x98F8DB1BL;
    int32_t l_173 = 0x7AC055B4L;
    uint8_t l_174 = 0x58L;
    int32_t l_187 = 6L;
    int32_t l_192 = 0L;
    const struct S0 l_221[2][4] = {{{0xE207E3EBL,0L,0xD58D48762EDC84E9LL,0xFBL},{-5L,0xE78BL,0x3BCDCC49979F6742LL,-1L},{0xE207E3EBL,0L,0xD58D48762EDC84E9LL,0xFBL},{0xE207E3EBL,0L,0xD58D48762EDC84E9LL,0xFBL}},{{0xE207E3EBL,0L,0xD58D48762EDC84E9LL,0xFBL},{0xE207E3EBL,0L,0xD58D48762EDC84E9LL,0xFBL},{-5L,0xE78BL,0x3BCDCC49979F6742LL,-1L},{0xE207E3EBL,0L,0xD58D48762EDC84E9LL,0xFBL}}};
    int32_t l_282[1][2];
    int16_t l_352 = 2L;
    int i, j;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
            l_282[i][j] = 0x55187258L;
    }
    for (p_8 = (-26); (p_8 == 19); ++p_8)
    { 
        uint8_t l_142[1][2][2] = {{{248UL,248UL},{248UL,248UL}}};
        struct S0 l_147 = {0xF89870F3L,0x082CL,0xC8094C73A16DF6E3LL,0L};
        int i, j, k;
        for (g_38 = 0; (g_38 <= 0); g_38 += 1)
        { 
            uint32_t l_143 = 0xF40E1551L;
            for (g_33.f0 = 0; (g_33.f0 <= 0); g_33.f0 += 1)
            { 
                struct S0 l_146[1] = {{0L,0x6BD0L,5UL,1L}};
                int i;
                l_143++;
                l_147 = l_146[0];
            }
            for (l_147.f0 = 0; (l_147.f0 >= 0); l_147.f0 -= 1)
            { 
                int32_t l_148 = 0xF6804774L;
                int i, j, k;
                ++l_149;
                if (l_142[g_38][(l_147.f0 + 1)][g_38])
                    break;
            }
        }
    }
    if ((safe_mul_func_int16_t_s_s(0x2363L, ((((-6L) < (((((safe_div_func_int16_t_s_s((l_149 >= (safe_div_func_int32_t_s_s(g_15[0].f4, p_7.f1))), 0x6C53L)) | g_49) != p_7.f2) == p_7.f4) || 0xF3F8L)) , 0x69L) != l_149))))
    { 
        int32_t l_170[2][1][2];
        int i, j, k;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 1; j++)
            {
                for (k = 0; k < 2; k++)
                    l_170[i][j][k] = (-5L);
            }
        }
        p_7.f1 = (safe_rshift_func_uint16_t_u_u((((p_8 , ((safe_mod_func_int64_t_s_s((safe_mul_func_int16_t_s_s((safe_div_func_uint8_t_u_u((safe_div_func_uint8_t_u_u(((((((((g_15[0].f4 = (safe_rshift_func_uint16_t_u_s((l_170[0][0][0] | g_2.f2), 5))) == (((l_173 = (safe_mul_func_uint8_t_u_u(l_170[1][0][1], 0x6DL))) || l_174) >= g_38)) & p_7.f0) || p_7.f3) || l_170[0][0][0]) , l_149) && 0xBDC695E7L) >= 0xE21AL), g_2.f2)), 8UL)), 0x7607L)), g_33.f1)) && g_33.f2)) || 1L) != 0x0CD2BE11L), g_15[0].f3));
    }
    else
    { 
        uint16_t l_177 = 3UL;
        int32_t l_184 = (-1L);
        int32_t l_185 = 0xBD7E15E0L;
        int32_t l_190 = (-10L);
        int32_t l_198 = 0L;
        struct S0 l_220 = {0x91A12F19L,0x2A5CL,0xD6F74C4BF40DEF69LL,1L};
        if ((l_185 = (safe_lshift_func_uint8_t_u_u((l_177++), ((0xC288FB31F79D74A7LL ^ ((((safe_lshift_func_uint8_t_u_u((safe_div_func_uint64_t_u_u((l_184 = 0x10F39FE9454B42CALL), l_185)), (((l_185 > p_7.f3) && 0xCA764965E8A44066LL) ^ p_7.f1))) && l_149) >= 1UL) | l_185)) < 4294967294UL)))))
        { 
            return g_2.f2;
        }
        else
        { 
            int32_t l_186 = (-1L);
            int32_t l_188 = (-1L);
            int32_t l_189 = 0x11D5C978L;
            int32_t l_191[5][5] = {{0xFCDDE50AL,7L,0xFCDDE50AL,7L,0xFCDDE50AL},{0x71268E89L,8L,8L,0x71268E89L,0x71268E89L},{0x8F0AE380L,7L,0x8F0AE380L,7L,0x8F0AE380L},{0x71268E89L,0x71268E89L,8L,8L,0x71268E89L},{0xFCDDE50AL,7L,0xFCDDE50AL,7L,0xFCDDE50AL}};
            int i, j;
            --g_194;
        }
        ++g_200;
        for (p_8 = 0; (p_8 <= 2); p_8 += 1)
        { 
            int32_t l_218 = 0x29CC7154L;
            int i;
            if (g_193[p_8])
            { 
                int64_t l_219 = 0xED0C5638F8F8D087LL;
                l_218 = (((safe_div_func_int8_t_s_s((g_15[0].f0 = (p_7.f0 = (~(p_7.f1 > (g_207++))))), (((safe_lshift_func_uint16_t_u_s(((l_187 ^ (safe_div_func_uint16_t_u_u(((g_33.f3 = g_2.f0) < (safe_rshift_func_int8_t_s_s((safe_rshift_func_int16_t_s_s(((p_7.f2 >= p_7.f1) >= p_8), 3)), g_193[p_8]))), g_2.f1))) <= g_33.f0), 12)) , p_7.f1) ^ g_68))) && 0x535CL) == g_197);
                if (l_219)
                    break;
                if (g_193[2])
                    continue;
            }
            else
            { 
                if (g_194)
                    break;
            }
            for (g_33.f2 = 0; (g_33.f2 <= 2); g_33.f2 += 1)
            { 
                g_68 ^= p_7.f3;
                l_220 = g_33;
                l_184 &= 1L;
            }
        }
    }
    if ((g_15[0].f1 &= (l_221[1][1] , (g_199 = (+g_33.f1)))))
    { 
        uint32_t l_236 = 3UL;
        int32_t l_241 = (-1L);
        int32_t l_280 = 0x5E75CD83L;
        int32_t l_281 = 0x05192C4AL;
        int32_t l_283 = 0x9EA918FDL;
        int32_t l_284 = 0L;
        int32_t l_285 = 1L;
        int32_t l_350 = 0xF8C91550L;
        uint16_t l_353 = 1UL;
        if (g_15[0].f4)
        { 
            int32_t l_229 = 0L;
            int32_t l_238 = (-2L);
            for (l_174 = 0; (l_174 == 41); ++l_174)
            { 
                p_7.f1 |= ((g_194 | 0x557C3E86A65F4457LL) < l_174);
            }
            g_15[0].f1 = (((((((safe_mul_func_uint8_t_u_u(p_7.f3, ((safe_mul_func_uint16_t_u_u(l_229, (safe_add_func_uint8_t_u_u((g_233[2] = (g_232 = g_137)), (l_173 = (l_238 &= (g_237 = (safe_mul_func_uint8_t_u_u(l_236, l_236))))))))) & p_7.f4))) & l_174) || l_236) & 0L) <= g_33.f0) < g_33.f2) < g_33.f2);
            if (((((g_193[2] , 0x96L) , g_137) ^ (l_229 = ((p_8 & g_15[0].f2) | 0x7D2D848FL))) || 1UL))
            { 
                g_68 = ((g_15[0].f2 ^ (safe_sub_func_uint64_t_u_u((l_241 = 0xC908283C7EF234CELL), (!(0xCC7FL == p_7.f2))))) > p_7.f2);
                return g_200;
            }
            else
            { 
                uint16_t l_243 = 0x4AD7L;
                int32_t l_246 = (-1L);
                ++l_243;
                g_247[2][1]++;
            }
        }
        else
        { 
            uint16_t l_279 = 0xA43AL;
            for (g_33.f2 = (-21); (g_33.f2 >= 35); g_33.f2 = safe_add_func_int8_t_s_s(g_33.f2, 5))
            { 
                int16_t l_256[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_256[i] = 0x55A4L;
                g_68 = (safe_div_func_uint32_t_u_u((((safe_lshift_func_uint16_t_u_s((p_8 < (g_33.f1 >= (l_256[0] ^= g_33.f2))), (l_241 ^ g_15[0].f2))) == g_33.f0) < p_8), 5L));
                --g_260;
            }
            for (l_174 = 2; (l_174 < 4); l_174 = safe_add_func_int16_t_s_s(l_174, 8))
            { 
                int32_t l_276 = 0x18028CFFL;
                l_241 = (1UL || (safe_lshift_func_int16_t_s_u(((g_137 = (safe_mod_func_uint32_t_u_u(((safe_mul_func_uint8_t_u_u((!(safe_mod_func_uint8_t_u_u((((((g_38 ^= (safe_rshift_func_int16_t_s_s(0xE385L, (l_276 < (safe_rshift_func_uint8_t_u_u(0x1DL, 4)))))) > p_8) > l_236) >= p_7.f0) <= 255UL), g_260))), 250UL)) ^ p_7.f4), 4UL))) < p_7.f3), l_276)));
            }
            if (p_7.f1)
                goto lbl_328;
            return l_279;
        }
        ++g_286;
        if (g_49)
        { 
            int32_t l_295 = 8L;
            int8_t l_300[5][1][4] = {{{(-8L),0x02L,(-7L),(-7L)}},{{4L,4L,(-8L),(-7L)}},{{1L,0x02L,1L,(-8L)}},{{1L,(-8L),(-8L),1L}},{{4L,(-8L),(-7L),(-8L)}}};
            int32_t l_313[4] = {0xFC06333AL,0xFC06333AL,0xFC06333AL,0xFC06333AL};
            int i, j, k;
            l_280 = ((((safe_mod_func_int32_t_s_s((((((safe_lshift_func_int16_t_s_s((safe_mul_func_uint8_t_u_u((l_295 > (g_15[0].f1 && (safe_div_func_uint8_t_u_u(((safe_sub_func_int32_t_s_s(0x23A281A0L, 0xBA7D9BFFL)) , 0UL), g_2.f1)))), g_206)), p_7.f4)) & p_8) == l_300[2][0][2]) != l_285) != p_8), 8UL)) != 0xC73EDB131245ED57LL) >= l_173) != 2UL);
            l_313[3] = (((((p_7.f3 != (0x8DCA40DCL > ((-9L) | (!(+((safe_mod_func_int32_t_s_s((safe_div_func_uint16_t_u_u((safe_sub_func_int8_t_s_s((safe_mul_func_uint8_t_u_u(((safe_sub_func_int8_t_s_s(((-5L) == 0UL), p_7.f3)) && l_300[2][0][1]), g_15[0].f4)), g_233[2])), 0xCDB7L)), g_286)) , 0x8B04L)))))) || p_7.f0) <= 0x38L) || 4294967293UL) , 3L);
            g_2 = ((safe_rshift_func_int16_t_s_u((l_284 = 0x8FF0L), (((safe_rshift_func_int16_t_s_u((-1L), (safe_mod_func_uint8_t_u_u(8UL, (((safe_mul_func_uint8_t_u_u((((g_194 ^= ((p_7.f2 & 0x67DAL) , 0xAFB2E53EL)) , g_2.f2) >= 2L), l_149)) | p_7.f0) | p_7.f3))))) , g_232) < p_8))) , g_33);
        }
        else
        { 
lbl_328:
            g_258 = (g_199 & ((g_15[0].f0 |= (g_33.f3 = (safe_rshift_func_uint16_t_u_s(l_187, 15)))) ^ ((safe_div_func_uint8_t_u_u(0x39L, ((safe_mod_func_int32_t_s_s(l_192, g_2.f1)) | g_78))) >= g_15[0].f3)));
            if (l_283)
            { 
                const uint32_t l_337 = 0x750FABABL;
                int32_t l_351[5];
                int i;
                for (i = 0; i < 5; i++)
                    l_351[i] = 0xFC7D0234L;
                l_351[0] &= (safe_mul_func_int16_t_s_s((safe_mod_func_int64_t_s_s((g_200 ^ (p_7.f3 && ((safe_mul_func_uint8_t_u_u(((((safe_rshift_func_int16_t_s_s((l_337 >= (((safe_mul_func_uint8_t_u_u((safe_mod_func_uint64_t_u_u((safe_div_func_uint32_t_u_u((safe_mul_func_uint16_t_u_u((((((safe_rshift_func_int8_t_s_u(((((safe_mul_func_int16_t_s_s((p_7.f2 < l_281), l_241)) < l_221[1][1].f2) == p_7.f1) != l_280), 1)) & g_258) & l_285) ^ p_7.f3) >= g_33.f1), 65534UL)), l_350)), 0xCDEE8527D9B1459DLL)), l_337)) & 255UL) <= (-7L))), 14)) >= p_7.f1) >= 1L) | l_174), l_282[0][0])) <= 0x04L))), g_257)), g_15[0].f3));
            }
            else
            { 
                int32_t l_356 = 0L;
                p_7.f1 ^= (g_200 || p_7.f3);
                --l_353;
                l_356 ^= g_2.f1;
            }
        }
    }
    else
    { 
        int16_t l_367 = 0x79C7L;
        int64_t l_373 = 1L;
        l_192 &= ((safe_add_func_int8_t_s_s((((safe_lshift_func_uint8_t_u_s(((l_373 = ((g_137 |= ((l_173 &= ((safe_sub_func_uint64_t_u_u((((safe_sub_func_uint32_t_u_u((g_38 ^= (((safe_div_func_uint64_t_u_u(l_367, (l_282[0][0] &= 18446744073709551615UL))) <= (p_7.f1 != (safe_sub_func_int16_t_s_s((safe_mul_func_uint16_t_u_u((((safe_unary_minus_func_uint16_t_u(1UL)) ^ 1L) != l_367), p_7.f1)), p_7.f1)))) | p_7.f1)), g_257)) & p_8) >= p_7.f0), g_259[3])) == 0xBA506B64L)) == 0UL)) == p_7.f3)) && l_373), 0)) ^ g_233[2]) , l_367), 0xC5L)) && p_7.f0);
    }
    return g_15[0].f1;
}



static struct S1  func_9(uint64_t  p_10, uint64_t  p_11, uint16_t  p_12, struct S1  p_13, int16_t  p_14)
{ 
    const struct S1 l_21 = {0L,0x2EFE8E60L,0x2FL,253UL,0x8B3D385E13CD4FE9LL};
    int32_t l_48[3];
    struct S0 l_54 = {0xAA091CDDL,0x1863L,8UL,0L};
    union U3 l_67 = {0x7CF0AE94L};
    int i;
    for (i = 0; i < 3; i++)
        l_48[i] = 0xDD628582L;
    if (func_16(l_21, ((0x8AL == (safe_add_func_int8_t_s_s(l_21.f2, ((safe_sub_func_uint8_t_u_u((safe_div_func_int16_t_s_s((safe_mod_func_uint8_t_u_u(((safe_lshift_func_int8_t_s_u(0xBEL, 4)) >= (-6L)), 251UL)), p_10)), l_21.f2)) && p_13.f1)))) , 9L), g_15[0].f1, p_13.f0))
    { 
        struct S0 l_55[5] = {{6L,-5L,0xA4D940870E267355LL,0xD1L},{6L,-5L,0xA4D940870E267355LL,0xD1L},{6L,-5L,0xA4D940870E267355LL,0xD1L},{6L,-5L,0xA4D940870E267355LL,0xD1L},{6L,-5L,0xA4D940870E267355LL,0xD1L}};
        int32_t l_77 = 0L;
        int32_t l_121 = 0x375A0760L;
        int i;
        if ((g_33 , (-5L)))
        { 
            int8_t l_53[5][5][3] = {{{0x6CL,0xC6L,0x3CL},{0x6CL,0x6CL,0xDCL},{0x8BL,0x8BL,(-10L)},{0x6CL,1L,0xACL},{0x6CL,1L,(-9L)}},{{1L,0x8BL,0xB3L},{0x77L,0x6CL,(-9L)},{0x12L,0xC6L,0xACL},{0x12L,0L,(-10L)},{0x77L,(-5L),0xDCL}},{{1L,0L,0x3CL},{0x6CL,0xC6L,0x3CL},{0x6CL,0x6CL,0xDCL},{0x8BL,0x8BL,(-10L)},{0x6CL,1L,0xACL}},{{0x6CL,1L,(-9L)},{1L,0x8BL,0xB3L},{0x77L,0x6CL,(-9L)},{0x12L,0xC6L,0xACL},{0x12L,0L,(-10L)}},{{0x77L,(-5L),0xDCL},{1L,0L,0x3CL},{0x6CL,0xC6L,0x3CL},{0x6CL,0x6CL,0xDCL},{0x8BL,0x8BL,(-10L)}}};
            int32_t l_62 = 0L;
            union U3 l_95 = {0x0E0461AFL};
            uint32_t l_96 = 0xBAD39915L;
            int64_t l_105 = 0xF14EA79E4102AFE9LL;
            uint64_t l_106 = 0UL;
            int i, j, k;
            if (p_13.f4)
            { 
                uint16_t l_50 = 0x95B2L;
                ++l_50;
            }
            else
            { 
                l_53[3][2][2] = 1L;
                l_55[1] = l_54;
            }
            for (p_13.f0 = 0; p_13.f0 < 5; p_13.f0 += 1)
            {
                for (g_33.f3 = 0; g_33.f3 < 5; g_33.f3 += 1)
                {
                    for (g_33.f0 = 0; g_33.f0 < 3; g_33.f0 += 1)
                    {
                        l_53[p_13.f0][g_33.f3][g_33.f0] = 0x92L;
                    }
                }
            }
            if ((safe_lshift_func_int8_t_s_u(((safe_mul_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u((l_62 = 0x3FL), (g_68 = (safe_add_func_int8_t_s_s((l_53[3][2][2] & (((!(~p_13.f0)) | (l_67 , g_15[0].f0)) , g_49)), 0x61L))))), 0L)) , g_2.f2), g_33.f3)))
            { 
                const int16_t l_81 = 0x04AFL;
                const uint16_t l_86[4] = {0xB986L,0xB986L,0xB986L,0xB986L};
                int i;
                l_77 = ((safe_rshift_func_int8_t_s_u((((l_62 = 0UL) && (safe_mul_func_uint8_t_u_u((+(+(p_11++))), (p_13.f4 ^ l_21.f0)))) <= (0xD48F2AEC61BC9EF2LL ^ g_2.f0)), p_14)) && 0L);
                --g_78;
                g_15[0].f1 |= ((l_81 ^ ((safe_mul_func_int16_t_s_s(l_81, 0x9451L)) != ((safe_mod_func_int8_t_s_s((g_78 || l_86[0]), g_33.f3)) , g_33.f2))) < g_68);
            }
            else
            { 
                g_15[0].f1 = (0x5ED9L || (((safe_sub_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_s(l_55[1].f0, 7)), (-5L))) >= ((safe_mod_func_uint32_t_u_u((safe_mod_func_int16_t_s_s(((l_96 = (l_95 , g_2.f0)) | 0xCCCEL), p_14)), l_54.f2)) & l_55[1].f3)) == g_15[0].f2));
                l_106 |= ((((safe_mod_func_int32_t_s_s((safe_rshift_func_uint16_t_u_s(((g_2.f2 | ((-5L) != (0xD0C0D0CCF25865EELL > 0x29AC59B50370D8BELL))) & g_15[0].f3), g_33.f1)), p_14)) < l_105) & (-1L)) && 0L);
            }
        }
        else
        { 
            uint32_t l_109 = 0UL;
            int32_t l_110 = 0L;
            struct S1 l_122[3][3][4] = {{{{1L,0xE9439333L,0x7AL,0x6FL,0x6489DC94FE33C04BLL},{1L,0xE9439333L,0x7AL,0x6FL,0x6489DC94FE33C04BLL},{1L,0xE9439333L,0x7AL,0x6FL,0x6489DC94FE33C04BLL},{1L,0xE9439333L,0x7AL,0x6FL,0x6489DC94FE33C04BLL}},{{1L,0xE9439333L,0x7AL,0x6FL,0x6489DC94FE33C04BLL},{1L,0xE9439333L,0x7AL,0x6FL,0x6489DC94FE33C04BLL},{1L,0xE9439333L,0x7AL,0x6FL,0x6489DC94FE33C04BLL},{1L,0xE9439333L,0x7AL,0x6FL,0x6489DC94FE33C04BLL}},{{1L,0xE9439333L,0x7AL,0x6FL,0x6489DC94FE33C04BLL},{1L,0xE9439333L,0x7AL,0x6FL,0x6489DC94FE33C04BLL},{1L,0xE9439333L,0x7AL,0x6FL,0x6489DC94FE33C04BLL},{1L,0xE9439333L,0x7AL,0x6FL,0x6489DC94FE33C04BLL}}},{{{1L,0xE9439333L,0x7AL,0x6FL,0x6489DC94FE33C04BLL},{1L,0xE9439333L,0x7AL,0x6FL,0x6489DC94FE33C04BLL},{1L,0xE9439333L,0x7AL,0x6FL,0x6489DC94FE33C04BLL},{1L,0xE9439333L,0x7AL,0x6FL,0x6489DC94FE33C04BLL}},{{1L,0xE9439333L,0x7AL,0x6FL,0x6489DC94FE33C04BLL},{1L,0xE9439333L,0x7AL,0x6FL,0x6489DC94FE33C04BLL},{1L,0xE9439333L,0x7AL,0x6FL,0x6489DC94FE33C04BLL},{1L,0xE9439333L,0x7AL,0x6FL,0x6489DC94FE33C04BLL}},{{1L,0xE9439333L,0x7AL,0x6FL,0x6489DC94FE33C04BLL},{1L,0xE9439333L,0x7AL,0x6FL,0x6489DC94FE33C04BLL},{1L,0xE9439333L,0x7AL,0x6FL,0x6489DC94FE33C04BLL},{1L,0xE9439333L,0x7AL,0x6FL,0x6489DC94FE33C04BLL}}},{{{1L,0xE9439333L,0x7AL,0x6FL,0x6489DC94FE33C04BLL},{1L,0xE9439333L,0x7AL,0x6FL,0x6489DC94FE33C04BLL},{1L,0xE9439333L,0x7AL,0x6FL,0x6489DC94FE33C04BLL},{1L,0xE9439333L,0x7AL,0x6FL,0x6489DC94FE33C04BLL}},{{1L,0xE9439333L,0x7AL,0x6FL,0x6489DC94FE33C04BLL},{1L,0xE9439333L,0x7AL,0x6FL,0x6489DC94FE33C04BLL},{1L,0xE9439333L,0x7AL,0x6FL,0x6489DC94FE33C04BLL},{1L,0xE9439333L,0x7AL,0x6FL,0x6489DC94FE33C04BLL}},{{1L,0xE9439333L,0x7AL,0x6FL,0x6489DC94FE33C04BLL},{1L,0xE9439333L,0x7AL,0x6FL,0x6489DC94FE33C04BLL},{1L,0xE9439333L,0x7AL,0x6FL,0x6489DC94FE33C04BLL},{1L,0xE9439333L,0x7AL,0x6FL,0x6489DC94FE33C04BLL}}}};
            int i, j, k;
            g_68 = 8L;
            if ((((safe_sub_func_int32_t_s_s(((0L & (l_109 && ((l_110 = (l_21.f4 == 0xF2AC0DF8L)) ^ g_49))) & g_15[0].f1), g_15[0].f2)) != g_78) ^ 0xC09AL))
            { 
                int32_t l_113 = 0x0EDC5ECFL;
                l_121 = ((safe_lshift_func_uint16_t_u_u(0xD3E2L, 1)) & ((l_77 = l_113) ^ ((g_2.f2 = (safe_lshift_func_uint8_t_u_s((1L < (safe_sub_func_int8_t_s_s((~((safe_mul_func_int8_t_s_s((((g_38 , l_54.f3) == 0L) & g_15[0].f4), 0xF7L)) && g_33.f0)), l_55[1].f0))), p_13.f1))) , 5UL)));
            }
            else
            { 
                return l_122[1][0][3];
            }
        }
    }
    else
    { 
        int16_t l_134 = 0L;
        uint8_t l_135 = 1UL;
        int32_t l_136[5];
        int i;
        for (i = 0; i < 5; i++)
            l_136[i] = (-4L);
        g_68 = (((l_136[0] ^= (((safe_rshift_func_int8_t_s_s(((safe_mod_func_int64_t_s_s((1UL >= (p_13.f1 = (l_67.f0 &= (!(safe_mul_func_int16_t_s_s((-3L), (((safe_lshift_func_int16_t_s_s((p_13.f1 > (safe_add_func_int32_t_s_s((l_21.f2 & g_15[0].f0), l_21.f1))), 15)) > l_48[0]) >= p_13.f3))))))), l_134)) >= p_13.f3), l_135)) != 0x4684L) & (-7L))) > g_2.f1) == g_33.f1);
    }
    g_137++;
    g_2 = l_54;
    return l_21;
}



static int32_t  func_16(const struct S1  p_17, const int8_t  p_18, uint32_t  p_19, uint32_t  p_20)
{ 
    const struct S0 l_32 = {0x691F3A4BL,0x4041L,0x9B2C3978D11E8E10LL,0xCAL};
    uint8_t l_47[2][2] = {{0xAEL,0xAEL},{0xAEL,0xAEL}};
    int i, j;
    g_33 = l_32;
    g_15[0].f1 = ((l_32.f3 ^ ((safe_lshift_func_int16_t_s_u((safe_lshift_func_uint16_t_u_s((g_38++), 6)), 14)) & (g_15[0].f4 = p_17.f1))) & (l_32.f3 >= (safe_unary_minus_func_uint32_t_u((safe_lshift_func_uint8_t_u_s(((safe_add_func_int8_t_s_s((safe_unary_minus_func_uint64_t_u(g_15[0].f1)), p_19)) < l_47[0][0]), g_33.f0))))));
    return p_17.f4;
}





int test_main(void)
{
    int i, j;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2.f0, "g_2.f0", print_hash_value);
    transparent_crc(g_2.f1, "g_2.f1", print_hash_value);
    transparent_crc(g_2.f2, "g_2.f2", print_hash_value);
    transparent_crc(g_2.f3, "g_2.f3", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_15[i].f0, "g_15[i].f0", print_hash_value);
        transparent_crc(g_15[i].f1, "g_15[i].f1", print_hash_value);
        transparent_crc(g_15[i].f2, "g_15[i].f2", print_hash_value);
        transparent_crc(g_15[i].f3, "g_15[i].f3", print_hash_value);
        transparent_crc(g_15[i].f4, "g_15[i].f4", print_hash_value);

    }
    transparent_crc(g_33.f0, "g_33.f0", print_hash_value);
    transparent_crc(g_33.f1, "g_33.f1", print_hash_value);
    transparent_crc(g_33.f2, "g_33.f2", print_hash_value);
    transparent_crc(g_33.f3, "g_33.f3", print_hash_value);
    transparent_crc(g_38, "g_38", print_hash_value);
    transparent_crc(g_49, "g_49", print_hash_value);
    transparent_crc(g_68, "g_68", print_hash_value);
    transparent_crc(g_78, "g_78", print_hash_value);
    transparent_crc(g_137, "g_137", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_193[i], "g_193[i]", print_hash_value);

    }
    transparent_crc(g_194, "g_194", print_hash_value);
    transparent_crc(g_197, "g_197", print_hash_value);
    transparent_crc(g_199, "g_199", print_hash_value);
    transparent_crc(g_200, "g_200", print_hash_value);
    transparent_crc(g_206, "g_206", print_hash_value);
    transparent_crc(g_207, "g_207", print_hash_value);
    transparent_crc(g_232, "g_232", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_233[i], "g_233[i]", print_hash_value);

    }
    transparent_crc(g_237, "g_237", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_247[i][j], "g_247[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_257, "g_257", print_hash_value);
    transparent_crc(g_258, "g_258", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_259[i], "g_259[i]", print_hash_value);

    }
    transparent_crc(g_260, "g_260", print_hash_value);
    transparent_crc(g_286, "g_286", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
