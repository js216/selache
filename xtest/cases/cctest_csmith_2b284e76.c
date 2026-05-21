// SPDX-License-Identifier: MIT
// cctest_csmith_2b284e76.c --- cctest case csmith_2b284e76 (csmith seed 724061814)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x375f9415 */

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

// Options:   -s 724061814 -o /tmp/csmith_gen_5l_5nsrx/csmith.c --concise --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


struct S0 {
   int64_t  f0;
   uint32_t  f1;
   int32_t  f2;
   int32_t  f3;
};

union U1 {
   const int64_t  f0;
   uint64_t  f1;
   int32_t  f2;
   int32_t  f3;
};


static uint32_t g_4[2][6][1] = {{{1UL},{0x449C9FB3L},{1UL},{0x449C9FB3L},{1UL},{0x449C9FB3L}},{{1UL},{0x449C9FB3L},{1UL},{0x449C9FB3L},{1UL},{0x449C9FB3L}}};
static int16_t g_6 = 0xA72CL;
static int32_t g_9 = 7L;
static uint8_t g_20 = 0x69L;
static uint16_t g_43 = 0xEDF4L;
static int16_t g_52 = (-7L);
static uint8_t g_65 = 0xCFL;
static int32_t *g_85 = &g_9;
static int32_t **g_84 = &g_85;
static int32_t ***g_83 = &g_84;
static uint32_t g_94 = 0xF16C484DL;
static int32_t g_125 = 0x201FEAE7L;
static int32_t g_128 = 0xA077DDA0L;
static uint64_t g_129 = 0xB9B4FE2E886BE4B2LL;
static int8_t g_139 = 3L;
static int8_t g_141 = 0xCFL;
static uint16_t *g_162 = &g_43;
static uint16_t **g_161[7][1] = {{&g_162},{&g_162},{&g_162},{&g_162},{&g_162},{&g_162},{&g_162}};
static int32_t g_177 = 0x2F95BF61L;
static struct S0 g_189 = {0L,0xCBFB4229L,0x25C9EAE2L,0xF2121E25L};
static struct S0 *g_188 = &g_189;
static uint64_t g_222[4] = {0x686BF0284A6CA719LL,0x686BF0284A6CA719LL,0x686BF0284A6CA719LL,0x686BF0284A6CA719LL};
static int16_t g_276 = 9L;
static uint32_t g_277 = 0UL;
static union U1 g_280 = {-10L};
static uint8_t g_302 = 251UL;
static uint32_t g_315 = 18446744073709551613UL;
static struct S0 * const *g_318[7] = {&g_188,&g_188,&g_188,&g_188,&g_188,&g_188,&g_188};
static uint32_t g_321 = 1UL;
static struct S0 g_331 = {1L,1UL,4L,1L};
static int32_t g_338 = (-10L);
static int64_t g_346 = 8L;
static int32_t g_347 = 0x7829D728L;
static uint32_t g_350 = 0UL;
static uint8_t *g_356[4][6] = {{&g_65,&g_20,&g_65,&g_65,&g_20,&g_65},{&g_65,&g_20,&g_65,&g_65,&g_20,&g_65},{&g_65,&g_20,&g_65,&g_65,&g_65,&g_65},{&g_65,&g_65,&g_65,&g_65,&g_65,&g_65}};
static uint8_t **g_355[7][2] = {{(void*)0,&g_356[2][1]},{&g_356[2][1],(void*)0},{&g_356[2][1],&g_356[2][1]},{(void*)0,&g_356[2][1]},{&g_356[2][1],(void*)0},{&g_356[2][1],&g_356[2][1]},{(void*)0,&g_356[2][1]}};
static uint32_t **g_366 = (void*)0;
static uint8_t g_412 = 0UL;
static struct S0 * const **g_454[7] = {(void*)0,&g_318[3],&g_318[3],(void*)0,&g_318[3],&g_318[3],(void*)0};
static int32_t g_473 = 0xD2D05298L;
static int32_t * const g_472 = &g_473;
static int32_t * const * const g_471 = &g_472;
static int32_t * const * const *g_470[7] = {(void*)0,&g_471,(void*)0,(void*)0,&g_471,(void*)0,(void*)0};
static const struct S0 *g_754 = (void*)0;
static const struct S0 **g_753 = &g_754;
static const struct S0 ***g_752[7] = {&g_753,&g_753,&g_753,&g_753,&g_753,&g_753,&g_753};
static int32_t *g_846 = &g_9;
static int16_t g_890[7][1] = {{0L},{3L},{0L},{3L},{0L},{3L},{0L}};
static int32_t *** const *g_922 = &g_83;
static int32_t *** const **g_921 = &g_922;
static int8_t g_932 = 0xDCL;
static int64_t *g_973[2][5] = {{&g_331.f0,&g_331.f0,&g_331.f0,&g_331.f0,&g_331.f0},{&g_331.f0,&g_331.f0,&g_331.f0,&g_331.f0,&g_331.f0}};
static int64_t **g_972 = &g_973[1][3];
static int64_t g_978 = 0xE216792D9959A4C0LL;
static struct S0 **g_999 = &g_188;
static struct S0 ***g_998 = &g_999;
static int64_t g_1032 = 0xA73E71D841636FD3LL;
static uint8_t ***g_1048[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
static uint8_t ****g_1047 = &g_1048[2];
static int32_t g_1111 = 0x0917F34DL;
static uint8_t g_1160 = 5UL;
static const int32_t ****g_1205 = (void*)0;



static const uint32_t  func_1(void);
static int64_t  func_26(union U1  p_27, int16_t * p_28, uint16_t  p_29);
static union U1  func_30(struct S0  p_31, uint16_t  p_32, int16_t * p_33, int32_t * p_34);
static uint32_t  func_36(int32_t * const  p_37, int32_t  p_38, int16_t  p_39, uint32_t  p_40);
static int16_t  func_44(uint32_t  p_45);
static const int32_t *** func_70(union U1  p_71, int32_t ** p_72, int16_t * p_73);
static int32_t ** func_75(const uint64_t  p_76, const struct S0  p_77, int8_t  p_78, uint32_t  p_79);
static int32_t * func_81(int32_t *** p_82);




static const uint32_t  func_1(void)
{ 
    int16_t *l_5 = &g_6;
    int8_t l_25 = 0L;
    struct S0 l_35 = {-8L,0x6C0B333EL,-3L,-1L};
    int32_t * const l_41 = &g_9;
    uint32_t l_46 = 4294967292UL;
    int32_t *l_615 = (void*)0;
    int32_t l_776 = (-1L);
    int16_t l_778 = 1L;
    int32_t l_779 = 6L;
    int32_t l_780 = 0x52CF3752L;
    uint32_t l_787 = 6UL;
    int32_t l_801 = 0x519C199EL;
    const int32_t l_814 = 0x4EF1438EL;
    int64_t l_824[4] = {0xB1955044B2049BE5LL,0xB1955044B2049BE5LL,0xB1955044B2049BE5LL,0xB1955044B2049BE5LL};
    int32_t l_826[5] = {0L,0L,0L,0L,0L};
    uint8_t *l_850 = &g_412;
    struct S0 *l_862 = (void*)0;
    int64_t *l_898 = (void*)0;
    int64_t **l_897 = &l_898;
    uint32_t l_916 = 0xF0957339L;
    int32_t * const **l_931 = (void*)0;
    uint8_t **l_954 = &g_356[3][0];
    struct S0 **l_995 = &g_188;
    struct S0 ***l_994 = &l_995;
    uint8_t l_1040 = 0xF6L;
    const int16_t l_1090 = 0x54FCL;
    int8_t l_1100 = 0xE8L;
    int32_t ****l_1125 = &g_83;
    int32_t *****l_1124[1];
    uint8_t l_1178[2][2][2] = {{{0x5EL,0x5EL},{0x5EL,0x5EL}},{{0x5EL,0x5EL},{0x5EL,0x5EL}}};
    int32_t l_1236 = 0x4B5A4B2AL;
    uint16_t ** const l_1241 = &g_162;
    const uint32_t l_1242 = 0x100A1A6EL;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_1124[i] = &l_1125;
    if (((safe_sub_func_int16_t_s_s(((*l_5) ^= g_4[1][5][0]), 0UL)) , g_6))
    { 
        int32_t *l_7 = (void*)0;
        int32_t *l_8 = &g_9;
        int32_t *l_10 = &g_9;
        int32_t *l_11 = &g_9;
        int32_t *l_12 = (void*)0;
        int32_t *l_13 = &g_9;
        int32_t *l_14 = &g_9;
        int32_t *l_15 = &g_9;
        int32_t *l_16 = (void*)0;
        int32_t *l_17 = &g_9;
        int32_t *l_18 = &g_9;
        int32_t *l_19 = &g_9;
        uint16_t *l_42 = &g_43;
        int16_t *l_50 = (void*)0;
        int16_t *l_51 = &g_52;
        uint32_t **l_786 = (void*)0;
        uint8_t l_815 = 252UL;
        uint32_t l_822 = 9UL;
        int32_t l_825[1][1];
        union U1 l_839 = {0x80C70BFCDA6595CALL};
        struct S0 *l_842 = (void*)0;
        int32_t ***l_845 = &g_84;
        uint64_t l_892 = 0xE9697B0FB15990F2LL;
        uint16_t *** const l_901 = &g_161[4][0];
        int64_t l_920[3][2][5];
        uint8_t **l_955 = &g_356[2][1];
        uint32_t l_956[5][1] = {{0xCA482DEBL},{4294967293UL},{0xCA482DEBL},{4294967293UL},{0xCA482DEBL}};
        int8_t *l_1065[7] = {&g_141,&g_141,&g_141,&g_141,&g_141,&g_141,&g_141};
        int8_t **l_1064[5][1][6] = {{{(void*)0,&l_1065[5],&l_1065[5],(void*)0,&l_1065[5],&l_1065[5]}},{{(void*)0,&l_1065[5],&l_1065[5],(void*)0,&l_1065[5],&l_1065[5]}},{{(void*)0,&l_1065[5],&l_1065[5],(void*)0,&l_1065[5],&l_1065[5]}},{{(void*)0,&l_1065[5],&l_1065[5],(void*)0,&l_1065[5],&l_1065[5]}},{{(void*)0,&l_1065[5],&l_1065[5],(void*)0,&l_1065[5],&l_1065[5]}}};
        int32_t l_1128 = 1L;
        uint32_t l_1132 = 4294967292UL;
        int i, j, k;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 1; j++)
                l_825[i][j] = 0x1CD5F2ECL;
        }
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 2; j++)
            {
                for (k = 0; k < 5; k++)
                    l_920[i][j][k] = 0x0566BCB73F87AB7BLL;
            }
        }
        g_20++;
        (*g_472) = (safe_sub_func_uint64_t_u_u((l_25 & func_26(func_30(l_35, (func_36(l_41, (*l_41), ((*l_51) = (((*l_42) = (l_5 != l_5)) , ((*l_5) ^= func_44(l_46)))), (*l_41)) , (*l_19)), l_5, l_615), g_162, l_35.f1)), g_315));
    }
    else
    { 
        uint32_t l_1188 = 18446744073709551611UL;
        int32_t ****l_1207 = &g_83;
        for (l_778 = (-10); (l_778 >= 13); l_778 = safe_add_func_int32_t_s_s(l_778, 9))
        { 
            int16_t l_1170 = 0xC2BEL;
            int32_t l_1186 = 0x96254BB9L;
            int32_t l_1189 = 0x71F0A8C0L;
            if (l_1170)
                break;
            for (g_277 = 0; (g_277 >= 54); g_277 = safe_add_func_int32_t_s_s(g_277, 7))
            { 
                uint8_t l_1173 = 0x14L;
                int16_t *l_1187 = &g_890[0][0];
                l_1173++;
                (**g_471) ^= ((*g_846) = (-2L));
                (*****g_921) &= (safe_rshift_func_int16_t_s_u((l_1178[1][1][1] & (safe_rshift_func_uint8_t_u_s(((*l_850) = (((((**g_471) == l_1170) , (((*l_1187) = (l_1186 = ((*l_5) |= (((safe_sub_func_uint8_t_u_u(l_1173, 0xA1L)) | (l_1173 & ((((+(safe_lshift_func_int16_t_s_s(((0x34L && l_1170) > g_321), g_52))) , (-5L)) || g_347) || l_1170))) , g_129)))) , (*g_162))) > l_1188) <= l_1189)), g_43))), 13));
            }
            for (g_331.f1 = 0; (g_331.f1 <= 45); g_331.f1 = safe_add_func_uint8_t_u_u(g_331.f1, 5))
            { 
                const int32_t *****l_1206 = &g_1205;
                int32_t l_1208 = 1L;
                int32_t l_1233 = (-1L);
                int32_t l_1235 = 0x217CCB6DL;
                l_1208 = ((***g_83) = ((safe_add_func_uint32_t_u_u(g_277, (safe_mul_func_int8_t_s_s(((g_280 , (g_331.f3 < (((((safe_lshift_func_int8_t_s_u((safe_mod_func_uint32_t_u_u(l_1188, ((safe_lshift_func_int16_t_s_u(((*l_5) = (l_1170 & (+(safe_rshift_func_int16_t_s_s((((*l_1206) = g_1205) != l_1207), l_1189))))), 2)) , 0x86BA5403L))), l_1189)) == (**g_972)) & l_1189) , (****l_1207)) <= (**g_972)))) >= (**g_972)), (****l_1207))))) ^ g_302));
                for (g_338 = (-23); (g_338 > (-8)); g_338 = safe_add_func_int32_t_s_s(g_338, 5))
                { 
                    int8_t l_1223 = 0xCEL;
                    const union U1 l_1232 = {1L};
                    int16_t *l_1234[1][7];
                    int i, j;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 7; j++)
                            l_1234[i][j] = (void*)0;
                    }
                    (**g_83) = (*g_84);
                    return l_1170;
                }
                if ((****g_922))
                    break;
                if ((***g_83))
                    continue;
                (***g_83) = ((safe_rshift_func_uint16_t_u_u((****l_1207), (((safe_rshift_func_uint8_t_u_s((&g_141 != (void*)0), ((65535UL && 2UL) <= ((**g_471) = ((void*)0 != l_1241))))) > l_1208) == g_280.f0))) , 0x895EB786L);
            }
            (*g_472) = 0xFA81A5F5L;
        }
    }
    return l_1242;
}



