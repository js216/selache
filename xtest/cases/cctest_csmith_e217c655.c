// SPDX-License-Identifier: MIT
// cctest_csmith_e217c655.c --- cctest case csmith_e217c655 (csmith seed 3793208917)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x426d01f0 */

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

// Options:   -s 3793208917 -o /tmp/csmith_gen_3docz16g/csmith.c --concise --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


struct S0 {
   uint32_t  f0;
   const int8_t  f1;
   int32_t  f2;
   const uint64_t  f3;
   uint32_t  f4;
   int32_t  f5;
   int32_t  f6;
   const uint64_t  f7;
};

union U1 {
   int8_t * f0;
};

union U2 {
   int32_t  f0;
   const uint32_t  f1;
   uint64_t  f2;
   uint64_t  f3;
   uint64_t  f4;
};


static int8_t g_3 = 1L;
static int8_t *g_2 = &g_3;
static struct S0 g_16[2][1] = {{{4294967292UL,0L,0x5EE4C20FL,0x46E33A79CC099A56LL,0x18E50348L,0x9BB7A140L,1L,0x87223B16AAC89535LL}},{{4294967292UL,0L,0x5EE4C20FL,0x46E33A79CC099A56LL,0x18E50348L,0x9BB7A140L,1L,0x87223B16AAC89535LL}}};
static uint16_t g_45 = 0xC897L;
static uint16_t g_52 = 0UL;
static int32_t **g_60 = (void*)0;
static uint64_t g_62[5][7] = {{0x77CAF8BA45C3C065LL,18446744073709551606UL,18446744073709551606UL,0x77CAF8BA45C3C065LL,18446744073709551606UL,18446744073709551606UL,0x77CAF8BA45C3C065LL},{0xD3A577DC9657A476LL,0UL,0xD3A577DC9657A476LL,0xD3A577DC9657A476LL,0UL,0xD3A577DC9657A476LL,0xD3A577DC9657A476LL},{0x77CAF8BA45C3C065LL,0x77CAF8BA45C3C065LL,5UL,0x77CAF8BA45C3C065LL,0x77CAF8BA45C3C065LL,5UL,0x77CAF8BA45C3C065LL},{0UL,0xD3A577DC9657A476LL,0xD3A577DC9657A476LL,0UL,0xD3A577DC9657A476LL,0xD3A577DC9657A476LL,0UL},{18446744073709551606UL,0x77CAF8BA45C3C065LL,18446744073709551606UL,18446744073709551606UL,0x77CAF8BA45C3C065LL,18446744073709551606UL,18446744073709551606UL}};
static uint16_t g_80 = 3UL;
static uint16_t *g_85 = &g_80;
static int8_t g_89 = (-6L);
static union U1 g_94 = {0};
static int64_t g_108 = 0x7A0EAAE7D9AD9C27LL;
static uint8_t g_109 = 0x4BL;
static int32_t *g_115 = &g_16[1][0].f6;
static int16_t g_120 = 0x6831L;
static int16_t g_122 = 0xA584L;
static int16_t g_143 = 0xC786L;
static int16_t g_144 = (-5L);
static union U2 g_157 = {0xAA9AF56AL};
static const int32_t *g_160 = &g_16[1][0].f6;
static int64_t g_163[3][4] = {{(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L)}};
static int16_t g_164[5][5][4] = {{{(-7L),(-1L),0xC6D6L,0x152EL},{3L,4L,0x8226L,1L},{0xC290L,0x2B5AL,(-7L),(-1L)},{0L,0x152EL,(-3L),3L},{0x1601L,2L,0L,(-1L)}},{{0x55CDL,0L,(-1L),0L},{(-7L),0x0AB6L,(-1L),6L},{(-10L),0x55CDL,(-10L),0x5F9DL},{0x5F9DL,0L,(-1L),0xE52CL},{0x99DEL,0xD447L,2L,0L}},{{0L,(-2L),2L,0xC290L},{0x99DEL,0x7F64L,(-1L),(-3L)},{0x5F9DL,0x99DEL,(-10L),0x0647L},{(-10L),0x0647L,(-1L),0x2B5AL},{(-7L),(-7L),(-1L),0L}},{{0x55CDL,(-3L),0L,0x8226L},{0x1601L,0xEDD4L,(-3L),(-1L)},{0L,6L,(-7L),(-7L)},{0xC290L,0xC290L,0x8226L,0x0B64L},{3L,0L,0xC6D6L,4L}},{{(-7L),(-1L),6L,0xC6D6L},{0xEDD4L,(-1L),0L,4L},{(-1L),0L,(-1L),0x0B64L},{0L,0xC290L,0x2B5AL,(-7L)},{1L,6L,(-1L),(-1L)}}};
static uint16_t g_165 = 0xD90DL;
static int32_t g_196 = 0x3C2260EAL;
static uint64_t g_197 = 0x2B7A87C478B8BAA0LL;
static int32_t g_229 = (-8L);
static uint16_t g_230 = 1UL;
static uint16_t g_276 = 1UL;
static uint16_t **g_339[1][7][1] = {{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}}};
static uint16_t ***g_338[5] = {&g_339[0][6][0],&g_339[0][6][0],&g_339[0][6][0],&g_339[0][6][0],&g_339[0][6][0]};
static int32_t g_368 = 1L;
static uint32_t g_369 = 0UL;
static uint32_t g_373 = 4UL;
static struct S0 g_379 = {4294967291UL,0L,1L,0xF266FB2199A37B8CLL,18446744073709551615UL,-10L,1L,1UL};
static int32_t g_413 = 7L;
static uint32_t g_417[1][3][1] = {{{0UL},{0UL},{0UL}}};
static int32_t g_425[4][3] = {{9L,9L,0x35E62FE6L},{0xCFF3EA69L,0x35E62FE6L,0x35E62FE6L},{0x35E62FE6L,(-4L),(-4L)},{0xCFF3EA69L,(-4L),0xCFF3EA69L}};
static int32_t g_426 = 1L;
static uint64_t g_427 = 0x3D1591A8D254A12DLL;
static uint64_t g_442 = 1UL;
static uint32_t g_476[3][5] = {{18446744073709551615UL,0xD97A3B3CL,0x6C615A6BL,0xD97A3B3CL,18446744073709551615UL},{18446744073709551615UL,0xD97A3B3CL,0x6C615A6BL,0xD97A3B3CL,18446744073709551615UL},{18446744073709551615UL,0xD97A3B3CL,0x6C615A6BL,0xD97A3B3CL,18446744073709551615UL}};
static uint64_t g_477 = 18446744073709551615UL;
static int16_t g_510[7][4] = {{0x2AD7L,0x6D7FL,(-3L),0x2AD7L},{(-3L),0x2AD7L,0xE633L,0xE633L},{0x8D21L,0x8D21L,0L,0x13DEL},{0x8D21L,0x6D7FL,0xE633L,0x8D21L},{(-3L),0x13DEL,(-3L),0xE633L},{0x2AD7L,0x13DEL,0L,0x8D21L},{0x13DEL,0x6D7FL,0x6D7FL,0x13DEL}};
static int32_t g_519 = 0x04BEA9E4L;
static const union U2 *g_530 = &g_157;
static const union U2 **g_529[5][4] = {{(void*)0,(void*)0,(void*)0,&g_530},{&g_530,&g_530,(void*)0,&g_530},{(void*)0,&g_530,(void*)0,(void*)0},{&g_530,&g_530,&g_530,&g_530},{&g_530,&g_530,&g_530,(void*)0}};
static const union U2 ***g_528 = &g_529[0][1];
static const int32_t g_558 = (-3L);
static int32_t *****g_587 = (void*)0;
static union U1 g_642[1][7] = {{{0},{0},{0},{0},{0},{0},{0}}};
static int16_t *g_665 = &g_143;
static int16_t **g_664 = &g_665;
static int64_t g_680 = 0x0B344ED010F552C6LL;
static struct S0 g_689 = {4294967290UL,2L,0xAF63A578L,18446744073709551611UL,0xC59B09A9L,0x20746210L,-7L,0xE6F99630216C79ADLL};
static int8_t **g_710 = &g_2;
static int16_t g_728 = (-1L);
static uint32_t g_845 = 0xD3409C2FL;
static union U2 g_849 = {0x1214B31CL};
static int32_t g_938 = 0L;
static uint64_t g_940[7] = {0xB338FEDA8267BD93LL,0x024709BCE2DEFB92LL,0xB338FEDA8267BD93LL,0xB338FEDA8267BD93LL,0x024709BCE2DEFB92LL,0xB338FEDA8267BD93LL,0xB338FEDA8267BD93LL};
static uint32_t g_959 = 18446744073709551615UL;
static uint64_t g_981 = 0UL;
static const int32_t g_1038 = 5L;
static union U1 *g_1063 = &g_94;
static union U1 **g_1062[1][7][3] = {{{&g_1063,&g_1063,&g_1063},{&g_1063,&g_1063,&g_1063},{&g_1063,&g_1063,&g_1063},{&g_1063,&g_1063,&g_1063},{&g_1063,&g_1063,&g_1063},{&g_1063,&g_1063,&g_1063},{&g_1063,&g_1063,&g_1063}}};
static uint8_t **g_1131 = (void*)0;
static uint16_t g_1150 = 9UL;
static uint16_t g_1151 = 1UL;
static const int16_t ***g_1159 = (void*)0;
static int8_t g_1175 = 0xCDL;
static uint64_t g_1176 = 0x3400A4A53B4CAB07LL;
static struct S0 *g_1182 = &g_379;
static struct S0 **g_1181 = &g_1182;
static union U1 *g_1206 = &g_642[0][4];
static struct S0 g_1210 = {4294967295UL,7L,0xDC69DF48L,0UL,0x0C0B71DDL,0x9C8D0DBCL,0xA9279CB3L,0x2DCB9BBB37C5636ALL};
static uint8_t g_1231 = 0x84L;
static const int32_t **g_1245[3][7] = {{&g_160,&g_160,&g_160,&g_160,&g_160,&g_160,&g_160},{&g_160,&g_160,&g_160,&g_160,&g_160,&g_160,&g_160},{&g_160,&g_160,&g_160,&g_160,&g_160,&g_160,&g_160}};
static int64_t g_1265 = 0L;
static int16_t g_1272[1] = {0xA2D9L};
static int32_t g_1289 = 0x27DFF85DL;
static uint16_t g_1290 = 0x4BCDL;
static uint32_t g_1327 = 0xEE59EA19L;
static int32_t g_1350 = (-1L);
static const int32_t * const g_1377 = &g_157.f0;
static uint32_t g_1379 = 0xA16E0A94L;
static uint32_t g_1435 = 5UL;
static int8_t * const *g_1623 = &g_2;
static int8_t * const **g_1622 = &g_1623;
static int8_t * const ***g_1621 = &g_1622;
static int32_t g_1655[6][4][7] = {{{0xE8494110L,0L,0x29C5CAB6L,0x36E39DC5L,(-1L),(-5L),0L},{0xB7295374L,(-1L),3L,(-10L),(-1L),(-5L),0x29C5CAB6L},{(-1L),0xE8494110L,0x58DF17A6L,0xCCDA219AL,0xE6D0CFA8L,0xF74AA5CDL,0L},{(-1L),0L,1L,0x79BDBF09L,(-1L),(-10L),(-1L)}},{{0xB7295374L,0xE8494110L,1L,(-10L),0x158683CDL,7L,0x29C5CAB6L},{0xE8494110L,(-1L),0x58DF17A6L,0x79BDBF09L,0x158683CDL,0xF74AA5CDL,0xD4FD8623L},{0x0867F38CL,0L,3L,0xCCDA219AL,(-1L),7L,0xD4FD8623L},{0xB7295374L,0x0867F38CL,0x29C5CAB6L,(-10L),0xE6D0CFA8L,(-10L),0x29C5CAB6L}},{{0x0867F38CL,0x0867F38CL,0x58DF17A6L,0x36E39DC5L,(-1L),0xF74AA5CDL,(-1L)},{0xE8494110L,0L,0x29C5CAB6L,0x36E39DC5L,(-1L),(-5L),0L},{0xB7295374L,(-1L),3L,(-10L),(-1L),(-5L),0x29C5CAB6L},{(-1L),0xE8494110L,0x58DF17A6L,0xCCDA219AL,0xE6D0CFA8L,0xF74AA5CDL,0L}},{{(-1L),0L,1L,0x79BDBF09L,(-1L),(-10L),(-1L)},{0xB7295374L,0xE8494110L,1L,(-10L),0x158683CDL,7L,0x29C5CAB6L},{0xE8494110L,(-1L),0x58DF17A6L,0x79BDBF09L,0x158683CDL,0xF74AA5CDL,0xD4FD8623L},{0x0867F38CL,0L,3L,0xCCDA219AL,(-1L),7L,0xD4FD8623L}},{{0xB7295374L,0x0867F38CL,0x29C5CAB6L,(-10L),0xE6D0CFA8L,(-10L),0x29C5CAB6L},{0x0867F38CL,0x0867F38CL,0x58DF17A6L,0x36E39DC5L,(-1L),0xF74AA5CDL,(-1L)},{0xE8494110L,0L,0x29C5CAB6L,0x36E39DC5L,(-1L),0L,0L},{(-9L),(-1L),8L,0xA72593A5L,3L,0L,1L}},{{(-1L),(-9L),0x0867F38CL,1L,8L,0L,0L},{(-1L),0x01429D53L,0xCC9D81DBL,(-1L),(-2L),0xA72593A5L,3L},{(-9L),(-9L),0xCC9D81DBL,0xA72593A5L,(-6L),(-1L),1L},{(-9L),(-1L),0x0867F38CL,(-1L),(-6L),0L,0xB7295374L}}};
static uint32_t g_1658[4] = {0x59856573L,0x59856573L,0x59856573L,0x59856573L};
static int64_t g_1709 = (-1L);
static union U2 g_1756 = {0x31989BCFL};
static union U1 *g_1853[2] = {&g_94,&g_94};
static union U1 g_1854[6][3][7] = {{{{0},{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0},{0}}},{{{0},{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0},{0}}},{{{0},{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0},{0}}},{{{0},{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0},{0}}},{{{0},{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0},{0}}},{{{0},{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0},{0}}}};
static const int16_t g_1875 = (-9L);
static int32_t g_1906[6][6][3] = {{{0x6BEF8FC9L,0L,0xF3D3399EL},{0xD17EDE0DL,6L,8L},{(-1L),0L,(-4L)},{0x288511D9L,(-1L),0x35B45CADL},{1L,0x994059F2L,0x09AC1AD6L},{6L,1L,0xB2DB8E45L}},{{6L,6L,0x288511D9L},{1L,0x753D7674L,0x5D908F97L},{(-1L),0x6BEF8FC9L,(-1L)},{0xAA889E55L,0xD17EDE0DL,0xF3D3399EL},{0L,(-1L),(-1L)},{8L,0x288511D9L,0x5D908F97L}},{{(-1L),1L,(-1L)},{(-1L),6L,(-7L)},{0xF3D3399EL,6L,0xF3D3399EL},{(-4L),1L,0xFCDAE8D6L},{1L,0x288511D9L,1L},{0xB2DB8E45L,(-1L),0x753D7674L}},{{(-1L),0xD17EDE0DL,0x994059F2L},{0xB2DB8E45L,0x6BEF8FC9L,0xF3D3399EL},{1L,0x753D7674L,0x17582FAAL},{(-4L),0x288511D9L,0x09AC1AD6L},{0xF3D3399EL,0x09AC1AD6L,0x09AC1AD6L},{(-1L),0L,0x17582FAAL}},{{(-1L),3L,0xF3D3399EL},{8L,0x5D908F97L,0x994059F2L},{0L,0x288511D9L,0x753D7674L},{0xAA889E55L,0x5D908F97L,1L},{(-1L),3L,0xFCDAE8D6L},{0x35B45CADL,0L,0xF3D3399EL}},{{0x288511D9L,0x09AC1AD6L,(-7L)},{0x288511D9L,0x288511D9L,(-1L)},{0x35B45CADL,0x753D7674L,0x5D908F97L},{(-1L),0x6BEF8FC9L,(-1L)},{0xAA889E55L,0xD17EDE0DL,0xF3D3399EL},{0L,(-1L),(-1L)}}};
static uint16_t g_1907 = 0x6219L;
static int64_t *g_1950 = &g_163[1][1];
static int64_t **g_1949 = &g_1950;
static int32_t ***g_1978 = &g_60;
static int32_t *** const *g_1977 = &g_1978;
static int8_t *****g_2009 = (void*)0;
static uint32_t g_2104[5] = {0xD7F693C6L,0xD7F693C6L,0xD7F693C6L,0xD7F693C6L,0xD7F693C6L};
static int16_t g_2262 = 0xF071L;
static int8_t g_2296 = (-1L);
static int32_t g_2297 = 4L;
static int32_t g_2298[6] = {1L,1L,1L,1L,1L,1L};
static const union U1 *g_2303 = &g_1854[3][1][2];
static uint16_t ****g_2333[5] = {&g_338[0],&g_338[0],&g_338[0],&g_338[0],&g_338[0]};
static uint16_t *****g_2332[6] = {&g_2333[3],&g_2333[3],&g_2333[3],&g_2333[3],&g_2333[3],&g_2333[3]};
static const uint32_t g_2374 = 0xA7F794FCL;



