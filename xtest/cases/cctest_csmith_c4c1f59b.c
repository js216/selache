// SPDX-License-Identifier: MIT
// cctest_csmith_c4c1f59b.c --- cctest case csmith_c4c1f59b (csmith seed 3301045659)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x3add21be */

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

// Options:   -s 3301045659 -o /tmp/csmith_gen_ol5242_n/csmith.c --concise --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


struct S0 {
   int16_t  f0;
   int32_t  f1;
   const int16_t  f2;
};

struct S1 {
   const uint8_t  f0;
   int16_t  f1;
   int32_t  f2;
   const int32_t  f3;
   int16_t  f4;
   int32_t  f5;
};

union U2 {
   uint64_t  f0;
   const int64_t  f1;
   uint64_t  f2;
   const int8_t * f3;
   const uint32_t  f4;
};


static int32_t g_17 = 5L;
static int32_t *g_16 = &g_17;
static int32_t g_41 = 0L;
static int8_t g_61 = 0x97L;
static uint32_t g_64 = 1UL;
static struct S1 g_87[4] = {{0x9EL,-4L,-1L,-2L,-1L,0x54EA11ADL},{0x9EL,-4L,-1L,-2L,-1L,0x54EA11ADL},{0x9EL,-4L,-1L,-2L,-1L,0x54EA11ADL},{0x9EL,-4L,-1L,-2L,-1L,0x54EA11ADL}};
static struct S1 *g_86 = &g_87[0];
static int16_t g_93 = 0xD2C5L;
static uint8_t g_100[1][2][1] = {{{0UL},{0UL}}};
static const uint32_t *g_118[4][2] = {{&g_64,&g_64},{&g_64,&g_64},{&g_64,&g_64},{&g_64,&g_64}};
static const uint32_t **g_117[5][7][5] = {{{(void*)0,(void*)0,&g_118[1][0],(void*)0,&g_118[1][0]},{&g_118[1][0],&g_118[1][0],&g_118[1][0],&g_118[1][0],&g_118[0][1]},{&g_118[1][0],&g_118[1][0],&g_118[1][0],&g_118[1][0],&g_118[1][0]},{&g_118[0][1],&g_118[1][0],&g_118[1][0],&g_118[0][1],&g_118[2][0]},{&g_118[1][0],&g_118[1][0],&g_118[1][0],&g_118[1][0],&g_118[1][0]},{&g_118[1][0],&g_118[1][0],&g_118[1][0],&g_118[2][0],&g_118[1][0]},{&g_118[1][0],(void*)0,&g_118[1][0],(void*)0,&g_118[1][0]}},{{&g_118[2][0],&g_118[1][0],&g_118[1][0],&g_118[1][0],&g_118[1][0]},{&g_118[2][1],(void*)0,&g_118[2][1],&g_118[1][0],(void*)0},{&g_118[1][0],&g_118[1][0],&g_118[1][0],&g_118[1][0],&g_118[1][0]},{&g_118[1][0],&g_118[1][0],(void*)0,(void*)0,&g_118[1][0]},{&g_118[1][0],&g_118[2][0],&g_118[1][0],&g_118[1][0],&g_118[2][0]},{&g_118[1][0],&g_118[1][0],&g_118[2][1],&g_118[1][0],&g_118[1][0]},{&g_118[1][0],&g_118[2][0],&g_118[1][0],&g_118[2][0],&g_118[1][0]}},{{&g_118[2][1],&g_118[1][0],&g_118[1][0],&g_118[1][0],&g_118[1][0]},{&g_118[1][0],&g_118[1][0],&g_118[1][0],&g_118[1][0],&g_118[1][0]},{&g_118[1][0],(void*)0,(void*)0,&g_118[1][0],&g_118[1][0]},{&g_118[1][0],&g_118[1][0],&g_118[1][0],&g_118[1][0],&g_118[1][0]},{&g_118[1][0],&g_118[1][0],&g_118[1][0],&g_118[1][0],&g_118[1][0]},{&g_118[1][0],&g_118[1][0],&g_118[1][0],&g_118[1][0],&g_118[2][0]},{&g_118[2][1],&g_118[1][0],&g_118[1][0],&g_118[1][0],&g_118[1][0]}},{{&g_118[2][0],&g_118[1][0],&g_118[1][0],&g_118[2][0],&g_118[1][0]},{(void*)0,&g_118[1][0],(void*)0,&g_118[1][0],(void*)0},{&g_118[1][0],&g_118[1][0],&g_118[1][0],&g_118[1][0],&g_118[1][0]},{(void*)0,&g_118[1][0],&g_118[1][0],(void*)0,&g_118[1][0]},{&g_118[2][0],&g_118[1][0],&g_118[1][0],&g_118[1][0],&g_118[1][0]},{&g_118[2][1],(void*)0,&g_118[2][1],&g_118[1][0],(void*)0},{&g_118[1][0],&g_118[1][0],&g_118[1][0],&g_118[1][0],&g_118[1][0]}},{{&g_118[1][0],&g_118[1][0],(void*)0,(void*)0,&g_118[1][0]},{&g_118[1][0],&g_118[2][0],&g_118[1][0],&g_118[1][0],&g_118[2][0]},{&g_118[1][0],&g_118[1][0],&g_118[2][1],&g_118[1][0],&g_118[1][0]},{&g_118[1][0],&g_118[2][0],&g_118[1][0],&g_118[2][0],&g_118[1][0]},{&g_118[2][1],&g_118[1][0],&g_118[1][0],&g_118[1][0],&g_118[1][0]},{&g_118[1][0],&g_118[1][0],&g_118[1][0],&g_118[1][0],&g_118[1][0]},{&g_118[1][0],(void*)0,(void*)0,&g_118[1][0],&g_118[1][0]}}};
static const uint32_t ***g_116 = &g_117[3][6][0];
static struct S1 g_120[7][6] = {{{246UL,1L,-1L,0xC773237FL,0x26F7L,-1L},{0x6CL,4L,1L,0x21A34F7BL,0x2675L,0L},{246UL,1L,-1L,0xC773237FL,0x26F7L,-1L},{0xBAL,-1L,0xA8165F17L,-1L,9L,0x3A24B761L},{0x6CL,4L,1L,0x21A34F7BL,0x2675L,0L},{0x59L,0x27B0L,1L,0xDAF641A1L,1L,0x73949AADL}},{{246UL,1L,-1L,0xC773237FL,0x26F7L,-1L},{255UL,1L,0x3B7CC63AL,5L,0L,0x95124C23L},{0xBAL,-1L,0xA8165F17L,-1L,9L,0x3A24B761L},{0xBAL,-1L,0xA8165F17L,-1L,9L,0x3A24B761L},{255UL,1L,0x3B7CC63AL,5L,0L,0x95124C23L},{246UL,1L,-1L,0xC773237FL,0x26F7L,-1L}},{{246UL,1L,-1L,0xC773237FL,0x26F7L,-1L},{0UL,0x981CL,-9L,1L,9L,0x421CF732L},{0x59L,0x27B0L,1L,0xDAF641A1L,1L,0x73949AADL},{0xBAL,-1L,0xA8165F17L,-1L,9L,0x3A24B761L},{0UL,0x981CL,-9L,1L,9L,0x421CF732L},{0xBAL,-1L,0xA8165F17L,-1L,9L,0x3A24B761L}},{{246UL,1L,-1L,0xC773237FL,0x26F7L,-1L},{0x6CL,4L,1L,0x21A34F7BL,0x2675L,0L},{246UL,1L,-1L,0xC773237FL,0x26F7L,-1L},{0xBAL,-1L,0xA8165F17L,-1L,9L,0x3A24B761L},{0x6CL,4L,1L,0x21A34F7BL,0x2675L,0L},{0x59L,0x27B0L,1L,0xDAF641A1L,1L,0x73949AADL}},{{246UL,1L,-1L,0xC773237FL,0x26F7L,-1L},{255UL,1L,0x3B7CC63AL,5L,0L,0x95124C23L},{0xBAL,-1L,0xA8165F17L,-1L,9L,0x3A24B761L},{0xBAL,-1L,0xA8165F17L,-1L,9L,0x3A24B761L},{255UL,1L,0x3B7CC63AL,5L,0L,0x95124C23L},{246UL,1L,-1L,0xC773237FL,0x26F7L,-1L}},{{246UL,1L,-1L,0xC773237FL,0x26F7L,-1L},{0UL,0x981CL,-9L,1L,9L,0x421CF732L},{0x59L,0x27B0L,1L,0xDAF641A1L,1L,0x73949AADL},{0xBAL,-1L,0xA8165F17L,-1L,9L,0x3A24B761L},{0UL,0x981CL,-9L,1L,9L,0x421CF732L},{0xBAL,-1L,0xA8165F17L,-1L,9L,0x3A24B761L}},{{246UL,1L,-1L,0xC773237FL,0x26F7L,-1L},{0x6CL,4L,1L,0x21A34F7BL,0x2675L,0L},{246UL,1L,-1L,0xC773237FL,0x26F7L,-1L},{0xBAL,-1L,0xA8165F17L,-1L,9L,0x3A24B761L},{0x6CL,4L,1L,0x21A34F7BL,0x2675L,0L},{0x59L,0x27B0L,1L,0xDAF641A1L,1L,0x73949AADL}}};
static int16_t g_123 = 0x8F6EL;
static int64_t g_134 = 0L;
static int16_t g_135 = 0x53FFL;
static union U2 g_139 = {3UL};
static int32_t **g_144 = (void*)0;
static int32_t ** const *g_143[2] = {&g_144,&g_144};
static uint16_t g_152 = 0xF86FL;
static uint32_t g_154 = 0UL;
static int64_t g_229 = 0xD580EACDEA14511DLL;
static int32_t ***g_260 = &g_144;
static const uint32_t g_342[6] = {7UL,7UL,7UL,7UL,7UL,7UL};
static uint32_t g_445 = 0x60F66DD1L;
static uint16_t g_487 = 0x163BL;
static int64_t *g_491 = &g_134;
static int64_t **g_490 = &g_491;
static struct S0 g_501 = {0L,-1L,0x74FDL};
static int8_t g_515 = 9L;
static struct S0 g_522 = {0x2760L,0xAC444796L,0L};
static struct S0 *g_521[5] = {&g_522,&g_522,&g_522,&g_522,&g_522};
static int8_t g_547 = (-1L);
static int8_t *g_546 = &g_547;



