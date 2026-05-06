// SPDX-License-Identifier: MIT
// cctest_csmith_e570cef6.c --- cctest case csmith_e570cef6 (csmith seed 3849375478)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xc35c5b14 */

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

// Options:   -s 3849375478 -o /tmp/csmith_gen_otw4yu_4/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   unsigned f0 : 9;
   signed f1 : 26;
   int16_t  f2;
   signed f3 : 28;
};

struct S1 {
   unsigned f0 : 18;
   signed f1 : 15;
   int64_t  f2;
   const unsigned f3 : 1;
   const unsigned f4 : 22;
   signed f5 : 13;
};

union U2 {
   int8_t  f0;
};

union U3 {
   int32_t  f0;
   const int32_t  f1;
};


static int16_t g_4 = 0xEC3DL;
static uint16_t g_11[3] = {1UL,1UL,1UL};
static struct S0 g_28[5][4] = {{{16,6831,8L,-15744},{11,6007,0x73EEL,-3668},{16,6831,8L,-15744},{12,-5310,-1L,6826}},{{16,6831,8L,-15744},{12,-5310,-1L,6826},{12,-5310,-1L,6826},{16,6831,8L,-15744}},{{17,8018,0x9124L,-1260},{12,-5310,-1L,6826},{20,1688,0xC387L,-9100},{12,-5310,-1L,6826}},{{12,-5310,-1L,6826},{11,6007,0x73EEL,-3668},{20,1688,0xC387L,-9100},{20,1688,0xC387L,-9100}},{{17,8018,0x9124L,-1260},{17,8018,0x9124L,-1260},{12,-5310,-1L,6826},{20,1688,0xC387L,-9100}}};
static int32_t g_43 = 0x7DFF937BL;
static int32_t g_49 = 0x7B75AE7BL;
static int32_t g_50 = 0L;
static int8_t g_51 = (-5L);
static int32_t g_53 = 0x0F81A686L;
static int64_t g_54 = (-9L);
static uint8_t g_57 = 0x55L;
static int16_t g_75 = 0x2D78L;
static uint32_t g_112 = 4294967295UL;



static struct S0  func_1(void);
static int8_t  func_2(uint32_t  p_3);
static uint64_t  func_7(const uint8_t  p_8, struct S0  p_9);
static struct S0  func_14(const struct S1  p_15, uint32_t  p_16, uint8_t  p_17, int8_t  p_18);




static struct S0  func_1(void)
{ 
    int32_t l_115 = 0L;
    struct S0 l_116[5][3][5] = {{{{19,-915,0xE05BL,115},{5,1617,0xA55EL,13615},{4,-4312,-8L,9508},{14,1081,1L,-13460},{8,-7880,0L,15341}},{{16,1145,0xC300L,-3635},{9,2073,1L,-8081},{4,-4312,-8L,9508},{17,-3987,5L,13993},{14,1081,1L,-13460}},{{20,-3652,0x699CL,13104},{17,-8118,2L,-8975},{4,-4312,-8L,9508},{8,6433,0x04BAL,-6089},{8,6433,0x04BAL,-6089}}},{{{4,-4312,-8L,9508},{11,663,-2L,12339},{4,-4312,-8L,9508},{8,-7880,0L,15341},{10,-866,0x0273L,-4299}},{{13,2768,1L,15823},{4,-4325,1L,12779},{4,-4312,-8L,9508},{20,-3652,0x699CL,13104},{16,1145,0xC300L,-3635}},{{10,-850,-1L,-14760},{12,-1533,6L,8229},{8,2041,-6L,12357},{13,2768,1L,15823},{19,-915,0xE05BL,115}}},{{{15,1226,-4L,-11219},{17,-6576,6L,-11880},{8,2041,-6L,12357},{16,1145,0xC300L,-3635},{13,2768,1L,15823}},{{10,-478,0xD719L,-15349},{1,4148,5L,-2632},{8,2041,-6L,12357},{4,-4312,-8L,9508},{4,-4312,-8L,9508}},{{8,2041,-6L,12357},{13,1344,0xEF2CL,-12884},{8,2041,-6L,12357},{19,-915,0xE05BL,115},{20,-3652,0x699CL,13104}}},{{{17,-7558,6L,12306},{9,-7631,1L,15689},{8,2041,-6L,12357},{20,-3652,0x699CL,13104},{16,1145,0xC300L,-3635}},{{10,-850,-1L,-14760},{12,-1533,6L,8229},{8,2041,-6L,12357},{13,2768,1L,15823},{19,-915,0xE05BL,115}},{{15,1226,-4L,-11219},{17,-6576,6L,-11880},{8,2041,-6L,12357},{16,1145,0xC300L,-3635},{13,2768,1L,15823}}},{{{10,-478,0xD719L,-15349},{1,4148,5L,-2632},{8,2041,-6L,12357},{4,-4312,-8L,9508},{4,-4312,-8L,9508}},{{8,2041,-6L,12357},{13,1344,0xEF2CL,-12884},{8,2041,-6L,12357},{19,-915,0xE05BL,115},{20,-3652,0x699CL,13104}},{{17,-7558,6L,12306},{9,-7631,1L,15689},{8,2041,-6L,12357},{20,-3652,0x699CL,13104},{16,1145,0xC300L,-3635}}}};
    struct S0 l_117 = {3,-2877,1L,4609};
    int i, j, k;
    g_28[0][1].f1 = ((3L <= (func_2(g_4) <= (((((safe_add_func_int32_t_s_s(0x2478149CL, g_28[0][1].f0)) || 0UL) && 7UL) ^ l_115) <= (-9L)))) , 1L);
    l_116[1][1][2] = l_116[1][1][2];
    g_49 = g_28[0][1].f1;
    return l_117;
}