static uint32_t  func_1(void);
static union U1  func_12(int32_t  p_13, struct S0  p_14);
static int64_t  func_23(struct S0  p_24);
static int32_t * const  func_29(struct S0  p_30, int8_t * p_31, int32_t * p_32, uint32_t  p_33);
static struct S0  func_34(int32_t  p_35, int8_t * p_36);
static uint8_t  func_46(uint16_t * p_47, int16_t  p_48, int32_t * p_49, int8_t  p_50);
static int32_t ** func_54(int32_t  p_55, int32_t ** p_56, const uint64_t  p_57);
static int32_t * func_69(int8_t * p_70);




static uint32_t  func_1(void)
{ 
    int8_t l_4 = 0xD0L;
    uint8_t l_9 = 0xCDL;
    const int32_t l_2418[1] = {0x605C96C5L};
    int32_t *l_2426[2];
    struct S0 l_2430[1] = {{3UL,0xE4L,0x498B4FF7L,0x3BC08C7137E7E5D3LL,1UL,0xCFD07FA3L,0xCC10BF76L,0x08AC86F730CBF746LL}};
    uint64_t *l_2437 = &g_442;
    int i;
    for (i = 0; i < 2; i++)
        l_2426[i] = &g_2297;
    if (((void*)0 != g_2))
    { 
        return l_4;
    }
    else
    { 
        int8_t l_15 = 0x8DL;
        uint32_t *l_2417 = &g_16[1][0].f0;
        int32_t l_2425 = 0xAC8F595BL;
        int32_t *l_2427 = &g_1906[5][4][1];
        for (g_3 = (-15); (g_3 >= 20); ++g_3)
        { 
            uint32_t l_2406 = 0x40225571L;
            int32_t l_2420 = 0x48926895L;
            for (l_4 = 0; (l_4 != 12); l_4 = safe_add_func_uint32_t_u_u(l_4, 4))
            { 
                int32_t *l_2405[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_2405[i] = (void*)0;
                l_9++;
                l_2406 = ((*g_115) = (func_12(l_15, g_16[1][0]) , 0L));
                return l_4;
            }
            for (g_120 = 8; (g_120 != (-1)); g_120 = safe_sub_func_int8_t_s_s(g_120, 3))
            { 
                int32_t l_2419 = 0x8AFB31ACL;
                int32_t *l_2421[7];
                uint16_t l_2422[2];
                int i;
                for (i = 0; i < 7; i++)
                    l_2421[i] = &l_2420;
                for (i = 0; i < 2; i++)
                    l_2422[i] = 0x52A0L;
                l_2420 |= ((l_9 & (safe_sub_func_int16_t_s_s(l_4, l_9))) , (safe_lshift_func_int16_t_s_s((-1L), ((((safe_mod_func_int16_t_s_s(((((safe_mul_func_uint16_t_u_u(l_2406, (0x35EB154EA432D786LL & ((((g_196 >= g_108) , l_15) != (-1L)) , l_2406)))) , &g_2104[0]) != l_2417) , (*g_665)), l_2418[0])) && 0xCDBDL) != (*g_665)) != l_2419))));
                l_2422[1]++;
                l_2425 |= (*g_115);
            }
        }
        l_2427 = l_2426[0];
    }
    for (g_689.f2 = 21; (g_689.f2 >= (-19)); --g_689.f2)
    { 
        return g_164[0][0][2];
    }
    (*g_115) = 0x19620DE4L;
    g_1210.f6 = (l_2430[0] , ((*g_115) ^= 1L));
    (*g_115) = ((*g_1950) , (safe_sub_func_int64_t_s_s((*g_1950), (safe_div_func_uint16_t_u_u(((((-9L) != (((*g_2) , l_2437) != &g_981)) >= ((l_2437 == (void*)0) != 1L)) == 0x7BC3B03AL), 0xBB85L)))));
    return g_1176;
}



static union U1  func_12(int32_t  p_13, struct S0  p_14)
{ 
    uint32_t l_1629 = 0x5D7BA503L;
    uint8_t *l_1631 = &g_109;
    int8_t ***l_1635 = &g_710;
    int8_t ****l_1634 = &l_1635;
    union U2 l_1645 = {0L};
    const uint64_t l_1648 = 0x0BBD310CAF46024DLL;
    int32_t l_1656 = (-1L);
    int32_t l_1657[7];
    int32_t l_1668[6][2];
    union U2 *l_1679 = &g_849;
    union U2 **l_1678 = &l_1679;
    union U2 ***l_1677 = &l_1678;
    uint16_t l_1726 = 1UL;
    union U1 *l_1753 = &g_94;
    uint16_t l_1764 = 0UL;
    uint16_t l_1789 = 0UL;
    struct S0 **l_1802 = &g_1182;
    uint8_t l_1837 = 0x97L;
    struct S0 l_1874 = {1UL,0L,1L,18446744073709551615UL,0UL,0x29BCF0DBL,0x55ED437AL,1UL};
    const int16_t ****l_1877 = &g_1159;
    uint8_t ****l_1895 = (void*)0;
    union U2 l_1959 = {0xF6223823L};
    int64_t l_1972 = (-10L);
    uint8_t ***l_1974 = &g_1131;
    int64_t l_1981 = 0x0840CC1C4DAD3DD6LL;
    uint16_t l_2085 = 0x10C7L;
    int8_t l_2115 = (-1L);
    int32_t l_2146 = 7L;
    uint32_t l_2154[4][4][1];
    uint8_t l_2184 = 0xE4L;
    uint16_t **l_2240 = &g_85;
    int32_t *l_2244 = &g_379.f6;
    uint8_t l_2329 = 3UL;
    const uint64_t l_2336 = 4UL;
    uint8_t l_2384 = 0x19L;
    int i, j, k;
    for (i = 0; i < 7; i++)
        l_1657[i] = (-10L);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 2; j++)
            l_1668[i][j] = 0x60986FDCL;
    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 1; k++)
                l_2154[i][j][k] = 0xD6764316L;
        }
    }
    for (p_13 = (-19); (p_13 == 29); p_13 = safe_add_func_uint64_t_u_u(p_13, 2))
    { 
        int32_t *l_19 = &g_16[1][0].f6;
        union U1 l_20 = {0};
        (*l_19) ^= 0xAD6CAD8EL;
        return l_20;
    }
    return (*l_1753);
}