static uint64_t  func_1(void);
static union U2  func_2(uint64_t  p_3, uint16_t  p_4, uint64_t  p_5);
static int16_t  func_8(int8_t * const  p_9, int8_t * p_10, int32_t * p_11, int32_t * p_12, union U2  p_13);
static int8_t * func_14(int32_t * p_15);
static const int8_t  func_25(const uint16_t  p_26);
static int16_t  func_30(int32_t * p_31, int16_t  p_32, int16_t  p_33);
static int32_t *** func_45(int32_t ** p_46, struct S1  p_47, uint16_t  p_48, uint16_t  p_49);
static int32_t  func_57(uint32_t  p_58);




static uint64_t  func_1(void)
{ 
    uint64_t l_535 = 0x9F6449D265CEFFC2LL;
    int16_t l_542 = 1L;
    int16_t *l_543 = (void*)0;
    int16_t *l_544 = &g_135;
    union U2 *l_545 = &g_139;
    int32_t *l_548 = &g_522.f1;
    l_548 = (func_2(((safe_div_func_int16_t_s_s(func_8(func_14(g_16), ((((!((safe_lshift_func_int8_t_s_s((((((safe_div_func_int16_t_s_s((safe_mod_func_uint32_t_u_u(((((safe_sub_func_int32_t_s_s(0x5DA5D3A0L, ((!l_535) <= ((((((((*l_544) ^= (((l_535 ^ ((safe_add_func_int16_t_s_s((!(safe_unary_minus_func_int16_t_s(g_152))), (((safe_rshift_func_int16_t_s_s(l_535, g_139.f2)) , l_535) , 0x61DEL))) , l_535)) , l_542) > l_535)) | (-1L)) < l_542) , g_139) , &g_139) != l_545) != l_535)))) , g_139.f2) & g_120[3][1].f1) < 1UL), 1UL)), g_152)) , l_535) , l_542) & l_535) == 1L), 1)) , g_522.f0)) && 0x9E90L) , g_120[3][1].f3) , g_546), l_548, l_548, (*l_545)), 0x5699L)) | g_87[0].f3), (*l_548), (*l_548)) , l_548);
    return (*l_548);
}