static int64_t  func_26(union U1  p_27, int16_t * p_28, uint16_t  p_29)
{ 
    int32_t ****l_657 = &g_83;
    struct S0 l_680 = {4L,0xE74400B5L,0L,0xEB06B762L};
    struct S0 **l_681[4];
    int64_t *l_725 = &g_346;
    int32_t l_734 = 0x7A4C8850L;
    int32_t l_736 = 0x22B4BFBAL;
    int32_t l_737 = 0xF847D091L;
    int32_t l_738 = 1L;
    int32_t *l_763 = &l_737;
    int32_t *l_764 = &g_177;
    int32_t *l_765 = &l_736;
    int32_t *l_766[2][3][4] = {{{(void*)0,&g_177,&g_177,(void*)0},{&g_177,(void*)0,&g_177,&g_177},{(void*)0,(void*)0,&l_734,(void*)0}},{{(void*)0,&g_177,&g_177,(void*)0},{&g_177,(void*)0,&g_177,&g_177},{(void*)0,(void*)0,&l_734,(void*)0}}};
    uint32_t l_767 = 1UL;
    uint32_t l_770 = 0xBB12C127L;
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_681[i] = &g_188;
    for (g_331.f2 = (-27); (g_331.f2 != (-7)); g_331.f2 = safe_add_func_uint16_t_u_u(g_331.f2, 5))
    { 
        uint32_t l_649 = 18446744073709551608UL;
        int32_t *l_651[4][5] = {{&g_9,&g_9,(void*)0,&g_189.f3,(void*)0},{&g_9,&g_9,&g_9,(void*)0,&g_9},{&g_9,&g_9,(void*)0,&g_189.f3,(void*)0},{&g_9,&g_9,&g_9,(void*)0,&g_9}};
        struct S0 **l_660[3][3] = {{&g_188,&g_188,&g_188},{&g_188,&g_188,&g_188},{&g_188,&g_188,&g_188}};
        uint16_t l_684 = 0x5CC6L;
        int32_t l_758[1];
        const int16_t l_760[4] = {1L,1L,1L,1L};
        int i, j;
        for (i = 0; i < 1; i++)
            l_758[i] = 0x4C45BEEEL;
        for (g_346 = 6; (g_346 >= 2); g_346 -= 1)
        { 
            int8_t l_656 = 0x8EL;
            int32_t l_659 = (-1L);
            struct S0 **l_682 = &g_188;
            int32_t l_708 = 0xE52BA5B1L;
            int64_t *l_727[7][3] = {{(void*)0,&g_331.f0,(void*)0},{&l_680.f0,&l_680.f0,&l_680.f0},{(void*)0,&g_331.f0,(void*)0},{&l_680.f0,&l_680.f0,&l_680.f0},{(void*)0,&g_331.f0,(void*)0},{&l_680.f0,&l_680.f0,&l_680.f0},{(void*)0,&g_331.f0,(void*)0}};
            int64_t *l_728 = &g_331.f0;
            int i, j;
            if (l_649)
            { 
                uint16_t l_650 = 0x7C05L;
                return l_650;
            }
            else
            { 
                const uint16_t l_658 = 0x7841L;
                struct S0 ***l_661 = (void*)0;
                struct S0 ***l_662 = &l_660[0][2];
                uint32_t *l_677 = &g_4[1][5][0];
                uint64_t *l_683 = &g_280.f1;
                uint64_t *l_685 = &g_222[0];
                int8_t l_704 = 7L;
                int i;
                (*g_84) = l_651[0][2];
                l_659 |= ((**g_471) = ((safe_mul_func_uint16_t_u_u((((((g_52 | (l_656 > (0xEDL >= l_656))) != 0x2F53L) == (l_657 != &g_83)) | l_658) ^ 0L), (*p_28))) && l_656));
                if ((0x778BD77C6B65CEACLL ^ ((*l_685) = (((g_318[g_346] != ((*l_662) = l_660[0][2])) ^ (safe_add_func_uint32_t_u_u((0x448DFF5AL >= (((safe_lshift_func_uint8_t_u_s((safe_add_func_uint32_t_u_u((safe_rshift_func_uint16_t_u_u((!((((((((+((safe_div_func_int16_t_s_s((((*l_683) ^= (((safe_rshift_func_int16_t_s_u((((((*l_677) = g_9) , (safe_add_func_uint16_t_u_u((l_680 , 0x3321L), l_658))) , l_681[3]) != l_682), 0)) | l_658) & 0L)) , 0xC6A8L), (*p_28))) ^ (*p_28))) | l_659) & l_684) > (-1L)) && 0xF900L) < p_27.f2) , 0x03L) , 0x1CL)), 7)), p_29)), p_27.f1)) , 0x37C6L) > p_27.f2)), g_20))) <= g_65))))
                { 
                    int8_t l_690 = 0x7FL;
                    int32_t l_697 = 0x31064E75L;
                    struct S0 l_698 = {-1L,4294967295UL,0x801F11E4L,0x5C3B3422L};
                    uint16_t *l_703 = &l_684;
                    int64_t *l_707[4][7][6] = {{{&g_331.f0,&g_331.f0,&l_698.f0,&g_346,(void*)0,(void*)0},{&g_346,&g_331.f0,&l_680.f0,&g_346,&g_331.f0,&g_189.f0},{&g_346,&g_331.f0,&g_189.f0,&l_680.f0,(void*)0,&l_698.f0},{&l_680.f0,&g_331.f0,&g_189.f0,(void*)0,&l_698.f0,&g_331.f0},{&l_680.f0,&l_680.f0,&g_331.f0,&l_680.f0,&l_698.f0,&l_698.f0},{&g_346,(void*)0,(void*)0,&g_346,&g_189.f0,&l_698.f0},{&g_346,&l_698.f0,&g_331.f0,&g_346,&l_680.f0,&g_331.f0}},{{&g_331.f0,&l_680.f0,&g_189.f0,&l_680.f0,&l_680.f0,&l_698.f0},{(void*)0,&l_698.f0,&g_189.f0,&g_331.f0,&g_189.f0,&g_189.f0},{&g_189.f0,(void*)0,&l_680.f0,&g_331.f0,&l_698.f0,(void*)0},{(void*)0,&l_680.f0,&l_698.f0,&l_680.f0,&l_698.f0,&l_680.f0},{&g_331.f0,&g_331.f0,&l_698.f0,&g_346,(void*)0,(void*)0},{&g_346,&g_331.f0,&l_680.f0,&g_346,&g_331.f0,&g_189.f0},{&g_346,&g_331.f0,&g_189.f0,&l_680.f0,(void*)0,&l_698.f0}},{{&l_680.f0,&g_331.f0,&g_189.f0,(void*)0,&l_698.f0,&g_331.f0},{&l_680.f0,&l_680.f0,&g_331.f0,&l_680.f0,&l_698.f0,&l_698.f0},{&g_346,(void*)0,(void*)0,&g_346,&g_189.f0,&l_698.f0},{&g_346,&l_698.f0,&g_331.f0,&g_346,&l_680.f0,&g_331.f0},{&g_331.f0,&l_680.f0,&g_189.f0,&l_680.f0,&l_680.f0,&l_698.f0},{(void*)0,&l_698.f0,&g_189.f0,&g_331.f0,&g_189.f0,&g_189.f0},{&g_189.f0,(void*)0,&l_680.f0,&g_331.f0,&l_698.f0,(void*)0}},{{(void*)0,&l_680.f0,&l_698.f0,&l_680.f0,&l_698.f0,&l_680.f0},{&g_331.f0,&g_331.f0,&l_698.f0,&g_346,(void*)0,(void*)0},{&g_346,&g_331.f0,&l_680.f0,&g_346,&g_331.f0,&g_189.f0},{&g_346,&g_331.f0,&g_189.f0,&l_680.f0,(void*)0,&l_698.f0},{&l_680.f0,&g_331.f0,&g_189.f0,(void*)0,&l_698.f0,&g_331.f0},{&l_680.f0,&l_680.f0,&g_331.f0,&l_680.f0,&l_698.f0,&l_698.f0},{&g_346,(void*)0,(void*)0,&g_346,&g_189.f0,&l_698.f0}}};
                    int i, j, k;
                    l_697 &= (safe_mod_func_uint64_t_u_u(((((safe_rshift_func_uint16_t_u_s(p_27.f1, (p_27.f2 <= (((*l_683) = l_690) < ((safe_sub_func_uint64_t_u_u((((*l_677) &= (p_29 == ((safe_mod_func_int16_t_s_s((((-1L) <= (0xD02020B9L | (safe_add_func_int32_t_s_s(l_690, p_27.f2)))) || 0xC12A2641L), 0x407AL)) & l_680.f3))) >= l_658), 0xDB2BB7D415E38BBDLL)) >= (-7L)))))) , (void*)0) == &g_141) ^ l_656), 7L));
                    (***l_657) = &l_659;
                    (*g_472) |= ((g_222[1] &= p_29) && (l_656 , (l_698 , (l_708 ^= (safe_div_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u(((*l_703) = ((*g_162) = (*g_162))), l_704)), (safe_div_func_int64_t_s_s((****l_657), (0xCBB4L & 1UL)))))))));
                }
                else
                { 
                    uint16_t l_718 = 65533UL;
                    uint16_t **l_719 = &g_162;
                    uint8_t *l_720 = &g_412;
                    int64_t **l_726[7] = {&l_725,&l_725,&l_725,&l_725,&l_725,&l_725,&l_725};
                    int8_t *l_729 = &l_656;
                    uint16_t *l_730 = &l_718;
                    int i;
                    (**g_471) = (safe_add_func_int64_t_s_s(p_27.f0, ((safe_unary_minus_func_uint64_t_u(l_704)) > (safe_div_func_uint8_t_u_u(((*p_28) > ((*l_730) = (safe_div_func_int32_t_s_s(((safe_lshift_func_int16_t_s_s(l_718, (&p_29 != ((*l_719) = &p_29)))) < ((++(*l_720)) || (safe_mod_func_int8_t_s_s(((*l_729) = ((l_728 = (l_727[5][1] = l_725)) != (void*)0)), l_718)))), p_27.f0)))), l_708)))));
                    if (p_29)
                        break;
                    if (l_708)
                        continue;
                }
            }
            if ((**g_471))
                continue;
            l_680.f3 ^= ((**g_471) = p_29);
        }
        for (g_347 = 0; (g_347 > (-27)); --g_347)
        { 
            int32_t l_733[2][6] = {{0xC81C1A30L,0xC81C1A30L,0xC81C1A30L,0xC81C1A30L,0xC81C1A30L,0xC81C1A30L},{0xC81C1A30L,0xC81C1A30L,0xC81C1A30L,0xC81C1A30L,0xC81C1A30L,0xC81C1A30L}};
            int8_t l_735[4];
            uint32_t l_739[6][7][5] = {{{0xF7AD8C42L,0xBBD18D44L,1UL,0xD80A8105L,4294967295UL},{0x2FA2F7B4L,0xF3E371D5L,4294967293UL,1UL,4294967295UL},{0x7085771AL,0xF7AD8C42L,1UL,3UL,4294967295UL},{1UL,4294967295UL,1UL,1UL,4294967295UL},{0xD418FCF8L,1UL,0x31AE2E10L,0xB87C0876L,0xD80A8105L},{3UL,0x5017F20FL,0x965C20C3L,4294967290UL,0xFF199D4BL},{0x5017F20FL,0xB9133AEEL,0xBBD18D44L,0xB87D0100L,0x1C8B0F51L}},{{3UL,1UL,4294967295UL,0xB9133AEEL,4294967295UL},{0xD418FCF8L,0xA54F1D7EL,1UL,0x965C20C3L,0x2FA2F7B4L},{1UL,4294967293UL,0x5017F20FL,0xFF199D4BL,0x2954B55BL},{0x7085771AL,4294967293UL,0x1D455B0BL,0x401D64C4L,0x401D64C4L},{0x2FA2F7B4L,0xA54F1D7EL,0x2FA2F7B4L,0x46AE8423L,0xF7AD8C42L},{0xF7AD8C42L,1UL,4294967295UL,0xBBD18D44L,0xA54F1D7EL},{0xB87D0100L,0xB9133AEEL,0xB87C0876L,0x2FA2F7B4L,0xD418FCF8L}},{{0UL,0x5017F20FL,4294967295UL,0xA54F1D7EL,0x31AE2E10L},{0UL,1UL,0x2FA2F7B4L,0xF3E371D5L,4294967293UL},{0xD80A8105L,4294967295UL,0x1D455B0BL,4294967295UL,0UL},{1UL,0xF7AD8C42L,0x5017F20FL,4294967295UL,3UL},{0xBBD18D44L,0xF3E371D5L,1UL,0xF3E371D5L,0xBBD18D44L},{0xB87C0876L,0xBBD18D44L,4294967295UL,0xA54F1D7EL,0x1D455B0BL},{0x965C20C3L,0x7085771AL,0xBBD18D44L,0x2FA2F7B4L,0xB9133AEEL}},{{0x1C8B0F51L,3UL,0x965C20C3L,0xBBD18D44L,0x1D455B0BL},{4294967290UL,0x2FA2F7B4L,0x31AE2E10L,0x46AE8423L,0xBBD18D44L},{0x1D455B0BL,1UL,1UL,0x401D64C4L,3UL},{0x31AE2E10L,1UL,1UL,0xFF199D4BL,0UL},{0x31AE2E10L,0xBF1FD923L,4294967293UL,0x965C20C3L,4294967293UL},{0x1D455B0BL,0x1D455B0BL,1UL,0xB9133AEEL,0x31AE2E10L},{4294967290UL,0UL,0xFF199D4BL,0xB87D0100L,0xD418FCF8L}},{{0x1C8B0F51L,0xD80A8105L,0xDF586E97L,4294967290UL,0xA54F1D7EL},{0x965C20C3L,0UL,0x401D64C4L,0xB87C0876L,0xF7AD8C42L},{0xB87C0876L,0x1D455B0BL,1UL,1UL,0x401D64C4L},{0xBBD18D44L,0xBF1FD923L,0xB87D0100L,3UL,0x2954B55BL},{1UL,1UL,0xB87D0100L,1UL,0x2FA2F7B4L},{0xD80A8105L,1UL,1UL,0xD80A8105L,4294967295UL},{0UL,0x2FA2F7B4L,0x401D64C4L,1UL,0x1C8B0F51L}},{{0UL,3UL,0xDF586E97L,4294967295UL,0xFF199D4BL},{0xB87D0100L,0x7085771AL,0xFF199D4BL,0x2954B55BL,1UL},{0xF3E371D5L,0xB87D0100L,0xB87C0876L,1UL,3UL},{0xD418FCF8L,1UL,0xBBD18D44L,1UL,0xF7AD8C42L},{0xFF199D4BL,0xF3E371D5L,1UL,4294967293UL,0xF7AD8C42L},{0x2FA2F7B4L,3UL,0xD80A8105L,0xD80A8105L,3UL},{4294967295UL,0xD80A8105L,0UL,0x5017F20FL,1UL}}};
            int8_t *l_749 = &g_139;
            uint32_t *l_757 = &g_350;
            uint8_t *l_759 = &g_302;
            int i, j, k;
            for (i = 0; i < 4; i++)
                l_735[i] = 0xF3L;
            l_739[0][3][4]--;
        }
        (*g_472) |= (l_760[0] && (safe_sub_func_int8_t_s_s(0x19L, p_27.f1)));
    }
    l_767--;
    return l_770;
}