static int64_t  func_23(struct S0  p_24)
{ 
    int32_t * const *l_1543[3][4] = {{&g_115,&g_115,&g_115,&g_115},{&g_115,&g_115,&g_115,&g_115},{&g_115,&g_115,&g_115,&g_115}};
    int32_t * const **l_1542 = &l_1543[2][3];
    int32_t * const ***l_1541 = &l_1542;
    int32_t * const **** const l_1540 = &l_1541;
    int8_t l_1567[5][2] = {{0xD9L,0xD9L},{0xD9L,0xD9L},{0xD9L,0xD9L},{0xD9L,0xD9L},{0xD9L,0xD9L}};
    int8_t ***l_1626 = &g_710;
    int8_t ****l_1625 = &l_1626;
    int i, j;
    for (p_24.f4 = (-21); (p_24.f4 > 52); ++p_24.f4)
    { 
        int8_t l_27[2][7][1] = {{{(-10L)},{0x46L},{(-10L)},{0x46L},{(-10L)},{0x46L},{(-10L)}},{{0x46L},{(-10L)},{0x46L},{(-10L)},{0x46L},{(-10L)},{0x46L}}};
        uint64_t l_1545 = 0x16FD06999FD663D6LL;
        int32_t *l_1574[7] = {&g_425[3][0],&g_379.f5,&g_379.f5,&g_425[3][0],&g_379.f5,&g_379.f5,&g_425[3][0]};
        const int32_t ***l_1583 = &g_1245[1][0];
        int32_t l_1593 = (-1L);
        int32_t l_1604 = (-5L);
        int32_t l_1609 = 0x83D64289L;
        uint16_t l_1620[3];
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_1620[i] = 65531UL;
        if ((0x45L & g_16[1][0].f1))
        { 
            uint16_t *l_51 = &g_52;
            int32_t *l_53[5] = {&g_16[1][0].f2,&g_16[1][0].f2,&g_16[1][0].f2,&g_16[1][0].f2,&g_16[1][0].f2};
            int i;
            for (p_24.f2 = 0; (p_24.f2 <= 0); p_24.f2 += 1)
            { 
                int32_t *l_43 = &g_16[1][0].f6;
                uint32_t l_896 = 0xE3D5622DL;
                int8_t *l_901 = &l_27[0][5][0];
                int8_t l_1544 = 8L;
                for (p_24.f0 = 0; (p_24.f0 <= 0); p_24.f0 += 1)
                { 
                    int32_t *l_28 = &g_16[1][0].f6;
                    uint16_t *l_44 = &g_45;
                    int i, j, k;
                    (*l_28) ^= l_27[(p_24.f2 + 1)][(p_24.f2 + 2)][p_24.f0];
                }
                (*g_115) = (((*l_43) == ((safe_mod_func_int8_t_s_s((((((((p_24.f0 , ((*g_1063) , (safe_add_func_uint64_t_u_u((safe_rshift_func_int8_t_s_s((0UL <= ((*l_43) | 0x7090L)), 7)), (p_24.f1 <= p_24.f1))))) , 9L) , l_1540) == (void*)0) ^ l_27[1][4][0]) | l_27[0][1][0]) >= (*l_43)), l_1544)) | 0x732B4D31DD7396BBLL)) && l_1545);
                for (g_368 = 0; (g_368 >= 0); g_368 -= 1)
                { 
                    uint32_t l_1551 = 0UL;
                    int32_t **l_1552 = &l_53[4];
                    p_24.f6 = ((p_24.f7 || ((*l_43) = (0x0C12D825L < (+(0UL != (safe_add_func_uint16_t_u_u(p_24.f2, 0L))))))) != l_1545);
                    l_1551 = ((safe_mul_func_int16_t_s_s(5L, (**g_664))) , ((****l_1541) ^= 6L));
                    (*l_1552) = (void*)0;
                }
            }
        }
        else
        { 
            uint8_t l_1563 = 0x57L;
            int32_t * const l_1579[7] = {(void*)0,&g_368,&g_368,(void*)0,&g_368,&g_368,(void*)0};
            int8_t *l_1613[6] = {&g_1175,&l_27[1][0][0],&g_1175,&g_1175,&l_27[1][0][0],&g_1175};
            int32_t *l_1614[1];
            const int32_t *l_1615[6] = {&g_379.f6,&g_379.f6,&g_379.f6,&g_379.f6,&g_379.f6,&g_379.f6};
            int8_t ***l_1619 = &g_710;
            int8_t ****l_1618 = &l_1619;
            int8_t * const ****l_1624 = &g_1621;
            int i;
            for (i = 0; i < 1; i++)
                l_1614[i] = &g_379.f2;
            p_24.f6 = ((((**g_664) = (0UL & ((((safe_rshift_func_uint8_t_u_s(p_24.f7, 4)) != (p_24.f0 & (safe_mul_func_int8_t_s_s((g_1175 ^= ((safe_mod_func_uint16_t_u_u(0x7E6FL, (safe_mod_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u((((***l_1542) &= l_1563) || p_24.f5), (safe_div_func_uint8_t_u_u((+0UL), 253UL)))), 65528UL)))) != l_27[1][0][0])), p_24.f4)))) | l_1567[1][0]) ^ p_24.f4))) == p_24.f6) == g_16[1][0].f1);
            for (g_379.f5 = (-20); (g_379.f5 <= 29); g_379.f5 = safe_add_func_int8_t_s_s(g_379.f5, 2))
            { 
                uint32_t *l_1570 = &g_1210.f0;
                int32_t l_1575 = 0x0D8C4EEBL;
                int64_t *l_1576 = &g_680;
                int32_t l_1605 = 0x02294E9AL;
                int32_t l_1607 = 0xA06FD8CBL;
                int16_t l_1608 = 0xB861L;
            }
            l_1615[4] = (**l_1583);
            (***l_1542) = (((0x1AL || (((void*)0 == l_1614[0]) > (((*l_1618) = &g_710) == &g_710))) , (-1L)) && l_1620[2]);
            (****l_1541) = (l_1593 = (p_24.f6 = ((***l_1583) >= (1UL < (((*l_1624) = g_1621) == l_1625)))));
        }
    }
    return p_24.f5;
}