static union U2  func_2(uint64_t  p_3, uint16_t  p_4, uint64_t  p_5)
{ 
    union U2 l_598 = {0x3D9E500FA1CBED3DLL};
    uint16_t *l_599 = &g_152;
    int32_t l_600[1];
    int32_t l_601 = (-3L);
    int i;
    for (i = 0; i < 1; i++)
        l_600[i] = 1L;
    l_601 = (safe_mul_func_int16_t_s_s(((-4L) == (((safe_sub_func_int16_t_s_s((((p_4 ^ (safe_unary_minus_func_int32_t_s((((1L != (safe_add_func_uint16_t_u_u(g_123, (l_598 , ((*l_599) = 0xFD0DL))))) || (*g_546)) == 0x009DL)))) ^ 4294967295UL) != l_598.f2), p_4)) <= l_600[0]) == p_3)), 0xCD74L));
    (*g_16) = 1L;
    return l_598;
}



static int16_t  func_8(int8_t * const  p_9, int8_t * p_10, int32_t * p_11, int32_t * p_12, union U2  p_13)
{ 
    struct S1 *l_568 = &g_120[4][0];
    int16_t *l_569[5][1] = {{(void*)0},{&g_501.f0},{(void*)0},{&g_501.f0},{(void*)0}};
    uint8_t l_570[7][1][7] = {{{0x86L,251UL,0UL,0UL,251UL,0x86L,0UL}},{{0x8DL,0UL,255UL,0xDBL,0xDBL,255UL,0UL}},{{251UL,0UL,0x86L,251UL,0UL,0UL,251UL}},{{1UL,0UL,1UL,1UL,0UL,3UL,3UL}},{{0x5BL,251UL,0xC9L,251UL,0x5BL,0xC9L,1UL}},{{0xDBL,3UL,1UL,0xDBL,1UL,3UL,0xDBL}},{{0x86L,1UL,0UL,0UL,1UL,0UL,0UL}}};
    int32_t l_573 = 0x9295CA94L;
    int32_t *l_574 = &g_522.f1;
    int32_t *l_575 = (void*)0;
    int32_t **l_576 = (void*)0;
    int32_t **l_577 = &g_16;
    const union U2 l_580 = {18446744073709551610UL};
    int i, j, k;
    (*g_16) &= ((safe_mul_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u((safe_mod_func_uint16_t_u_u(((safe_sub_func_uint16_t_u_u((((safe_rshift_func_int16_t_s_u((l_573 = (((((safe_rshift_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u(p_13.f1, g_120[3][1].f3)), 6)) | ((safe_div_func_uint32_t_u_u(((safe_unary_minus_func_uint8_t_u(((l_570[2][0][0] &= (l_568 == (void*)0)) , l_570[2][0][0]))) , (0x931AAE0CE09E8ABALL <= (((safe_add_func_uint64_t_u_u((&l_568 == (void*)0), g_515)) ^ l_570[2][0][0]) || 0x16913AACL))), 0x52490137L)) != p_13.f1)) || (*p_10)) | (**g_490)) , g_487)), 15)) >= p_13.f4) && g_522.f1), p_13.f4)) | g_487), 0x5AB8L)), p_13.f1)), g_487)) || (*g_491));
    l_574 = &l_573;
    (*l_577) = l_575;
    (*l_577) = p_12;
    for (g_515 = 0; (g_515 <= 0); g_515 += 1)
    { 
        uint32_t *l_585[1][3];
        uint32_t **l_586 = &l_585[0][0];
        union U2 l_588 = {18446744073709551615UL};
        int32_t l_589 = (-10L);
        int32_t l_590[7][6][4];
        int i, j, k;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 3; j++)
                l_585[i][j] = &g_445;
        }
        for (i = 0; i < 7; i++)
        {
            for (j = 0; j < 6; j++)
            {
                for (k = 0; k < 4; k++)
                    l_590[i][j][k] = 0x3C330EEDL;
            }
        }
        l_590[0][0][3] &= (safe_lshift_func_uint16_t_u_u((((l_580 , (((**l_577) , ((((safe_div_func_int64_t_s_s(((safe_sub_func_int64_t_s_s(0x39AC28812E388A6DLL, ((((*p_10) &= ((void*)0 != &g_491)) , ((*l_586) = l_585[0][0])) != (((+(l_589 = (((l_588 , 0L) <= l_589) | (-9L)))) & 0xC314L) , (void*)0)))) && 0x70L), p_13.f0)) == 65527UL) | g_139.f2) == p_13.f1)) , &l_568)) != &g_86) , 0UL), p_13.f1));
        return (**l_577);
    }
    return p_13.f0;
}