static int8_t  func_2(uint32_t  p_3)
{ 
    int32_t l_10 = 2L;
    const struct S1 l_19 = {73,112,0xA08376FBFCC013CELL,0,1187,41};
    int64_t l_20 = 6L;
    int32_t l_63 = 0x19A80272L;
    uint32_t l_64[1];
    struct S0 l_90 = {19,-4186,0x399AL,-9248};
    union U3 l_93 = {-5L};
    int i;
    for (i = 0; i < 1; i++)
        l_64[i] = 0x0D7C7E68L;
    if (((((safe_div_func_uint64_t_u_u((g_4 , func_7((++g_11[0]), func_14((g_4 , l_19), g_4, l_20, g_4))), 0x72E8F98891C1AAD5LL)) >= 0xB19957B093197C82LL) == g_51) , l_19.f2))
    { 
        union U2 l_73 = {0xC3L};
        --l_64[0];
        for (g_54 = 29; (g_54 != (-8)); g_54--)
        { 
            int64_t l_74 = 0L;
            int32_t l_76 = 0x088E2D1EL;
            int32_t l_77 = (-3L);
            l_63 = (0xECL & (l_77 |= (l_76 = (safe_mod_func_uint16_t_u_u((((((0xE1F6L >= ((l_74 ^= (safe_mul_func_uint8_t_u_u((l_73 , (p_3 , p_3)), g_51))) , 1UL)) <= l_19.f4) == 0x55878DFE8548DC09LL) | g_49) , g_75), g_75)))));
        }
    }
    else
    { 
        int16_t l_88 = 0xA077L;
        const struct S1 l_89[2] = {{398,-156,0x4FE2E886BE4B2277LL,0,299,-38},{398,-156,0x4FE2E886BE4B2277LL,0,299,-38}};
        int i;
        for (g_50 = 0; (g_50 > 7); ++g_50)
        { 
            uint64_t l_85 = 18446744073709551609UL;
            if (p_3)
            { 
                return g_57;
            }
            else
            { 
                struct S0 l_80 = {7,3294,0x26CBL,15098};
                l_80 = g_28[0][1];
                l_80.f3 = ((((0xE1L < (safe_mod_func_uint8_t_u_u((safe_mul_func_int16_t_s_s((l_85 = l_80.f1), (safe_mod_func_int32_t_s_s(0xDCAF5201L, p_3)))), l_88))) | (-3L)) != p_3) && p_3);
                return l_85;
            }
        }
        l_90 = func_14(l_89[1], p_3, ((0UL > ((-1L) | p_3)) != p_3), l_19.f0);
    }
    g_28[0][1].f3 &= (((l_93 , (safe_div_func_uint8_t_u_u((((safe_add_func_uint8_t_u_u(((safe_add_func_uint8_t_u_u((g_112 ^= ((1UL & (((safe_lshift_func_int16_t_s_s((((safe_add_func_uint32_t_u_u(((safe_add_func_uint16_t_u_u((safe_mul_func_int8_t_s_s(0xCEL, (safe_lshift_func_int8_t_s_s((safe_lshift_func_uint16_t_u_u(65535UL, p_3)), g_49)))), l_90.f0)) <= (-10L)), 4294967295UL)) != g_57) >= 0x1F8FL), p_3)) , 0xC5L) ^ 0xAAL)) < p_3)), g_50)) , p_3), l_90.f2)) | g_53) | l_93.f1), p_3))) <= 0UL) & 0xCBL);
    return g_43;
}