static int32_t * const  func_29(struct S0  p_30, int8_t * p_31, int32_t * p_32, uint32_t  p_33)
{ 
    int32_t * const l_902 = &g_379.f2;
    int32_t ***l_908 = &g_60;
    int32_t ****l_907 = &l_908;
    union U1 * const l_910 = (void*)0;
    union U1 * const *l_909[7] = {&l_910,&l_910,&l_910,&l_910,&l_910,&l_910,&l_910};
    union U2 l_913 = {0x2966F503L};
    uint32_t *l_923[3];
    int32_t l_939 = (-1L);
    uint64_t l_958 = 0xF9AF612A1F70E7C5LL;
    int32_t l_974 = 0x19AC03D2L;
    int32_t l_975 = (-2L);
    int32_t l_976 = 0xAE773006L;
    int32_t l_977 = 0xF272A2A9L;
    int32_t l_979 = 0x0C3DCD7DL;
    int32_t l_980 = (-7L);
    uint8_t l_994 = 1UL;
    int8_t l_995 = 0x14L;
    struct S0 l_1022 = {4294967292UL,-5L,0xA4844CEFL,0x018695DB1A642B49LL,0UL,0x2F8A1F81L,1L,0xB073636BEE873FA5LL};
    const uint8_t l_1039 = 0x6CL;
    int32_t *****l_1052 = &l_907;
    int16_t l_1065 = 1L;
    uint16_t l_1201 = 0xEE8FL;
    const int32_t **l_1243 = (void*)0;
    uint8_t ***l_1271 = &g_1131;
    uint8_t l_1293 = 0xF2L;
    uint32_t l_1305 = 0UL;
    uint8_t l_1351[4][1][2] = {{{0xFAL,0xFAL}},{{7UL,0xFAL}},{{0xFAL,7UL}},{{0xFAL,7UL}}};
    int8_t l_1403 = 0xD4L;
    int8_t l_1431 = 0x1EL;
    int32_t l_1433 = 0x8B2740A8L;
    int16_t l_1437 = 0L;
    const int32_t *****l_1515 = (void*)0;
    const uint16_t l_1516 = 1UL;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_923[i] = (void*)0;
    for (g_52 = 1; (g_52 <= 4); g_52 += 1)
    { 
        return l_902;
    }
lbl_1118:
    (*l_902) = ((*g_85) < (safe_mul_func_uint8_t_u_u(((safe_div_func_uint16_t_u_u(((void*)0 != l_907), (*g_665))) ^ (((void*)0 != l_909[6]) , ((*p_32) , (-3L)))), g_373)));
    if ((safe_sub_func_uint64_t_u_u((&g_2 == (l_913 , (g_164[0][0][2] , ((*p_31) , &p_31)))), (safe_rshift_func_uint8_t_u_u((((((!(safe_mul_func_uint8_t_u_u((safe_sub_func_uint64_t_u_u(((p_33 ^= (safe_sub_func_uint16_t_u_u((*l_902), 0xECD7L))) != (*p_32)), 9L)), (*g_2)))) <= 65527UL) & p_30.f3) < p_30.f7) || p_30.f0), g_230)))))
    { 
        int16_t l_928 = 0L;
        int32_t l_931 = (-1L);
        int32_t l_936 = (-7L);
        int32_t l_937[3][4] = {{0x8C2FE0C6L,(-1L),0x8C2FE0C6L,0x8C2FE0C6L},{(-1L),(-1L),0L,(-1L)},{(-1L),0x8C2FE0C6L,0x8C2FE0C6L,(-1L)}};
        union U1 *l_961 = &g_94;
        int8_t l_963 = 0x69L;
        uint16_t l_971 = 0x2C0DL;
        uint8_t l_996 = 251UL;
        int32_t *l_999 = &g_689.f6;
        uint8_t l_1008 = 255UL;
        int16_t **l_1017 = &g_665;
        union U1 **l_1050 = &l_961;
        int32_t ***** const l_1084 = &l_907;
        int i, j;
        if ((safe_div_func_int16_t_s_s((l_913 , 9L), (safe_mod_func_uint32_t_u_u((&g_160 != (void*)0), (*p_32))))))
        { 
            int32_t *l_929 = (void*)0;
            int32_t *l_930 = &g_689.f2;
            int32_t *l_932 = &g_426;
            int32_t *l_933 = &g_519;
            int32_t *l_934 = &g_519;
            int32_t *l_935[1];
            int i;
            for (i = 0; i < 1; i++)
                l_935[i] = &g_368;
            g_940[1]++;
            for (g_143 = 0; (g_143 >= 0); g_143 -= 1)
            { 
                int8_t l_947 = 0x31L;
                uint8_t *l_957[1];
                int32_t l_964 = 0L;
                int32_t l_967 = 0x4BFC2627L;
                int32_t l_969 = 0xDFADA6C2L;
                int32_t l_970[4][6][1] = {{{0L},{0L},{0xC63A2FA4L},{0x097FBD33L},{0xC63A2FA4L},{0L}},{{0L},{0xC63A2FA4L},{0x097FBD33L},{0xC63A2FA4L},{0L},{0L}},{{0xC63A2FA4L},{0x097FBD33L},{0xC63A2FA4L},{0L},{0L},{0xC63A2FA4L}},{{0x097FBD33L},{0xC63A2FA4L},{0L},{0L},{0xC63A2FA4L},{0x097FBD33L}}};
                union U1 l_993 = {0};
                int i, j, k;
                for (i = 0; i < 1; i++)
                    l_957[i] = (void*)0;
                if ((safe_mul_func_uint16_t_u_u((((p_30.f0 = (safe_sub_func_uint8_t_u_u((l_958 = ((((l_937[1][2] < 65535UL) < g_369) | (g_16[1][0].f0 = ((*l_934) = l_947))) | (safe_mul_func_int16_t_s_s(((safe_div_func_uint8_t_u_u(((safe_sub_func_uint64_t_u_u(g_52, l_931)) >= (((+(((safe_rshift_func_int16_t_s_s(p_33, (**g_664))) , l_947) || 0x78A0526EL)) || (-1L)) >= (*l_902))), 0x9AL)) == p_30.f0), p_30.f6)))), g_379.f6))) ^ g_959) > 18446744073709551615UL), p_30.f7)))
                { 
                    uint32_t l_960 = 0x0C359BBCL;
                    union U1 **l_962 = &l_961;
                    int32_t l_965 = 0x6264C9BDL;
                    int32_t l_966 = 0x1417B147L;
                    int32_t l_968 = 0x566A4F26L;
                    int32_t l_978[2];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_978[i] = 4L;
                    (*l_962) = (l_960 , l_961);
                    ++l_971;
                    ++g_981;
                }
                else
                { 
                    if ((*l_902))
                        break;
                    (*p_32) ^= 1L;
                    p_32 = p_32;
                }
                for (g_379.f2 = 4; (g_379.f2 >= 0); g_379.f2 -= 1)
                { 
                    union U1 l_988 = {0};
                    int i;
                    p_32 = p_32;
                    (*p_32) = (((g_373 = (((safe_add_func_uint16_t_u_u(((safe_mul_func_uint16_t_u_u((l_988 , (safe_add_func_uint64_t_u_u((safe_lshift_func_uint8_t_u_s(g_940[(g_143 + 3)], 4)), g_16[1][0].f1))), (g_368 , ((2UL > ((l_993 , 4UL) <= l_994)) ^ (*l_932))))) & p_30.f3), l_937[0][3])) < 0xF0F4L) ^ 0x216EDB5DL)) < l_995) & 1UL);
                    l_996--;
                }
            }
            l_999 = &l_937[0][3];
        }
        else
        { 
            union U1 l_1000 = {0};
            uint64_t l_1001 = 0xAF11E59E112238B1LL;
            int32_t l_1007 = 0L;
            union U1 **l_1049 = (void*)0;
            uint32_t l_1074[2];
            int32_t *l_1086 = (void*)0;
            int i;
            for (i = 0; i < 2; i++)
                l_1074[i] = 0x1BB4A958L;
            if (((*p_32) = (l_1000 , (l_1001 & (p_33 = 0x7D174B11L)))))
            { 
                int32_t * const l_1004 = &g_379.f2;
                for (g_519 = 0; (g_519 <= (-11)); g_519--)
                { 
                    return l_1004;
                }
            }
            else
            { 
                int32_t *l_1005 = &g_689.f2;
                int32_t *l_1006[7] = {&l_937[1][2],&g_16[1][0].f6,&l_937[1][2],&l_937[1][2],&g_16[1][0].f6,&l_937[1][2],&l_937[1][2]};
                int16_t ***l_1048 = &g_664;
                union U1 * const *l_1051 = &l_961;
                union U2 **l_1069 = (void*)0;
                union U2 *** const l_1068 = &l_1069;
                struct S0 **l_1079 = (void*)0;
                struct S0 *l_1081 = &g_16[1][0];
                struct S0 **l_1080 = &l_1081;
                int i;
                l_1008--;
                for (g_144 = (-5); (g_144 <= (-19)); g_144--)
                { 
                    int16_t ***l_1018 = &l_1017;
                    int16_t ***l_1019 = &g_664;
                    int32_t l_1040 = 0x9CD51815L;
                    int64_t *l_1064 = &g_163[2][2];
                    (*l_902) = (safe_div_func_uint16_t_u_u((safe_mod_func_uint32_t_u_u((((*l_1018) = l_1017) == ((*l_1019) = &g_665)), ((((*p_31) = (safe_mul_func_uint16_t_u_u((((*g_665) ^= (l_1022 , ((safe_lshift_func_int8_t_s_s((safe_sub_func_int32_t_s_s((safe_mod_func_uint16_t_u_u((safe_sub_func_uint64_t_u_u((!((safe_lshift_func_uint16_t_u_s((safe_div_func_uint64_t_u_u(((p_30.f3 <= (safe_rshift_func_int16_t_s_u(0L, ((0x55L < (*l_999)) , (*l_999))))) , p_30.f0), l_1007)), 14)) , p_30.f3)), p_33)), p_30.f2)), g_1038)), l_1039)) <= g_689.f0))) & 0x2586L), (*g_85)))) == (-8L)) , l_1040))), l_1040));
                    p_32 = func_69((((*g_85) = p_30.f0) , (((g_642[0][3] , (safe_unary_minus_func_int64_t_s((safe_rshift_func_uint8_t_u_s(((safe_lshift_func_int16_t_s_s((safe_add_func_int8_t_s_s((l_1048 == (((l_1050 = l_1049) != (l_1022 , l_1051)) , (void*)0)), l_1040)), p_30.f7)) > g_379.f3), 5))))) > 0x2A6AC165427FD74CLL) , &l_963)));
                    (*p_32) = (((l_1052 = (g_587 = g_587)) != (void*)0) > (safe_div_func_uint64_t_u_u((((safe_mul_func_int16_t_s_s((((safe_mul_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u(((18446744073709551615UL != ((p_33 == ((g_379 , p_30.f4) , ((*l_1064) = (~(g_1062[0][2][2] == &g_1063))))) <= 0x2946L)) , (*l_1005)), 7)), l_1040)) || 255UL) , p_30.f2), (**g_664))) < 0xEFA69764L) && l_1065), 0xFE7A711A7BB2B6BCLL)));
                    (*l_999) = ((*g_1063) , (((safe_mul_func_uint16_t_u_u((&g_529[3][0] == (p_30.f3 , l_1068)), ((safe_lshift_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u(((((-1L) > 5UL) <= 0x6DL) ^ 0xBCL), 6)), (*l_902))) & 0x433500CCF55AB5CBLL))) ^ 5UL) , (*p_32)));
                }
                ++l_1074[0];
                for (g_938 = 0; (g_938 > (-23)); g_938 = safe_sub_func_uint16_t_u_u(g_938, 4))
                { 
                    (*l_1005) ^= 0x534A9406L;
                }
                (*l_1080) = (void*)0;
            }
            if ((*p_32))
            { 
                int32_t **l_1085 = &l_999;
                (*l_902) ^= ((safe_sub_func_uint64_t_u_u(6UL, l_1074[0])) == (((l_1084 == (void*)0) != ((l_1086 = ((*l_1085) = func_69(p_31))) != &g_426)) | l_1074[0]));
                for (g_379.f2 = 10; (g_379.f2 > 24); g_379.f2 = safe_add_func_int8_t_s_s(g_379.f2, 6))
                { 
                    return p_32;
                }
            }
            else
            { 
                return p_32;
            }
            (*l_902) &= (((*g_665) = 0xB138L) >= (*l_999));
            for (l_1007 = 0; (l_1007 > 15); ++l_1007)
            { 
                int64_t l_1091 = 0xF5558C9D70A06AF7LL;
                union U2 *l_1094 = &l_913;
                uint8_t *l_1095 = &l_996;
                union U1 **l_1096 = &l_961;
                (*l_1086) = (l_1091 , (((safe_div_func_uint16_t_u_u(p_30.f5, ((((((&l_913 != ((*g_665) , (l_1094 = l_1094))) >= (((*l_1095) = 0x3DL) < l_1091)) || 0x8794A68EL) == l_1091) || 65535UL) , (*l_1086)))) , (void*)0) == l_1096));
            }
        }
        l_1052 = (void*)0;
    }
    else
    { 
        const int32_t l_1113 = 0xA81E7589L;
        int16_t *l_1114[4] = {&g_164[0][0][2],&g_164[0][0][2],&g_164[0][0][2],&g_164[0][0][2]};
        int32_t l_1115[2];
        int32_t l_1116 = 0L;
        uint64_t *l_1117 = &g_849.f2;
        int32_t ***l_1123 = &g_60;
        union U2 l_1125 = {0x5F6D14D3L};
        int32_t l_1192 = 8L;
        uint32_t l_1229 = 4UL;
        uint8_t ***l_1236 = &g_1131;
        union U1 *l_1298 = (void*)0;
        struct S0 l_1349[1] = {{0xCF781F9BL,1L,0xB18ED610L,0x7185ED2474E64A41LL,0UL,0xFA30F1E3L,0x38455776L,18446744073709551612UL}};
        uint16_t l_1360 = 0x88C5L;
        uint16_t l_1383 = 0x54D7L;
        int8_t l_1385 = 0L;
        int8_t l_1402 = 0x98L;
        uint32_t l_1461 = 0UL;
        int i;
        for (i = 0; i < 2; i++)
            l_1115[i] = 0L;
        if (((safe_rshift_func_int16_t_s_s((safe_rshift_func_int16_t_s_s((safe_sub_func_int64_t_s_s((safe_mod_func_int8_t_s_s((g_368 < ((*l_1117) = (((safe_mod_func_uint32_t_u_u(0x6B35413FL, ((l_1116 = (l_913 , (l_1115[0] &= (safe_lshift_func_uint16_t_u_s(p_30.f0, ((((l_913 , p_30.f0) <= (((safe_div_func_uint64_t_u_u((safe_mul_func_uint8_t_u_u(((((*l_908) = &p_32) == &p_32) == (**g_664)), (*p_31))), 18446744073709551606UL)) < l_1113) == l_1113)) , 0x28C90494L) , 0x8ACFL)))))) & (-6L)))) >= p_30.f0) < (-2L)))), 4UL)), 1L)), 14)), p_30.f4)) == (*g_665)))
        { 
            if (g_369)
                goto lbl_1118;
        }
        else
        { 
            int32_t ****l_1124 = &l_1123;
            const union U1 l_1126 = {0};
            uint8_t *l_1130 = &l_994;
            uint8_t **l_1129 = &l_1130;
            int16_t ***l_1155[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            int32_t l_1170 = 1L;
            int32_t l_1171[3][2];
            union U2 *l_1198 = &l_913;
            union U1 *l_1208 = &g_94;
            uint8_t l_1230 = 0x96L;
            int8_t l_1232 = (-1L);
            int8_t *l_1235 = &l_1232;
            uint32_t l_1246 = 4UL;
            int32_t * const *l_1316 = (void*)0;
            int32_t * const **l_1315 = &l_1316;
            uint16_t l_1363 = 0UL;
            uint16_t l_1384 = 65531UL;
            uint16_t *** const *l_1432 = &g_338[2];
            int32_t *l_1454 = (void*)0;
            int32_t *l_1455 = (void*)0;
            int32_t *l_1456 = &l_1171[1][0];
            int32_t *l_1457 = &l_977;
            int32_t *l_1458 = &l_1171[2][1];
            int32_t *l_1459 = (void*)0;
            int32_t *l_1460 = &l_1171[2][1];
            uint32_t l_1477 = 0x2A720504L;
            uint64_t *l_1484 = &l_913.f2;
            uint64_t *l_1485[5][3] = {{&g_981,&g_981,&g_981},{&g_62[3][5],&g_427,&g_62[3][5]},{&g_981,&g_981,&g_981},{&g_62[3][5],&g_427,&g_62[3][5]},{&g_981,&g_981,&g_981}};
            int8_t ** const *l_1496[4];
            int i, j;
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 2; j++)
                    l_1171[i][j] = 0x55E39C9FL;
            }
            for (i = 0; i < 4; i++)
                l_1496[i] = &g_710;
            if ((safe_lshift_func_int16_t_s_s((safe_add_func_uint32_t_u_u((((*l_907) == ((*l_1124) = l_1123)) && (l_1125 , (((*p_32) , l_1126) , (safe_div_func_uint8_t_u_u(((l_1129 != g_1131) , p_30.f1), 0x99L))))), 5L)), 1)))
            { 
                const int16_t *l_1158 = &g_510[3][0];
                const int16_t **l_1157 = &l_1158;
                const int16_t ***l_1156[6] = {&l_1157,(void*)0,&l_1157,&l_1157,(void*)0,&l_1157};
                int32_t l_1160[4][3] = {{0L,0x8A379876L,0L},{(-1L),(-1L),(-1L)},{0L,0x8A379876L,0L},{(-1L),(-1L),(-1L)}};
                int64_t l_1172 = (-7L);
                struct S0 **l_1197 = &g_1182;
                union U2 **l_1199 = &l_1198;
                int i, j;
                if ((safe_rshift_func_int8_t_s_s((*****l_1052), 6)))
                { 
                    (**l_1123) = ((*g_530) , p_32);
                }
                else
                { 
                    uint16_t * const ***l_1145 = (void*)0;
                    uint16_t * const l_1149[4] = {&g_1151,&g_1151,&g_1151,&g_1151};
                    uint16_t * const *l_1148 = &l_1149[3];
                    uint16_t * const **l_1147 = &l_1148;
                    uint16_t * const ***l_1146 = &l_1147;
                    int32_t l_1161 = (-1L);
                    int32_t l_1162 = 1L;
                    int32_t *l_1163 = &l_1116;
                    int32_t *l_1164 = &l_977;
                    int32_t *l_1165 = &l_1161;
                    int32_t *l_1166 = (void*)0;
                    int32_t *l_1167 = &l_1162;
                    int32_t *l_1168 = &l_979;
                    int32_t *l_1169[1];
                    int32_t l_1173 = 6L;
                    int32_t l_1174[1];
                    int64_t *l_1195 = &g_108;
                    int32_t l_1196 = (-7L);
                    int i;
                    for (i = 0; i < 1; i++)
                        l_1169[i] = &g_16[1][0].f2;
                    for (i = 0; i < 1; i++)
                        l_1174[i] = 0x66281791L;
                    (*l_902) |= (safe_sub_func_uint64_t_u_u((safe_sub_func_uint64_t_u_u(p_30.f0, (****l_1124))), ((*g_665) && 0xEE24L)));
                    (****l_907) |= (l_1162 &= (g_379.f0 <= ((~(g_689.f0 = (safe_mul_func_uint16_t_u_u(1UL, (((safe_mod_func_int16_t_s_s((safe_div_func_int32_t_s_s((((*l_1146) = (void*)0) == ((((*g_2) != ((((~(((*g_85) || (safe_sub_func_int8_t_s_s((l_1155[0] != (g_1159 = l_1156[3])), (-5L)))) || p_30.f2)) || l_1160[1][2]) || l_1161) && 0xC350E346366DAF81LL)) && g_510[3][0]) , (void*)0)), l_1160[1][2])), p_30.f5)) | l_1160[3][0]) ^ p_30.f3))))) < 0L)));
                    (*l_902) |= (****l_907);
                    g_1176++;
                    (**g_60) = ((l_1160[1][2] = (safe_div_func_uint64_t_u_u((g_1181 == ((((0xD6200AF1CF192A2FLL > (((****l_1124) , (safe_add_func_uint32_t_u_u((((((safe_mul_func_int8_t_s_s((safe_mul_func_uint8_t_u_u(g_379.f2, p_30.f3)), ((!(safe_mul_func_uint8_t_u_u(((l_1192 == (safe_sub_func_int64_t_s_s(((*l_1195) = (((g_16[1][0].f4 <= p_30.f5) & p_33) , (-10L))), g_379.f2))) < (-9L)), (***l_1123)))) , l_1196))) && (****l_1124)) ^ 0x11L) < (****l_1124)) || (***l_1123)), g_16[1][0].f1))) <= (**g_60))) , (*p_32)) || p_30.f3) , l_1197)), (****l_1124)))) && (*p_32));
                }
                (*l_1199) = l_1198;
                for (g_122 = 0; (g_122 <= 2); g_122 += 1)
                { 
                    int32_t *l_1200[6][3] = {{&g_519,(void*)0,&g_16[1][0].f2},{&l_1170,&g_519,&l_1170},{&l_1170,&g_519,&g_519},{&g_519,&l_1170,&l_1170},{&g_519,&l_1170,&g_16[1][0].f2},{(void*)0,&g_519,(void*)0}};
                    int i, j;
                    l_1201++;
                }
                for (l_975 = 0; (l_975 > 3); l_975++)
                { 
                    union U1 **l_1207[3][5] = {{&g_1206,&g_1206,&g_1206,&g_1206,&g_1206},{(void*)0,&g_1206,(void*)0,(void*)0,&g_1206},{&g_1206,(void*)0,(void*)0,&g_1206,(void*)0}};
                    int i, j;
                    l_1208 = g_1206;
                    g_160 = (p_32 = func_69((*g_710)));
                    (****l_907) = 0L;
                }
                for (l_913.f4 = 0; (l_913.f4 <= 2); l_913.f4 += 1)
                { 
                    struct S0 *l_1209 = &g_1210;
                    int32_t l_1221[4][4];
                    int16_t l_1228[4];
                    int32_t *l_1233 = (void*)0;
                    int32_t *l_1234 = &l_1221[0][0];
                    int i, j;
                    for (i = 0; i < 4; i++)
                    {
                        for (j = 0; j < 4; j++)
                            l_1221[i][j] = 1L;
                    }
                    for (i = 0; i < 4; i++)
                        l_1228[i] = 8L;
                    l_1209 = (*g_1181);
                    (***l_1124) = (void*)0;
                    (*l_1234) = ((*l_902) = ((safe_add_func_uint64_t_u_u((safe_lshift_func_int16_t_s_s(((**g_664) = (safe_sub_func_uint64_t_u_u(((safe_rshift_func_uint8_t_u_s((((*l_1130)++) == ((l_1221[3][0] < ((func_34((safe_sub_func_int8_t_s_s(((((g_379.f0--) && ((((safe_rshift_func_uint8_t_u_s(l_1221[1][0], 1)) < l_1221[3][0]) | ((0xA1F966AEL ^ 0x087B0C47L) && g_379.f1)) && (*p_31))) | (-1L)) , (*g_2)), (**g_710))), p_31) , l_1228[3]) | l_1229)) >= l_1230)), g_1231)) & (*g_160)), l_1221[0][0]))), p_30.f6)), l_1232)) < 0xD4L));
                }
            }
            else
            { 
                uint8_t l_1283[4];
                int32_t * const l_1286 = (void*)0;
                int32_t *l_1288[3];
                int i;
                for (i = 0; i < 4; i++)
                    l_1283[i] = 9UL;
                for (i = 0; i < 3; i++)
                    l_1288[i] = &l_980;
                (*g_60) = func_69(l_1235);
            }
            if ((p_30.f0 >= 0x82EB89591E10D317LL))
            { 
                (*l_902) |= ((~(!(&l_1126 == l_1298))) , (p_33 == (+p_30.f7)));
                return p_32;
            }
            else
            { 
                uint64_t *l_1300 = &g_940[1];
                union U2 **l_1310 = (void*)0;
                union U2 ***l_1309 = &l_1310;
                union U2 ****l_1308 = &l_1309;
                int8_t l_1317 = (-2L);
                int32_t l_1326 = 0x752C7E52L;
                uint8_t **l_1340 = &l_1130;
                int32_t l_1358 = 0x81F190A2L;
                int32_t l_1359[7][3] = {{0xB721DAA6L,0xB721DAA6L,0x031ED447L},{0x42D81478L,0xB4EF6D38L,0x42D81478L},{0xB721DAA6L,0x031ED447L,0x031ED447L},{0x25564CF1L,0xB4EF6D38L,0x25564CF1L},{0xB721DAA6L,0xB721DAA6L,0x031ED447L},{0x42D81478L,0xB4EF6D38L,0x42D81478L},{0xB721DAA6L,0x031ED447L,0x031ED447L}};
                uint8_t *l_1378 = &l_1230;
                const uint32_t l_1380[7] = {0xFE1F46F6L,0xFE1F46F6L,18446744073709551615UL,0xFE1F46F6L,0xFE1F46F6L,18446744073709551615UL,0xFE1F46F6L};
                int64_t *l_1386 = &g_163[1][1];
                uint16_t l_1436[1];
                uint16_t ***l_1440 = (void*)0;
                int i, j;
                for (i = 0; i < 1; i++)
                    l_1436[i] = 0xDD07L;
                if (((*l_902) = p_30.f4))
                { 
                    int32_t *l_1306 = (void*)0;
                    int32_t *l_1307 = &g_689.f5;
                    union U2 ****l_1311 = &l_1309;
                    int32_t ***l_1312 = (void*)0;
                    int32_t * const **l_1314 = (void*)0;
                    int32_t * const ***l_1313[4][1][4] = {{{&l_1314,&l_1314,&l_1314,&l_1314}},{{&l_1314,&l_1314,&l_1314,&l_1314}},{{&l_1314,&l_1314,(void*)0,&l_1314}},{{&l_1314,&l_1314,&l_1314,&l_1314}}};
                    int i, j, k;
                    (*l_902) &= (l_1300 != (void*)0);
                    (*l_902) &= (safe_mul_func_int8_t_s_s(((l_1311 = (((*l_1307) = (g_425[2][2] = (safe_lshift_func_uint16_t_u_s(l_1305, 9)))) , l_1308)) != (void*)0), (l_1312 != (l_1315 = (void*)0))));
                    p_30.f2 = p_30.f1;
                }
                else
                { 
                    int8_t l_1318[4][3][5] = {{{0L,0x2DL,0x2DL,0L,0L},{(-4L),0L,(-10L),(-9L),0L},{0x2DL,(-4L),(-1L),0x48L,(-1L)}},{{0x48L,0x48L,0L,(-9L),(-10L)},{3L,0x92L,(-4L),0x48L,0L},{0L,(-4L),3L,(-4L),0L}},{{0x92L,9L,(-1L),0L,0L},{0x92L,0L,0L,0x2DL,0x2DL},{0L,(-9L),0L,9L,0L}},{{0x2FL,0x2DL,0L,9L,0L},{0L,0L,0x2DL,0x2DL,0L},{0L,(-10L),0L,0L,(-1L)}}};
                    int32_t *l_1319 = &l_979;
                    int32_t *l_1320 = &g_379.f2;
                    int32_t *l_1321 = &l_1116;
                    int32_t *l_1322 = &l_1022.f2;
                    int32_t *l_1323 = &l_1115[1];
                    int32_t *l_1324 = &l_1170;
                    int32_t *l_1325[3];
                    int i, j, k;
                    for (i = 0; i < 3; i++)
                        l_1325[i] = &l_1171[2][1];
                    g_1327++;
                    p_30.f6 = 0xE6DF6AB5L;
                    l_1326 &= 0L;
                    (*l_1322) = (((safe_div_func_uint8_t_u_u(((*l_1130)--), ((p_30.f4 | ((((p_30.f5 && (((-1L) == (((*l_1208) , g_16[1][0].f4) & (*l_1319))) > (g_373--))) >= ((safe_lshift_func_uint16_t_u_u(((*p_31) == p_30.f7), 14)) <= 0x3124277CCF186252LL)) , l_1340) == (*l_1236))) , (*p_31)))) ^ (**g_710)) , l_1317);
                    (*l_902) = (((((((safe_add_func_uint8_t_u_u((safe_div_func_uint64_t_u_u(((l_1125 , (safe_rshift_func_int8_t_s_s(((**g_710) > (safe_div_func_uint64_t_u_u((((*l_1340) = p_31) == p_31), (l_1317 || (0x4640C1DF701CCB1DLL || ((l_1349[0] , l_1317) < g_1289)))))), 7))) , g_1350), l_1317)), p_30.f2)) < 0xEAD95CD2L) , p_33) && 9L) ^ (*g_665)) == p_30.f6) ^ (*g_2));
                }
                for (g_45 = 0; (g_45 <= 3); g_45 += 1)
                { 
                    if (l_1317)
                        break;
                    (****l_1052) = (void*)0;
                    if (l_1351[2][0][1])
                        continue;
                }
                for (g_442 = (-15); (g_442 == 3); g_442 = safe_add_func_uint32_t_u_u(g_442, 9))
                { 
                    int32_t *l_1354 = &g_1289;
                    int32_t *l_1355 = &l_1115[1];
                    int32_t *l_1356 = &l_1171[1][0];
                    int32_t *l_1357[5] = {&l_977,&l_977,&l_977,&l_977,&l_977};
                    int i;
                    l_1360++;
                    --l_1363;
                }
                (*l_902) = (((safe_mod_func_uint64_t_u_u(((l_1326 > (**g_710)) , (safe_lshift_func_int8_t_s_u((safe_rshift_func_uint8_t_u_u((1UL >= ((*g_160) > ((safe_mul_func_uint8_t_u_u((++(*l_1130)), ((*l_1378) = (p_30.f6 == ((*l_902) > (~(g_1377 == &g_425[1][0]))))))) & (-2L)))), g_1379)), 5))), g_689.f5)) , (*g_665)) >= 0xBDEBL);
                if ((g_143 ^ ((*l_1386) = ((((void*)0 == &l_1378) && l_1380[4]) != (g_143 >= (((((((*l_1117) &= ((safe_mod_func_uint16_t_u_u((l_1383 ^ l_1380[6]), l_1384)) != (**g_664))) > g_62[3][5]) , l_1326) , (*p_31)) <= l_1385) < 8UL))))))
                { 
                    uint8_t ****l_1387 = (void*)0;
                    uint8_t ****l_1388 = &l_1236;
                    (*l_1388) = &l_1129;
                    (*l_902) = (l_1380[5] || l_1317);
                }
                else
                { 
                    union U1 l_1400 = {0};
                    int32_t l_1401 = 0x7280A648L;
                    const union U2 l_1419 = {3L};
                    int8_t l_1434 = (-1L);
                    (*l_902) &= ((safe_unary_minus_func_int64_t_s((p_30.f0 , (((((((g_680 ^= ((*l_1386) = (safe_add_func_uint64_t_u_u(((*l_1300) = (++(*l_1117))), (p_30.f0 || (((p_33 = ((((safe_lshift_func_uint8_t_u_s(((p_30.f1 == (((*p_31) ^ ((g_368 & (safe_sub_func_int8_t_s_s((l_1400 , (0x2115473AE3DD7CC0LL & p_30.f4)), l_1380[5]))) || 0x913EL)) <= l_1380[4])) && l_1401), (*g_2))) ^ l_1401) && 0x9714L) , p_30.f7)) > l_1402) < 8UL)))))) && (-1L)) < p_30.f3) & l_1403) > g_689.f4) < g_427) && 0L)))) && (-1L));
                    p_30.f2 ^= ((safe_add_func_int64_t_s_s((((*l_1386) = ((safe_add_func_int32_t_s_s(((*l_902) = (safe_lshift_func_uint8_t_u_u((p_33 || 0x5AF3153211A6035DLL), ((((+(((((((safe_mod_func_uint8_t_u_u(((safe_mul_func_uint16_t_u_u(p_30.f1, ((((safe_mul_func_int8_t_s_s((-1L), (safe_lshift_func_uint16_t_u_u(((-6L) && ((l_1419 , ((safe_add_func_int32_t_s_s(((((func_34((safe_mul_func_int16_t_s_s(((~(safe_add_func_uint64_t_u_u((safe_mul_func_int8_t_s_s((((safe_add_func_int8_t_s_s((*g_2), l_1431)) >= 0xFFE6EB9373F909CFLL) & 0L), p_30.f0)), 0x94D5D0E1F61C52B6LL))) || (*g_85)), (**g_664))), &l_1403) , l_1432) == l_1432) || 6UL) & g_849.f4), 0x0A08CFE2L)) ^ g_849.f2)) >= g_52)), l_1433)))) , 0x05D1FC99L) , (void*)0) == (void*)0))) == g_519), (*p_31))) != l_1434) <= 0UL) != 0xACL) <= 0x0EL) == 0x01DFL) != 0xD8L)) , p_30.f7) | 0x43B4F0890A6649ACLL) & p_30.f7)))), l_1419.f1)) & g_1435)) == l_1436[0]), l_1437)) , l_1326);
                    p_30.f6 = (p_30.f2 = ((safe_mul_func_int16_t_s_s(((**g_664) = ((void*)0 == l_1440)), (p_30.f2 ^ ((((+(safe_rshift_func_uint8_t_u_s(p_30.f1, 0))) > (safe_mod_func_uint64_t_u_u(((*l_1300) = p_30.f2), ((safe_mod_func_int32_t_s_s((safe_sub_func_uint64_t_u_u((safe_lshift_func_int8_t_s_u((l_1359[2][0] , ((safe_rshift_func_int8_t_s_s((**g_710), 1)) >= p_30.f0)), 6)), l_1380[4])), g_417[0][1][0])) || 0x66C30EDF5C7E8B85LL)))) || 0x6DC60629L) & p_30.f0)))) >= p_33));
                }
            }
            ++l_1461;
            for (g_52 = 0; (g_52 == 11); g_52 = safe_add_func_uint64_t_u_u(g_52, 6))
            { 
                int32_t *l_1479 = &g_1289;
                p_32 = p_32;
                for (l_1022.f5 = (-28); (l_1022.f5 <= (-11)); l_1022.f5++)
                { 
                    int16_t l_1472 = 1L;
                    uint8_t l_1473 = 255UL;
                    union U1 *l_1474 = &g_94;
                    g_1210.f6 = ((*l_1456) |= (((*p_31) = ((void*)0 != &l_1201)) ^ (safe_sub_func_uint32_t_u_u(((safe_lshift_func_int8_t_s_s((l_1473 = l_1472), 1)) != g_1231), ((void*)0 != l_1474)))));
                }
                if ((~(!l_1477)))
                { 
                    uint32_t l_1478 = 0UL;
                    (*l_1456) &= l_1478;
                }
                else
                { 
                    p_32 = l_1479;
                    (*****l_1052) |= 1L;
                }
                (*l_1479) = (-1L);
            }
            (*l_1457) = ((safe_mod_func_uint64_t_u_u((++(*l_1117)), (g_427--))) , ((*l_902) ^= (((((0xD8104955L || (safe_rshift_func_int8_t_s_u((((p_30.f3 <= (((0x20608626AB904C27LL != p_30.f7) || ((~0x64L) || ((safe_mul_func_int8_t_s_s(((*l_1235) = (**g_710)), (+((safe_div_func_int16_t_s_s((l_1496[3] != (void*)0), 0x831AL)) || 0xF6A9L)))) & 0x04DDL))) > 0x9E324CFA39DDB74CLL)) & (*l_1458)) , 0x2DL), 4))) == (-4L)) | (*l_1457)) & 0x7B7315AC5B018DECLL) , 0L)));
        }
        (*l_902) ^= ((safe_mul_func_int8_t_s_s((safe_rshift_func_uint16_t_u_s((safe_mul_func_int8_t_s_s((p_30.f5 < ((safe_rshift_func_int16_t_s_s((0x0DL ^ p_30.f4), 2)) , (safe_mul_func_uint8_t_u_u((safe_add_func_int64_t_s_s(p_30.f0, ((safe_mod_func_int32_t_s_s(0x935B1AD6L, ((safe_add_func_int64_t_s_s((safe_mul_func_int8_t_s_s((*p_31), (l_1515 == (void*)0))), g_157.f0)) , l_1516))) > l_1385))), (**g_710))))), 0xFDL)), 9)), (*p_31))) <= (*p_31));
        for (g_1151 = 0; (g_1151 >= 57); g_1151 = safe_add_func_uint32_t_u_u(g_1151, 9))
        { 
            int32_t * const l_1519[4] = {&g_368,&g_368,&g_368,&g_368};
            int i;
            return l_1519[2];
        }
    }
    (*l_902) = (safe_mod_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u((*l_902), (safe_mod_func_uint16_t_u_u(((safe_sub_func_int8_t_s_s((&g_1206 == &l_910), ((8L || (safe_lshift_func_int8_t_s_s(((safe_rshift_func_int8_t_s_s((g_728 > (safe_mod_func_uint32_t_u_u(0x33C69B6EL, 0x58B963BAL))), (*l_902))) ^ p_30.f3), (**g_710)))) ^ (*p_31)))) , 0xBD69L), 0xB591L)))), (*p_31)));
    (*l_902) = (*g_160);
    return p_32;
}