static int8_t * func_14(int32_t * p_15)
{ 
    uint32_t l_29[7];
    int32_t *l_34[2];
    uint16_t l_35[1][6][1] = {{{0xC227L},{0xC227L},{65535UL},{0xC227L},{0xC227L},{65535UL}}};
    uint16_t *l_504 = (void*)0;
    uint16_t *l_505 = (void*)0;
    uint16_t *l_506[5];
    uint16_t *l_507 = &l_35[0][4][0];
    const uint16_t l_513 = 1UL;
    int8_t *l_514 = &g_515;
    uint64_t l_516 = 18446744073709551615UL;
    int16_t l_517 = 0xABCAL;
    int8_t l_518 = 0x44L;
    struct S0 *l_519 = (void*)0;
    struct S0 **l_520[5];
    int i, j, k;
    for (i = 0; i < 7; i++)
        l_29[i] = 0x128F3B8CL;
    for (i = 0; i < 2; i++)
        l_34[i] = &g_17;
    for (i = 0; i < 5; i++)
        l_506[i] = &l_35[0][2][0];
    for (i = 0; i < 5; i++)
        l_520[i] = (void*)0;
    l_518 |= (safe_sub_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u((safe_mul_func_int16_t_s_s((+((*l_514) |= (func_25((((safe_mul_func_uint16_t_u_u(l_29[3], func_30(l_34[1], l_35[0][4][0], g_17))) , g_120[3][1].f4) , ((*l_507) = (g_100[0][0][0] >= 0x4DL)))) == l_513))), l_516)), g_87[0].f5)), l_517));
    g_521[2] = l_519;
    return &g_61;
}



static const int8_t  func_25(const uint16_t  p_26)
{ 
    int32_t *l_510 = &g_41;
    for (g_123 = 0; (g_123 != (-19)); --g_123)
    { 
        int32_t **l_511 = (void*)0;
        int32_t **l_512 = &l_510;
        (*l_512) = l_510;
        for (g_64 = 0; (g_64 <= 0); g_64 += 1)
        { 
            if ((*l_510))
                break;
            return p_26;
        }
        if ((*l_510))
            break;
    }
    return (*l_510);
}