static uint64_t  func_7(const uint8_t  p_8, struct S0  p_9)
{ 
    struct S0 l_46 = {8,-4659,0L,13856};
    int32_t l_47 = 0x8172882CL;
    int32_t l_52 = 0x16C484D5L;
    int32_t l_55 = 1L;
    int32_t l_56 = 0x0BDA1A75L;
    const int32_t l_62 = 0x31A9D0E4L;
    for (g_4 = 0; (g_4 <= 11); g_4 = safe_add_func_int8_t_s_s(g_4, 7))
    { 
        int64_t l_48 = 0xA727FAAB159BBC08LL;
        g_28[0][1].f1 = 0x2A6A8E49L;
        for (p_9.f2 = 21; (p_9.f2 == (-30)); p_9.f2 = safe_sub_func_int8_t_s_s(p_9.f2, 6))
        { 
            for (g_43 = 29; (g_43 > (-1)); g_43--)
            { 
                l_46 = g_28[3][0];
            }
        }
        g_28[0][1].f3 &= ((g_57--) || ((safe_mod_func_uint8_t_u_u(253UL, ((((l_62 != 0x67L) , 0x1E2C279AL) ^ g_51) | l_48))) >= g_54));
    }
    return g_54;
}



static struct S0  func_14(const struct S1  p_15, uint32_t  p_16, uint8_t  p_17, int8_t  p_18)
{ 
    uint8_t l_27 = 255UL;
    int32_t l_38 = 0x37069E5FL;
    if ((safe_add_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u((8L & ((!((!(l_27 , l_27)) && (g_28[0][1] , g_28[0][1].f0))) , l_27)), 3)), 0x58L)))
    { 
        int32_t l_37 = 0x115CD63CL;
        g_28[0][1].f1 = (safe_sub_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u(((((p_15.f3 , (((safe_lshift_func_int8_t_s_u(g_28[0][1].f2, 4)) || (p_17 |= 0x00L)) > (safe_sub_func_int64_t_s_s(p_18, 0x047311EBC84814C7LL)))) , l_37) > 0xE5L) != l_27), p_15.f1)), p_15.f1));
    }
    else
    { 
        l_38 |= (-1L);
    }
    return g_28[0][0];
}





int test_main(void)
{
    int i, j;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_4, "g_4", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_11[i], "g_11[i]", print_hash_value);

    }
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_28[i][j].f0, "g_28[i][j].f0", print_hash_value);
            transparent_crc(g_28[i][j].f1, "g_28[i][j].f1", print_hash_value);
            transparent_crc(g_28[i][j].f2, "g_28[i][j].f2", print_hash_value);
            transparent_crc(g_28[i][j].f3, "g_28[i][j].f3", print_hash_value);

        }
    }
    transparent_crc(g_43, "g_43", print_hash_value);
    transparent_crc(g_49, "g_49", print_hash_value);
    transparent_crc(g_50, "g_50", print_hash_value);
    transparent_crc(g_51, "g_51", print_hash_value);
    transparent_crc(g_53, "g_53", print_hash_value);
    transparent_crc(g_54, "g_54", print_hash_value);
    transparent_crc(g_57, "g_57", print_hash_value);
    transparent_crc(g_75, "g_75", print_hash_value);
    transparent_crc(g_112, "g_112", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