static struct S0  func_34(int32_t  p_35, int8_t * p_36)
{ 
    uint8_t l_897[6] = {0xA6L,0UL,0xA6L,0xA6L,0UL,0xA6L};
    struct S0 l_900 = {9UL,-1L,-1L,18446744073709551615UL,1UL,0L,0x40E3832DL,0x7762E4859ED0B3BDLL};
    int i;
    --l_897[4];
    return l_900;
}



static uint8_t  func_46(uint16_t * p_47, int16_t  p_48, int32_t * p_49, int8_t  p_50)
{ 
    int64_t l_58 = (-1L);
    int32_t **l_59 = (void*)0;
    uint64_t *l_61[3];
    uint64_t *l_63[3][7] = {{&g_62[3][5],&g_62[3][5],&g_62[3][5],&g_62[3][5],&g_62[3][5],&g_62[3][5],&g_62[3][5]},{&g_62[3][5],&g_62[3][5],(void*)0,&g_62[3][5],&g_62[3][5],(void*)0,&g_62[3][5]},{&g_62[3][5],&g_62[3][5],&g_62[3][5],&g_62[3][5],&g_62[3][5],&g_62[3][5],&g_62[3][5]}};
    uint64_t *l_64 = &g_62[0][6];
    int16_t *l_869 = &g_122;
    int8_t *l_870 = &g_89;
    uint16_t ***l_871 = &g_339[0][6][0];
    union U2 *l_893[2];
    union U2 **l_892[3][4] = {{&l_893[0],&l_893[1],&l_893[0],&l_893[0]},{&l_893[1],&l_893[1],&l_893[1],&l_893[1]},{&l_893[1],&l_893[0],&l_893[0],&l_893[1]}};
    union U2 ***l_891 = &l_892[2][0];
    uint16_t l_894 = 0x7875L;
    int32_t l_895 = 8L;
    int i, j;
    for (i = 0; i < 3; i++)
        l_61[i] = &g_62[3][5];
    for (i = 0; i < 2; i++)
        l_893[i] = &g_157;
    l_59 = func_54(l_58, (g_60 = l_59), ((*l_64)--));
    (*p_49) = ((g_338[2] = &g_339[0][1][0]) == (l_871 = (((*l_870) ^= ((l_869 = &p_48) != (*g_664))) , l_871)));
    l_895 &= ((safe_add_func_int8_t_s_s(((safe_rshift_func_int16_t_s_s(((-1L) == 18446744073709551613UL), 6)) <= ((safe_div_func_uint64_t_u_u(((safe_add_func_uint32_t_u_u(((((~(--(*l_64))) , (safe_mul_func_int16_t_s_s(((&g_427 != (g_16[1][0] , &g_427)) , (safe_sub_func_int32_t_s_s((*p_49), ((safe_mod_func_uint16_t_u_u((((safe_add_func_uint8_t_u_u((p_48 || p_48), (-2L))) , (void*)0) == l_891), (*p_47))) == l_58)))), (*p_47)))) >= 8L) == 0xD783L), g_689.f4)) > 0xBD3CFF4F7933A8B2LL), g_379.f6)) , p_48)), l_894)) | g_164[1][1][2]);
    return l_894;
}