static int16_t  func_30(int32_t * p_31, int16_t  p_32, int16_t  p_33)
{ 
    int32_t **l_50 = &g_16;
    struct S1 l_51 = {0x36L,0xEBCBL,0x743E62C9L,6L,1L,-4L};
    uint32_t l_433 = 0UL;
    int64_t l_442 = 0x8412345CF3C4684DLL;
    int32_t l_452[1];
    const uint32_t l_456 = 1UL;
    uint32_t *l_494 = &g_154;
    struct S1 l_500[2][6][7] = {{{{1UL,-1L,0xC30B06ACL,0L,-6L,0x2EA72E90L},{1UL,1L,0x653066CBL,1L,0x7AC8L,0x1C3E5922L},{1UL,-4L,0x20400296L,0xEB54F31DL,0x9D91L,0x98099260L},{246UL,0xF116L,-1L,0x3FA1BB33L,0x9A0AL,0x6188812DL},{246UL,0xF116L,-1L,0x3FA1BB33L,0x9A0AL,0x6188812DL},{1UL,-4L,0x20400296L,0xEB54F31DL,0x9D91L,0x98099260L},{1UL,1L,0x653066CBL,1L,0x7AC8L,0x1C3E5922L}},{{0x65L,0L,0x21ADBD2AL,-8L,-7L,0x24369D65L},{255UL,0L,1L,0x8E591414L,0x5046L,0L},{0xBAL,0x115EL,0x900E2093L,-9L,0x5BA0L,-1L},{0xDEL,0x4534L,6L,0x1B9A290AL,-3L,7L},{0xDEL,0x4534L,6L,0x1B9A290AL,-3L,7L},{0xBAL,0x115EL,0x900E2093L,-9L,0x5BA0L,-1L},{255UL,0L,1L,0x8E591414L,0x5046L,0L}},{{1UL,-1L,0xC30B06ACL,0L,-6L,0x2EA72E90L},{1UL,1L,0x653066CBL,1L,0x7AC8L,0x1C3E5922L},{1UL,-4L,0x20400296L,0xEB54F31DL,0x9D91L,0x98099260L},{246UL,0xF116L,-1L,0x3FA1BB33L,0x9A0AL,0x6188812DL},{246UL,0xF116L,-1L,0x3FA1BB33L,0x9A0AL,0x6188812DL},{1UL,-4L,0x20400296L,0xEB54F31DL,0x9D91L,0x98099260L},{1UL,1L,0x653066CBL,1L,0x7AC8L,0x1C3E5922L}},{{0x65L,0L,0x21ADBD2AL,-8L,-7L,0x24369D65L},{255UL,0L,1L,0x8E591414L,0x5046L,0L},{0xBAL,0x115EL,0x900E2093L,-9L,0x5BA0L,-1L},{0xDEL,0x4534L,6L,0x1B9A290AL,-3L,7L},{0xDEL,0x4534L,6L,0x1B9A290AL,-3L,7L},{0xBAL,0x115EL,0x900E2093L,-9L,0x5BA0L,-1L},{255UL,0L,1L,0x8E591414L,0x5046L,0L}},{{1UL,-1L,0xC30B06ACL,0L,-6L,0x2EA72E90L},{1UL,1L,0x653066CBL,1L,0x7AC8L,0x1C3E5922L},{1UL,-4L,0x20400296L,0xEB54F31DL,0x9D91L,0x98099260L},{246UL,0xF116L,-1L,0x3FA1BB33L,0x9A0AL,0x6188812DL},{246UL,0xF116L,-1L,0x3FA1BB33L,0x9A0AL,0x6188812DL},{1UL,-4L,0x20400296L,0xEB54F31DL,0x9D91L,0x98099260L},{1UL,1L,0x653066CBL,1L,0x7AC8L,0x1C3E5922L}},{{0x65L,0L,0x21ADBD2AL,-8L,-7L,0x24369D65L},{255UL,0L,1L,0x8E591414L,0x5046L,0L},{0xBAL,0x115EL,0x900E2093L,-9L,0x5BA0L,-1L},{0xDEL,0x4534L,6L,0x1B9A290AL,-3L,7L},{0xDEL,0x4534L,6L,0x1B9A290AL,-3L,7L},{0xBAL,0x115EL,0x900E2093L,-9L,0x5BA0L,-1L},{255UL,0L,1L,0x8E591414L,0x5046L,0L}}},{{{1UL,-1L,0xC30B06ACL,0L,-6L,0x2EA72E90L},{1UL,1L,0x653066CBL,1L,0x7AC8L,0x1C3E5922L},{1UL,-4L,0x20400296L,0xEB54F31DL,0x9D91L,0x98099260L},{246UL,0xF116L,-1L,0x3FA1BB33L,0x9A0AL,0x6188812DL},{246UL,0xF116L,-1L,0x3FA1BB33L,0x9A0AL,0x6188812DL},{1UL,-4L,0x20400296L,0xEB54F31DL,0x9D91L,0x98099260L},{1UL,1L,0x653066CBL,1L,0x7AC8L,0x1C3E5922L}},{{0x65L,0L,0x21ADBD2AL,-8L,-7L,0x24369D65L},{255UL,0L,1L,0x8E591414L,0x5046L,0L},{0xBAL,0x115EL,0x900E2093L,-9L,0x5BA0L,-1L},{0xDEL,0x4534L,6L,0x1B9A290AL,-3L,7L},{0xDEL,0x4534L,6L,0x1B9A290AL,-3L,7L},{0xBAL,0x115EL,0x900E2093L,-9L,0x5BA0L,-1L},{255UL,0L,1L,0x8E591414L,0x5046L,0L}},{{1UL,-1L,0xC30B06ACL,0L,-6L,0x2EA72E90L},{1UL,1L,0x653066CBL,1L,0x7AC8L,0x1C3E5922L},{1UL,-4L,0x20400296L,0xEB54F31DL,0x9D91L,0x98099260L},{246UL,0xF116L,-1L,0x3FA1BB33L,0x9A0AL,0x6188812DL},{246UL,0xF116L,-1L,0x3FA1BB33L,0x9A0AL,0x6188812DL},{1UL,-4L,0x20400296L,0xEB54F31DL,0x9D91L,0x98099260L},{1UL,1L,0x653066CBL,1L,0x7AC8L,0x1C3E5922L}},{{0x65L,0L,0x21ADBD2AL,-8L,-7L,0x24369D65L},{255UL,0L,1L,0x8E591414L,0x5046L,0L},{0xBAL,0x115EL,0x900E2093L,-9L,0x5BA0L,-1L},{0xDEL,0x4534L,6L,0x1B9A290AL,-3L,7L},{0xDEL,0x4534L,6L,0x1B9A290AL,-3L,7L},{0xBAL,0x115EL,0x900E2093L,-9L,0x5BA0L,-1L},{255UL,0L,1L,0x8E591414L,0x5046L,0L}},{{1UL,-1L,0xC30B06ACL,0L,-6L,0x2EA72E90L},{1UL,1L,0x653066CBL,1L,0x7AC8L,0x1C3E5922L},{1UL,-4L,0x20400296L,0xEB54F31DL,0x9D91L,0x98099260L},{246UL,0xF116L,-1L,0x3FA1BB33L,0x9A0AL,0x6188812DL},{246UL,0xF116L,-1L,0x3FA1BB33L,0x9A0AL,0x6188812DL},{1UL,-4L,0x20400296L,0xEB54F31DL,0x9D91L,0x98099260L},{1UL,1L,0x653066CBL,1L,0x7AC8L,0x1C3E5922L}},{{0x65L,0L,0x21ADBD2AL,-8L,-7L,0x24369D65L},{255UL,0L,1L,0x8E591414L,0x5046L,0L},{0xBAL,0x115EL,0x900E2093L,-9L,0x5BA0L,-1L},{0xDEL,0x4534L,6L,0x1B9A290AL,-3L,7L},{0xDEL,0x4534L,6L,0x1B9A290AL,-3L,7L},{0xBAL,0x115EL,0x900E2093L,-9L,0x5BA0L,-1L},{255UL,0L,1L,0x8E591414L,0x5046L,0L}}}};
    uint64_t l_503 = 0UL;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_452[i] = 0xAEB83C5AL;
    for (p_32 = 0; (p_32 > 29); p_32 = safe_add_func_uint8_t_u_u(p_32, 9))
    { 
        int32_t ***l_38 = (void*)0;
        int32_t **l_40[3];
        int32_t ***l_39 = &l_40[1];
        int8_t *l_62 = &g_61;
        struct S1 *l_459 = &g_120[3][1];
        const int64_t l_482 = 1L;
        int64_t ***l_492 = &g_490;
        int i;
        for (i = 0; i < 3; i++)
            l_40[i] = &g_16;
        (*l_39) = (void*)0;
        for (p_33 = 0; (p_33 <= 2); p_33 += 1)
        { 
            uint32_t l_42[6];
            int32_t l_65 = 0x185AEBC5L;
            int32_t *l_449 = &g_120[3][1].f2;
            int32_t l_450[6][1] = {{(-1L)},{(-1L)},{0x96C526BBL},{(-1L)},{(-1L)},{0x96C526BBL}};
            int i, j;
            for (i = 0; i < 6; i++)
                l_42[i] = 18446744073709551607UL;
            for (g_17 = 2; (g_17 >= 0); g_17 -= 1)
            { 
                const struct S1 l_59 = {0xB3L,1L,0x855BBB78L,0xAA1EDE5AL,0L,0x81B1D0B8L};
                int8_t *l_60 = &g_61;
                int64_t l_124 = 0xD18442E1E7EC8F53LL;
                if ((*g_16))
                    break;
                for (g_41 = 0; (g_41 <= 2); g_41 += 1)
                { 
                    uint32_t *l_63[4];
                    int32_t ****l_424 = (void*)0;
                    int32_t ***l_425 = (void*)0;
                    int32_t l_426 = 8L;
                    int i;
                    for (i = 0; i < 4; i++)
                        l_63[i] = &g_64;
                    l_42[4] &= (-3L);
                    l_426 |= (p_33 || (safe_sub_func_int64_t_s_s(((l_425 = func_45(l_50, l_51, ((safe_div_func_uint16_t_u_u((safe_sub_func_uint64_t_u_u((!(func_57((((((((l_59 , ((l_65 &= ((l_60 != l_62) >= (((0xF2L && g_41) <= p_33) || p_32))) && l_42[4])) , p_33) , 0xF09958A8L) <= 0UL) > 0x87E3L) , 0xAE633C574C3FC6C0LL) , p_32)) , (**l_50))), p_33)), g_41)) , (**l_50)), l_124)) != (void*)0), p_33)));
                }
            }
            (*p_31) = ((p_33 > (((void*)0 != (*l_50)) , (safe_lshift_func_int8_t_s_s(((safe_div_func_int16_t_s_s(6L, (g_123 & (g_100[0][0][0] , (l_65 = (&g_87[0] == (void*)0)))))) , (-3L)), p_33)))) != g_93);
            (*g_16) = (p_32 & (safe_mul_func_int8_t_s_s(l_433, ((((g_41 ^ (safe_add_func_int8_t_s_s(l_42[1], (safe_lshift_func_int16_t_s_s(((safe_lshift_func_uint16_t_u_u((p_32 ^ (0x707BL > (safe_mul_func_int8_t_s_s(((0UL || 0L) && l_442), 5L)))), p_33)) <= p_32), (**l_50)))))) < p_33) > (**l_50)) | g_139.f1))));
            for (g_154 = 16; (g_154 > 58); g_154 = safe_add_func_uint8_t_u_u(g_154, 5))
            { 
                int32_t *l_448 = &g_87[0].f2;
                int32_t l_451[2];
                uint16_t l_453 = 0x6CE0L;
                struct S1 *l_460 = (void*)0;
                uint32_t *l_472 = &g_154;
                uint32_t **l_471 = &l_472;
                const int32_t l_481 = (-3L);
                int i;
                for (i = 0; i < 2; i++)
                    l_451[i] = 1L;
                ++g_445;
                l_449 = l_448;
                l_453--;
                if (l_456)
                    continue;
                for (l_65 = (-1); (l_65 != (-26)); l_65--)
                { 
                    uint32_t l_483 = 18446744073709551615UL;
                    int32_t l_484 = 0x3D57AE26L;
                    int32_t l_485 = 0x2C4DDE70L;
                    int32_t l_486 = 0L;
                    l_460 = l_459;
                    if ((*l_449))
                        break;
                    l_483 |= (((safe_mul_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u(((g_134 |= (safe_add_func_uint16_t_u_u((safe_add_func_int32_t_s_s((((safe_add_func_uint8_t_u_u(((-2L) != ((l_471 == (*g_116)) != (safe_add_func_uint8_t_u_u(((((**l_50) <= (g_139 , ((((safe_mod_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_s(((p_32 , (safe_lshift_func_uint8_t_u_u((**l_50), 2))) & p_33), 5)), 6UL)) ^ p_32) , (*l_449)) >= p_32))) & (**l_50)) > p_33), p_33)))), l_481)) | (**l_50)) < l_482), (*l_449))), p_32))) , 0xD5L), p_33)), 0x30E0L)) < g_139.f0) != p_32);
                    g_487--;
                    (*g_16) ^= 0L;
                }
            }
        }
        if ((*p_31))
            continue;
        (*l_492) = g_490;
        return (**l_50);
    }
    (*l_50) = p_31;
    if ((safe_unary_minus_func_uint8_t_u(0xA6L)))
    { 
        (*g_16) = (*g_16);
    }
    else
    { 
        return g_87[0].f5;
    }
    (*p_31) = ((((*l_494) ^= 0x4C032710L) | (&g_152 == (void*)0)) , (l_51 , (((!(safe_sub_func_int32_t_s_s((((safe_rshift_func_uint16_t_u_s(((l_500[1][5][1] , ((g_501 , ((safe_unary_minus_func_uint16_t_u((((p_31 != p_31) != (**l_50)) >= 0x6B0AD028E7B8040BLL))) || 0x749A87D27402765FLL)) > g_152)) != p_32), g_120[3][1].f1)) & 0x9B43L) ^ (*g_16)), (**l_50)))) >= g_123) <= l_503)));
    return p_33;
}