static union U1  func_30(struct S0  p_31, uint16_t  p_32, int16_t * p_33, int32_t * p_34)
{ 
    int16_t l_623 = 0L;
    uint16_t l_630 = 65530UL;
    for (g_338 = 0; (g_338 <= 7); ++g_338)
    { 
        uint64_t l_628 = 0x38C42DC16C737D32LL;
        uint32_t l_629[5] = {1UL,1UL,1UL,1UL,1UL};
        int32_t **** const l_631 = &g_83;
        int i;
        (****l_631) &= (((+((safe_mul_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s((((((l_623 , ((safe_mod_func_uint32_t_u_u(((safe_div_func_int8_t_s_s(((((*g_472) |= ((l_628 && p_32) == l_629[0])) & (p_31.f1 > l_628)) , ((0x55AC6B8888C7A976LL | g_350) <= g_338)), 0xB5L)) ^ l_630), l_629[3])) | 0x1DL)) , (void*)0) != l_631) , 0x8FL) , 2L), 4)), (*g_162))) && g_222[0])) > 0x9C642F7971E486BDLL) & g_321);
        (**g_471) = 6L;
    }
    for (p_31.f2 = 0; (p_31.f2 <= (-14)); p_31.f2 = safe_sub_func_uint32_t_u_u(p_31.f2, 7))
    { 
        int32_t *l_634 = &g_9;
        int32_t **l_635 = &l_634;
        uint64_t *l_646 = &g_222[0];
        (*l_635) = ((**g_83) = l_634);
        if ((***g_83))
            continue;
        (*g_85) = (safe_mod_func_int16_t_s_s((safe_rshift_func_int8_t_s_s(0x7CL, 4)), ((*g_162) = (safe_sub_func_int64_t_s_s(p_31.f1, (g_331.f1 && (((safe_sub_func_int64_t_s_s(g_65, ((*l_646) = ((*l_634) | 2L)))) < (((0x5A83CB457DF6DC95LL | g_277) || p_31.f2) <= 4294967287UL)) || (*p_33))))))));
    }
    return g_280;
}