static int32_t ** func_54(int32_t  p_55, int32_t ** p_56, const uint64_t  p_57)
{ 
    uint16_t l_67[1];
    int32_t l_68[7][7] = {{(-8L),0x1959CD49L,(-8L),0x3672E3E3L,3L,3L,0x3672E3E3L},{8L,1L,8L,0x72DEFE8EL,0x5494CF71L,0x5494CF71L,0x72DEFE8EL},{(-8L),0x1959CD49L,(-8L),0x3672E3E3L,3L,3L,0x3672E3E3L},{8L,1L,8L,0x72DEFE8EL,0x5494CF71L,0x5494CF71L,0x72DEFE8EL},{(-8L),0x1959CD49L,(-8L),0x3672E3E3L,3L,3L,0x3672E3E3L},{8L,1L,8L,0x72DEFE8EL,0x5494CF71L,0x5494CF71L,0x72DEFE8EL},{(-8L),0x1959CD49L,(-8L),0x3672E3E3L,3L,3L,0x3672E3E3L}};
    int8_t *l_71 = &g_3;
    int32_t **l_454 = &g_115;
    struct S0 l_459 = {4294967295UL,8L,0x40EC637FL,0UL,18446744073709551615UL,0x3B81C1FEL,-1L,0xD116819636073A5ELL};
    const int8_t l_472 = (-1L);
    uint8_t *l_475 = &g_109;
    int16_t *l_478 = &g_144;
    int8_t l_479[3][1];
    int64_t *l_480[4];
    uint16_t **l_539 = (void*)0;
    uint32_t l_546[5];
    union U1 *l_556[2][7] = {{&g_94,&g_94,&g_94,&g_94,&g_94,&g_94,&g_94},{&g_94,&g_94,&g_94,&g_94,&g_94,&g_94,&g_94}};
    const int32_t *l_557 = &g_558;
    union U2 ***l_567 = (void*)0;
    int32_t l_668 = 0x372A8D5FL;
    const uint16_t l_734[3] = {0x9063L,0x9063L,0x9063L};
    uint32_t l_751[1][5] = {{0x215EFE38L,0x215EFE38L,0x215EFE38L,0x215EFE38L,0x215EFE38L}};
    uint32_t l_809 = 0x1BA752C8L;
    int32_t *** const l_816 = &l_454;
    int32_t *** const *l_815 = &l_816;
    int8_t *l_868[6][1][3];
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_67[i] = 0x41AEL;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
            l_479[i][j] = 0x8AL;
    }
    for (i = 0; i < 4; i++)
        l_480[i] = &g_163[0][3];
    for (i = 0; i < 5; i++)
        l_546[i] = 18446744073709551613UL;
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 3; k++)
                l_868[i][j][k] = &l_479[0][0];
        }
    }
    l_68[4][0] |= l_67[0];
    (*l_454) = func_69(l_71);
    if (((safe_lshift_func_int8_t_s_s((**l_454), 4)) > (safe_div_func_int16_t_s_s(0x0812L, (l_68[6][3] = (l_459 , (safe_lshift_func_uint8_t_u_s((safe_lshift_func_uint8_t_u_u(((safe_sub_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s((safe_mod_func_uint8_t_u_u((p_57 != ((*g_85) = (safe_add_func_uint64_t_u_u((l_472 | (l_459.f6 = (safe_sub_func_int64_t_s_s((((*l_478) = (0x9A8C8BEA11B46F49LL || ((g_477 &= (g_476[0][3] = ((*l_475) = (**l_454)))) | p_55))) && l_479[2][0]), (**l_454))))), (**l_454))))), p_57)), 1)), (**l_454))) <= 1UL), g_379.f1)), (**l_454)))))))))
    { 
        union U2 *l_483 = &g_157;
        union U2 ** const l_482 = &l_483;
        union U2 ** const *l_481 = &l_482;
        int32_t l_484 = 0xC36C8C80L;
        union U1 *l_494 = (void*)0;
        union U1 l_566 = {0};
        int32_t *l_605 = &l_68[3][6];
        int8_t **l_622[1][7][3] = {{{&l_71,&g_2,&l_71},{&l_71,&l_71,&l_71},{&l_71,&g_2,&l_71},{&l_71,&l_71,&l_71},{&l_71,&g_2,&l_71},{&l_71,&l_71,&l_71},{&l_71,&g_2,&l_71}}};
        int32_t l_623 = 0xF0E1A78AL;
        const struct S0 l_636[3] = {{0x1F037CF1L,0xDAL,0xF5A9F216L,1UL,3UL,9L,0x85D4AC49L,0x0D10695F977CB2F5LL},{0x1F037CF1L,0xDAL,0xF5A9F216L,1UL,3UL,9L,0x85D4AC49L,0x0D10695F977CB2F5LL},{0x1F037CF1L,0xDAL,0xF5A9F216L,1UL,3UL,9L,0x85D4AC49L,0x0D10695F977CB2F5LL}};
        uint64_t l_643 = 0x57B8AE0E9BC08BDELL;
        uint16_t *l_647[5] = {&g_52,&g_52,&g_52,&g_52,&g_52};
        struct S0 *l_688 = &g_689;
        int i, j, k;
        if (((void*)0 == l_481))
        { 
            uint16_t l_489 = 0x3A89L;
            union U2 l_492[1] = {{0xD9A10006L}};
            int32_t *l_493 = &l_459.f2;
            union U1 **l_495 = &l_494;
            uint64_t l_517 = 0xED61F93E09AF12FDLL;
            int32_t l_520 = 5L;
            uint64_t l_525[3];
            int i;
            for (i = 0; i < 3; i++)
                l_525[i] = 0UL;
            l_484 = (*g_115);
            (*l_495) = (((safe_add_func_int64_t_s_s(((safe_lshift_func_uint8_t_u_s((l_489 > ((4294967293UL == ((*l_493) |= ((safe_rshift_func_uint8_t_u_s(0xA4L, (g_368 <= g_379.f4))) <= (l_492[0] , 0x1C36L)))) <= g_89)), 3)) && (-8L)), g_368)) & 1UL) , l_494);
            for (g_477 = (-30); (g_477 > 41); g_477++)
            { 
                for (l_459.f6 = 2; (l_459.f6 >= 0); l_459.f6 -= 1)
                { 
                    if ((*g_115))
                        break;
                    return &g_115;
                }
            }
            for (g_379.f5 = 0; (g_379.f5 <= 2); g_379.f5 += 1)
            { 
                int32_t ***l_500 = &g_60;
                int32_t ****l_499 = &l_500;
                int32_t *****l_498 = &l_499;
                uint16_t * const **l_501 = (void*)0;
                uint64_t *l_518 = &g_157.f4;
                int32_t *l_521 = &g_426;
                int32_t *l_522 = &g_379.f6;
                int32_t *l_523 = &l_68[4][3];
                int32_t *l_524[6] = {&g_16[1][0].f2,(void*)0,(void*)0,(void*)0,&l_68[4][0],&l_68[4][0]};
                const union U2 ****l_531 = &g_528;
                int i;
                (*l_454) = (void*)0;
                (*l_498) = (void*)0;
                l_520 ^= (l_501 == ((safe_sub_func_uint8_t_u_u((g_519 ^= ((((g_427 |= (safe_mul_func_uint16_t_u_u(65527UL, ((safe_add_func_int8_t_s_s(((g_62[3][5] ^ (((*l_475) = 1UL) | 0x43L)) >= (((safe_add_func_int32_t_s_s(g_510[3][0], ((((safe_lshift_func_uint16_t_u_u((((safe_lshift_func_int8_t_s_s((safe_lshift_func_int16_t_s_u(((*l_478) = ((l_517 ^= ((*g_160) & (*g_160))) & 0x7BA1L)), 3)), 5)) && p_55) , p_57), p_57)) , g_16[1][0].f6) < p_57) <= (*l_493)))) , p_55) && g_16[1][0].f2)), p_55)) > (*g_160))))) < p_57) <= (-9L)) && p_57)), p_55)) , &g_339[0][6][0]));
                --l_525[1];
                (*l_531) = g_528;
                for (l_459.f2 = 0; (l_459.f2 <= 0); l_459.f2 += 1)
                { 
                    int32_t l_536 = (-9L);
                    l_484 = (safe_rshift_func_uint8_t_u_u((safe_mod_func_int16_t_s_s(0xE2C9L, (*l_493))), 6));
                    if (l_536)
                        continue;
                }
            }
        }
        else
        { 
            int8_t l_540 = 0L;
            int32_t *l_568[7][7] = {{&g_426,&l_459.f2,&g_368,&g_519,&g_426,&g_426,&g_519},{&g_519,&l_484,&g_519,&l_459.f2,&g_379.f6,&l_459.f2,&g_426},{&l_484,(void*)0,&g_519,&g_368,&g_16[1][0].f6,&g_368,&g_519},{&g_379.f6,&g_379.f6,&g_368,&l_459.f2,&g_379.f2,&l_459.f2,&l_484},{&l_459.f2,&g_379.f6,&g_426,&l_459.f2,&l_459.f2,&g_426,&g_379.f6},{&g_426,(void*)0,&g_379.f6,&g_519,&g_379.f2,&l_459.f2,&l_459.f2},{&g_426,&l_484,&g_16[1][0].f6,&g_379.f6,&g_16[1][0].f6,&l_484,&g_426}};
            int32_t ** const *l_584 = &g_60;
            int32_t ** const **l_583[2];
            int32_t ** const ***l_582 = &l_583[1];
            int i, j;
            for (i = 0; i < 2; i++)
                l_583[i] = &l_584;
            if ((*g_160))
            { 
                uint32_t l_543 = 0xB233140DL;
                const int32_t l_554 = 0x7E0C016AL;
                int8_t *l_555[2];
                int32_t l_572 = 0L;
                uint16_t l_574[5][6][5] = {{{0x3FF0L,0xD8A7L,0xE68DL,3UL,0x7630L},{0xF8D2L,1UL,0x3FF0L,0x5E52L,0xB443L},{1UL,0x2260L,0x3D1EL,0x2263L,1UL},{1UL,0x3FF0L,0x2260L,0x5304L,0xF8D2L},{0xF8D2L,65535UL,65535UL,0xF8D2L,0x2260L},{0x3FF0L,0xEF6BL,65535UL,1UL,0xA40FL}},{{9UL,0x9EEDL,0x770BL,1UL,0x6FA6L},{0x770BL,0xA40FL,0x596EL,1UL,9UL},{0x3DECL,4UL,0UL,0xF8D2L,1UL},{0xE68DL,3UL,0x7630L,0x5304L,65528UL},{0UL,7UL,9UL,0x2263L,0x770BL},{0x8506L,7UL,0xF8D2L,0x5E52L,0x3D1EL}},{{0x8643L,3UL,65528UL,3UL,0x8643L},{65530UL,4UL,0x0F98L,0x3FF0L,65535UL},{0xB443L,0xA40FL,0x5304L,0xEF6BL,65535UL},{65535UL,0x9EEDL,1UL,4UL,65535UL},{9UL,0xEF6BL,3UL,65535UL,0x8643L},{65535UL,65535UL,0x3DECL,0x596EL,0x3D1EL}},{{0x2B24L,0x3FF0L,65530UL,0xD8A7L,0x770BL},{65529UL,0x2260L,65530UL,0xA40FL,65528UL},{0xD8A7L,1UL,0x3DECL,0x3DECL,1UL},{0x2263L,0xD8A7L,3UL,9UL,9UL},{0x9EEDL,1UL,1UL,0x8643L,0x6FA6L},{0x3ABCL,1UL,0x5304L,1UL,0xA40FL}},{{0x9EEDL,0xB443L,0x0F98L,0x2B24L,0x2260L},{0x2263L,0x596EL,65528UL,0x8506L,0xF8D2L},{0xD8A7L,65529UL,0xF8D2L,65528UL,1UL},{65529UL,0x0F98L,9UL,65528UL,0xD8A7L},{65535UL,0x770BL,65535UL,1UL,65535UL},{0UL,0UL,1UL,65535UL,3UL}}};
                int i, j, k;
                for (i = 0; i < 2; i++)
                    l_555[i] = &l_479[0][0];
                if ((((*l_478) = ((&g_94 == ((g_89 = ((g_16[1][0].f0--) | ((l_539 == ((l_540 | (safe_sub_func_uint16_t_u_u((l_543 = p_55), (safe_mod_func_uint32_t_u_u((l_546[4] | ((safe_lshift_func_int16_t_s_u(((((safe_add_func_uint64_t_u_u(((safe_unary_minus_func_int64_t_s(p_57)) >= (safe_sub_func_uint8_t_u_u(((**l_482) , 0xDEL), g_62[3][5]))), l_554)) | p_57) ^ 0xD8E3L) | (**l_454)), (*g_85))) != p_57)), g_379.f4))))) , (void*)0)) & 0x1EABL))) , l_556[0][3])) == (*g_115))) < (**l_454)))
                { 
                    (*l_454) = func_69(&l_540);
                    return l_454;
                }
                else
                { 
                    const int32_t **l_559 = &g_160;
                    (*l_559) = (l_557 = &g_196);
                }
                for (g_120 = 24; (g_120 >= 4); g_120 = safe_sub_func_int32_t_s_s(g_120, 1))
                { 
                    int32_t *l_569 = &g_519;
                    uint64_t *l_570 = (void*)0;
                    uint64_t *l_571[7][7] = {{&g_62[0][6],&g_197,&g_197,&g_62[0][6],&g_427,&g_62[0][6],&g_197},{&g_477,&g_62[3][5],&g_62[2][2],&g_477,&g_62[2][2],&g_62[3][5],&g_477},{&g_62[0][1],&g_197,&g_62[3][2],&g_197,&g_62[0][1],&g_62[0][1],&g_197},{(void*)0,&g_62[1][0],(void*)0,&g_197,&g_62[2][2],&g_62[3][5],(void*)0},{&g_197,&g_427,&g_62[3][2],&g_62[3][2],&g_427,&g_197,&g_427},{(void*)0,&g_197,&g_62[2][2],&g_62[3][5],(void*)0,&g_62[3][5],&g_62[2][2]},{&g_62[0][1],&g_62[0][1],&g_197,&g_62[3][2],&g_197,&g_62[0][1],&g_62[0][1]}};
                    int64_t l_573 = 0xE2BAA1BECF4C8027LL;
                    uint32_t *l_579[4][1];
                    int i, j;
                    for (i = 0; i < 4; i++)
                    {
                        for (j = 0; j < 1; j++)
                            l_579[i][j] = (void*)0;
                    }
                    l_574[0][1][2] = (p_55 < (safe_mul_func_int8_t_s_s(((l_572 &= (((l_540 > (safe_sub_func_int16_t_s_s((((*l_454) = (l_566 , &g_196)) == (l_569 = ((g_163[2][0] = (&g_529[1][1] != l_567)) , l_568[0][1]))), g_417[0][0][0]))) , 0xE3A29EA27D120E31LL) , p_57)) <= l_573), l_554)));
                    g_16[1][0].f2 |= (0x2EL <= ((g_16[1][0].f0 = ((*g_160) && (&l_572 != (*l_454)))) == (((*g_85) = (safe_add_func_int32_t_s_s((4UL == (l_582 == ((safe_rshift_func_uint8_t_u_u(0UL, 1)) , g_587))), (*l_557)))) , l_572)));
                    return p_56;
                }
            }
            else
            { 
                uint8_t l_602[1];
                int i;
                for (i = 0; i < 1; i++)
                    l_602[i] = 0UL;
                g_379.f2 |= ((safe_mul_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s(p_57, p_57)), ((safe_sub_func_uint64_t_u_u((**l_454), (safe_rshift_func_int8_t_s_s(((l_602[0] = (safe_mod_func_uint8_t_u_u(p_57, (safe_rshift_func_int16_t_s_u(0x58AFL, (~(~(g_16[1][0].f0 ^ g_229)))))))) > 249UL), 2)))) & 0x0276L))) , 0x38E4270DL);
                for (g_230 = 0; (g_230 != 9); g_230 = safe_add_func_int16_t_s_s(g_230, 9))
                { 
                    l_605 = (void*)0;
                }
                return p_56;
            }
            (*l_454) = func_69(&g_89);
        }
        g_519 ^= ((safe_sub_func_int16_t_s_s(((safe_add_func_uint64_t_u_u((safe_rshift_func_int8_t_s_u(((safe_div_func_int32_t_s_s((safe_sub_func_int8_t_s_s(((safe_rshift_func_int8_t_s_s(((void*)0 != l_478), (safe_sub_func_int64_t_s_s((((((safe_add_func_uint64_t_u_u(p_57, (((**l_482) , ((*l_605) = (*l_605))) < 0x21L))) , ((l_71 = (void*)0) != (void*)0)) != p_57) < p_55) || p_55), g_164[0][0][2])))) & l_623), g_379.f0)), p_57)) != (*g_85)), 7)), p_55)) ^ 0x23A6L), 0x94A2L)) < 0L);
        (*l_605) = (((!(*l_605)) , (*l_557)) , ((safe_sub_func_int32_t_s_s((l_459.f2 |= ((safe_rshift_func_int8_t_s_s((((p_55 , ((safe_rshift_func_int16_t_s_u(((((safe_mod_func_int64_t_s_s((!(safe_div_func_uint64_t_u_u(((g_94 = (l_636[1] , l_566)) , (+(*g_160))), (safe_mod_func_uint16_t_u_u(((*g_85) = (safe_sub_func_uint64_t_u_u(((g_642[0][2] , l_643) > 0x61L), g_122))), (-2L)))))), p_55)) > (*l_605)) <= g_427) || (*l_557)), 9)) <= 4UL)) , p_57) && p_57), 1)) , (*l_557))), (*l_605))) == 65535UL));
        for (l_643 = 0; (l_643 == 31); l_643 = safe_add_func_uint8_t_u_u(l_643, 2))
        { 
            int32_t *l_646 = &g_196;
            int16_t **l_666 = &l_478;
            int32_t l_667 = 0x97B2B527L;
            (*l_646) ^= ((*l_605) = 0x228F2526L);
            if ((*l_605))
                continue;
        }
        l_688 = &g_379;
    }
    else
    { 
        int32_t **l_690 = &g_115;
        return l_690;
    }
    for (g_89 = 0; (g_89 <= 3); g_89 += 1)
    { 
        int8_t l_701[7] = {0x83L,0x83L,(-1L),0x83L,0x83L,(-1L),0x83L};
        int32_t *l_702 = (void*)0;
        int32_t *l_703 = &g_519;
        uint16_t *l_706[7][6][5] = {{{&g_80,&g_165,(void*)0,&l_67[0],(void*)0},{&g_80,(void*)0,&g_52,(void*)0,&g_80},{(void*)0,&g_165,&g_276,&g_80,&g_165},{&l_67[0],(void*)0,&g_80,&g_230,&g_230},{&l_67[0],&g_165,&g_80,(void*)0,(void*)0},{&g_52,&l_67[0],&g_276,&l_67[0],&g_276}},{{&g_165,&g_230,&g_52,(void*)0,(void*)0},{&g_276,(void*)0,(void*)0,&g_230,(void*)0},{&g_230,(void*)0,&g_80,&g_80,&g_276},{&g_52,&g_230,&l_67[0],(void*)0,(void*)0},{&g_230,&g_230,&g_230,&l_67[0],&g_230},{&g_276,&g_230,(void*)0,&g_230,&g_165}},{{&g_165,&g_230,(void*)0,(void*)0,&g_80},{&g_52,(void*)0,(void*)0,&g_165,(void*)0},{&l_67[0],(void*)0,&g_230,&g_165,(void*)0},{&l_67[0],&g_230,&l_67[0],(void*)0,&l_67[0]},{(void*)0,&l_67[0],&g_80,&g_230,(void*)0},{&g_80,&g_165,(void*)0,&l_67[0],(void*)0}},{{&g_80,(void*)0,&g_52,(void*)0,&g_80},{(void*)0,&g_165,&g_276,&g_80,&g_165},{&l_67[0],(void*)0,&g_80,&g_230,&g_230},{&l_67[0],&g_165,&g_80,(void*)0,(void*)0},{&g_52,&l_67[0],&g_276,&l_67[0],&g_276},{&g_165,&g_230,&g_52,(void*)0,(void*)0}},{{&g_276,(void*)0,(void*)0,&g_230,&g_80},{&g_52,&l_67[0],&l_67[0],&g_165,&g_276},{&l_67[0],&g_80,&g_165,&g_52,&g_52},{&g_52,&l_67[0],&g_52,&l_67[0],(void*)0},{&g_230,&l_67[0],&l_67[0],&l_67[0],&g_80},{&g_80,&g_80,&g_52,(void*)0,&l_67[0]}},{{&g_230,&l_67[0],&l_67[0],&g_80,&g_230},{&g_276,(void*)0,&g_52,&g_80,(void*)0},{&g_230,&g_52,&g_165,(void*)0,(void*)0},{&l_67[0],&g_230,&l_67[0],&l_67[0],(void*)0},{&l_67[0],&g_230,&g_52,&l_67[0],&g_230},{&l_67[0],(void*)0,&g_230,&g_52,&l_67[0]}},{{&l_67[0],&g_80,&g_52,&g_165,&g_80},{&g_230,(void*)0,(void*)0,&g_276,(void*)0},{&g_276,&g_230,(void*)0,&g_230,&g_52},{&g_230,&g_230,&g_52,&g_52,&g_276},{&g_80,&g_52,&g_230,&g_230,&g_80},{&g_230,(void*)0,&g_52,&g_276,&g_80}}};
        int32_t l_750 = 1L;
        uint32_t *l_757 = &g_379.f0;
        int8_t l_764 = 1L;
        int16_t **l_771 = &l_478;
        int32_t l_785 = 0xE8C44075L;
        union U2 l_806 = {0xC20FD258L};
        uint16_t *** const l_813 = &g_339[0][6][0];
        int32_t * const *l_821[2];
        int32_t * const **l_820 = &l_821[0];
        union U2 *l_848 = &g_849;
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_821[i] = &l_702;
        (*l_703) ^= ((safe_rshift_func_uint16_t_u_s(((-1L) <= (p_55 , (safe_mod_func_uint32_t_u_u((safe_div_func_uint8_t_u_u((((safe_div_func_int8_t_s_s((g_16[1][0] , ((safe_lshift_func_uint8_t_u_s((p_55 == p_55), (&g_528 != ((g_230 | l_701[1]) , &l_567)))) < p_57)), g_476[0][3])) || 0x41L) != (-7L)), p_57)), p_57)))), (**g_664))) , l_701[1]);
    }
    p_55 = (safe_mul_func_int16_t_s_s(p_55, (p_57 , (safe_div_func_uint64_t_u_u((p_55 >= (l_668 = (*l_557))), (safe_rshift_func_int16_t_s_s(((**g_664) = (l_459 , (safe_add_func_uint8_t_u_u((*l_557), (g_89 = ((g_689.f2 = (g_425[3][0] | (*l_557))) && p_55)))))), p_57)))))));
    return p_56;
}