static int32_t *** func_45(int32_t ** p_46, struct S1  p_47, uint16_t  p_48, uint16_t  p_49)
{ 
    uint64_t l_127 = 0xBBECA4C4A096ABDELL;
    uint8_t *l_128 = &g_100[0][0][0];
    uint64_t l_136 = 5UL;
    int32_t l_175 = 3L;
    int32_t l_178 = 1L;
    int32_t l_179 = 1L;
    int32_t l_181 = (-1L);
    int32_t l_182[1];
    uint32_t l_183 = 0x16A3191AL;
    struct S0 l_190 = {0xE5B0L,0xDF8C6D49L,1L};
    int32_t l_236 = 0L;
    int16_t *l_243 = &g_123;
    int16_t l_245 = 6L;
    uint32_t l_261 = 1UL;
    uint32_t l_269 = 18446744073709551606UL;
    const uint32_t *l_310 = &g_154;
    uint8_t l_343[1];
    int8_t l_369 = (-6L);
    uint32_t l_374 = 0xA2AB3D2CL;
    int32_t ***l_423 = &g_144;
    int i;
    for (i = 0; i < 1; i++)
        l_182[i] = 0L;
    for (i = 0; i < 1; i++)
        l_343[i] = 0x85L;
    return l_423;
}



static int32_t  func_57(uint32_t  p_58)
{ 
    uint32_t l_74 = 0UL;
    int16_t l_77 = 9L;
    int32_t l_105[5];
    int32_t *l_106[2][6][2] = {{{&g_87[0].f2,&g_87[0].f2},{&g_87[0].f2,&g_87[0].f2},{&g_87[0].f2,&g_87[0].f2},{&g_87[0].f2,&g_87[0].f2},{&g_87[0].f2,&g_87[0].f2},{&g_87[0].f2,&g_87[0].f2}},{{&g_87[0].f2,&g_87[0].f2},{&g_87[0].f2,&g_87[0].f2},{&g_87[0].f2,&g_87[0].f2},{&g_87[0].f2,&g_87[0].f2},{&g_87[0].f2,&g_87[0].f2},{&g_87[0].f2,&g_87[0].f2}}};
    uint32_t *l_115[4];
    uint32_t **l_114[5][1][2] = {{{(void*)0,&l_115[2]}},{{&l_115[2],&l_115[2]}},{{(void*)0,&l_115[2]}},{{&l_115[2],&l_115[2]}},{{&l_115[2],(void*)0}}};
    uint32_t ***l_113 = &l_114[3][0][0];
    struct S1 *l_119 = &g_120[3][1];
    struct S1 **l_121 = (void*)0;
    struct S1 **l_122 = &g_86;
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_105[i] = 0x4E34DAAEL;
    for (i = 0; i < 4; i++)
        l_115[i] = &g_64;
    if ((((safe_div_func_int16_t_s_s((0L <= (safe_div_func_int16_t_s_s((safe_div_func_int16_t_s_s((((safe_rshift_func_int16_t_s_u(((void*)0 == &g_64), 6)) & l_74) , (((((&g_64 != (void*)0) || (((safe_add_func_int8_t_s_s(g_17, g_17)) == 1L) != p_58)) == 0x78L) & g_17) > l_77)), 0x9DA7L)), 0x4CAEL))), g_61)) , 9L) <= g_64))
    { 
        int16_t l_85 = 0x9184L;
        struct S1 **l_88 = &g_86;
        struct S1 *l_90 = &g_87[0];
        struct S1 **l_89 = &l_90;
        for (g_61 = 21; (g_61 > (-23)); --g_61)
        { 
            uint32_t *l_83[1];
            uint32_t **l_82 = &l_83[0];
            int i;
            for (i = 0; i < 1; i++)
                l_83[i] = &g_64;
            for (l_74 = 0; (l_74 >= 60); l_74 = safe_add_func_int8_t_s_s(l_74, 8))
            { 
                uint32_t ***l_84 = &l_82;
                (*l_84) = l_82;
            }
            return l_85;
        }
        (*l_89) = ((*l_88) = g_86);
    }
    else
    { 
        int32_t l_91 = 0L;
        int32_t *l_92 = (void*)0;
        int32_t *l_94 = &g_87[0].f2;
        int32_t *l_95 = &g_87[0].f2;
        int32_t *l_96 = &g_87[0].f2;
        int32_t *l_97 = &g_87[0].f2;
        int32_t *l_98[4] = {&g_87[0].f2,&g_87[0].f2,&g_87[0].f2,&g_87[0].f2};
        int64_t l_99[5] = {(-10L),(-10L),(-10L),(-10L),(-10L)};
        int i;
        g_93 = (g_87[0].f2 = l_91);
        g_100[0][0][0]++;
        for (l_77 = 2; (l_77 != (-16)); --l_77)
        { 
            (*l_94) |= ((void*)0 != &g_61);
        }
    }
    g_87[0].f2 = l_105[2];
    g_123 ^= (safe_div_func_int16_t_s_s((1L >= 0xB7C8A0849DA61DCCLL), (~((0x8401D562L ^ (g_120[3][1].f2 = (safe_unary_minus_func_uint32_t_u((safe_add_func_int8_t_s_s((l_113 != g_116), (((l_119 = &g_87[0]) == ((*l_122) = &g_120[6][0])) && g_120[3][1].f2))))))) > p_58))));
    return p_58;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_17, "g_17", print_hash_value);
    transparent_crc(g_41, "g_41", print_hash_value);
    transparent_crc(g_61, "g_61", print_hash_value);
    transparent_crc(g_64, "g_64", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_87[i].f0, "g_87[i].f0", print_hash_value);
        transparent_crc(g_87[i].f1, "g_87[i].f1", print_hash_value);
        transparent_crc(g_87[i].f2, "g_87[i].f2", print_hash_value);
        transparent_crc(g_87[i].f3, "g_87[i].f3", print_hash_value);
        transparent_crc(g_87[i].f4, "g_87[i].f4", print_hash_value);
        transparent_crc(g_87[i].f5, "g_87[i].f5", print_hash_value);

    }
    transparent_crc(g_93, "g_93", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_100[i][j][k], "g_100[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(g_120[i][j].f0, "g_120[i][j].f0", print_hash_value);
            transparent_crc(g_120[i][j].f1, "g_120[i][j].f1", print_hash_value);
            transparent_crc(g_120[i][j].f2, "g_120[i][j].f2", print_hash_value);
            transparent_crc(g_120[i][j].f3, "g_120[i][j].f3", print_hash_value);
            transparent_crc(g_120[i][j].f4, "g_120[i][j].f4", print_hash_value);
            transparent_crc(g_120[i][j].f5, "g_120[i][j].f5", print_hash_value);

        }
    }
    transparent_crc(g_123, "g_123", print_hash_value);
    transparent_crc(g_134, "g_134", print_hash_value);
    transparent_crc(g_135, "g_135", print_hash_value);
    transparent_crc(g_139.f0, "g_139.f0", print_hash_value);
    transparent_crc(g_139.f1, "g_139.f1", print_hash_value);
    transparent_crc(g_139.f2, "g_139.f2", print_hash_value);
    transparent_crc(g_139.f4, "g_139.f4", print_hash_value);
    transparent_crc(g_152, "g_152", print_hash_value);
    transparent_crc(g_154, "g_154", print_hash_value);
    transparent_crc(g_229, "g_229", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_342[i], "g_342[i]", print_hash_value);

    }
    transparent_crc(g_445, "g_445", print_hash_value);
    transparent_crc(g_487, "g_487", print_hash_value);
    transparent_crc(g_501.f0, "g_501.f0", print_hash_value);
    transparent_crc(g_501.f1, "g_501.f1", print_hash_value);
    transparent_crc(g_501.f2, "g_501.f2", print_hash_value);
    transparent_crc(g_515, "g_515", print_hash_value);
    transparent_crc(g_522.f0, "g_522.f0", print_hash_value);
    transparent_crc(g_522.f1, "g_522.f1", print_hash_value);
    transparent_crc(g_522.f2, "g_522.f2", print_hash_value);
    transparent_crc(g_547, "g_547", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