static uint32_t  func_36(int32_t * const  p_37, int32_t  p_38, int16_t  p_39, uint32_t  p_40)
{ 
    int64_t l_56 = 0x7CC73EE49CE57088LL;
    union U1 l_74 = {0xD571E9572AB10E3ALL};
    int32_t l_269 = (-1L);
    int16_t *l_306[6][3] = {{&g_276,&g_6,&g_6},{&g_276,&g_6,&g_6},{(void*)0,&g_6,&g_6},{&g_276,&g_6,&g_6},{&g_276,&g_6,&g_6},{(void*)0,&g_6,&g_6}};
    struct S0 **l_320 = &g_188;
    int32_t l_341 = 0x63974364L;
    int32_t l_342 = (-7L);
    int32_t l_348 = 0L;
    uint8_t ***l_357[6][1];
    const uint32_t *l_364 = &g_4[0][3][0];
    const uint32_t **l_363 = &l_364;
    uint64_t l_373 = 1UL;
    uint32_t ***l_389 = &g_366;
    int32_t ***l_444 = &g_84;
    uint16_t ***l_480[6][2][3] = {{{&g_161[6][0],(void*)0,&g_161[6][0]},{&g_161[4][0],(void*)0,&g_161[5][0]}},{{&g_161[6][0],&g_161[6][0],&g_161[6][0]},{(void*)0,(void*)0,(void*)0}},{{&g_161[6][0],(void*)0,(void*)0},{(void*)0,&g_161[6][0],(void*)0}},{{&g_161[6][0],&g_161[6][0],(void*)0},{&g_161[4][0],&g_161[4][0],(void*)0}},{{&g_161[6][0],&g_161[6][0],&g_161[6][0]},{(void*)0,&g_161[6][0],&g_161[5][0]}},{{&g_161[6][0],(void*)0,&g_161[6][0]},{&g_161[4][0],(void*)0,&g_161[5][0]}}};
    int32_t l_574 = 3L;
    int32_t l_579 = 0x95F4EDD9L;
    int32_t l_580 = 1L;
    int32_t l_581 = 0xD1D20C5EL;
    int32_t l_585 = 1L;
    int32_t l_588 = (-1L);
    int32_t l_589 = 0xADDAA1F5L;
    int32_t l_590 = 0xBAD92136L;
    int32_t l_591 = 0x3B726710L;
    uint16_t l_592 = 8UL;
    int i, j, k;
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 1; j++)
            l_357[i][j] = &g_355[0][1];
    }
    for (p_39 = (-21); (p_39 >= (-21)); p_39 = safe_add_func_int8_t_s_s(p_39, 8))
    { 
        uint32_t l_55 = 2UL;
        int32_t l_61 = 0x49124C6EL;
        int32_t l_64 = 0x5EB5A40AL;
        uint64_t l_301 = 0x8A6FC8C2E6879793LL;
        int32_t *l_313 = (void*)0;
        int32_t l_349 = (-7L);
        int32_t ***l_353 = (void*)0;
        int32_t ****l_354 = &g_83;
    }
lbl_402:
    (**g_84) = 0x795154B6L;