static int32_t * func_69(int8_t * p_70)
{ 
    uint8_t l_78 = 0UL;
    int32_t l_81 = 5L;
    uint16_t *l_82 = (void*)0;
    int32_t l_90 = 0xCD535912L;
    int32_t *l_138[6][2] = {{&g_16[1][0].f6,&g_16[1][0].f6},{&g_16[1][0].f6,&g_16[1][0].f6},{&g_16[1][0].f6,&g_16[1][0].f6},{&g_16[1][0].f6,&g_16[1][0].f6},{&g_16[1][0].f6,&g_16[1][0].f6},{&g_16[1][0].f6,&g_16[1][0].f6}};
    uint64_t l_146[7][3] = {{0UL,0UL,0x6F017B851E10200DLL},{18446744073709551608UL,18446744073709551607UL,18446744073709551608UL},{0UL,0x6F017B851E10200DLL,0x6F017B851E10200DLL},{0x9AB5F3C96CF12C4CLL,18446744073709551607UL,0x9AB5F3C96CF12C4CLL},{0UL,0UL,0x6F017B851E10200DLL},{18446744073709551608UL,18446744073709551607UL,18446744073709551608UL},{0UL,0x6F017B851E10200DLL,0x6F017B851E10200DLL}};
    struct S0 l_176[5] = {{1UL,0x56L,-1L,18446744073709551615UL,0x61DA3FA1L,-5L,1L,0x94203A405008DB59LL},{1UL,0x56L,-1L,18446744073709551615UL,0x61DA3FA1L,-5L,1L,0x94203A405008DB59LL},{1UL,0x56L,-1L,18446744073709551615UL,0x61DA3FA1L,-5L,1L,0x94203A405008DB59LL},{1UL,0x56L,-1L,18446744073709551615UL,0x61DA3FA1L,-5L,1L,0x94203A405008DB59LL},{1UL,0x56L,-1L,18446744073709551615UL,0x61DA3FA1L,-5L,1L,0x94203A405008DB59LL}};
    uint16_t **l_288 = &g_85;
    union U1 l_301 = {0};
    int32_t *l_346 = &g_16[1][0].f6;
    struct S0 *l_378[4][2][2] = {{{&g_379,&g_379},{(void*)0,&g_379}},{{&g_379,(void*)0},{&g_379,&g_379}},{{(void*)0,&g_379},{&g_379,(void*)0}},{{&g_379,&g_379},{(void*)0,&g_379}}};
    int64_t l_384 = (-6L);
    uint8_t l_386 = 0x20L;
    int16_t l_409 = (-3L);
    int32_t l_421 = 0x00E42C1AL;
    uint8_t l_445 = 0x33L;
    int i, j, k;
    for (g_52 = 0; (g_52 >= 42); ++g_52)
    { 
        int8_t l_74 = 0x13L;
        uint16_t *l_79[4][2][4] = {{{&g_80,&g_80,&g_52,(void*)0},{(void*)0,&g_80,&g_80,(void*)0}},{{&g_80,&g_80,&g_52,(void*)0},{(void*)0,&g_80,&g_80,(void*)0}},{{&g_80,&g_80,&g_52,(void*)0},{(void*)0,&g_80,&g_80,(void*)0}},{{&g_80,&g_80,&g_52,(void*)0},{(void*)0,&g_80,&g_80,(void*)0}}};
        uint16_t **l_83 = (void*)0;
        uint16_t **l_84[7][5] = {{&l_79[2][1][0],&l_79[2][1][0],&l_82,&l_79[3][1][2],&l_82},{&l_79[3][0][2],&l_79[2][1][0],&l_79[3][1][2],&l_82,&l_82},{&l_79[2][1][0],&l_79[3][0][2],&l_79[3][1][2],&l_79[3][1][2],&l_79[3][1][2]},{&l_79[2][1][0],&l_79[2][1][0],&l_82,(void*)0,&l_79[3][1][1]},{&l_82,&l_79[3][1][2],&l_79[1][1][3],&l_79[3][1][2],&l_79[3][1][1]},{&l_79[3][1][2],&l_82,&l_79[1][1][3],(void*)0,&l_79[1][1][3]},{&l_79[3][1][2],&l_79[3][1][2],&l_82,(void*)0,&l_79[3][1][1]}};
        int8_t *l_88[3][5] = {{&g_3,&g_3,&g_3,&g_3,&g_3},{&g_89,&l_74,&l_74,&g_89,&l_74},{&g_3,&g_3,&l_74,&g_3,&g_3}};
        int32_t l_98 = (-6L);
        int16_t *l_119 = &g_120;
        int16_t *l_121[6] = {&g_122,&g_122,&g_122,&g_122,&g_122,&g_122};
        int32_t l_141[7];
        union U2 *l_156[7] = {&g_157,&g_157,&g_157,&g_157,&g_157,&g_157,&g_157};
        union U1 l_174 = {0};
        int32_t *l_233 = &g_16[1][0].f6;
        uint8_t l_290 = 1UL;
        int32_t l_366 = 0x1B6C5D4DL;
        uint16_t *l_403 = &g_80;
        int i, j, k;
        for (i = 0; i < 7; i++)
            l_141[i] = 0x84B49FC3L;
    }
    for (g_120 = (-10); (g_120 < 10); g_120 = safe_add_func_int64_t_s_s(g_120, 1))
    { 
        uint32_t l_450 = 0x7C9F29BFL;
        l_450--;
    }
    if ((*g_160))
    { 
        return &g_196;
    }
    else
    { 
        int32_t *l_453 = &l_81;
        l_453 = &g_368;
        return l_453;
    }
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_3, "g_3", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_16[i][j].f0, "g_16[i][j].f0", print_hash_value);
            transparent_crc(g_16[i][j].f1, "g_16[i][j].f1", print_hash_value);
            transparent_crc(g_16[i][j].f2, "g_16[i][j].f2", print_hash_value);
            transparent_crc(g_16[i][j].f3, "g_16[i][j].f3", print_hash_value);
            transparent_crc(g_16[i][j].f4, "g_16[i][j].f4", print_hash_value);
            transparent_crc(g_16[i][j].f5, "g_16[i][j].f5", print_hash_value);
            transparent_crc(g_16[i][j].f6, "g_16[i][j].f6", print_hash_value);
            transparent_crc(g_16[i][j].f7, "g_16[i][j].f7", print_hash_value);

        }
    }
    transparent_crc(g_45, "g_45", print_hash_value);
    transparent_crc(g_52, "g_52", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(g_62[i][j], "g_62[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_80, "g_80", print_hash_value);
    transparent_crc(g_89, "g_89", print_hash_value);
    transparent_crc(g_108, "g_108", print_hash_value);
    transparent_crc(g_109, "g_109", print_hash_value);
    transparent_crc(g_120, "g_120", print_hash_value);
    transparent_crc(g_122, "g_122", print_hash_value);
    transparent_crc(g_143, "g_143", print_hash_value);
    transparent_crc(g_144, "g_144", print_hash_value);
    transparent_crc(g_157.f0, "g_157.f0", print_hash_value);
    transparent_crc(g_157.f1, "g_157.f1", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_163[i][j], "g_163[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_164[i][j][k], "g_164[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_165, "g_165", print_hash_value);
    transparent_crc(g_196, "g_196", print_hash_value);
    transparent_crc(g_197, "g_197", print_hash_value);
    transparent_crc(g_229, "g_229", print_hash_value);
    transparent_crc(g_230, "g_230", print_hash_value);
    transparent_crc(g_276, "g_276", print_hash_value);
    transparent_crc(g_368, "g_368", print_hash_value);
    transparent_crc(g_369, "g_369", print_hash_value);
    transparent_crc(g_373, "g_373", print_hash_value);
    transparent_crc(g_379.f0, "g_379.f0", print_hash_value);
    transparent_crc(g_379.f1, "g_379.f1", print_hash_value);
    transparent_crc(g_379.f2, "g_379.f2", print_hash_value);
    transparent_crc(g_379.f3, "g_379.f3", print_hash_value);
    transparent_crc(g_379.f4, "g_379.f4", print_hash_value);
    transparent_crc(g_379.f5, "g_379.f5", print_hash_value);
    transparent_crc(g_379.f6, "g_379.f6", print_hash_value);
    transparent_crc(g_379.f7, "g_379.f7", print_hash_value);
    transparent_crc(g_413, "g_413", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_417[i][j][k], "g_417[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_425[i][j], "g_425[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_426, "g_426", print_hash_value);
    transparent_crc(g_427, "g_427", print_hash_value);
    transparent_crc(g_442, "g_442", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_476[i][j], "g_476[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_477, "g_477", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_510[i][j], "g_510[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_519, "g_519", print_hash_value);
    transparent_crc(g_558, "g_558", print_hash_value);
    transparent_crc(g_680, "g_680", print_hash_value);
    transparent_crc(g_689.f0, "g_689.f0", print_hash_value);
    transparent_crc(g_689.f1, "g_689.f1", print_hash_value);
    transparent_crc(g_689.f2, "g_689.f2", print_hash_value);
    transparent_crc(g_689.f3, "g_689.f3", print_hash_value);
    transparent_crc(g_689.f4, "g_689.f4", print_hash_value);
    transparent_crc(g_689.f5, "g_689.f5", print_hash_value);
    transparent_crc(g_689.f6, "g_689.f6", print_hash_value);
    transparent_crc(g_689.f7, "g_689.f7", print_hash_value);
    transparent_crc(g_728, "g_728", print_hash_value);
    transparent_crc(g_845, "g_845", print_hash_value);
    transparent_crc(g_849.f0, "g_849.f0", print_hash_value);
    transparent_crc(g_849.f1, "g_849.f1", print_hash_value);
    transparent_crc(g_938, "g_938", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_940[i], "g_940[i]", print_hash_value);

    }
    transparent_crc(g_959, "g_959", print_hash_value);
    transparent_crc(g_981, "g_981", print_hash_value);
    transparent_crc(g_1038, "g_1038", print_hash_value);
    transparent_crc(g_1150, "g_1150", print_hash_value);
    transparent_crc(g_1151, "g_1151", print_hash_value);
    transparent_crc(g_1175, "g_1175", print_hash_value);
    transparent_crc(g_1176, "g_1176", print_hash_value);
    transparent_crc(g_1210.f0, "g_1210.f0", print_hash_value);
    transparent_crc(g_1210.f1, "g_1210.f1", print_hash_value);
    transparent_crc(g_1210.f2, "g_1210.f2", print_hash_value);
    transparent_crc(g_1210.f3, "g_1210.f3", print_hash_value);
    transparent_crc(g_1210.f4, "g_1210.f4", print_hash_value);
    transparent_crc(g_1210.f5, "g_1210.f5", print_hash_value);
    transparent_crc(g_1210.f6, "g_1210.f6", print_hash_value);
    transparent_crc(g_1210.f7, "g_1210.f7", print_hash_value);
    transparent_crc(g_1231, "g_1231", print_hash_value);
    transparent_crc(g_1265, "g_1265", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_1272[i], "g_1272[i]", print_hash_value);

    }
    transparent_crc(g_1289, "g_1289", print_hash_value);
    transparent_crc(g_1290, "g_1290", print_hash_value);
    transparent_crc(g_1327, "g_1327", print_hash_value);
    transparent_crc(g_1350, "g_1350", print_hash_value);
    transparent_crc(g_1379, "g_1379", print_hash_value);
    transparent_crc(g_1435, "g_1435", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 7; k++)
            {
                transparent_crc(g_1655[i][j][k], "g_1655[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_1658[i], "g_1658[i]", print_hash_value);

    }
    transparent_crc(g_1709, "g_1709", print_hash_value);
    transparent_crc(g_1756.f0, "g_1756.f0", print_hash_value);
    transparent_crc(g_1756.f1, "g_1756.f1", print_hash_value);
    transparent_crc(g_1875, "g_1875", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_1906[i][j][k], "g_1906[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_1907, "g_1907", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_2104[i], "g_2104[i]", print_hash_value);

    }
    transparent_crc(g_2262, "g_2262", print_hash_value);
    transparent_crc(g_2296, "g_2296", print_hash_value);
    transparent_crc(g_2297, "g_2297", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_2298[i], "g_2298[i]", print_hash_value);

    }
    transparent_crc(g_2374, "g_2374", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