lbl_474:
    g_355[0][1] = g_355[0][1];
    for (l_74.f2 = (-16); (l_74.f2 > (-23)); l_74.f2 = safe_sub_func_uint64_t_u_u(l_74.f2, 8))
    { 
        uint32_t *l_362 = &g_321;
        const uint32_t ***l_365 = &l_363;
        int32_t ***l_367[6];
        int32_t ****l_368[3][3][1];
        const int8_t *l_376 = &g_141;
        int8_t l_442 = 0x33L;
        int64_t l_479 = 0x7F4B3580D72819B0LL;
        int16_t l_513 = (-10L);
        int64_t l_515[7][7] = {{0x5C3C306D34E91FE0LL,(-8L),0xF44697506E1CF874LL,0xAD8C539F0A9FE20BLL,0xAD8C539F0A9FE20BLL,0xF44697506E1CF874LL,(-8L)},{1L,(-1L),(-1L),(-1L),1L,(-1L),(-1L)},{0xAD8C539F0A9FE20BLL,0xAD8C539F0A9FE20BLL,0xF44697506E1CF874LL,(-8L),0x5C3C306D34E91FE0LL,0x5C3C306D34E91FE0LL,(-8L)},{(-7L),0L,(-7L),(-1L),(-7L),0L,(-7L)},{0xAD8C539F0A9FE20BLL,(-8L),(-8L),0xAD8C539F0A9FE20BLL,0x5C3C306D34E91FE0LL,0xF44697506E1CF874LL,0xF44697506E1CF874LL},{1L,0L,(-1L),0L,1L,0L,(-1L)},{0x5C3C306D34E91FE0LL,0xAD8C539F0A9FE20BLL,(-8L),(-8L),0xAD8C539F0A9FE20BLL,0x5C3C306D34E91FE0LL,0xF44697506E1CF874LL}};
        uint16_t l_519 = 0xF718L;
        struct S0 *l_523 = &g_189;
        union U1 l_557 = {0x97FD2A0862CB02E6LL};
        uint32_t l_582 = 4294967295UL;
        int i, j, k;
        for (i = 0; i < 6; i++)
            l_367[i] = &g_84;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                for (k = 0; k < 1; k++)
                    l_368[i][j][k] = (void*)0;
            }
        }
        (**g_84) |= ((((0x8DDAL != (safe_sub_func_int32_t_s_s((((*l_362) = p_39) < (((g_83 = (p_38 , ((7UL < (((*l_365) = l_363) != g_366)) , l_367[4]))) == &g_84) == 1UL)), (-2L)))) , l_74.f3) || p_39) , l_269);
        for (g_177 = 15; (g_177 == 10); g_177 = safe_sub_func_int16_t_s_s(g_177, 9))
        { 
            int64_t l_380[7][1][7] = {{{0xE79B31CC3B5E4322LL,0xC02F5C1E7DB1492BLL,0xE79B31CC3B5E4322LL,0xE79B31CC3B5E4322LL,0xC02F5C1E7DB1492BLL,0xE79B31CC3B5E4322LL,0xE79B31CC3B5E4322LL}},{{1L,1L,(-1L),1L,1L,(-1L),1L}},{{0xC02F5C1E7DB1492BLL,0xE79B31CC3B5E4322LL,0xE79B31CC3B5E4322LL,0xC02F5C1E7DB1492BLL,0xE79B31CC3B5E4322LL,0xE79B31CC3B5E4322LL,0xC02F5C1E7DB1492BLL}},{{0L,1L,0L,0L,1L,0L,0L}},{{0xC02F5C1E7DB1492BLL,0xC02F5C1E7DB1492BLL,0L,0xC02F5C1E7DB1492BLL,0xC02F5C1E7DB1492BLL,0L,0xC02F5C1E7DB1492BLL}},{{1L,0L,0L,1L,0L,0L,1L}},{{0xE79B31CC3B5E4322LL,0xC02F5C1E7DB1492BLL,0xE79B31CC3B5E4322LL,0xE79B31CC3B5E4322LL,0xC02F5C1E7DB1492BLL,0xE79B31CC3B5E4322LL,0xE79B31CC3B5E4322LL}}};
            uint64_t *l_381[7][4];
            uint32_t * const *l_386 = &l_362;
            uint32_t l_398 = 0xE858675BL;
            int32_t l_406 = 0x4CA5DCCDL;
            int32_t l_407 = 5L;
            int32_t l_408 = (-1L);
            int32_t l_409[6][2][2] = {{{0xF1865815L,0xF1865815L},{0xF1865815L,0x8B30C778L}},{{0xF1865815L,0xF1865815L},{0xF1865815L,0x8B30C778L}},{{0xF1865815L,0xF1865815L},{0xF1865815L,0x8B30C778L}},{{0xF1865815L,0xF1865815L},{0xF1865815L,0x8B30C778L}},{{0xF1865815L,0xF1865815L},{0xF1865815L,0x8B30C778L}},{{0xF1865815L,0xF1865815L},{0xF1865815L,0x8B30C778L}}};
            int8_t l_450 = 0x8DL;
            int32_t * const * const l_467 = &g_85;
            int32_t * const * const *l_466 = &l_467;
            int i, j, k;
            for (i = 0; i < 7; i++)
            {
                for (j = 0; j < 4; j++)
                    l_381[i][j] = &g_222[0];
            }
            if ((safe_mul_func_uint8_t_u_u(0x93L, (l_373 >= (l_341 = (safe_rshift_func_uint8_t_u_s((((void*)0 == l_376) == (safe_rshift_func_uint8_t_u_s(((~((l_380[4][0][1] , &l_373) != l_381[5][2])) | l_269), 6))), 6)))))))
            { 
                int64_t *l_401 = &g_331.f0;
                int32_t l_403 = 0xAC52766AL;
                int32_t l_405 = 5L;
                int32_t l_411 = 0xB8124FF2L;
                for (p_40 = 0; (p_40 < 21); p_40++)
                { 
                    return l_380[0][0][4];
                }
                if ((safe_add_func_int32_t_s_s((((l_386 == ((*l_365) = &l_364)) != ((safe_div_func_int64_t_s_s((((((void*)0 == l_389) , ((*l_401) = (safe_rshift_func_uint8_t_u_u((safe_add_func_uint16_t_u_u(((*g_162) = ((safe_rshift_func_uint8_t_u_u((safe_add_func_uint16_t_u_u(l_398, (safe_lshift_func_int8_t_s_s(g_277, ((0x05E10C31L > p_39) && p_40))))), p_39)) & l_74.f3)), (-9L))), l_380[1][0][4])))) != g_52) & p_40), g_189.f1)) >= g_189.f3)) & p_39), l_380[5][0][1])))
                { 
                    int16_t l_404 = (-3L);
                    int32_t l_410 = 0x47FC99E6L;
                    if (l_74.f2)
                        break;
                    if (g_9)
                        goto lbl_402;
                    ++g_412;
                }
                else
                { 
                    union U1 l_421 = {-2L};
                    int32_t * const l_428[3][4] = {{(void*)0,&l_409[5][1][0],&g_331.f3,&l_409[5][1][0]},{&l_409[5][1][0],(void*)0,&g_331.f3,&g_331.f3},{(void*)0,(void*)0,&l_409[5][1][0],&g_331.f3}};
                    int i, j;
                    g_189.f3 |= (((((safe_lshift_func_int8_t_s_s((l_269 <= ((safe_sub_func_int64_t_s_s(g_276, ((((((0xC7CDL ^ (safe_mod_func_int32_t_s_s(((*p_37) ^= l_405), l_403))) <= (p_38 , l_56)) , l_421) , g_52) , &l_342) == (void*)0))) > p_38)), g_222[3])) , g_189.f2) ^ p_38) , l_407) || (*g_162));
                    (*g_188) = (*g_188);
                    (*p_37) = (((safe_add_func_int64_t_s_s(((safe_sub_func_uint64_t_u_u((((safe_add_func_uint64_t_u_u(l_421.f3, g_302)) == 0x8E7AL) >= (p_37 != l_428[0][3])), p_38)) && ((*l_401) = (safe_div_func_int32_t_s_s(((((safe_div_func_int16_t_s_s(g_20, 0xB51BL)) != 0x2B54E87AL) , p_39) < l_342), 1L)))), (-1L))) && (*g_162)) <= 18446744073709551610UL);
                }
                l_442 &= (safe_mod_func_int64_t_s_s((((*p_37) < (safe_mod_func_uint64_t_u_u((safe_sub_func_uint8_t_u_u((p_38 < 8UL), ((safe_lshift_func_int16_t_s_u((g_52 = g_125), ((*g_162) = ((+(g_350 | g_350)) ^ (l_407 != (*p_37)))))) | l_403))), 0xDAB4E5C12BEB48B1LL))) && p_38), 18446744073709551607UL));
                if ((**g_84))
                    break;
                for (l_373 = 0; (l_373 <= 0); l_373 += 1)
                { 
                    int16_t l_443[5] = {0xE680L,0xE680L,0xE680L,0xE680L,0xE680L};
                    int i;
                    (*g_85) &= (0xA342L || p_38);
                    if ((*g_85))
                        continue;
                    if (l_443[0])
                        continue;
                }
            }
            else
            { 
                int16_t l_447 = (-3L);
                for (g_141 = 0; (g_141 <= 0); g_141 += 1)
                { 
                    (**g_83) = func_81(l_444);
                }
                for (l_348 = 0; (l_348 < 3); ++l_348)
                { 
                    struct S0 ***l_452 = &l_320;
                    struct S0 ****l_451 = &l_452;
                    struct S0 * const **l_453[3][7] = {{&g_318[3],&g_318[3],&g_318[3],&g_318[3],&g_318[3],&g_318[3],&g_318[3]},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_318[3],&g_318[3],&g_318[3],&g_318[3],&g_318[3],&g_318[3],&g_318[3]}};
                    int32_t l_455[1][3];
                    int i, j;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 3; j++)
                            l_455[i][j] = 0xE2A0FCE9L;
                    }
                    (***l_444) &= ((l_447 , 0xB9L) | (((l_455[0][2] = ((safe_add_func_uint32_t_u_u(l_450, p_39)) >= (((p_40 <= (((*l_451) = &l_320) == (g_454[1] = l_453[1][0]))) ^ p_38) <= l_455[0][0]))) , (*g_83)) != (void*)0));
                }
                (**g_84) |= (-10L);
            }
            for (g_331.f3 = 0; (g_331.f3 <= 4); ++g_331.f3)
            { 
                int32_t * const * const **l_468 = (void*)0;
                int32_t * const * const **l_469[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_469[i] = &l_466;
                (***l_466) |= (safe_rshift_func_int8_t_s_u((safe_mod_func_int8_t_s_s((((void*)0 != &l_442) && p_40), (g_321 ^ (safe_mod_func_int32_t_s_s(((safe_rshift_func_int8_t_s_u((p_38 == 0x90L), 5)) >= (((g_470[3] = l_466) != &g_471) > g_350)), 0x459C50F7L))))), p_40));
                (*g_188) = (*g_188);
                (***g_83) ^= (-1L);
                if (g_9)
                    goto lbl_474;
            }
            (*g_84) = func_81((g_83 = &g_84));
            for (g_125 = 0; (g_125 >= (-5)); g_125 = safe_sub_func_uint16_t_u_u(g_125, 2))
            { 
                int64_t l_486[1];
                int32_t l_487 = 0L;
                int i;
                for (i = 0; i < 1; i++)
                    l_486[i] = 0x00133E1C00B7FC9FLL;
                if ((~((*p_37) ^ 0x20032463L)))
                { 
                    struct S0 *l_478 = &g_189;
                    uint8_t *l_485 = &g_20;
                    if ((***g_83))
                        break;
                    (*l_389) = (*l_389);
                    (*l_320) = l_478;
                    (**g_84) |= ((*g_162) != ((&g_161[6][0] != (l_479 , l_480[2][0][0])) , (safe_add_func_uint8_t_u_u(p_38, (safe_rshift_func_int16_t_s_s(p_38, ((l_486[0] = (l_376 == l_485)) != g_125)))))));
                }
                else
                { 
                    uint8_t l_488 = 0xF4L;
                    if ((***g_83))
                        break;
                    l_488++;
                    (**l_467) = 1L;
                    if (l_486[0])
                        break;
                }
            }
        }
        for (l_342 = 2; (l_342 >= 0); l_342 -= 1)
        { 
            int32_t l_498[6];
            union U1 l_514 = {0x1EE787F671D42D41LL};
            struct S0 * const l_522[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            int32_t ** const *l_565 = &g_84;
            const uint64_t l_566 = 18446744073709551611UL;
            int32_t l_570 = (-1L);
            int32_t l_571 = 0xD7F5DF77L;
            int32_t l_573 = 0x06A2E526L;
            int8_t l_576 = 1L;
            int32_t l_577 = 0xDBAD35ABL;
            int32_t l_586[7][5] = {{7L,(-8L),0xDD99FE79L,(-8L),7L},{1L,0x5025F16BL,1L,1L,0x5025F16BL},{7L,5L,(-10L),(-8L),(-10L)},{0x5025F16BL,0x5025F16BL,0x8E6388D6L,0x5025F16BL,0x5025F16BL},{(-10L),(-8L),(-10L),5L,7L},{0x5025F16BL,1L,1L,0x5025F16BL,1L},{7L,(-8L),0xDD99FE79L,(-8L),7L}};
            int32_t l_587 = 0x75B3C2FCL;
            int i, j;
            for (i = 0; i < 6; i++)
                l_498[i] = 0x9E5D797AL;
            for (g_331.f0 = 2; (g_331.f0 >= 0); g_331.f0 -= 1)
            { 
                (*g_188) = (**l_320);
                for (g_331.f3 = 0; (g_331.f3 <= 2); g_331.f3 += 1)
                { 
                    struct S0 *l_493 = (void*)0;
                    if ((**g_84))
                        break;
                    (*g_472) |= ((safe_mul_func_int8_t_s_s(((void*)0 != l_493), (safe_add_func_uint32_t_u_u((((safe_lshift_func_int8_t_s_s((***l_444), 3)) <= (0xD17AA2CEL <= l_498[1])) | (***l_444)), (*p_37))))) <= p_38);
                }
                for (g_20 = 0; (g_20 <= 2); g_20 += 1)
                { 
                    const struct S0 l_499[2] = {{0x1E57EB5579B224E0LL,0xF0F367BCL,0x2121A2EBL,1L},{0x1E57EB5579B224E0LL,0xF0F367BCL,0x2121A2EBL,1L}};
                    int i;
                    if ((***g_83))
                        break;
                    (**l_320) = (g_350 , l_499[1]);
                }
            }
            (**g_471) &= (+(safe_sub_func_uint32_t_u_u(p_38, ((*l_362) = (***l_444)))));
            for (g_276 = 0; (g_276 <= 0); g_276 += 1)
            { 
                int32_t l_562 = 0L;
                int32_t l_575 = 0xC186B469L;
                int32_t l_578[7][2][4] = {{{0x07785066L,8L,8L,0x07785066L},{8L,0x07785066L,8L,8L}},{{0x07785066L,0x07785066L,0xD4455063L,0x07785066L},{0x07785066L,8L,8L,0x07785066L}},{{8L,0x07785066L,8L,8L},{0x07785066L,0x07785066L,0xD4455063L,0x07785066L}},{{0x07785066L,8L,8L,0x07785066L},{8L,0x07785066L,8L,8L}},{{0x07785066L,0x07785066L,0xD4455063L,0x07785066L},{0x07785066L,8L,8L,0x07785066L}},{{8L,0x07785066L,8L,8L},{0x07785066L,0x07785066L,0xD4455063L,0x07785066L}},{{0x07785066L,8L,8L,0x07785066L},{8L,0x07785066L,8L,8L}}};
                int i, j, k;
                if ((safe_add_func_int8_t_s_s((((((safe_sub_func_uint8_t_u_u(((((safe_rshift_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s(((**g_83) == (void*)0), ((safe_div_func_uint8_t_u_u((l_513 ^ 0xEAL), 9L)) | (l_514 , (*g_85))))), g_20)) ^ p_38) , (**g_84)) | p_40), l_515[2][0])) ^ (***l_444)) > 6UL) , (void*)0) == (void*)0), p_39)))
                { 
                    return g_315;
                }
                else
                { 
                    int64_t l_516[6][7][3] = {{{0xBC3175C9488A89E0LL,7L,(-4L)},{(-1L),(-1L),0L},{0x64F26FF3D3A7B81FLL,0L,0xE68A2DCF4EA9184FLL},{0x64F26FF3D3A7B81FLL,0x4276618F9BC03F2DLL,0L},{(-1L),0xAAAF231AD4E4BC37LL,4L},{0xBC3175C9488A89E0LL,0x64F26FF3D3A7B81FLL,0L},{0x9C1107DFCD703672LL,1L,0xE68A2DCF4EA9184FLL}},{{0x016100B94CEAFF3ALL,1L,0L},{0xAAAF231AD4E4BC37LL,0x64F26FF3D3A7B81FLL,(-4L)},{8L,0xAAAF231AD4E4BC37LL,(-1L)},{0xAAAF231AD4E4BC37LL,0x4276618F9BC03F2DLL,0L},{0x016100B94CEAFF3ALL,0L,0L},{0xA7D100E82C67A7FALL,0x45449C2089B40672LL,8L},{1L,0x01A28AB1C09BBEDBLL,0x016100B94CEAFF3ALL}},{{0x45449C2089B40672LL,0x45449C2089B40672LL,0x64F26FF3D3A7B81FLL},{7L,2L,1L},{7L,(-8L),0L},{0x45449C2089B40672LL,(-2L),0xAAAF231AD4E4BC37LL},{1L,7L,0L},{0xA7D100E82C67A7FALL,0x10574AFD102C8981LL,1L},{(-6L),0x10574AFD102C8981LL,0x64F26FF3D3A7B81FLL}},{{(-2L),7L,0x016100B94CEAFF3ALL},{5L,(-2L),8L},{(-2L),(-8L),7L},{(-6L),2L,7L},{0xA7D100E82C67A7FALL,0x45449C2089B40672LL,8L},{1L,0x01A28AB1C09BBEDBLL,0x016100B94CEAFF3ALL},{0x45449C2089B40672LL,0x45449C2089B40672LL,0x64F26FF3D3A7B81FLL}},{{7L,2L,1L},{7L,(-8L),0L},{0x45449C2089B40672LL,(-2L),0xAAAF231AD4E4BC37LL},{1L,7L,0L},{0xA7D100E82C67A7FALL,0x10574AFD102C8981LL,1L},{(-6L),0x10574AFD102C8981LL,0x64F26FF3D3A7B81FLL},{(-2L),7L,0x016100B94CEAFF3ALL}},{{5L,(-2L),8L},{(-2L),(-8L),7L},{(-6L),2L,7L},{0xA7D100E82C67A7FALL,0x45449C2089B40672LL,8L},{1L,0x01A28AB1C09BBEDBLL,0x016100B94CEAFF3ALL},{0x45449C2089B40672LL,0x45449C2089B40672LL,0x64F26FF3D3A7B81FLL},{7L,2L,1L}}};
                    int32_t l_517 = 0x6F0B6A1AL;
                    int32_t l_518[5] = {0xF973A436L,0xF973A436L,0xF973A436L,0xF973A436L,0xF973A436L};
                    int8_t *l_536 = &g_141;
                    int32_t * const *l_564[2];
                    int32_t * const **l_563 = &l_564[0];
                    uint32_t *l_567 = &g_189.f1;
                    uint32_t l_568 = 0x5DF3C255L;
                    int64_t *l_569 = &l_516[5][2][2];
                    int16_t l_572 = 5L;
                    int i, j, k;
                    for (i = 0; i < 2; i++)
                        l_564[i] = (void*)0;
                    --l_519;
                    (**g_471) ^= ((*p_37) >= (l_522[5] == l_523));
                    (*g_85) &= ((safe_add_func_int16_t_s_s(p_39, (safe_sub_func_int64_t_s_s(p_38, 0x2A84B2EDCEAF69B9LL)))) , ((safe_add_func_int16_t_s_s((safe_div_func_int16_t_s_s((-1L), g_321)), ((((safe_mod_func_int8_t_s_s(1L, ((*l_536) |= ((safe_div_func_int16_t_s_s(l_516[3][3][0], 0x3D68L)) < l_516[1][4][1])))) == 0x09L) | g_128) | 0x61BDEADEL))) > (-9L)));
                    (*g_84) = (((((((*l_569) = (safe_lshift_func_uint8_t_u_s((((***l_444) <= (safe_mul_func_uint8_t_u_u(0xD0L, (safe_sub_func_uint64_t_u_u((((safe_mod_func_int8_t_s_s((((((*l_567) = ((*l_362) = (safe_div_func_int64_t_s_s(((g_6 &= (safe_mod_func_int8_t_s_s(((safe_lshift_func_uint16_t_u_u(((safe_lshift_func_uint16_t_u_s(((safe_mul_func_uint8_t_u_u(((safe_mod_func_int8_t_s_s(((((0x31F6FDC5F9D00187LL < (l_557 , (safe_add_func_int64_t_s_s(((safe_sub_func_int8_t_s_s(0x2AL, l_562)) && (**g_84)), p_38)))) != p_39) , l_563) == l_565), p_40)) & 0x5346L), 0x66L)) != (***l_565)), p_40)) > 4L), 1)) || (*g_162)), (***l_444)))) >= l_566), (***l_565))))) == 0x124EE915L) , p_38) || p_38), l_568)) , (***l_565)) , p_40), 0x08B26DCFB230573ALL))))) , p_39), 1))) > g_141) >= p_38) == p_39) , (*p_37)) , (**l_565));
                    l_582++;
                }
                (**g_471) &= ((void*)0 != &g_162);
                l_592--;
            }
            if ((***g_83))
                continue;
        }
    }
    for (p_40 = 0; (p_40 <= 19); p_40++)
    { 
        int32_t l_608 = 0x647F29D2L;
        int32_t l_613 = 0x668C6BA4L;
        uint64_t *l_614[1];
        int i;
        for (i = 0; i < 1; i++)
            l_614[i] = &g_222[0];
        (**g_84) = (+p_40);
        (**g_471) ^= (safe_div_func_int32_t_s_s((safe_div_func_uint64_t_u_u((l_613 = (safe_add_func_uint16_t_u_u(((safe_add_func_uint16_t_u_u((((safe_rshift_func_int16_t_s_u(g_321, 2)) & ((***l_444) = 18446744073709551610UL)) || (l_608 = 8UL)), ((safe_sub_func_int64_t_s_s(((safe_sub_func_uint16_t_u_u(0x0035L, 0x18D7L)) > ((l_74.f3 < p_38) ^ p_40)), l_613)) , l_588))) != 0x9BL), p_40))), p_39)), 1UL));
        if ((*p_37))
            break;
        return p_39;
    }
    return (***l_444);
}



static int16_t  func_44(uint32_t  p_45)
{ 
    int32_t **l_47 = (void*)0;
    int32_t *l_49 = &g_9;
    int32_t **l_48 = &l_49;
    (*l_48) = (void*)0;
    return p_45;
}



static const int32_t *** func_70(union U1  p_71, int32_t ** p_72, int16_t * p_73)
{ 
    const int32_t ***l_233 = (void*)0;
    return l_233;
}



static int32_t ** func_75(const uint64_t  p_76, const struct S0  p_77, int8_t  p_78, uint32_t  p_79)
{ 
    int32_t *l_88 = &g_9;
    uint16_t l_89[7] = {65533UL,0UL,65533UL,65533UL,0UL,65533UL,65533UL};
    int32_t *l_92 = &g_9;
    int32_t *l_93[6][6] = {{&g_9,&g_9,&g_9,&g_9,&g_9,&g_9},{&g_9,&g_9,&g_9,&g_9,&g_9,&g_9},{&g_9,&g_9,&g_9,&g_9,&g_9,&g_9},{&g_9,&g_9,&g_9,&g_9,&g_9,&g_9},{&g_9,&g_9,&g_9,&g_9,&g_9,&g_9},{&g_9,&g_9,&g_9,&g_9,&g_9,&g_9}};
    uint64_t l_107 = 18446744073709551615UL;
    struct S0 l_163[1][2][7] = {{{{0x04BA90E8D41E4D89LL,0UL,0L,1L},{0x04BA90E8D41E4D89LL,0UL,0L,1L},{7L,9UL,0xCE05B3D2L,0x23408E39L},{0x04BA90E8D41E4D89LL,0UL,0L,1L},{0x04BA90E8D41E4D89LL,0UL,0L,1L},{7L,9UL,0xCE05B3D2L,0x23408E39L},{0x04BA90E8D41E4D89LL,0UL,0L,1L}},{{1L,0x26399712L,0xC3FF06EEL,0x2C45E824L},{0x48C16D013F0835FFLL,0xBA7B7964L,0x2DCCA579L,0x7148A679L},{0x48C16D013F0835FFLL,0xBA7B7964L,0x2DCCA579L,0x7148A679L},{1L,0x26399712L,0xC3FF06EEL,0x2C45E824L},{0x48C16D013F0835FFLL,0xBA7B7964L,0x2DCCA579L,0x7148A679L},{0x48C16D013F0835FFLL,0xBA7B7964L,0x2DCCA579L,0x7148A679L},{1L,0x26399712L,0xC3FF06EEL,0x2C45E824L}}}};
    union U1 l_178 = {0x4E8884C5083F6D29LL};
    const uint16_t *l_201 = &l_89[2];
    const uint16_t **l_200 = &l_201;
    int64_t l_226 = 0x25BED0AC63A17878LL;
    int i, j, k;
    (**g_83) = (l_88 = func_81(g_83));
    l_89[2]--;
lbl_208:
    ++g_94;
    if ((*g_85))
    { 
        int32_t **l_99 = &l_88;
        uint32_t *l_100 = &g_4[1][5][0];
        int32_t l_108 = 0L;
        uint16_t *l_123 = &l_89[2];
        int32_t *l_124 = &g_125;
        int32_t *l_126 = (void*)0;
        int32_t *l_127 = &g_128;
        int8_t *l_138 = &g_139;
        int8_t *l_140 = &g_141;
        l_108 &= (safe_rshift_func_uint16_t_u_s((g_4[1][5][0] && (0L & (((((((*l_92) = (((void*)0 == l_99) > (-7L))) , (((*l_100)++) , ((safe_rshift_func_uint16_t_u_s(((((safe_mod_func_uint64_t_u_u((&g_84 == &g_84), 0x9957B093197C8249LL)) ^ p_76) == l_107) , (*l_88)), g_43)) , (*l_88)))) != 255UL) == g_43) >= 0xC7E6801BL) ^ g_43))), g_65));
        (*g_84) = ((((*l_127) = ((*l_124) = ((((safe_add_func_uint16_t_u_u((((**l_99) | g_43) > ((0xA82D785ABE16947FLL == 6UL) && (18446744073709551615UL == (safe_lshift_func_uint16_t_u_u(((*l_123) = (safe_mod_func_int8_t_s_s(g_4[0][2][0], (safe_mod_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s((safe_mul_func_uint8_t_u_u((((safe_lshift_func_int16_t_s_u((p_79 <= (*l_88)), 11)) || (-4L)) > g_94), p_77.f2)), g_94)), p_77.f0))))), (**l_99)))))), (**l_99))) , (void*)0) == l_88) ^ 4294967294UL))) , 0x3EL) , (*l_99));
        g_129--;
        (***g_83) = ((safe_sub_func_uint64_t_u_u(0xDE0ECAC02D6B031ELL, (((*l_140) = ((*l_138) = (p_78 = (safe_sub_func_int32_t_s_s(((g_43 &= ((*l_123) &= 65528UL)) || p_77.f0), (((0x23L & ((g_128 != (((safe_sub_func_int64_t_s_s((-5L), p_77.f3)) , 0xE3F2B594L) ^ 4294967295UL)) == (**l_99))) , g_128) , 1UL)))))) , p_76))) ^ p_77.f1);
    }
    else
    { 
        int32_t **l_142[5];
        const uint16_t **l_202 = &l_201;
        int32_t **l_230 = &l_93[1][5];
        int i;
        for (i = 0; i < 5; i++)
            l_142[i] = &l_93[1][5];
        for (g_128 = 0; (g_128 <= 5); g_128 += 1)
        { 
            int32_t l_157 = 1L;
            int32_t *l_227 = &l_163[0][1][4].f3;
            (*l_92) = p_77.f2;
            if (((void*)0 == &p_78))
            { 
                for (g_125 = 0; g_125 < 2; g_125 += 1)
                {
                    for (g_129 = 0; g_129 < 6; g_129 += 1)
                    {
                        for (g_94 = 0; g_94 < 1; g_94 += 1)
                        {
                            g_4[g_125][g_129][g_94] = 0x4DE48EC7L;
                        }
                    }
                }
                return (*g_83);
            }
            else
            { 
                uint16_t *l_159 = &g_43;
                uint16_t **l_158 = &l_159;
                uint16_t ***l_160 = (void*)0;
                uint32_t l_176[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_176[i] = 18446744073709551615UL;
                for (g_52 = 4; (g_52 >= 0); g_52 -= 1)
                { 
                    uint32_t *l_156 = (void*)0;
                    uint32_t **l_155 = &l_156;
                    int i, j;
                    (*l_88) ^= ((safe_rshift_func_uint16_t_u_u(0xAE59L, (safe_lshift_func_int8_t_s_u((0x686465E51F8F6A06LL != ((safe_lshift_func_int16_t_s_s((((safe_div_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u((((safe_sub_func_uint32_t_u_u(1UL, 0x47936CBAL)) , l_93[(g_52 + 1)][(g_52 + 1)]) == ((*l_155) = &p_79)), (p_79 > 0x11L))), l_157)) <= 0L) && p_77.f1), p_79)) <= p_78)), p_77.f0)))) > p_78);
                }
                g_161[6][0] = l_158;
                for (g_129 = 1; (g_129 <= 5); g_129 += 1)
                { 
                    int i, j;
                    (**g_84) |= ((l_163[0][1][4] , l_93[g_128][g_128]) == &l_157);
                    g_177 ^= (((safe_mul_func_uint16_t_u_u(((**g_83) == (*g_84)), ((safe_mul_func_int8_t_s_s(g_141, g_139)) <= (((**g_84) = (safe_rshift_func_uint8_t_u_u((safe_div_func_uint16_t_u_u(((~0x7F4DA6B9L) && 0xB8L), ((safe_sub_func_uint8_t_u_u(((safe_unary_minus_func_int16_t_s(g_141)) == p_79), p_77.f3)) && p_77.f3))), p_76))) || l_176[1])))) <= g_125) <= 18446744073709551611UL);
                }
            }
            if (((-1L) != 0x02FBL))
            { 
                int16_t *l_184 = &g_6;
                int32_t l_185 = 1L;
                l_185 = ((p_77 , (l_178 , ((safe_mod_func_int64_t_s_s(((0x96BD5CD4L && 9UL) > ((!((g_52 || (g_4[1][5][0] == ((((*l_184) = p_77.f3) && g_20) != l_185))) != g_94)) >= 3L)), l_185)) , 0xF1BF41CAL))) & (-1L));
                if (l_157)
                    continue;
            }
            else
            { 
                int32_t **l_204 = (void*)0;
                uint16_t *l_223[7][3][3] = {{{&l_89[2],&l_89[2],(void*)0},{&l_89[2],(void*)0,(void*)0},{&l_89[4],&l_89[0],&l_89[4]}},{{(void*)0,&l_89[2],&l_89[4]},{(void*)0,&l_89[2],(void*)0},{(void*)0,&l_89[4],(void*)0}},{{&l_89[2],&l_89[2],&l_89[0]},{(void*)0,(void*)0,&l_89[2]},{(void*)0,(void*)0,&l_89[0]}},{{(void*)0,(void*)0,&l_89[2]},{&l_89[4],(void*)0,(void*)0},{&l_89[2],&l_89[2],&l_89[0]}},{{&l_89[2],&l_89[4],&l_89[2]},{(void*)0,(void*)0,(void*)0},{&l_89[0],&l_89[2],&l_89[2]}},{{&l_89[0],&l_89[2],&l_89[2]},{(void*)0,&l_89[2],(void*)0},{&l_89[2],(void*)0,&l_89[0]}},{{(void*)0,&l_89[2],&l_89[4]},{&l_89[2],&l_89[2],&l_89[2]},{&l_89[2],&l_89[2],&l_89[2]}}};
                int i, j, k;
                for (l_157 = (-17); (l_157 < (-22)); l_157 = safe_sub_func_int32_t_s_s(l_157, 1))
                { 
                    struct S0 **l_190 = &g_188;
                    int32_t l_193 = 0x83FB63F3L;
                    int32_t l_203 = 0xCA140F99L;
                    (*l_190) = g_188;
                    l_203 = ((safe_mul_func_uint16_t_u_u(0x4115L, (p_77.f3 == ((l_193 = (p_79 && g_6)) , (safe_div_func_uint8_t_u_u(l_193, ((safe_lshift_func_uint8_t_u_u(((safe_add_func_uint64_t_u_u(p_79, (l_200 == l_202))) < 0xC1L), 7)) ^ l_193))))))) < 0L);
                    return (*g_83);
                }
                (*g_188) = p_77;
                if (p_77.f3)
                { 
                    return l_204;
                }
                else
                { 
                    uint16_t l_205 = 0UL;
                    ++l_205;
                    (*g_85) = p_77.f3;
                    if (p_77.f3)
                        goto lbl_208;
                }
                for (l_178.f3 = 19; (l_178.f3 > 21); ++l_178.f3)
                { 
                    uint32_t l_211 = 0x308B9188L;
                    int64_t *l_220 = &g_189.f0;
                    int64_t *l_221[4];
                    uint16_t *l_225 = &l_89[3];
                    uint16_t **l_224 = &l_225;
                    int i;
                    for (i = 0; i < 4; i++)
                        l_221[i] = &l_163[0][1][4].f0;
                    l_211 |= (**g_84);
                    l_227 = ((*g_84) = (**g_83));
                    if (p_77.f3)
                        continue;
                }
            }
            for (g_6 = (-15); (g_6 != 25); ++g_6)
            { 
                return (*g_83);
            }
        }
        g_189.f3 |= (*g_85);
        (***g_83) = 1L;
        for (l_226 = 24; (l_226 == (-9)); l_226 = safe_sub_func_uint32_t_u_u(l_226, 6))
        { 
            if (p_78)
                break;
            (*g_85) = 0x0173F839L;
            return (*g_83);
        }
    }
    return (*g_83);
}



static int32_t * func_81(int32_t *** p_82)
{ 
    int32_t *l_86 = &g_9;
    int32_t *l_87 = &g_9;
    (**p_82) = l_86;
    return l_87;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_4[i][j][k], "g_4[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_6, "g_6", print_hash_value);
    transparent_crc(g_9, "g_9", print_hash_value);
    transparent_crc(g_20, "g_20", print_hash_value);
    transparent_crc(g_43, "g_43", print_hash_value);
    transparent_crc(g_52, "g_52", print_hash_value);
    transparent_crc(g_65, "g_65", print_hash_value);
    transparent_crc(g_94, "g_94", print_hash_value);
    transparent_crc(g_125, "g_125", print_hash_value);
    transparent_crc(g_128, "g_128", print_hash_value);
    transparent_crc(g_129, "g_129", print_hash_value);
    transparent_crc(g_139, "g_139", print_hash_value);
    transparent_crc(g_141, "g_141", print_hash_value);
    transparent_crc(g_177, "g_177", print_hash_value);
    transparent_crc(g_189.f0, "g_189.f0", print_hash_value);
    transparent_crc(g_189.f1, "g_189.f1", print_hash_value);
    transparent_crc(g_189.f2, "g_189.f2", print_hash_value);
    transparent_crc(g_189.f3, "g_189.f3", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_222[i], "g_222[i]", print_hash_value);

    }
    transparent_crc(g_276, "g_276", print_hash_value);
    transparent_crc(g_277, "g_277", print_hash_value);
    transparent_crc(g_280.f0, "g_280.f0", print_hash_value);
    transparent_crc(g_280.f1, "g_280.f1", print_hash_value);
    transparent_crc(g_280.f2, "g_280.f2", print_hash_value);
    transparent_crc(g_280.f3, "g_280.f3", print_hash_value);
    transparent_crc(g_302, "g_302", print_hash_value);
    transparent_crc(g_315, "g_315", print_hash_value);
    transparent_crc(g_321, "g_321", print_hash_value);
    transparent_crc(g_331.f0, "g_331.f0", print_hash_value);
    transparent_crc(g_331.f1, "g_331.f1", print_hash_value);
    transparent_crc(g_331.f2, "g_331.f2", print_hash_value);
    transparent_crc(g_331.f3, "g_331.f3", print_hash_value);
    transparent_crc(g_338, "g_338", print_hash_value);
    transparent_crc(g_346, "g_346", print_hash_value);
    transparent_crc(g_347, "g_347", print_hash_value);
    transparent_crc(g_350, "g_350", print_hash_value);
    transparent_crc(g_412, "g_412", print_hash_value);
    transparent_crc(g_473, "g_473", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_890[i][j], "g_890[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_932, "g_932", print_hash_value);
    transparent_crc(g_978, "g_978", print_hash_value);
    transparent_crc(g_1032, "g_1032", print_hash_value);
    transparent_crc(g_1111, "g_1111", print_hash_value);
    transparent_crc(g_1160, "g_1160", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
