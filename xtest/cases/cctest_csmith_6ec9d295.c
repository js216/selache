// SPDX-License-Identifier: MIT
// cctest_csmith_6ec9d295.c --- cctest case csmith_6ec9d295 (csmith seed 1858720405)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x614859c6 */

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

// Options:   -s 1858720405 -o /tmp/csmith_gen_xed0enxi/csmith.c --concise --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


struct S0 {
   const int8_t  f0;
   uint8_t  f1;
   int32_t  f2;
   uint32_t  f3;
   uint16_t  f4;
   uint64_t  f5;
   int32_t  f6;
   int64_t  f7;
};

union U1 {
   uint64_t  f0;
   int32_t  f1;
   const int32_t  f2;
   struct S0  f3;
};

union U2 {
   uint32_t  f0;
   int8_t * f1;
   const uint8_t  f2;
   uint32_t  f3;
   uint32_t  f4;
};


static union U2 g_8 = {0x8B9DBEA5L};
static int8_t g_12[1] = {0x71L};
static int8_t *g_11 = &g_12[0];
static int16_t g_30 = (-1L);
static uint16_t g_37 = 0UL;
static uint16_t g_55 = 0xBD3DL;
static uint16_t *g_54 = &g_55;
static int32_t g_57 = 0x02E46A6FL;
static uint8_t g_66 = 255UL;
static int32_t g_77 = 0x7745DDB3L;
static int16_t g_89 = (-6L);
static int16_t g_91 = 0L;
static union U1 g_94 = {1UL};
static int64_t g_107 = 0x1D1A269FD2B101DDLL;
static int32_t g_120 = (-1L);
static int32_t *g_165 = &g_77;
static int32_t **g_164 = &g_165;
static uint8_t g_202 = 250UL;
static int16_t g_205[2][7][5] = {{{0x26E2L,0x9CB3L,0x6C78L,0x9CB3L,0x26E2L},{0xB904L,4L,0xAD07L,0xAD07L,4L},{0xC1B0L,9L,(-7L),0x9CB3L,(-7L)},{4L,0xFAB7L,0xF881L,4L,4L},{0xB771L,0x9CB3L,0xB771L,9L,0x26E2L},{4L,0xB904L,0xAD07L,0xFAB7L,0xB904L},{0xC1B0L,0x9CB3L,0xC646L,0x9CB3L,0xC1B0L}},{{0xB904L,0xFAB7L,0xAD07L,0xB904L,4L},{0x26E2L,9L,0xB771L,0x9CB3L,0xB771L},{0xB904L,0xB904L,0xFAB7L,0xAD07L,0xB904L},{0xC646L,9L,0xC646L,0L,(-7L)},{0xB904L,0xF881L,0xF881L,0xB904L,(-6L)},{0xB771L,9L,0x26E2L,9L,0xB771L},{(-6L),0xB904L,0xF881L,0xF881L,0xB904L}}};
static int64_t g_208[2] = {0xF34BAB51E1822EBELL,0xF34BAB51E1822EBELL};
static int32_t g_211 = 0x69E2B6F6L;
static int8_t g_212 = 0xC2L;
static int16_t g_214[2][4][3] = {{{0x56ADL,0x56ADL,0xFE63L},{0x56ADL,0x56ADL,0xFE63L},{0x56ADL,0x56ADL,0xFE63L},{0x56ADL,0x56ADL,0xFE63L}},{{0x56ADL,0x56ADL,0xFE63L},{0x56ADL,0x56ADL,0xFE63L},{0x56ADL,0x56ADL,0xFE63L},{0x56ADL,0x56ADL,0xFE63L}}};
static uint8_t g_218[3] = {0x68L,0x68L,0x68L};
static int32_t g_233[7][3] = {{0x55CD90D8L,0x08C3E52CL,0x08C3E52CL},{8L,0xE399DECDL,8L},{0x55CD90D8L,0x55CD90D8L,0x08C3E52CL},{0xF7ADD78BL,0xE399DECDL,0xF7ADD78BL},{0x55CD90D8L,0x08C3E52CL,0x08C3E52CL},{8L,0xE399DECDL,8L},{0x55CD90D8L,0x55CD90D8L,0x08C3E52CL}};
static const uint16_t g_389 = 3UL;
static const int16_t g_433 = 0xC340L;
static uint64_t *g_494 = &g_94.f0;
static uint8_t g_545 = 255UL;
static struct S0 g_555 = {6L,0UL,1L,4294967295UL,0UL,1UL,0x1227BA1BL,0x31DB25A6697ADE2BLL};
static int16_t **g_561 = (void*)0;
static struct S0 g_576[4] = {{0xAFL,0x15L,0L,0xE7538D8EL,0UL,18446744073709551608UL,5L,-1L},{0xAFL,0x15L,0L,0xE7538D8EL,0UL,18446744073709551608UL,5L,-1L},{0xAFL,0x15L,0L,0xE7538D8EL,0UL,18446744073709551608UL,5L,-1L},{0xAFL,0x15L,0L,0xE7538D8EL,0UL,18446744073709551608UL,5L,-1L}};
static struct S0 *g_575[2][5] = {{&g_576[1],&g_576[0],&g_576[1],&g_576[0],&g_576[1]},{&g_576[1],&g_576[1],&g_576[1],&g_576[1],&g_576[1]}};
static union U1 g_658 = {0x6F123FE40EDCFFD5LL};
static int32_t g_690 = 0L;
static uint32_t g_698 = 0x8AE715F5L;
static int32_t g_719[4] = {0x0AF8854FL,0x0AF8854FL,0x0AF8854FL,0x0AF8854FL};
static uint64_t g_738[1][6][5] = {{{8UL,0xC46E16840764AD78LL,18446744073709551615UL,0x704628077177484DLL,0UL},{18446744073709551615UL,5UL,0xC46E16840764AD78LL,0xC46E16840764AD78LL,5UL},{5UL,0x4659667469B801C9LL,18446744073709551615UL,0UL,0x57D12D639A81B63BLL},{0xAF8DE81BA651CFC0LL,0x4659667469B801C9LL,0UL,0xFF4F7933A8B20082LL,0xD025F4A424CCA8C5LL},{0x890E4FD4B9C34BD3LL,5UL,5UL,0x890E4FD4B9C34BD3LL,0xFF4F7933A8B20082LL},{0xAF8DE81BA651CFC0LL,0xC46E16840764AD78LL,0x57D12D639A81B63BLL,0x17278A3CE70D10C6LL,0xFF4F7933A8B20082LL}}};
static union U1 g_748[3] = {{0x966AF8964A4164D7LL},{0x966AF8964A4164D7LL},{0x966AF8964A4164D7LL}};
static uint64_t **g_756 = &g_494;
static int16_t *g_795 = (void*)0;
static uint8_t g_798 = 7UL;
static uint16_t **g_853[5][7][6] = {{{&g_54,&g_54,(void*)0,&g_54,(void*)0,&g_54},{&g_54,(void*)0,&g_54,&g_54,(void*)0,&g_54},{&g_54,&g_54,&g_54,&g_54,&g_54,&g_54},{&g_54,&g_54,&g_54,(void*)0,&g_54,&g_54},{&g_54,&g_54,(void*)0,(void*)0,&g_54,(void*)0},{&g_54,&g_54,(void*)0,&g_54,&g_54,&g_54},{&g_54,&g_54,&g_54,&g_54,&g_54,&g_54}},{{&g_54,&g_54,&g_54,&g_54,(void*)0,&g_54},{&g_54,(void*)0,&g_54,(void*)0,(void*)0,&g_54},{(void*)0,&g_54,&g_54,(void*)0,&g_54,&g_54},{&g_54,(void*)0,&g_54,&g_54,&g_54,(void*)0},{(void*)0,&g_54,(void*)0,&g_54,&g_54,&g_54},{&g_54,&g_54,&g_54,&g_54,&g_54,&g_54},{&g_54,(void*)0,&g_54,&g_54,&g_54,&g_54}},{{&g_54,&g_54,(void*)0,&g_54,&g_54,&g_54},{(void*)0,&g_54,&g_54,(void*)0,&g_54,(void*)0},{&g_54,&g_54,(void*)0,&g_54,&g_54,&g_54},{&g_54,&g_54,&g_54,&g_54,&g_54,(void*)0},{&g_54,&g_54,(void*)0,(void*)0,&g_54,&g_54},{&g_54,&g_54,&g_54,&g_54,&g_54,(void*)0},{(void*)0,&g_54,&g_54,(void*)0,&g_54,&g_54}},{{&g_54,(void*)0,(void*)0,&g_54,&g_54,&g_54},{(void*)0,&g_54,&g_54,(void*)0,&g_54,(void*)0},{&g_54,&g_54,&g_54,&g_54,&g_54,&g_54},{(void*)0,&g_54,(void*)0,&g_54,&g_54,(void*)0},{&g_54,&g_54,&g_54,(void*)0,(void*)0,&g_54},{&g_54,&g_54,(void*)0,&g_54,&g_54,(void*)0},{(void*)0,&g_54,&g_54,&g_54,&g_54,&g_54}},{{&g_54,&g_54,(void*)0,(void*)0,&g_54,&g_54},{(void*)0,&g_54,&g_54,&g_54,&g_54,&g_54},{&g_54,&g_54,&g_54,(void*)0,&g_54,&g_54},{(void*)0,&g_54,(void*)0,&g_54,&g_54,(void*)0},{&g_54,&g_54,&g_54,(void*)0,&g_54,&g_54},{&g_54,&g_54,&g_54,&g_54,(void*)0,&g_54},{&g_54,&g_54,&g_54,&g_54,&g_54,&g_54}}};
static uint16_t ***g_852 = &g_853[3][4][3];
static union U2 g_862 = {1UL};
static union U2 *g_861[1] = {&g_862};
static union U1 g_1000 = {2UL};
static union U1 *g_999 = &g_1000;
static union U2 **g_1017 = &g_861[0];
static union U2 *** const g_1016 = &g_1017;
static const uint8_t g_1095 = 255UL;
static uint16_t g_1101 = 6UL;
static const int32_t g_1150 = (-5L);
static int32_t g_1194[2][6] = {{(-1L),0x3E83A4C3L,0x3E83A4C3L,(-1L),0x3E83A4C3L,0x3E83A4C3L},{(-1L),0x3E83A4C3L,0x3E83A4C3L,(-1L),0x3E83A4C3L,0x3E83A4C3L}};
static int64_t ****g_1215 = (void*)0;
static struct S0 g_1304 = {1L,0x4DL,0x49D5D3A7L,0xB0BD20BBL,1UL,0xF4CFC5595DDFC4C0LL,0x4730976FL,0x3480A08CFE261139LL};
static const uint64_t g_1318 = 1UL;
static uint64_t ***g_1379[3] = {&g_756,&g_756,&g_756};
static uint64_t ****g_1378 = &g_1379[1];
static int64_t *g_1396[4][3] = {{&g_208[1],&g_576[1].f7,&g_576[1].f7},{&g_576[1].f7,&g_576[1].f7,&g_576[1].f7},{&g_208[1],&g_576[1].f7,&g_576[1].f7},{&g_576[1].f7,&g_576[1].f7,&g_576[1].f7}};
static int64_t **g_1395[1] = {&g_1396[2][1]};
static int64_t ***g_1394 = &g_1395[0];
static union U1 g_1414 = {0UL};
static union U1 g_1416[6][3] = {{{0x8E9F922121CA9792LL},{0UL},{0x8E9F922121CA9792LL}},{{9UL},{9UL},{9UL}},{{0x8E9F922121CA9792LL},{0UL},{0x8E9F922121CA9792LL}},{{9UL},{9UL},{9UL}},{{0x8E9F922121CA9792LL},{0UL},{0x8E9F922121CA9792LL}},{{9UL},{9UL},{9UL}}};
static uint8_t *g_1470 = &g_1304.f1;
static uint8_t **g_1469 = &g_1470;
static uint8_t ***g_1468[1][7][1] = {{{&g_1469},{&g_1469},{&g_1469},{&g_1469},{&g_1469},{&g_1469},{&g_1469}}};
static int32_t g_1543 = 0x294B61B3L;
static const uint16_t *g_1705[2][2][1] = {{{&g_389},{&g_389}},{{&g_389},{&g_389}}};
static const uint16_t **g_1704[4][4] = {{&g_1705[1][0][0],&g_1705[0][1][0],&g_1705[0][1][0],&g_1705[1][0][0]},{&g_1705[0][1][0],&g_1705[1][0][0],&g_1705[0][1][0],&g_1705[0][1][0]},{&g_1705[1][0][0],&g_1705[1][0][0],&g_1705[0][0][0],&g_1705[1][0][0]},{&g_1705[1][0][0],&g_1705[0][1][0],&g_1705[0][1][0],&g_1705[1][0][0]}};
static const uint16_t ***g_1703[5] = {&g_1704[2][1],&g_1704[2][1],&g_1704[2][1],&g_1704[2][1],&g_1704[2][1]};
static const int64_t ****g_1713 = (void*)0;
static const uint64_t g_1876 = 0xE21FD597F1B0C2FDLL;



static int64_t  func_1(void);
static uint16_t  func_3(union U2  p_4, int32_t  p_5, int8_t * p_6, union U1  p_7);
static int32_t  func_9(int8_t * p_10);
static union U1  func_22(union U1  p_23, int8_t * p_24);
static int8_t * func_26(int16_t  p_27);
static uint32_t  func_40(int16_t * p_41, uint32_t  p_42);
static int16_t * func_43(uint16_t * const  p_44, union U1  p_45, int8_t  p_46, int16_t  p_47);
static union U1  func_48(int64_t  p_49, uint16_t * p_50);




static int64_t  func_1(void)
{ 
    uint8_t l_1557 = 1UL;
    struct S0 l_1558[5][6] = {{{1L,0UL,0x4756E0C1L,4294967290UL,0xE064L,0x2DC1AB3D52E78EF8LL,0xE5D8CF35L,0xDBCC793D7F4F11D2LL},{9L,0UL,0x452AF78CL,0x018C0B6AL,65529UL,0x4F7CCFFB817E9B9ALL,-8L,6L},{0L,0x3CL,0xDA78B3DCL,0xEC72F21EL,0xFAC2L,18446744073709551615UL,-1L,-7L},{-7L,0xC9L,0x33163336L,0x5A1C5342L,0UL,0xBD1F2AFDF22F3FC6LL,0xAD7222A6L,0xC06CC18CA2AD406BLL},{0L,0x3CL,0xDA78B3DCL,0xEC72F21EL,0xFAC2L,18446744073709551615UL,-1L,-7L},{9L,0UL,0x452AF78CL,0x018C0B6AL,65529UL,0x4F7CCFFB817E9B9ALL,-8L,6L}},{{1L,0UL,0x4756E0C1L,4294967290UL,0xE064L,0x2DC1AB3D52E78EF8LL,0xE5D8CF35L,0xDBCC793D7F4F11D2LL},{9L,0UL,0x452AF78CL,0x018C0B6AL,65529UL,0x4F7CCFFB817E9B9ALL,-8L,6L},{0L,0x3CL,0xDA78B3DCL,0xEC72F21EL,0xFAC2L,18446744073709551615UL,-1L,-7L},{-7L,0xC9L,0x33163336L,0x5A1C5342L,0UL,0xBD1F2AFDF22F3FC6LL,0xAD7222A6L,0xC06CC18CA2AD406BLL},{0L,0x3CL,0xDA78B3DCL,0xEC72F21EL,0xFAC2L,18446744073709551615UL,-1L,-7L},{9L,0UL,0x452AF78CL,0x018C0B6AL,65529UL,0x4F7CCFFB817E9B9ALL,-8L,6L}},{{1L,0UL,0x4756E0C1L,4294967290UL,0xE064L,0x2DC1AB3D52E78EF8LL,0xE5D8CF35L,0xDBCC793D7F4F11D2LL},{9L,0UL,0x452AF78CL,0x018C0B6AL,65529UL,0x4F7CCFFB817E9B9ALL,-8L,6L},{0L,0x3CL,0xDA78B3DCL,0xEC72F21EL,0xFAC2L,18446744073709551615UL,-1L,-7L},{-7L,0xC9L,0x33163336L,0x5A1C5342L,0UL,0xBD1F2AFDF22F3FC6LL,0xAD7222A6L,0xC06CC18CA2AD406BLL},{0L,0x3CL,0xDA78B3DCL,0xEC72F21EL,0xFAC2L,18446744073709551615UL,-1L,-7L},{9L,0UL,0x452AF78CL,0x018C0B6AL,65529UL,0x4F7CCFFB817E9B9ALL,-8L,6L}},{{1L,0UL,0x4756E0C1L,4294967290UL,0xE064L,0x2DC1AB3D52E78EF8LL,0xE5D8CF35L,0xDBCC793D7F4F11D2LL},{9L,0UL,0x452AF78CL,0x018C0B6AL,65529UL,0x4F7CCFFB817E9B9ALL,-8L,6L},{0L,0x3CL,0xDA78B3DCL,0xEC72F21EL,0xFAC2L,18446744073709551615UL,-1L,-7L},{-7L,0xC9L,0x33163336L,0x5A1C5342L,0UL,0xBD1F2AFDF22F3FC6LL,0xAD7222A6L,0xC06CC18CA2AD406BLL},{0L,0x3CL,0xDA78B3DCL,0xEC72F21EL,0xFAC2L,18446744073709551615UL,-1L,-7L},{9L,0UL,0x452AF78CL,0x018C0B6AL,65529UL,0x4F7CCFFB817E9B9ALL,-8L,6L}},{{1L,0UL,0x4756E0C1L,4294967290UL,0xE064L,0x2DC1AB3D52E78EF8LL,0xE5D8CF35L,0xDBCC793D7F4F11D2LL},{9L,0UL,0x452AF78CL,0x018C0B6AL,65529UL,0x4F7CCFFB817E9B9ALL,-8L,6L},{0L,0x3CL,0xDA78B3DCL,0xEC72F21EL,0xFAC2L,18446744073709551615UL,-1L,-7L},{-7L,0xC9L,0x33163336L,0x5A1C5342L,0UL,0xBD1F2AFDF22F3FC6LL,0xAD7222A6L,0xC06CC18CA2AD406BLL},{0L,0x3CL,0xDA78B3DCL,0xEC72F21EL,0xFAC2L,18446744073709551615UL,-1L,-7L},{9L,0UL,0x452AF78CL,0x018C0B6AL,65529UL,0x4F7CCFFB817E9B9ALL,-8L,6L}}};
    int32_t *l_1878 = &g_1194[1][1];
    int32_t l_1896 = 1L;
    uint64_t l_1897 = 18446744073709551615UL;
    int8_t l_1959[2];
    uint32_t *l_1960 = &g_862.f3;
    uint32_t l_1967[6] = {0x30115155L,0x30115155L,0x30115155L,0x30115155L,0x30115155L,0x30115155L};
    int i, j;
    for (i = 0; i < 2; i++)
        l_1959[i] = (-1L);
    (*l_1878) ^= (!func_3(g_8, ((func_9(g_11) , (((safe_lshift_func_int16_t_s_s((safe_lshift_func_uint8_t_u_s(((safe_sub_func_int8_t_s_s(0x49L, ((l_1557 = 1L) != g_214[0][2][1]))) & ((l_1558[4][5] , l_1558[4][5].f3) > l_1558[4][5].f7)), 4)), 6)) , l_1558[4][5].f1) < l_1558[4][5].f0)) & g_690), g_11, g_1416[4][2]));
    for (g_1304.f4 = 0; (g_1304.f4 > 53); g_1304.f4 = safe_add_func_int32_t_s_s(g_1304.f4, 2))
    { 
        int32_t l_1893 = 0x1A5D37AAL;
        int32_t l_1895[4] = {0xAA7986EEL,0xAA7986EEL,0xAA7986EEL,0xAA7986EEL};
        uint16_t ***l_1936 = &g_853[3][4][3];
        int i;
        for (g_91 = 0; (g_91 == 26); g_91 = safe_add_func_int8_t_s_s(g_91, 7))
        { 
            int32_t l_1890 = (-7L);
            int32_t l_1892 = 1L;
            int32_t l_1894 = 1L;
            for (g_1304.f1 = 0; (g_1304.f1 <= 0); g_1304.f1 += 1)
            { 
                int32_t *l_1883 = &g_719[1];
                int32_t *l_1884 = &g_576[1].f2;
                int32_t *l_1885 = &g_233[2][2];
                int32_t *l_1886 = &g_1194[0][3];
                int32_t *l_1887 = (void*)0;
                int32_t *l_1888 = &g_555.f2;
                int32_t *l_1889[1];
                int32_t l_1891 = 1L;
                uint8_t *l_1905 = &g_658.f3.f1;
                uint8_t *l_1906 = (void*)0;
                uint8_t *l_1907 = &g_218[1];
                int64_t *l_1937 = &g_208[0];
                uint16_t l_1938 = 0x00A8L;
                int i, j, k;
                for (i = 0; i < 1; i++)
                    l_1889[i] = &g_233[1][0];
                l_1897++;
                if (g_218[(g_1304.f1 + 2)])
                    continue;
                (*l_1883) &= (+(safe_div_func_int32_t_s_s((*l_1888), (g_8.f3 = 0x6E3425B6L))));
                if (((safe_mul_func_int8_t_s_s((*g_11), ((*l_1907)--))) || (safe_sub_func_int32_t_s_s((safe_div_func_uint64_t_u_u(((--(*g_494)) && ((*l_1937) = ((!(safe_rshift_func_uint16_t_u_s(((((safe_sub_func_uint32_t_u_u((((((safe_add_func_uint16_t_u_u((safe_add_func_int32_t_s_s(0xE0635BDCL, (safe_rshift_func_int16_t_s_s((safe_mul_func_int8_t_s_s((safe_rshift_func_int16_t_s_u(((l_1890 = (safe_rshift_func_int8_t_s_s((((0x6169L < (safe_div_func_uint16_t_u_u(0xA8AAL, 0x2E65L))) <= (-1L)) != (!0x0C2EL)), (*l_1885)))) > g_214[1][1][0]), l_1892)), 0xCBL)), (*l_1883))))), 0L)) && (*l_1878)) | (*l_1878)) >= 1L) | 0xC7304375L), (*l_1885))) > l_1895[1]) , (void*)0) == l_1936), g_8.f4))) < g_1304.f1))), l_1895[0])), l_1892))))
                { 
                    (*g_1017) = (void*)0;
                    return l_1938;
                }
                else
                { 
                    uint8_t l_1939 = 255UL;
                    int32_t l_1942 = (-10L);
                    int32_t l_1943[4][2] = {{0x5D55C347L,0xFD11A474L},{0xFD11A474L,0x5D55C347L},{0xFD11A474L,0xFD11A474L},{0x5D55C347L,0xFD11A474L}};
                    uint32_t l_1944 = 0xBBD8802BL;
                    int i, j;
                    --l_1939;
                    --l_1944;
                    (*l_1878) = (*l_1885);
                }
            }
            return (*l_1878);
        }
        return l_1895[0];
    }
    (*l_1878) = ((++(*g_1470)) | (safe_mul_func_int16_t_s_s(((*l_1878) <= ((safe_mod_func_uint64_t_u_u((safe_add_func_int16_t_s_s((*l_1878), (((safe_div_func_uint16_t_u_u(((*l_1878) == ((*l_1878) != 0L)), (((*l_1960) ^= (safe_lshift_func_uint16_t_u_u((*g_54), l_1959[0]))) && g_1318))) != 0UL) || 0x58C2L))), (**g_756))) || 4294967295UL)), (*l_1878))));
    for (g_555.f7 = (-28); (g_555.f7 < 20); ++g_555.f7)
    { 
        uint32_t l_1965 = 0xFFC0E0DBL;
        int32_t l_1966 = 0x9623038CL;
        l_1966 = (safe_mul_func_uint8_t_u_u((*l_1878), l_1965));
        return l_1967[5];
    }
    return (*l_1878);
}



static uint16_t  func_3(union U2  p_4, int32_t  p_5, int8_t * p_6, union U1  p_7)
{ 
    struct S0 **l_1559 = &g_575[0][1];
    int32_t l_1560 = 4L;
    int8_t l_1569 = (-7L);
    uint8_t l_1580 = 7UL;
    int64_t l_1581 = 0xA6B1D58187672281LL;
    int32_t *l_1582 = &g_576[1].f6;
    int16_t *l_1583 = &g_205[0][1][4];
    int32_t *l_1584 = &g_1416[0][1].f3.f2;
    int32_t l_1585 = 0x603F0896L;
    const union U2 **l_1597 = (void*)0;
    const union U2 ***l_1596 = &l_1597;
    const union U2 ****l_1595 = &l_1596;
    struct S0 l_1611 = {-5L,255UL,3L,0x37D2AF6EL,65534UL,0xF0DCD8D4C44EB52BLL,0xD0472A82L,0L};
    int32_t l_1625 = 0x29BCF0DBL;
    uint8_t * const * const l_1638 = (void*)0;
    uint8_t * const * const *l_1637 = &l_1638;
    int32_t l_1765 = 0x91CF6303L;
    int32_t l_1806 = 0xE4289E0EL;
    int64_t l_1831 = (-9L);
    uint8_t l_1835 = 0xCFL;
    int8_t l_1850 = 6L;
    const int64_t l_1872 = (-4L);
    l_1560 |= (g_77 > ((void*)0 == l_1559));
    if (l_1560)
        goto lbl_1594;
lbl_1849:
    l_1585 ^= ((safe_rshift_func_int8_t_s_u((*p_6), ((safe_div_func_int16_t_s_s(((*l_1583) ^= (l_1560 = (((*l_1582) ^= (safe_rshift_func_uint8_t_u_u((safe_mul_func_int16_t_s_s(((l_1569 = (p_4.f4 >= p_7.f1)) , (safe_mod_func_uint64_t_u_u(p_4.f3, (safe_div_func_uint8_t_u_u(l_1569, ((safe_add_func_uint8_t_u_u((**g_1469), (safe_lshift_func_int8_t_s_s((((safe_div_func_uint16_t_u_u((p_7.f2 , l_1560), (*g_54))) > 1UL) >= p_4.f3), 7)))) && l_1580)))))), l_1581)), 2))) , 5L))), l_1581)) < l_1580))) == g_576[1].f2);
lbl_1594:
    for (p_7.f0 = 26; (p_7.f0 > 30); p_7.f0 = safe_add_func_int64_t_s_s(p_7.f0, 5))
    { 
        struct S0 l_1588 = {0xA3L,0xE6L,1L,0x707AFA9DL,1UL,1UL,0L,0xE3ACE183034E8245LL};
        int32_t l_1593 = (-1L);
        (*l_1584) = (-1L);
        l_1593 = (l_1588.f2 = (l_1588 , ((*l_1584) = ((**g_1469) >= (safe_lshift_func_int16_t_s_s(0x6945L, (safe_lshift_func_uint8_t_u_s((*g_1470), 7))))))));
    }
    if ((l_1595 != &g_1016))
    { 
        int64_t l_1598 = 0x38CB54A8662FE6F6LL;
        int32_t *l_1607 = &g_1304.f2;
        int8_t l_1624 = 0L;
        int32_t l_1677 = 7L;
        int32_t l_1683 = 0xD9EB23B6L;
        int32_t l_1686[3];
        int32_t l_1689 = 0L;
        union U1 **l_1717 = &g_999;
        const uint16_t l_1746 = 1UL;
        uint8_t l_1747 = 1UL;
        union U2 *l_1838[5] = {&g_862,&g_862,&g_862,&g_862,&g_862};
        int i;
        for (i = 0; i < 3; i++)
            l_1686[i] = 0x28DA023EL;
        (*l_1607) |= (l_1598 & (safe_sub_func_int32_t_s_s((safe_lshift_func_int16_t_s_s((safe_lshift_func_int16_t_s_s(p_4.f3, 0)), (&g_214[1][3][1] != (((*p_6) = ((****g_1378) == (safe_add_func_int8_t_s_s(((*g_494) == (((***g_1016) , 0L) || (*g_54))), 0x01L)))) , (void*)0)))), p_5)));
        if (l_1560)
            goto lbl_1726;
lbl_1726:
        for (g_1000.f3.f1 = 0; (g_1000.f3.f1 >= 26); ++g_1000.f3.f1)
        { 
            int16_t **l_1610[6] = {&g_795,&g_795,&g_795,&g_795,&g_795,&g_795};
            uint64_t l_1616 = 0x7F71C8953681E036LL;
            uint64_t **l_1617 = &g_494;
            int32_t *l_1626 = (void*)0;
            uint32_t l_1631 = 1UL;
            int64_t **l_1634 = &g_1396[0][2];
            uint8_t l_1654 = 1UL;
            uint8_t ***l_1656 = &g_1469;
            struct S0 **l_1664 = (void*)0;
            int32_t l_1665 = 0x21335229L;
            int32_t l_1671 = 0L;
            int32_t l_1680 = 0x38B2D756L;
            int32_t l_1682 = (-1L);
            int32_t l_1685 = 0x82323D3FL;
            int32_t l_1687 = 0x91B2DAF0L;
            int32_t l_1688 = 1L;
            int32_t l_1690 = (-7L);
            int i;
        }
        for (g_555.f3 = 0; (g_555.f3 <= 3); g_555.f3 += 1)
        { 
            union U1 l_1739 = {0x00690EDA58BA0630LL};
            int64_t l_1748 = 0x522F682E3BBA8D39LL;
            uint64_t l_1749[3];
            uint64_t l_1759 = 18446744073709551609UL;
            uint64_t l_1766 = 0x4FE070E2741531D1LL;
            int32_t *l_1773[6][7][6] = {{{&g_1543,&g_555.f6,&g_120,&g_576[1].f6,&g_555.f6,&g_576[1].f6},{(void*)0,&g_576[1].f6,(void*)0,&g_1304.f6,&g_555.f6,&l_1611.f6},{&g_1304.f6,&g_555.f6,&l_1611.f6,&g_120,&g_1304.f6,&g_555.f6},{&g_120,&l_1611.f6,&g_120,&g_120,&g_1304.f6,&g_1304.f6},{&g_1304.f6,&g_576[1].f6,&g_576[1].f6,&g_1304.f6,&g_555.f6,&g_1304.f6},{(void*)0,&g_120,&g_555.f6,&g_576[1].f6,&g_120,&g_120},{&g_1543,&g_120,&g_555.f6,&g_120,&g_120,&g_555.f6}},{{&g_555.f6,&g_120,&g_1304.f6,&g_120,&g_555.f6,&g_120},{&g_555.f6,&g_576[1].f6,(void*)0,&g_1304.f6,&g_1304.f6,&g_1543},{(void*)0,&l_1611.f6,&g_555.f6,&g_576[1].f6,&g_1304.f6,&g_1543},{&g_120,&g_555.f6,(void*)0,(void*)0,&g_555.f6,&g_120},{&g_1304.f6,&g_576[1].f6,&g_1304.f6,&g_120,&g_555.f6,&g_555.f6},{&g_576[1].f6,&g_555.f6,&g_555.f6,&g_555.f6,&g_120,&g_120},{&g_576[1].f6,&g_1304.f6,&g_555.f6,&g_120,&g_555.f6,&g_1304.f6}},{{&g_1304.f6,&g_555.f6,&g_576[1].f6,(void*)0,&g_1304.f6,&g_1304.f6},{&g_120,(void*)0,&g_120,&g_576[1].f6,&g_1543,&g_555.f6},{(void*)0,(void*)0,&g_120,&g_555.f6,&g_555.f6,&g_120},{&g_1543,&g_1543,&g_1304.f6,&g_576[1].f6,&g_555.f6,&l_1611.f6},{&g_120,&g_555.f6,&g_576[1].f6,&g_120,&g_120,&g_1304.f6},{&g_211,&g_120,&g_576[1].f6,&l_1611.f6,&g_1543,&l_1611.f6},{&g_1304.f6,&l_1611.f6,&g_1304.f6,(void*)0,&g_120,&g_120}},{{(void*)0,&g_120,&g_120,&g_120,&g_1304.f6,&g_555.f6},{&g_576[1].f6,&g_120,(void*)0,&g_120,(void*)0,(void*)0},{(void*)0,&g_555.f6,&g_555.f6,(void*)0,&g_120,&g_555.f6},{&g_1304.f6,&g_576[1].f6,&g_555.f6,&l_1611.f6,(void*)0,&g_576[1].f6},{&g_211,&g_120,&g_1543,&g_120,(void*)0,&g_120},{&g_120,&g_576[1].f6,(void*)0,&g_576[1].f6,&g_120,&g_120},{&g_1543,&g_555.f6,&g_1304.f6,&g_555.f6,(void*)0,&g_211}},{{&g_1304.f6,&g_120,&g_120,&g_555.f6,&g_1304.f6,&g_211},{&g_120,&g_120,&g_1304.f6,&g_1304.f6,&g_120,&g_120},{&g_1304.f6,&l_1611.f6,(void*)0,(void*)0,&g_1543,&g_120},{&l_1611.f6,&g_120,&g_1543,&g_555.f6,&g_120,&g_576[1].f6},{&l_1611.f6,&g_555.f6,&g_555.f6,(void*)0,&g_555.f6,&g_555.f6},{&g_1304.f6,&g_1543,&g_555.f6,&g_1304.f6,&g_555.f6,(void*)0},{&g_120,&g_1304.f6,(void*)0,&g_555.f6,&g_211,&g_555.f6}},{{&g_1304.f6,&g_1304.f6,&g_120,&g_555.f6,&g_555.f6,&g_120},{&g_1543,&g_1543,&g_1304.f6,&g_576[1].f6,&g_555.f6,&l_1611.f6},{&g_120,&g_555.f6,&g_576[1].f6,&g_120,&g_120,&g_1304.f6},{&g_211,&g_120,&g_576[1].f6,&l_1611.f6,&g_1543,&l_1611.f6},{&g_1304.f6,&l_1611.f6,&g_1304.f6,(void*)0,&g_120,&g_120},{(void*)0,&g_120,&g_120,&g_120,&g_1304.f6,&g_555.f6},{&g_576[1].f6,&g_120,(void*)0,&g_120,(void*)0,(void*)0}}};
            uint32_t l_1778 = 4294967293UL;
            int32_t *l_1781[6][1][6] = {{{&l_1765,(void*)0,(void*)0,&l_1765,&l_1765,(void*)0}},{{&l_1765,&l_1765,(void*)0,(void*)0,&l_1765,&l_1765}},{{&l_1765,(void*)0,(void*)0,&l_1765,&l_1765,(void*)0}},{{&l_1765,&l_1765,(void*)0,(void*)0,&l_1765,&l_1765}},{{&l_1765,(void*)0,(void*)0,&l_1765,&l_1765,(void*)0}},{{&l_1765,&l_1765,(void*)0,(void*)0,&l_1765,&l_1765}}};
            uint32_t l_1792 = 4UL;
            uint64_t ****l_1795 = &g_1379[1];
            uint16_t l_1800 = 0UL;
            int16_t ** const l_1803 = &l_1583;
            int32_t l_1828[1][7][5] = {{{0x1DCEF3B1L,0x8130AB2EL,0L,0xA8537BF4L,(-6L)},{0L,0xA8537BF4L,2L,0x098B0FA6L,0x098B0FA6L},{(-5L),4L,(-5L),2L,0xD8E10A36L},{8L,4L,0x1656268BL,0L,0x8130AB2EL},{0x92C5B329L,0xA8537BF4L,0x098B0FA6L,0L,8L},{0x1DCEF3B1L,0x8130AB2EL,0x1656268BL,0x8130AB2EL,0x1DCEF3B1L},{0xA39E6EEAL,0L,(-5L),0x8130AB2EL,0L}}};
            int32_t l_1832 = (-2L);
            int i, j, k;
            for (i = 0; i < 3; i++)
                l_1749[i] = 0xD9D34411B0EA2A48LL;
        }
        (*l_1607) = p_7.f0;
        for (l_1581 = 0; (l_1581 < 1); l_1581 = safe_add_func_uint32_t_u_u(l_1581, 7))
        { 
            return p_7.f0;
        }
    }
    else
    { 
        struct S0 l_1847[7] = {{-1L,251UL,-1L,1UL,0x1327L,1UL,5L,-3L},{0x20L,255UL,0x89B8B237L,0xEBC0CEEBL,0UL,0UL,0x286D542DL,7L},{-1L,251UL,-1L,1UL,0x1327L,1UL,5L,-3L},{-1L,251UL,-1L,1UL,0x1327L,1UL,5L,-3L},{0x20L,255UL,0x89B8B237L,0xEBC0CEEBL,0UL,0UL,0x286D542DL,7L},{-1L,251UL,-1L,1UL,0x1327L,1UL,5L,-3L},{-1L,251UL,-1L,1UL,0x1327L,1UL,5L,-3L}};
        uint16_t *l_1848 = (void*)0;
        uint32_t *l_1869 = (void*)0;
        int i;
        if (((((safe_rshift_func_uint16_t_u_s((safe_sub_func_int64_t_s_s((l_1847[5].f2 &= (((((((*g_1470) = (*g_1470)) & (p_7 , (*g_11))) >= p_4.f4) < 0x027B4551L) ^ p_4.f2) != p_4.f3)), p_4.f3)), g_94.f0)) || p_4.f0) || p_7.f0) , g_1416[0][1].f1))
        { 
            int32_t l_1859 = 0x205E3373L;
            int64_t *l_1860 = &g_1416[0][1].f3.f7;
            int16_t l_1873 = 0xC926L;
            uint32_t l_1874 = 0UL;
            uint8_t l_1875 = 0xD6L;
            int32_t *l_1877 = (void*)0;
            (*g_164) = &g_233[1][0];
            if (l_1569)
                goto lbl_1849;
            g_555.f2 ^= (((*g_165) = (l_1850 , (safe_rshift_func_uint8_t_u_u((0x4EE50E8F56456A56LL && (safe_div_func_int32_t_s_s((safe_lshift_func_int16_t_s_s((safe_mod_func_int64_t_s_s(((*l_1860) = l_1859), (p_4.f4 || (((l_1875 = (safe_mod_func_uint16_t_u_u(((safe_mod_func_uint16_t_u_u(((((safe_mod_func_int64_t_s_s((safe_rshift_func_uint8_t_u_u((((*l_1583) = ((l_1869 != ((l_1859 < ((safe_sub_func_int32_t_s_s(l_1859, l_1872)) , 1L)) , l_1869)) || l_1873)) < l_1873), p_4.f0)), p_7.f1)) ^ l_1874) & 1UL) | l_1874), 8L)) | l_1874), p_5))) & g_1876) , 0x886EAEDA9BDB80A8LL)))), 10)), p_4.f2))), p_4.f2)))) < g_30);
        }
        else
        { 
            (*l_1584) = (-1L);
        }
    }
    return p_7.f0;
}



static int32_t  func_9(int8_t * p_10)
{ 
    int16_t l_19 = (-2L);
    union U1 l_25 = {0x859BB7A140552487LL};
    int16_t *l_28 = (void*)0;
    int16_t *l_29 = &g_30;
    int32_t l_1141 = 1L;
    int32_t l_1142 = 9L;
    int32_t l_1143 = (-6L);
    int32_t l_1144[5] = {0x6856346AL,0x6856346AL,0x6856346AL,0x6856346AL,0x6856346AL};
    int64_t l_1145 = (-1L);
    uint64_t l_1146 = 3UL;
    uint32_t l_1205[4][6] = {{0xC83E9E79L,0xF58883F3L,0x7781ED66L,0x7781ED66L,0xF58883F3L,0xC83E9E79L},{18446744073709551608UL,0xC83E9E79L,0x7781ED66L,0xC83E9E79L,18446744073709551608UL,18446744073709551608UL},{0x5689B79CL,0xC83E9E79L,0xC83E9E79L,0x5689B79CL,0xF58883F3L,0x5689B79CL},{0x5689B79CL,0xF58883F3L,0x5689B79CL,0xC83E9E79L,0xC83E9E79L,0x5689B79CL}};
    int64_t *l_1222 = &g_576[1].f7;
    int64_t **l_1221 = &l_1222;
    int64_t ***l_1220 = &l_1221;
    int64_t ****l_1219 = &l_1220;
    int8_t l_1261 = 0x23L;
    uint32_t l_1265 = 0UL;
    uint32_t l_1271 = 0UL;
    struct S0 l_1334 = {0x7CL,253UL,-8L,0x38CE0F1CL,0x3905L,0x97473291F24F4329LL,0x2719C633L,0x3B02FEF336A08D3FLL};
    int8_t l_1340 = 0x00L;
    uint8_t *l_1341[5] = {&g_66,&g_66,&g_66,&g_66,&g_66};
    uint64_t ***l_1354 = &g_756;
    uint64_t ****l_1353 = &l_1354;
    int32_t *l_1355[1][4];
    int32_t l_1360 = (-1L);
    uint16_t l_1371 = 0xC2C1L;
    uint32_t l_1462 = 18446744073709551606UL;
    int16_t l_1494 = 0xCF29L;
    int8_t * const l_1540 = (void*)0;
    int64_t l_1541 = 0x4897010060FAFF9BLL;
    int64_t l_1544[5];
    int32_t l_1545 = (-7L);
    uint8_t l_1546 = 3UL;
    int i, j;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 4; j++)
            l_1355[i][j] = &g_748[0].f1;
    }
    for (i = 0; i < 5; i++)
        l_1544[i] = (-1L);
    if ((safe_sub_func_uint8_t_u_u(((l_25.f1 = (safe_add_func_uint16_t_u_u((l_19 & ((safe_rshift_func_uint8_t_u_s((p_10 == (func_22(l_25, func_26(((*l_29) = l_25.f0))) , func_26(l_25.f2))), 5)) > l_25.f1)), 0L))) < g_555.f2), l_19)))
    { 
        (**g_164) = (safe_unary_minus_func_int16_t_s(l_25.f2));
    }
    else
    { 
        int32_t *l_1139 = &g_748[0].f1;
        int32_t *l_1140[1];
        uint8_t ** const l_1165 = (void*)0;
        uint8_t ** const *l_1164 = &l_1165;
        union U2 *l_1178 = &g_862;
        int64_t *l_1189[5];
        int64_t **l_1188 = &l_1189[2];
        int16_t l_1204[5];
        int64_t ****l_1214[2][1][4];
        int64_t ***l_1218 = &l_1188;
        int64_t ****l_1217[1][1][5] = {{{&l_1218,&l_1218,&l_1218,&l_1218,&l_1218}}};
        uint64_t ** const *l_1254 = &g_756;
        uint16_t l_1273[3];
        union U2 **l_1274 = &l_1178;
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_1140[i] = &g_658.f3.f2;
        for (i = 0; i < 5; i++)
            l_1189[i] = &g_107;
        for (i = 0; i < 5; i++)
            l_1204[i] = 1L;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 1; j++)
            {
                for (k = 0; k < 4; k++)
                    l_1214[i][j][k] = (void*)0;
            }
        }
        for (i = 0; i < 3; i++)
            l_1273[i] = 0x3F00L;
        l_1146++;
        for (g_202 = 0; (g_202 <= 0); g_202 += 1)
        { 
            const int32_t *l_1149[6];
            const int32_t *l_1152[7] = {&g_1150,&g_1150,&g_1150,&g_1150,&g_1150,&g_1150,&g_1150};
            const int32_t **l_1151 = &l_1152[4];
            int16_t l_1170 = 0x14C1L;
            int64_t *l_1172 = &g_208[0];
            int32_t l_1195 = 0xEAD95CD2L;
            int i;
            for (i = 0; i < 6; i++)
                l_1149[i] = &g_1150;
            (*l_1151) = (l_1149[3] = l_1140[g_202]);
            l_1140[g_202] = l_1140[g_202];
            for (g_91 = 0; (g_91 >= 0); g_91 -= 1)
            { 
                uint64_t l_1171[3][4][2] = {{{0xC66796C016E0D0E3LL,0x619F05EE59EA19C5LL},{4UL,0x969950ABB38FE543LL},{0x619F05EE59EA19C5LL,0x969950ABB38FE543LL},{4UL,0x619F05EE59EA19C5LL}},{{0xC66796C016E0D0E3LL,0xC66796C016E0D0E3LL},{0xC66796C016E0D0E3LL,0x619F05EE59EA19C5LL},{4UL,0x969950ABB38FE543LL},{0x619F05EE59EA19C5LL,0x969950ABB38FE543LL}},{{4UL,0x619F05EE59EA19C5LL},{0xC66796C016E0D0E3LL,0xC66796C016E0D0E3LL},{0xC66796C016E0D0E3LL,0x619F05EE59EA19C5LL},{4UL,0x969950ABB38FE543LL}}};
                int64_t *l_1173 = &g_208[1];
                int8_t *l_1192[5];
                uint64_t l_1193 = 0xF9B614BB18ED6107LL;
                int i, j, k;
                for (i = 0; i < 5; i++)
                    l_1192[i] = &g_212;
            }
        }
        if ((**g_164))
        { 
            union U2 l_1237 = {4294967288UL};
            for (g_94.f3.f6 = 0; (g_94.f3.f6 <= (-1)); g_94.f3.f6 = safe_sub_func_int64_t_s_s(g_94.f3.f6, 8))
            { 
                for (g_55 = 1; (g_55 > 8); g_55 = safe_add_func_uint16_t_u_u(g_55, 4))
                { 
                    (*l_1139) ^= (-6L);
                }
                return g_690;
            }
            for (g_94.f3.f5 = 0; (g_94.f3.f5 <= 49); g_94.f3.f5 = safe_add_func_int16_t_s_s(g_94.f3.f5, 6))
            { 
                int64_t *****l_1216[2][5][3];
                int32_t l_1223[2];
                int i, j, k;
                for (i = 0; i < 2; i++)
                {
                    for (j = 0; j < 5; j++)
                    {
                        for (k = 0; k < 3; k++)
                            l_1216[i][j][k] = (void*)0;
                    }
                }
                for (i = 0; i < 2; i++)
                    l_1223[i] = 0L;
                (**g_164) = (safe_lshift_func_uint8_t_u_s((l_1214[1][0][0] != ((**g_1017) , (l_1219 = (l_1217[0][0][2] = g_1215)))), (l_1223[0] | ((-1L) != ((safe_add_func_uint32_t_u_u((+0xB2L), (safe_lshift_func_uint8_t_u_s((safe_sub_func_int8_t_s_s((safe_mod_func_uint8_t_u_u(((((safe_add_func_uint32_t_u_u(((safe_mod_func_uint16_t_u_u((l_1237 , 0xCC5CL), l_1223[1])) && 0x86L), 0x37DB99D7L)) < g_1000.f0) , l_1223[0]) , 0x6DL), l_1144[1])), 1L)), 6)))) ^ 0x8EE5L)))));
            }
        }
        else
        { 
            for (g_37 = (-24); (g_37 <= 47); g_37++)
            { 
                for (g_94.f3.f5 = 27; (g_94.f3.f5 > 4); g_94.f3.f5 = safe_sub_func_uint32_t_u_u(g_94.f3.f5, 2))
                { 
                    (*g_164) = &l_1144[1];
                    return g_8.f3;
                }
            }
            (**g_1016) = l_1178;
            (**g_164) ^= 0xCF7F5BBFL;
            for (l_25.f1 = 0; l_25.f1 < 2; l_25.f1 += 1)
            {
                for (g_120 = 0; g_120 < 1; g_120 += 1)
                {
                    for (g_91 = 0; g_91 < 4; g_91 += 1)
                    {
                        l_1214[l_25.f1][g_120][g_91] = (void*)0;
                    }
                }
            }
        }
        for (g_211 = 0; (g_211 > (-23)); g_211 = safe_sub_func_int16_t_s_s(g_211, 2))
        { 
            int16_t l_1257[6][6][5] = {{{1L,(-8L),1L,1L,0xFF94L},{1L,1L,(-6L),(-7L),0xAF37L},{6L,0x9267L,0x4393L,(-10L),0x19CAL},{0L,1L,8L,7L,8L},{(-1L),(-1L),0xEC82L,6L,1L},{0x9267L,0xC56BL,1L,1L,0L}},{{1L,1L,(-1L),9L,(-1L)},{0x7DA9L,0xC56BL,9L,0xAF37L,1L},{(-6L),(-1L),9L,(-7L),(-10L)},{(-2L),1L,0x0C1FL,1L,0x0131L},{0xCBC8L,0x9267L,0L,0xAE1DL,8L},{1L,1L,(-1L),(-1L),0x2916L}},{{0x1A8CL,(-8L),(-6L),1L,1L},{1L,0xAE1DL,0x3F44L,0L,0x19CAL},{1L,(-6L),0x3F44L,6L,0x4393L},{9L,(-1L),(-6L),(-1L),(-4L)},{0xA204L,0xCBC8L,0L,(-8L),0L},{(-6L),0x715EL,5L,9L,1L}},{{(-5L),0xB05EL,(-6L),(-7L),0xE92EL},{9L,7L,7L,9L,5L},{1L,0x2ABDL,0xF227L,(-4L),0x3F44L},{0xDBF8L,1L,0xAF37L,(-6L),0x7DA9L},{0x19CAL,8L,6L,(-4L),3L},{(-1L),(-6L),(-1L),9L,(-7L)}},{{(-6L),0L,0xDBF8L,(-7L),1L},{(-4L),0x2916L,0x7DA9L,9L,0x1A8CL},{0x4345L,7L,0x19CAL,(-8L),0xB05EL},{0L,0x3F44L,(-10L),0xAF37L,0L},{5L,(-1L),0xAF37L,1L,(-1L)},{6L,0xB05EL,1L,0xEC82L,(-1L)}},{{0x2ABDL,0x4345L,3L,9L,0L},{(-1L),9L,(-4L),(-10L),0xB05EL},{0xDBF8L,(-4L),1L,0xA204L,0x1A8CL},{9L,0xC193L,6L,0xC56BL,1L},{(-6L),(-7L),0xFF94L,0xFF94L,(-7L)},{5L,1L,(-1L),1L,3L}}};
            uint8_t l_1258[2][7][2] = {{{252UL,255UL},{7UL,252UL},{255UL,255UL},{255UL,252UL},{7UL,255UL},{252UL,255UL},{7UL,252UL}},{{255UL,255UL},{255UL,252UL},{7UL,255UL},{252UL,255UL},{7UL,252UL},{255UL,255UL},{255UL,252UL}}};
            int32_t l_1259 = (-8L);
            int32_t l_1260 = 0L;
            int32_t l_1262 = 0x0F98C1ECL;
            int32_t l_1263 = 0xBA254D79L;
            int32_t l_1264 = (-5L);
            struct S0 l_1293 = {0x72L,0x0AL,0x48A278D5L,0xE73C47C2L,0x1BB0L,0x579714C47CC11E78LL,0x7425D547L,0xC6DDAC083386D9CDLL};
            struct S0 **l_1296[3];
            union U2 l_1305 = {0xAD8BD1B4L};
            int64_t l_1306 = 1L;
            union U1 l_1310 = {0xB2293EAC0F0D0FCFLL};
            union U2 ***l_1315 = &l_1274;
            int i, j, k;
            for (i = 0; i < 3; i++)
                l_1296[i] = &g_575[1][1];
            l_25.f3.f2 = (((((safe_mul_func_int8_t_s_s((safe_lshift_func_uint16_t_u_u(((safe_lshift_func_int16_t_s_s((safe_mod_func_int8_t_s_s(0x72L, (*l_1139))), 13)) > (((((*g_11) != ((l_1142 |= (safe_mod_func_int64_t_s_s((l_1254 == &g_756), (safe_div_func_uint32_t_u_u(0x913E42CDL, l_25.f1))))) == l_1257[3][4][2])) , (void*)0) == g_1215) , l_19)), 9)), l_1144[4])) || g_8.f2) || l_1144[1]) , l_1257[3][4][2]) | l_1258[0][0][0]);
            (*l_1139) = (((**g_164) = (*l_1139)) || 0x72D95413L);
            (*g_164) = (*g_164);
            ++l_1265;
            if ((+((safe_sub_func_int32_t_s_s(l_1271, (~l_1263))) , l_1273[1])))
            { 
                int32_t l_1281 = 0L;
                const struct S0 *l_1295 = &g_555;
                const struct S0 * const *l_1294 = &l_1295;
                int32_t l_1297 = 0x62CFF07CL;
                uint32_t *l_1302 = &g_555.f3;
                uint64_t l_1309 = 8UL;
                (**g_164) &= (((l_1274 == (*g_1016)) ^ ((safe_lshift_func_int8_t_s_s((safe_lshift_func_uint16_t_u_u((*l_1139), ((l_1297 |= (safe_mul_func_uint8_t_u_u(((((**l_1188) = (l_1260 ^ (((l_1281 < (safe_rshift_func_uint8_t_u_u(((safe_sub_func_uint32_t_u_u((safe_mod_func_uint16_t_u_u(((safe_unary_minus_func_uint8_t_u((g_555.f1 = (safe_lshift_func_uint8_t_u_u(l_1141, 7))))) > (safe_mod_func_uint8_t_u_u((l_1293 , 0UL), 0xA2L))), l_25.f2)), g_555.f6)) & 7UL), g_576[1].f5))) , l_1294) == l_1296[0]))) >= (**g_756)) || 0x32L), 0UL))) != l_1293.f1))), (*p_10))) == (*l_1139))) < 0xDD73877FL);
                if ((*l_1139))
                    break;
                (**g_164) = (((((*l_1302) &= (l_1293.f5 >= ((l_1293.f2 ^ (*l_1139)) ^ (l_1142 = (safe_div_func_int8_t_s_s((l_1261 | ((void*)0 == &g_1017)), (((safe_add_func_uint64_t_u_u(0x3246C31BA1987017LL, g_214[0][3][0])) || 0xEDL) && l_1293.f2))))))) , g_8.f2) , 0x1E2F7BAFL) || l_1281);
                for (g_658.f3.f6 = 0; (g_658.f3.f6 <= 1); g_658.f3.f6 += 1)
                { 
                    struct S0 *l_1303 = &g_1304;
                    int i, j;
                    l_1303 = (void*)0;
                    (*g_165) ^= (((0xAF5CL != g_57) || (l_1259 = ((l_1305 , (l_1271 && (**g_756))) > ((void*)0 == p_10)))) && 0x8E2B156BL);
                    l_1309 &= ((l_1306 ^ ((g_214[1][3][2] = (safe_sub_func_int8_t_s_s((4294967290UL && ((((**g_1017) , ((*g_54) = 0x5C72L)) >= g_719[1]) , (*g_165))), g_8.f4))) ^ l_1281)) , (*g_165));
                    (*g_1017) = (l_1310 , ((*l_1274) = (*g_1017)));
                }
            }
            else
            { 
                const uint64_t *l_1317 = &g_1318;
                const uint64_t **l_1316 = &l_1317;
                uint64_t *l_1320 = &g_576[1].f5;
                uint64_t **l_1319 = &l_1320;
                const int32_t l_1323 = 0xAB612A8DL;
                (*l_1139) |= (safe_rshift_func_uint16_t_u_u((((safe_mod_func_uint64_t_u_u((0x51D2L || ((l_1315 == ((((*l_1316) = (*g_756)) != ((*l_1319) = (*g_756))) , l_1315)) == ((*g_11) >= (safe_mod_func_int16_t_s_s(l_1260, l_1323))))), l_19)) , (*g_494)) && l_1293.f3), l_1323));
                if ((*g_165))
                { 
                    return l_1306;
                }
                else
                { 
                    uint32_t l_1324 = 0UL;
                    if ((**g_164))
                        break;
                    (*g_164) = &l_1143;
                    return l_1324;
                }
            }
        }
    }
    g_233[1][0] = (((**g_164) = (l_1146 | (safe_div_func_int8_t_s_s(((((safe_rshift_func_int16_t_s_u((safe_rshift_func_uint8_t_u_s((safe_lshift_func_uint8_t_u_s((!(((g_205[1][2][0] >= (l_1334 , (safe_mul_func_uint16_t_u_u((safe_mod_func_int64_t_s_s((safe_unary_minus_func_uint8_t_u((g_545--))), ((safe_div_func_uint32_t_u_u((safe_div_func_uint8_t_u_u((safe_add_func_int64_t_s_s(l_1334.f0, ((**l_1221) = (safe_rshift_func_int16_t_s_u((!(((l_1142 = (l_1143 & (((&g_756 == ((*l_1353) = (void*)0)) & g_719[2]) == 1UL))) && 0x09L) & (*g_11))), 15))))), g_576[1].f3)), 0xB1E7C431L)) | 1UL))), l_1205[3][3])))) , l_1334.f5) <= l_25.f1)), 1)), (*p_10))), l_25.f2)) <= l_1144[4]) && (*g_494)) , 0xADL), g_37)))) || 0x7B7315ACL);
    for (g_94.f3.f7 = 0; (g_94.f3.f7 < 15); g_94.f3.f7 = safe_add_func_int16_t_s_s(g_94.f3.f7, 1))
    { 
        uint32_t l_1363 = 0xB9E08935L;
        int32_t **l_1364 = &g_165;
        uint32_t l_1366 = 0UL;
        uint16_t l_1375 = 5UL;
        union U1 *l_1415 = &g_1416[0][1];
        uint32_t l_1453[2];
        int32_t l_1454 = 0xFABC40A9L;
        struct S0 *l_1459 = (void*)0;
        int32_t l_1485 = (-1L);
        int32_t l_1502 = 0xBBD80A9BL;
        int32_t l_1504[4];
        int16_t l_1517[2][2] = {{0L,0L},{0L,0L}};
        uint32_t l_1521 = 4UL;
        int i, j;
        for (i = 0; i < 2; i++)
            l_1453[i] = 1UL;
        for (i = 0; i < 4; i++)
            l_1504[i] = (-3L);
        if ((safe_lshift_func_uint16_t_u_u((((((0L >= ((*g_54) = l_1360)) < (safe_rshift_func_int16_t_s_s(l_1363, (l_1364 != (void*)0)))) && ((+l_1366) , ((((**l_1364) >= 0L) & (**l_1364)) != 0L))) != 4294967295UL) || (*g_165)), 3)))
        { 
            int64_t l_1370 = 0x33AE6E2CD5211DABLL;
            int32_t l_1383[2];
            uint64_t l_1387 = 18446744073709551615UL;
            union U1 *l_1413 = &g_1414;
            int64_t ****l_1431[4][4][3] = {{{&l_1220,(void*)0,&l_1220},{&g_1394,&g_1394,&g_1394},{(void*)0,&l_1220,&l_1220},{(void*)0,&l_1220,&g_1394}},{{&l_1220,&l_1220,&l_1220},{&l_1220,(void*)0,&g_1394},{&l_1220,(void*)0,&l_1220},{&g_1394,&g_1394,&g_1394}},{{(void*)0,&l_1220,&l_1220},{(void*)0,&l_1220,&g_1394},{&l_1220,&l_1220,&l_1220},{&l_1220,(void*)0,&g_1394}},{{&l_1220,(void*)0,&l_1220},{&g_1394,&g_1394,&g_1394},{(void*)0,&l_1220,&l_1220},{(void*)0,&l_1220,&g_1394}}};
            int i, j, k;
            for (i = 0; i < 2; i++)
                l_1383[i] = 4L;
            for (g_555.f3 = 0; (g_555.f3 != 10); g_555.f3 = safe_add_func_uint32_t_u_u(g_555.f3, 5))
            { 
                uint16_t l_1423 = 0x4D40L;
                uint32_t *l_1430 = &g_658.f3.f3;
                uint8_t **l_1439 = &l_1341[1];
                uint8_t **l_1440 = (void*)0;
                uint8_t *l_1442 = &g_202;
                uint8_t **l_1441 = &l_1442;
                uint8_t *l_1444[4] = {&g_202,&g_202,&g_202,&g_202};
                uint8_t **l_1443 = &l_1444[3];
                int16_t l_1447 = 0xD8B4L;
                int i;
                if (((safe_unary_minus_func_int8_t_s(((*p_10) |= l_1370))) != (**l_1364)))
                { 
                    uint32_t l_1374[6][5][7] = {{{0xB33D460BL,0xA77DC34AL,1UL,0xE6037EF5L,0x03DE099FL,0UL,0x275DAE62L},{18446744073709551608UL,1UL,0x06E2EAE3L,1UL,18446744073709551608UL,1UL,0UL},{0x30B196CDL,0UL,0x4E5D89CBL,0x275DAE62L,0xBAEB833CL,0UL,0x820D4FB1L},{1UL,0x1CBC85F6L,18446744073709551608UL,18446744073709551611UL,0x7058A15DL,0UL,5UL},{0x30B196CDL,0x275DAE62L,0UL,0xA77DC34AL,0x4E5D89CBL,18446744073709551615UL,9UL}},{{18446744073709551608UL,0xCB5917C7L,18446744073709551611UL,0xCB0D1459L,5UL,1UL,0x7058A15DL},{7UL,0x6277F157L,0UL,18446744073709551611UL,0UL,0x6277F157L,7UL},{5UL,18446744073709551608UL,1UL,18446744073709551615UL,0UL,18446744073709551609UL,0x732B4D31L},{0xB33D460BL,0x03DE099FL,0x7A3FFDA1L,18446744073709551608UL,18446744073709551615UL,0x8E0BF2CCL,0x6277F157L},{0xCB0D1459L,8UL,1UL,0x1CBC85F6L,0x99773C61L,0x06E2EAE3L,0x58B963BAL}},{{18446744073709551608UL,1UL,0UL,0x3E9C17D2L,0x271E3C1BL,0x7A3FFDA1L,0x8F4E9A48L},{0x6FD06999L,0x0645E6BFL,18446744073709551611UL,0UL,4UL,0UL,18446744073709551611UL},{18446744073709551615UL,18446744073709551615UL,0UL,0x03DE099FL,7UL,0x7E7F10C5L,18446744073709551608UL},{0x70B671F4L,18446744073709551609UL,18446744073709551608UL,4UL,0x1CBC85F6L,0UL,0UL},{0x820D4FB1L,18446744073709551615UL,0x4E5D89CBL,0xBAEB833CL,7UL,0xB33D460BL,5UL}},{{0xDB32AE97L,18446744073709551615UL,0x06E2EAE3L,0x70B671F4L,4UL,0x732B4D31L,1UL},{0xE6037EF5L,0x30B196CDL,0x3E9C17D2L,1UL,0x271E3C1BL,0UL,0x271E3C1BL},{1UL,0x732B4D31L,0x732B4D31L,1UL,0x99773C61L,18446744073709551611UL,8UL},{0x8F4E9A48L,0x820D4FB1L,0x8E0BF2CCL,0xB33D460BL,18446744073709551615UL,5UL,18446744073709551610UL},{0x7058A15DL,0xCB0D1459L,0x70B671F4L,18446744073709551608UL,0UL,5UL,8UL}},{{0x2F9908DAL,1UL,18446744073709551608UL,1UL,0UL,0x3E9C17D2L,0x271E3C1BL},{0x06E2EAE3L,0x58B963BAL,1UL,0x56F86932L,5UL,5UL,1UL},{0UL,0x4E5D89CBL,1UL,1UL,0x4E5D89CBL,0UL,5UL},{0x4836605DL,4UL,18446744073709551611UL,8UL,0x7058A15DL,0x56F86932L,0UL},{0x8BBEF94CL,0xA77DC34AL,18446744073709551610UL,0x8F4E9A48L,0xBAEB833CL,0xE6037EF5L,18446744073709551608UL}},{{0x45908365L,4UL,0xB5675B0DL,0UL,18446744073709551608UL,0xCB5917C7L,18446744073709551611UL},{0xA77DC34AL,0x4E5D89CBL,18446744073709551615UL,9UL,5UL,1UL,0x8F4E9A48L},{18446744073709551609UL,0x58B963BAL,0UL,18446744073709551611UL,18446744073709551611UL,0UL,0x58B963BAL},{18446744073709551615UL,0xA77DC34AL,0x2F9908DAL,18446744073709551615UL,0UL,0x4E5D89CBL,0UL},{0UL,0x58B963BAL,0x7058A15DL,0xCB0D1459L,0x70B671F4L,18446744073709551608UL,0UL}}};
                    uint64_t *****l_1380 = &g_1378;
                    int i, j, k;
                    l_1371++;
                    if (l_1374[1][4][6])
                        break;
                    if ((*g_165))
                        continue;
                    l_1375 = ((**g_164) ^= 0x0EE85504L);
                    l_1383[1] |= (safe_div_func_uint16_t_u_u((l_1334 , (((*l_1380) = g_1378) == &g_1379[0])), ((**l_1364) || ((++g_202) & 1UL))));
                }
                else
                { 
                    uint16_t l_1384 = 0xFF3DL;
                    union U1 *l_1411[7][1] = {{&g_748[0]},{&g_748[0]},{&g_748[0]},{&g_748[0]},{&g_748[0]},{&g_748[0]},{&g_748[0]}};
                    union U1 **l_1412[5];
                    uint32_t *l_1417 = &g_698;
                    int32_t l_1420 = 0L;
                    int i, j;
                    for (i = 0; i < 5; i++)
                        l_1412[i] = &g_999;
                    ++l_1384;
                    g_748[0].f1 |= (((*g_165) || l_1387) ^ (safe_sub_func_uint32_t_u_u((0xFA41L == ((safe_rshift_func_int16_t_s_s(((void*)0 == g_1394), 1)) == (safe_rshift_func_uint8_t_u_u(250UL, 1)))), (safe_mul_func_uint16_t_u_u(((0x00CAB79BL == (**g_164)) | 0x5E62FDB9A9C10C6CLL), (-7L))))));
                    (**g_164) = (1L || ((*l_29) ^= (-5L)));
                    (*g_165) = ((void*)0 != &g_1394);
                    l_1383[1] &= (((safe_rshift_func_int8_t_s_s(((*p_10) = (safe_sub_func_int8_t_s_s((safe_mod_func_int16_t_s_s(l_1370, (safe_sub_func_uint64_t_u_u(((safe_sub_func_int32_t_s_s((0x5F8AL < (**l_1364)), (l_1420 &= ((((l_1413 = l_1411[1][0]) == (l_1415 = (void*)0)) ^ (-4L)) , ((*l_1417)++))))) <= (safe_lshift_func_int8_t_s_s((-2L), 0))), (****g_1378))))), 0xBFL))), l_1423)) >= 0x32L) , 7L);
                }
                for (l_25.f1 = 7; (l_25.f1 != 7); l_25.f1 = safe_add_func_uint8_t_u_u(l_25.f1, 6))
                { 
                    return (**l_1364);
                }
                g_1414.f1 ^= (safe_lshift_func_int16_t_s_s((safe_div_func_uint32_t_u_u(((*l_1430) = (**l_1364)), (l_1447 |= ((((void*)0 == l_1431[0][1][1]) || (safe_add_func_int64_t_s_s((safe_lshift_func_uint8_t_u_u(((4294967287UL >= ((safe_mul_func_uint8_t_u_u((+(((*l_1443) = ((*l_1441) = ((*l_1439) = &g_218[0]))) != &g_545)), ((safe_sub_func_uint16_t_u_u(((**l_1364) <= (**l_1364)), 0xB100L)) != l_1423))) > 0L)) & (*g_54)), 3)), (**l_1364)))) ^ l_1383[1])))), l_1423));
            }
        }
        else
        { 
            int32_t *l_1452 = &g_576[1].f2;
            uint8_t ****l_1471 = &g_1468[0][2][0];
            int32_t l_1483 = 0xF85C3CB8L;
            int32_t l_1495 = 0x530CE4A3L;
            int32_t l_1498 = 0L;
            int32_t l_1500 = 0x62385911L;
            int32_t l_1505 = 1L;
            int32_t l_1507 = 0xE8D9E99EL;
            int32_t l_1510[6][7] = {{7L,7L,0xA99F3870L,0L,0x9A794E45L,0x1598C7E2L,0x609EB801L},{0L,0xA99F3870L,0x609EB801L,0L,1L,0x9A794E45L,0x2133A27EL},{0x1598C7E2L,0x346C5A1DL,0x9A794E45L,0x609EB801L,0x9A794E45L,0x346C5A1DL,0x1598C7E2L},{(-1L),0x1598C7E2L,0xE578239EL,0x609EB801L,7L,0x2133A27EL,0L},{(-1L),1L,(-1L),0L,(-1L),1L,1L},{(-1L),0L,0xE578239EL,0L,(-1L),0L,0xA99F3870L}};
            int16_t l_1514 = 1L;
            int8_t l_1515 = 0x8DL;
            struct S0 *l_1538 = &g_1304;
            union U1 l_1542[6][4] = {{{1UL},{0xB32CA385284FBE42LL},{1UL},{1UL}},{{0xB32CA385284FBE42LL},{0xB32CA385284FBE42LL},{0x8140C179630FE803LL},{0xB32CA385284FBE42LL}},{{0xB32CA385284FBE42LL},{1UL},{1UL},{0xB32CA385284FBE42LL}},{{1UL},{0xB32CA385284FBE42LL},{1UL},{1UL}},{{0xB32CA385284FBE42LL},{0xB32CA385284FBE42LL},{0x8140C179630FE803LL},{0xB32CA385284FBE42LL}},{{0xB32CA385284FBE42LL},{1UL},{1UL},{0xB32CA385284FBE42LL}}};
            int i, j;
            for (g_545 = (-5); (g_545 >= 42); g_545 = safe_add_func_int16_t_s_s(g_545, 7))
            { 
                uint64_t l_1455 = 0xEE891E0895382817LL;
                struct S0 *l_1461 = (void*)0;
                uint8_t * const *l_1467 = &l_1341[1];
                uint8_t * const **l_1466[5][6][4] = {{{&l_1467,&l_1467,&l_1467,&l_1467},{&l_1467,&l_1467,&l_1467,&l_1467},{&l_1467,&l_1467,&l_1467,&l_1467},{&l_1467,&l_1467,&l_1467,&l_1467},{&l_1467,&l_1467,(void*)0,&l_1467},{(void*)0,&l_1467,&l_1467,&l_1467}},{{&l_1467,&l_1467,&l_1467,&l_1467},{&l_1467,&l_1467,&l_1467,&l_1467},{&l_1467,&l_1467,&l_1467,&l_1467},{&l_1467,&l_1467,&l_1467,&l_1467},{&l_1467,&l_1467,&l_1467,&l_1467},{&l_1467,&l_1467,&l_1467,&l_1467}},{{&l_1467,&l_1467,&l_1467,&l_1467},{&l_1467,&l_1467,&l_1467,&l_1467},{&l_1467,&l_1467,&l_1467,&l_1467},{(void*)0,&l_1467,(void*)0,&l_1467},{&l_1467,&l_1467,&l_1467,&l_1467},{&l_1467,&l_1467,&l_1467,&l_1467}},{{&l_1467,&l_1467,&l_1467,&l_1467},{&l_1467,&l_1467,&l_1467,&l_1467},{&l_1467,&l_1467,&l_1467,&l_1467},{&l_1467,&l_1467,&l_1467,&l_1467},{&l_1467,&l_1467,&l_1467,&l_1467},{&l_1467,&l_1467,(void*)0,&l_1467}},{{(void*)0,&l_1467,&l_1467,&l_1467},{&l_1467,&l_1467,&l_1467,&l_1467},{&l_1467,&l_1467,&l_1467,&l_1467},{(void*)0,&l_1467,&l_1467,&l_1467},{&l_1467,&l_1467,&l_1467,&l_1467},{&l_1467,&l_1467,&l_1467,(void*)0}}};
                uint8_t * const ***l_1465[4];
                int i, j, k;
                for (i = 0; i < 4; i++)
                    l_1465[i] = &l_1466[3][5][0];
                if ((safe_mod_func_uint8_t_u_u((**l_1364), (**l_1364))))
                { 
                    (*l_1364) = l_1452;
                    if (l_1453[0])
                        break;
                }
                else
                { 
                    uint32_t l_1458 = 0xD187B725L;
                    struct S0 **l_1460[3];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_1460[i] = &g_575[0][0];
                    l_1455--;
                    l_1458 |= (**g_164);
                    if (l_1458)
                        continue;
                    l_1461 = l_1459;
                    if (l_1462)
                        break;
                }
                for (g_1304.f5 = (-4); (g_1304.f5 >= 34); ++g_1304.f5)
                { 
                    return l_1455;
                }
                g_1468[0][2][0] = (void*)0;
                (*g_164) = (*g_164);
            }
            for (g_658.f3.f1 = 0; (g_658.f3.f1 <= 0); g_658.f3.f1 += 1)
            { 
                int i;
                (*g_164) = &l_1144[4];
                (*l_1452) ^= (**g_164);
                return g_658.f0;
            }
            (*l_1364) = (*g_164);
            if ((l_1471 != (void*)0))
            { 
                uint64_t l_1486 = 0x84ACE30AED1C2A39LL;
                for (g_658.f3.f7 = (-7); (g_658.f3.f7 < (-22)); g_658.f3.f7 = safe_sub_func_int64_t_s_s(g_658.f3.f7, 1))
                { 
                    int16_t l_1484 = 0xD2B4L;
                    g_1000.f3.f2 = (((*l_29) |= ((2UL == (**g_756)) || ((((safe_sub_func_uint64_t_u_u((safe_unary_minus_func_int8_t_s(((g_575[0][0] = l_1459) != &g_576[2]))), ((-1L) != (safe_mod_func_int64_t_s_s((safe_sub_func_int32_t_s_s(((*g_165) ^= (safe_div_func_int8_t_s_s((*p_10), 0x84L))), 0x48C7CF3DL)), 0x2A15FBDF03E469B8LL))))) && 9UL) < l_1483) | g_1304.f7))) == l_1484);
                }
                l_1486--;
                if ((**g_164))
                    continue;
            }
            else
            { 
                uint32_t l_1489 = 0UL;
                uint16_t l_1493 = 0xFA20L;
                int32_t l_1496 = (-1L);
                int32_t l_1499[1][2];
                int16_t l_1518 = 1L;
                struct S0 l_1537[4] = {{-1L,0x46L,0L,0x5393CED3L,0UL,0x7CCCD9BE54276C16LL,0x55AD07D0L,0x5E86B66FED665552LL},{-1L,0x46L,0L,0x5393CED3L,0UL,0x7CCCD9BE54276C16LL,0x55AD07D0L,0x5E86B66FED665552LL},{-1L,0x46L,0L,0x5393CED3L,0UL,0x7CCCD9BE54276C16LL,0x55AD07D0L,0x5E86B66FED665552LL},{-1L,0x46L,0L,0x5393CED3L,0UL,0x7CCCD9BE54276C16LL,0x55AD07D0L,0x5E86B66FED665552LL}};
                int i, j;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 2; j++)
                        l_1499[i][j] = (-5L);
                }
                ++l_1489;
                for (l_1146 = 1; (l_1146 <= 4); l_1146 += 1)
                { 
                    uint32_t *l_1492[4] = {&l_1271,&l_1271,&l_1271,&l_1271};
                    int32_t l_1497 = 0x36E39DC5L;
                    int32_t l_1501 = 0xCEC8536EL;
                    int32_t l_1503 = 0x8C786C53L;
                    int32_t l_1506 = 5L;
                    int32_t l_1508 = 0x08F05BECL;
                    int32_t l_1509 = 0L;
                    int32_t l_1511 = (-6L);
                    int8_t l_1512 = 0xD3L;
                    int32_t l_1513 = 0xEB1716AEL;
                    int32_t l_1516 = (-1L);
                    int32_t l_1519 = 9L;
                    int32_t l_1520[6];
                    struct S0 l_1524 = {0x9FL,255UL,0L,0xE1AACE9FL,0UL,0x3F84BA06163AD40DLL,0x727BDE50L,0xB8561AF898AE50E3LL};
                    struct S0 **l_1539 = &l_1459;
                    int i;
                    for (i = 0; i < 6; i++)
                        l_1520[i] = 2L;
                    l_1415 = ((l_1144[l_1146] & (l_1493 = l_1144[l_1146])) , &g_1414);
                    l_1521++;
                }
                g_1000.f1 ^= ((*l_1452) = (*l_1452));
                (*l_1452) = (((**g_164) , l_1540) != (l_1541 , (l_1542[2][0] , &g_12[0])));
            }
        }
    }
    l_1546--;
    return g_1304.f6;
}



static union U1  func_22(union U1  p_23, int8_t * p_24)
{ 
    int16_t *l_34 = (void*)0;
    int16_t *l_35 = &g_30;
    uint16_t *l_36 = &g_37;
    int32_t l_53 = 0x974DB9BEL;
    int16_t **l_273 = &l_34;
    int64_t *l_318[1][2][5] = {{{&g_107,&g_208[1],&g_208[1],&g_107,&g_208[1]},{&g_107,&g_107,&g_208[1],&g_107,&g_107}}};
    struct S0 l_325 = {0x49L,0xDFL,1L,0UL,0UL,18446744073709551611UL,0xA8B59340L,0xE96FBF67AC453E17LL};
    uint32_t *l_336 = &g_8.f0;
    int32_t l_359 = 0x564BAA4FL;
    int32_t l_360[6][2][4] = {{{5L,(-1L),0xECECAF31L,0x663B8F41L},{0xFB938235L,0L,0xECECAF31L,0xADBB7581L}},{{5L,0xFB938235L,(-8L),(-8L)},{(-1L),0x98BB38E1L,4L,4L}},{{4L,4L,0x98BB38E1L,(-1L)},{(-8L),(-8L),0xFB938235L,5L}},{{0xADBB7581L,0xECECAF31L,0L,0xFB938235L},{0x663B8F41L,0xECECAF31L,(-1L),5L}},{{0xECECAF31L,(-8L),0x663B8F41L,(-1L)},{0x9AB5D039L,4L,(-1L),4L}},{{0x3BB20300L,0x98BB38E1L,5L,(-8L)},{0L,0xFB938235L,0x4C5CBDCEL,0xADBB7581L}}};
    uint32_t l_363 = 1UL;
    union U2 l_370 = {0x7D6F40B4L};
    const int16_t *l_432 = &g_433;
    union U1 l_440 = {0x2C1A0AEC7C12B1E2LL};
    int32_t *l_510 = (void*)0;
    union U1 *l_657 = &g_658;
    int32_t l_667 = 0x6DC296AFL;
    int64_t l_669 = (-2L);
    int32_t l_735 = (-6L);
    uint64_t **l_754 = &g_494;
    uint32_t l_790[4] = {1UL,1UL,1UL,1UL};
    int32_t l_886 = 0x1336C8BAL;
    uint8_t l_902 = 6UL;
    const uint32_t l_1061 = 0xFF6C81FAL;
    union U2 ***l_1079[4][2] = {{(void*)0,&g_1017},{(void*)0,&g_1017},{(void*)0,&g_1017},{(void*)0,&g_1017}};
    const uint64_t l_1094 = 1UL;
    uint32_t l_1096 = 0x2758F8C3L;
    int64_t l_1125 = 0xB79CBCAE7F1DADE4LL;
    int i, j, k;
    if (((((*g_11) ^ 0x29L) , (safe_mul_func_int64_t_s_s(((((*l_35) |= (~(-1L))) > (8UL | (++(*l_36)))) == 0UL), ((func_40(((*l_273) = func_43(l_35, func_48((((((safe_lshift_func_uint16_t_u_s(g_12[0], g_8.f4)) >= 0xBCAE26E1L) > 0x25C5L) ^ 254UL) <= l_53), g_54), l_53, p_23.f2)), p_23.f2) && 0x46124FE5L) > l_53)))) < l_53))
    { 
        int8_t l_284 = (-1L);
        int8_t *l_297[2][1];
        union U2 l_305[4] = {{9UL},{9UL},{9UL},{9UL}};
        uint8_t *l_306 = &g_218[0];
        int32_t *l_309 = (void*)0;
        int32_t *l_310 = &g_233[1][0];
        int i, j;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 1; j++)
                l_297[i][j] = (void*)0;
        }
lbl_299:
        for (g_94.f3.f6 = 0; (g_94.f3.f6 >= 0); g_94.f3.f6 -= 1)
        { 
            int8_t *l_287 = (void*)0;
            int32_t l_296 = 0x2C015D2AL;
            int32_t *l_298 = &g_57;
            int i;
            (*g_165) = (-7L);
            if (g_94.f0)
                goto lbl_299;
            (**g_164) = ((*l_298) &= ((safe_mul_func_uint8_t_u_u(255UL, ((((safe_add_func_int8_t_s_s(l_284, p_23.f2)) && ((safe_mod_func_uint64_t_u_u((((l_287 == ((safe_mul_func_int16_t_s_s((0x9AA8E274L != (((safe_mul_func_uint8_t_u_u(((safe_add_func_int32_t_s_s(((safe_mod_func_uint64_t_u_u(l_284, (l_284 && 4UL))) && (*g_165)), 0L)) ^ g_94.f1), l_296)) && l_53) != (*g_11))), 0UL)) , l_297[1][0])) || g_208[1]) < p_23.f2), p_23.f2)) | 0UL)) , (**g_164)) <= p_23.f2))) > g_205[1][2][3]));
        }
        (*l_310) = (safe_sub_func_int32_t_s_s(((safe_unary_minus_func_int16_t_s((((((*g_165) = (safe_mod_func_uint8_t_u_u(g_12[0], (l_305[2] , g_94.f1)))) > (&g_66 != (((l_53 >= ((((*l_306) &= p_23.f2) , ((safe_add_func_uint64_t_u_u(g_30, p_23.f0)) != 0x44AE2F33L)) , l_53)) , p_23.f0) , p_24))) , 0x0B69C91880072506LL) ^ g_8.f4))) || l_53), p_23.f2));
    }
    else
    { 
        uint32_t l_323 = 3UL;
        int32_t l_324 = (-1L);
        uint32_t *l_337 = &g_8.f3;
        int32_t l_362[5] = {0L,0L,0L,0L,0L};
        const uint16_t *l_388 = &g_389;
        const uint16_t **l_387[1][2];
        uint16_t **l_391 = &l_36;
        int16_t l_392 = 1L;
        uint8_t l_400 = 247UL;
        uint8_t l_407 = 247UL;
        union U2 *l_539[7] = {&l_370,(void*)0,&l_370,&l_370,(void*)0,&l_370,&l_370};
        int8_t *l_633 = (void*)0;
        int8_t *l_634 = &g_212;
        int32_t *l_635 = &l_359;
        struct S0 l_650[5][5][5] = {{{{1L,0x8EL,0x8141FBD5L,0x1AEB1615L,0x40F3L,0x8C66BE875256D2C9LL,-1L,3L},{0L,0xB7L,0x4257B8AEL,0xE9BC08BDL,65535UL,0xB6151125F9441107LL,0xB3A1A2C5L,0x76D7CC133CF4F4B3LL},{0L,0x36L,0x9DF29F16L,4294967295UL,0xB8B2L,0UL,0x2E1F67A4L,1L},{1L,255UL,5L,4294967295UL,0UL,18446744073709551614UL,-1L,0xA91C1B70E989F6CBLL},{3L,0UL,0L,9UL,1UL,18446744073709551612UL,-6L,0x466F3723F1D662DELL}},{{-2L,255UL,0xFFDB15E0L,0xCA37D2BBL,0x8876L,0xC23CAF97A20D50B5LL,0xF12FC914L,0L},{1L,0x0FL,0xA603351BL,0UL,6UL,0xDEFBE28BD4F8723CLL,1L,0x13615DBC05FA5078LL},{-10L,0x7CL,1L,0x13870814L,0xC81BL,0x2149D199C3FD0952LL,0x059E70EBL,0x664F75AC3A23D7ACLL},{2L,0xEBL,0x5291E6E9L,0x0287D37BL,0x1C95L,1UL,0x2C0A490EL,-5L},{-8L,0x02L,-2L,8UL,1UL,0UL,0xB3C4DF7FL,0xFF4F7721697F8CBDLL}},{{0xFCL,6UL,0x1A78ACB7L,4294967294UL,0UL,0x9B50C51C73CFBC01LL,0xA85723A6L,-1L},{1L,255UL,5L,4294967295UL,0UL,18446744073709551614UL,-1L,0xA91C1B70E989F6CBLL},{0xAAL,0xAFL,0x3AA35BEFL,0x93E3C792L,0xF11AL,18446744073709551606UL,0x7A6DD19BL,-2L},{7L,255UL,6L,0UL,1UL,0xBE24593B90B4CFDELL,-3L,0xC1450C9C48DB4E98LL},{0xECL,0xA3L,0x053CCBE0L,4294967293UL,3UL,2UL,0x45AFD174L,9L}},{{-8L,0x02L,-2L,8UL,1UL,0UL,0xB3C4DF7FL,0xFF4F7721697F8CBDLL},{-2L,255UL,0xFFDB15E0L,0xCA37D2BBL,0x8876L,0xC23CAF97A20D50B5LL,0xF12FC914L,0L},{0xA9L,1UL,0L,1UL,5UL,0x8CE425E296FDCCB6LL,0xEE33DA46L,2L},{-1L,0xFFL,0x94A236D9L,1UL,0UL,0xC2D5B1AC65E792FBLL,0x3CCE24F4L,0x1D2243A1D68365B7LL},{0xC9L,0xA7L,0x679DFEA6L,0x4330EA97L,0x92E2L,2UL,-4L,2L}},{{0x2AL,0x03L,0x40E3FADCL,4294967287UL,65528UL,0x6822504813323022LL,0x5E5A2C57L,-8L},{0x90L,0x7BL,1L,0xD8DB4509L,1UL,0x5FFE0A4800508975LL,0x473F862AL,0L},{0xC4L,254UL,-1L,4294967295UL,0x9589L,9UL,0xDD6C223AL,-6L},{-7L,2UL,-3L,0x1133F69EL,65533UL,18446744073709551611UL,0xE3A38EF0L,0x08E6329F8CB4DF63LL},{-1L,0x47L,0x03EF6882L,0xA7A63ABEL,0xBC39L,0UL,0x12395245L,0L}}},{{{-3L,246UL,1L,0x04242947L,1UL,18446744073709551615UL,1L,0x113BA24787286917LL},{-8L,1UL,0x5F9E022BL,4294967292UL,0x339DL,1UL,0xE0A170D4L,0xAB7B51AFF27FE8F8LL},{0xC4L,254UL,-1L,4294967295UL,0x9589L,9UL,0xDD6C223AL,-6L},{0L,0xB7L,0x4257B8AEL,0xE9BC08BDL,65535UL,0xB6151125F9441107LL,0xB3A1A2C5L,0x76D7CC133CF4F4B3LL},{1L,0x83L,0xD1C60B4FL,1UL,0UL,18446744073709551615UL,1L,2L}},{{-7L,2UL,-3L,0x1133F69EL,65533UL,18446744073709551611UL,0xE3A38EF0L,0x08E6329F8CB4DF63LL},{-10L,0x7CL,1L,0x13870814L,0xC81BL,0x2149D199C3FD0952LL,0x059E70EBL,0x664F75AC3A23D7ACLL},{0xA9L,1UL,0L,1UL,5UL,0x8CE425E296FDCCB6LL,0xEE33DA46L,2L},{0xA9L,1UL,0L,1UL,5UL,0x8CE425E296FDCCB6LL,0xEE33DA46L,2L},{-10L,0x7CL,1L,0x13870814L,0xC81BL,0x2149D199C3FD0952LL,0x059E70EBL,0x664F75AC3A23D7ACLL}},{{0xA3L,8UL,0x8AF7B4F8L,0x8A420B34L,65531UL,1UL,0x552C69DEL,0xBF7883952FDB374FLL},{-7L,2UL,-3L,0x1133F69EL,65533UL,18446744073709551611UL,0xE3A38EF0L,0x08E6329F8CB4DF63LL},{0xAAL,0xAFL,0x3AA35BEFL,0x93E3C792L,0xF11AL,18446744073709551606UL,0x7A6DD19BL,-2L},{0xFCL,6UL,0x1A78ACB7L,4294967294UL,0UL,0x9B50C51C73CFBC01LL,0xA85723A6L,-1L},{0x41L,0x81L,0x037CF13DL,5UL,65535UL,1UL,-8L,0xEB176F885D4AC49CLL}},{{1L,0x0FL,0xA603351BL,0UL,6UL,0xDEFBE28BD4F8723CLL,1L,0x13615DBC05FA5078LL},{-3L,0UL,0x37D7BEE1L,0UL,0x1A79L,0xE0D409AC2188C047LL,0x01228F25L,0L},{-10L,0x7CL,1L,0x13870814L,0xC81BL,0x2149D199C3FD0952LL,0x059E70EBL,0x664F75AC3A23D7ACLL},{0xECL,0xA3L,0x053CCBE0L,4294967293UL,3UL,2UL,0x45AFD174L,9L},{0xA8L,0x3BL,0xFAF63A57L,3UL,6UL,1UL,1L,0x72074621008FAE6FLL}},{{0xDEL,0xB5L,7L,4294967294UL,3UL,0xCF3E8D56820D7E22LL,7L,0x5859CEE985E732DDLL},{-8L,250UL,-1L,1UL,1UL,18446744073709551615UL,0x984D4303L,1L},{0L,0x36L,0x9DF29F16L,4294967295UL,0xB8B2L,0UL,0x2E1F67A4L,1L},{-3L,0UL,0x37D7BEE1L,0UL,0x1A79L,0xE0D409AC2188C047LL,0x01228F25L,0L},{0L,0xB7L,0x4257B8AEL,0xE9BC08BDL,65535UL,0xB6151125F9441107LL,0xB3A1A2C5L,0x76D7CC133CF4F4B3LL}}},{{{1L,0x0FL,0xA603351BL,0UL,6UL,0xDEFBE28BD4F8723CLL,1L,0x13615DBC05FA5078LL},{1L,0x8EL,0x8141FBD5L,0x1AEB1615L,0x40F3L,0x8C66BE875256D2C9LL,-1L,3L},{0x97L,4UL,5L,9UL,0xE0EFL,3UL,-7L,0xD756FDE4D85EA957LL},{0x2AL,0x03L,0x40E3FADCL,4294967287UL,65528UL,0x6822504813323022LL,0x5E5A2C57L,-8L},{-8L,1UL,0x5F9E022BL,4294967292UL,0x339DL,1UL,0xE0A170D4L,0xAB7B51AFF27FE8F8LL}},{{0xA3L,8UL,0x8AF7B4F8L,0x8A420B34L,65531UL,1UL,0x552C69DEL,0xBF7883952FDB374FLL},{-1L,0xFFL,0x94A236D9L,1UL,0UL,0xC2D5B1AC65E792FBLL,0x3CCE24F4L,0x1D2243A1D68365B7LL},{1L,0x83L,0xD1C60B4FL,1UL,0UL,18446744073709551615UL,1L,2L},{1L,0x69L,0xF977CB2FL,0x6605E367L,0xAF6AL,1UL,0x2185F7A6L,-1L},{0x67L,4UL,0xA73A2246L,0x13987024L,4UL,0xA2601AC079000EAALL,1L,0L}},{{-7L,2UL,-3L,0x1133F69EL,65533UL,18446744073709551611UL,0xE3A38EF0L,0x08E6329F8CB4DF63LL},{-3L,246UL,1L,0x04242947L,1UL,18446744073709551615UL,1L,0x113BA24787286917LL},{0x67L,4UL,0xA73A2246L,0x13987024L,4UL,0xA2601AC079000EAALL,1L,0L},{1L,0x83L,0xD1C60B4FL,1UL,0UL,18446744073709551615UL,1L,2L},{0L,249UL,0xEA58E99EL,0xF6DF3AFCL,1UL,0xB9ED5878FCB9389ELL,0x0FEBCDB8L,0L}},{{-3L,246UL,1L,0x04242947L,1UL,18446744073709551615UL,1L,0x113BA24787286917LL},{0x97L,4UL,5L,9UL,0xE0EFL,3UL,-7L,0xD756FDE4D85EA957LL},{0xFCL,6UL,0x1A78ACB7L,4294967294UL,0UL,0x9B50C51C73CFBC01LL,0xA85723A6L,-1L},{1L,0x83L,0xD1C60B4FL,1UL,0UL,18446744073709551615UL,1L,2L},{1L,0x8EL,0x8141FBD5L,0x1AEB1615L,0x40F3L,0x8C66BE875256D2C9LL,-1L,3L}},{{0x2AL,0x03L,0x40E3FADCL,4294967287UL,65528UL,0x6822504813323022LL,0x5E5A2C57L,-8L},{0xDEL,0xB5L,7L,4294967294UL,3UL,0xCF3E8D56820D7E22LL,7L,0x5859CEE985E732DDLL},{-1L,255UL,0xF7D7C468L,0x7FA648F9L,0xB478L,0x74C370AD795EE0DDLL,0x956EBF27L,0x7577905DF63ABC9FLL},{1L,0x69L,0xF977CB2FL,0x6605E367L,0xAF6AL,1UL,0x2185F7A6L,-1L},{-1L,255UL,0xF7D7C468L,0x7FA648F9L,0xB478L,0x74C370AD795EE0DDLL,0x956EBF27L,0x7577905DF63ABC9FLL}}},{{{-8L,0x02L,-2L,8UL,1UL,0UL,0xB3C4DF7FL,0xFF4F7721697F8CBDLL},{-8L,0x02L,-2L,8UL,1UL,0UL,0xB3C4DF7FL,0xFF4F7721697F8CBDLL},{0x7DL,0xD3L,-1L,0x804E01FDL,1UL,0x68BAD50CB9197CDALL,-8L,0x6FCE11C32D835AC4LL},{0x2AL,0x03L,0x40E3FADCL,4294967287UL,65528UL,0x6822504813323022LL,0x5E5A2C57L,-8L},{-8L,250UL,-1L,1UL,1UL,18446744073709551615UL,0x984D4303L,1L}},{{0xFCL,6UL,0x1A78ACB7L,4294967294UL,0UL,0x9B50C51C73CFBC01LL,0xA85723A6L,-1L},{0x41L,0x81L,0x037CF13DL,5UL,65535UL,1UL,-8L,0xEB176F885D4AC49CLL},{0x90L,0x7BL,1L,0xD8DB4509L,1UL,0x5FFE0A4800508975LL,0x473F862AL,0L},{0xDEL,0xB5L,7L,4294967294UL,3UL,0xCF3E8D56820D7E22LL,7L,0x5859CEE985E732DDLL},{-8L,250UL,-1L,1UL,1UL,18446744073709551615UL,0x984D4303L,1L}},{{0x67L,4UL,0xA73A2246L,0x13987024L,4UL,0xA2601AC079000EAALL,1L,0L},{1L,0x0FL,0xA603351BL,0UL,6UL,0xDEFBE28BD4F8723CLL,1L,0x13615DBC05FA5078LL},{0xA9L,1UL,0L,1UL,5UL,0x8CE425E296FDCCB6LL,0xEE33DA46L,2L},{0xFCL,6UL,0x1A78ACB7L,4294967294UL,0UL,0x9B50C51C73CFBC01LL,0xA85723A6L,-1L},{7L,255UL,6L,0UL,1UL,0xBE24593B90B4CFDELL,-3L,0xC1450C9C48DB4E98LL}},{{-7L,2UL,-3L,0x1133F69EL,65533UL,18446744073709551611UL,0xE3A38EF0L,0x08E6329F8CB4DF63LL},{0x41L,0x81L,0x037CF13DL,5UL,65535UL,1UL,-8L,0xEB176F885D4AC49CLL},{0x7DL,0xD3L,-1L,0x804E01FDL,1UL,0x68BAD50CB9197CDALL,-8L,0x6FCE11C32D835AC4LL},{0xC4L,254UL,-1L,4294967295UL,0x9589L,9UL,0xDD6C223AL,-6L},{0xDEL,0xB5L,7L,4294967294UL,3UL,0xCF3E8D56820D7E22LL,7L,0x5859CEE985E732DDLL}},{{2L,0xEBL,0x5291E6E9L,0x0287D37BL,0x1C95L,1UL,0x2C0A490EL,-5L},{0x7DL,0xD3L,-1L,0x804E01FDL,1UL,0x68BAD50CB9197CDALL,-8L,0x6FCE11C32D835AC4LL},{0x67L,4UL,0xA73A2246L,0x13987024L,4UL,0xA2601AC079000EAALL,1L,0L},{-10L,0x7CL,1L,0x13870814L,0xC81BL,0x2149D199C3FD0952LL,0x059E70EBL,0x664F75AC3A23D7ACLL},{0x90L,0x7BL,1L,0xD8DB4509L,1UL,0x5FFE0A4800508975LL,0x473F862AL,0L}}},{{{0xFCL,6UL,0x1A78ACB7L,4294967294UL,0UL,0x9B50C51C73CFBC01LL,0xA85723A6L,-1L},{-1L,0x47L,0x03EF6882L,0xA7A63ABEL,0xBC39L,0UL,0x12395245L,0L},{0x87L,0x5AL,0x1570682FL,0UL,0xA1BFL,0x878B8FAC5BA30A4BLL,0L,0x4BA3BF67C02A0EE1LL},{0xC9L,0xA7L,0x679DFEA6L,0x4330EA97L,0x92E2L,2UL,-4L,2L},{3L,0UL,0L,9UL,1UL,18446744073709551612UL,-6L,0x466F3723F1D662DELL}},{{-3L,0UL,0x37D7BEE1L,0UL,0x1A79L,0xE0D409AC2188C047LL,0x01228F25L,0L},{0xA8L,0x3BL,0xFAF63A57L,3UL,6UL,1UL,1L,0x72074621008FAE6FLL},{0L,0UL,1L,1UL,1UL,18446744073709551608UL,0x897B2B52L,0xA4A0AA8C4616EAC6LL},{1L,0x83L,0xD1C60B4FL,1UL,0UL,18446744073709551615UL,1L,2L},{3L,0UL,0L,9UL,1UL,18446744073709551612UL,-6L,0x466F3723F1D662DELL}},{{0L,249UL,0xEA58E99EL,0xF6DF3AFCL,1UL,0xB9ED5878FCB9389ELL,0x0FEBCDB8L,0L},{-1L,255UL,0xF7D7C468L,0x7FA648F9L,0xB478L,0x74C370AD795EE0DDLL,0x956EBF27L,0x7577905DF63ABC9FLL},{7L,255UL,6L,0UL,1UL,0xBE24593B90B4CFDELL,-3L,0xC1450C9C48DB4E98LL},{0x90L,0x7BL,1L,0xD8DB4509L,1UL,0x5FFE0A4800508975LL,0x473F862AL,0L},{0x90L,0x7BL,1L,0xD8DB4509L,1UL,0x5FFE0A4800508975LL,0x473F862AL,0L}},{{1L,0x0FL,0xA603351BL,0UL,6UL,0xDEFBE28BD4F8723CLL,1L,0x13615DBC05FA5078LL},{0x90L,0x7BL,1L,0xD8DB4509L,1UL,0x5FFE0A4800508975LL,0x473F862AL,0L},{1L,0x0FL,0xA603351BL,0UL,6UL,0xDEFBE28BD4F8723CLL,1L,0x13615DBC05FA5078LL},{-3L,246UL,1L,0x04242947L,1UL,18446744073709551615UL,1L,0x113BA24787286917LL},{0xDEL,0xB5L,7L,4294967294UL,3UL,0xCF3E8D56820D7E22LL,7L,0x5859CEE985E732DDLL}},{{-10L,0x7CL,1L,0x13870814L,0xC81BL,0x2149D199C3FD0952LL,0x059E70EBL,0x664F75AC3A23D7ACLL},{-7L,2UL,-3L,0x1133F69EL,65533UL,18446744073709551611UL,0xE3A38EF0L,0x08E6329F8CB4DF63LL},{0xECL,0xA3L,0x053CCBE0L,4294967293UL,3UL,2UL,0x45AFD174L,9L},{0L,0x36L,0x9DF29F16L,4294967295UL,0xB8B2L,0UL,0x2E1F67A4L,1L},{7L,255UL,6L,0UL,1UL,0xBE24593B90B4CFDELL,-3L,0xC1450C9C48DB4E98LL}}}};
        int32_t l_664 = (-9L);
        uint64_t * const *l_753 = &g_494;
        int32_t l_799[1][5] = {{(-7L),(-7L),(-7L),(-7L),(-7L)}};
        const int64_t l_814[5] = {0L,0L,0L,0L,0L};
        uint16_t l_842 = 0xE7DEL;
        int16_t **l_870 = &g_795;
        int i, j, k;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 2; j++)
                l_387[i][j] = &l_388;
        }
    }
    if ((&l_36 != ((*g_852) = &l_36)))
    { 
        int64_t l_916[7][4][4] = {{{8L,8L,0x9D46008467CE3123LL,8L},{8L,(-1L),(-1L),8L},{(-1L),8L,(-1L),(-1L)},{8L,8L,0x9D46008467CE3123LL,8L}},{{8L,(-1L),(-1L),8L},{(-1L),8L,(-1L),(-1L)},{8L,8L,0x9D46008467CE3123LL,8L},{8L,(-1L),(-1L),8L}},{{(-1L),8L,(-1L),(-1L)},{8L,8L,0x9D46008467CE3123LL,8L},{8L,(-1L),(-1L),8L},{(-1L),8L,(-1L),(-1L)}},{{8L,8L,0x9D46008467CE3123LL,8L},{8L,(-1L),(-1L),8L},{(-1L),8L,(-1L),(-1L)},{8L,8L,0x9D46008467CE3123LL,8L}},{{8L,(-1L),(-1L),8L},{(-1L),8L,(-1L),(-1L)},{8L,8L,0x9D46008467CE3123LL,8L},{8L,(-1L),(-1L),8L}},{{(-1L),8L,(-1L),(-1L)},{8L,8L,0x9D46008467CE3123LL,8L},{8L,(-1L),(-1L),8L},{(-1L),8L,(-1L),(-1L)}},{{8L,8L,0x9D46008467CE3123LL,8L},{8L,(-1L),(-1L),8L},{(-1L),8L,(-1L),(-1L)},{8L,8L,0x9D46008467CE3123LL,8L}}};
        int32_t l_936[3][1];
        int32_t l_937[5][2] = {{0xFD42A050L,0xFD42A050L},{0xFD42A050L,0xFD42A050L},{0xFD42A050L,0xFD42A050L},{0xFD42A050L,0xFD42A050L},{0xFD42A050L,0xFD42A050L}};
        union U1 l_949[7][2] = {{{0x52BF8142D3B7A784LL},{0x52BF8142D3B7A784LL}},{{0x52BF8142D3B7A784LL},{0x52BF8142D3B7A784LL}},{{0x52BF8142D3B7A784LL},{0x52BF8142D3B7A784LL}},{{0x52BF8142D3B7A784LL},{0x52BF8142D3B7A784LL}},{{0x52BF8142D3B7A784LL},{0x52BF8142D3B7A784LL}},{{0x52BF8142D3B7A784LL},{0x52BF8142D3B7A784LL}},{{0x52BF8142D3B7A784LL},{0x52BF8142D3B7A784LL}}};
        struct S0 *l_975 = &g_576[1];
        uint16_t *l_992 = &g_576[1].f4;
        union U2 l_1005[1][1][6] = {{{{4294967295UL},{4294967295UL},{4294967295UL},{4294967295UL},{4294967295UL},{4294967295UL}}}};
        const union U2 **l_1015 = (void*)0;
        const union U2 ***l_1014 = &l_1015;
        uint32_t l_1039 = 0UL;
        const int8_t * const l_1093 = &l_325.f0;
        const int8_t * const *l_1092 = &l_1093;
        int8_t *l_1118 = &g_212;
        uint16_t l_1130 = 0x90A8L;
        const int32_t l_1131 = 0xCC6FF1B8L;
        int i, j, k;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 1; j++)
                l_936[i][j] = 0xD2FA50F1L;
        }
        for (g_798 = 0; (g_798 <= 1); g_798 += 1)
        { 
            struct S0 *l_911 = &g_576[1];
            struct S0 **l_912 = &l_911;
            int32_t l_920 = 0x605FA032L;
            uint64_t ***l_923 = &l_754;
            uint32_t l_950[3];
            union U2 l_1063 = {4294967295UL};
            int8_t l_1071 = 3L;
            union U2 ***l_1081 = &g_1017;
            union U2 ****l_1080 = &l_1081;
            int32_t *l_1097 = &l_359;
            int32_t *l_1098 = &g_719[1];
            int32_t *l_1099 = &g_233[1][0];
            int32_t *l_1100[7][7][3] = {{{&l_936[2][0],&g_719[1],&g_719[1]},{&g_57,(void*)0,(void*)0},{&g_94.f1,&l_949[1][0].f1,&g_719[1]},{&l_359,&g_1000.f1,&g_1000.f1},{&g_576[1].f2,&l_359,&g_719[1]},{&g_233[3][1],&l_359,&l_949[1][0].f1},{&l_360[4][0][2],&l_359,&g_57}},{{&l_360[5][0][2],&g_1000.f1,&l_440.f1},{&g_555.f2,&l_949[1][0].f1,&l_936[1][0]},{(void*)0,(void*)0,&g_748[0].f1},{&g_555.f2,&g_719[1],&l_949[1][0].f1},{&l_360[5][0][2],&g_748[0].f1,&g_658.f1},{&l_360[4][0][2],&g_748[0].f1,&g_748[0].f1},{&g_233[3][1],&g_1000.f1,&g_658.f1}},{{&g_576[1].f2,&g_1000.f1,&l_949[1][0].f1},{&l_359,&l_440.f1,&g_748[0].f1},{&g_94.f1,&g_233[4][0],&l_936[1][0]},{&g_57,&l_440.f1,&l_440.f1},{&l_936[2][0],&g_1000.f1,&g_57},{(void*)0,&g_1000.f1,&l_949[1][0].f1},{&l_949[1][0].f1,&g_748[0].f1,&g_719[1]}},{{(void*)0,&g_748[0].f1,&g_1000.f1},{&l_936[2][0],&g_719[1],&g_719[1]},{&g_57,(void*)0,(void*)0},{&g_94.f1,&l_949[1][0].f1,&g_719[1]},{&l_359,&g_1000.f1,&g_1000.f1},{&g_576[1].f2,&l_359,&g_719[1]},{&g_233[3][1],&l_359,&l_949[1][0].f1}},{{&l_360[4][0][2],&l_359,&g_57},{&l_360[5][0][2],&g_1000.f1,&l_440.f1},{&g_555.f2,&l_949[1][0].f1,&l_936[1][0]},{(void*)0,(void*)0,&g_748[0].f1},{&g_555.f2,&g_719[1],&l_949[1][0].f1},{&l_360[5][0][2],&g_748[0].f1,&g_658.f1},{&l_360[4][0][2],&g_748[0].f1,&g_748[0].f1}},{{&g_233[3][1],&g_1000.f1,&g_658.f1},{&g_576[1].f2,&g_1000.f1,&l_949[1][0].f1},{&l_359,&l_440.f1,&g_748[0].f1},{&g_94.f1,&g_233[4][0],&l_936[1][0]},{&g_57,&l_440.f1,&l_440.f1},{&l_936[2][0],&g_1000.f1,&g_57},{(void*)0,&g_1000.f1,&l_949[1][0].f1}},{{&l_949[1][0].f1,&g_748[0].f1,&g_719[1]},{(void*)0,&g_748[0].f1,&g_1000.f1},{&l_936[2][0],&g_719[1],&g_719[1]},{&g_57,(void*)0,(void*)0},{&g_94.f1,&l_949[1][0].f1,&g_719[1]},{&l_359,&g_1000.f1,&g_1000.f1},{&g_576[1].f2,&l_359,&g_719[1]}}};
            int i, j, k;
            for (i = 0; i < 3; i++)
                l_950[i] = 1UL;
            (**g_164) &= ((((((l_325 , (((*l_912) = l_911) == (void*)0)) <= (safe_mod_func_int64_t_s_s((l_920 |= (p_23.f1 , ((safe_unary_minus_func_int8_t_s(l_916[6][1][1])) ^ ((safe_rshift_func_int16_t_s_u(p_23.f1, (safe_unary_minus_func_int64_t_s(((-5L) < (-8L)))))) == 0L)))), 0xBBB2FF97A8B60B41LL))) | (*p_24)) && (*g_11)) || p_23.f1) , 1L);
            for (l_440.f3.f5 = 0; (l_440.f3.f5 <= 1); l_440.f3.f5 += 1)
            { 
                int8_t l_933 = 0L;
                int32_t l_934[4] = {0xAB35547DL,0xAB35547DL,0xAB35547DL,0xAB35547DL};
                int32_t *l_935 = (void*)0;
                uint32_t *l_943 = &l_370.f3;
                uint16_t *l_948[1];
                union U1 **l_971 = &l_657;
                union U2 l_972[3][4] = {{{0xAFB45202L},{0xAFB45202L},{0xAFB45202L},{0xAFB45202L}},{{0xAFB45202L},{0xAFB45202L},{0xAFB45202L},{0xAFB45202L}},{{0xAFB45202L},{0xAFB45202L},{0xAFB45202L},{0xAFB45202L}}};
                int32_t *l_987 = &l_936[2][0];
                int i, j;
                for (i = 0; i < 1; i++)
                    l_948[i] = (void*)0;
            }
            if ((safe_mul_func_int8_t_s_s((safe_rshift_func_int8_t_s_u(((void*)0 == l_992), l_920)), (p_23.f1 & p_23.f1))))
            { 
                union U1 **l_1001 = &l_657;
                union U2 l_1002[1][2][1] = {{{{4294967288UL}},{{4294967288UL}}}};
                const int32_t l_1018[2] = {(-4L),(-4L)};
                struct S0 l_1029 = {0x22L,0xD7L,0x117C5F20L,4294967287UL,0x87DCL,5UL,0x0A5836A0L,1L};
                int32_t *l_1030 = &g_77;
                int32_t *l_1031 = (void*)0;
                int32_t *l_1032 = &l_936[2][0];
                int32_t *l_1033 = (void*)0;
                int32_t *l_1034 = &g_94.f1;
                int32_t *l_1035 = &g_94.f3.f2;
                int32_t *l_1036 = &l_936[2][0];
                int32_t *l_1037 = (void*)0;
                int32_t *l_1038[4][1][7] = {{{&l_920,&l_936[0][0],&l_1029.f2,&l_1029.f2,&l_936[0][0],&l_920,&l_936[0][0]}},{{&g_233[1][0],&l_920,&l_920,&g_233[1][0],&l_936[0][0],&g_233[1][0],&l_920}},{{&l_936[2][0],&l_936[2][0],&l_920,&l_1029.f2,&l_920,&l_920,&l_920}},{{&l_920,&g_233[1][0],&l_936[0][0],&g_233[1][0],&l_920,&l_920,&g_233[1][0]}}};
                int i, j, k;
                (*g_165) = (safe_mod_func_uint8_t_u_u(((safe_div_func_uint8_t_u_u((((p_23.f2 , (safe_lshift_func_uint16_t_u_s(((g_999 = &p_23) == ((*l_1001) = &p_23)), 9))) , l_1002[0][1][0]) , (safe_mod_func_uint8_t_u_u((((((l_1005[0][0][1] , (safe_add_func_uint64_t_u_u(((safe_mul_func_int16_t_s_s((((*g_494) = (safe_mul_func_int16_t_s_s(((*l_35) = p_23.f0), (safe_add_func_int8_t_s_s((l_1014 == g_1016), (*p_24)))))) , (-1L)), l_950[0])) <= p_23.f1), 18446744073709551615UL))) ^ 0UL) >= l_950[0]) && p_23.f2) <= p_23.f2), 0x21L))), l_950[2])) , l_1002[0][1][0].f3), l_1018[0]));
                (*g_165) = (((p_23.f0 > g_8.f3) , p_23.f2) ^ (safe_lshift_func_uint16_t_u_s(((*g_54) = (((safe_add_func_uint16_t_u_u((safe_mul_func_int16_t_s_s(((safe_lshift_func_uint8_t_u_u(((((safe_lshift_func_uint16_t_u_s(0xA76BL, 7)) > 0UL) > 0xB84F7FDAC3400A4ALL) && (((l_1029 , p_23) , 18446744073709551615UL) || (*g_494))), 5)) >= (**g_164)), p_23.f1)), g_576[1].f2)) , (void*)0) != (void*)0)), p_23.f0)));
                (*g_165) = (*g_165);
                l_1039--;
                for (g_94.f3.f6 = 22; (g_94.f3.f6 >= 9); g_94.f3.f6 = safe_sub_func_int32_t_s_s(g_94.f3.f6, 5))
                { 
                    uint32_t l_1044 = 4294967289UL;
                    --l_1044;
                    (*g_165) = 0x813BF32EL;
                    (*l_1032) ^= (safe_add_func_uint8_t_u_u((((safe_lshift_func_uint16_t_u_s((safe_mod_func_int64_t_s_s(((((safe_rshift_func_int8_t_s_s((l_920 = ((l_950[0] == (((safe_mul_func_int16_t_s_s(1L, (safe_sub_func_int8_t_s_s(((*p_24) = (((safe_sub_func_int8_t_s_s((l_1061 && (!0x8DL)), l_1044)) ^ (p_23.f1 > p_23.f0)) , (*p_24))), 0x13L)))) && g_208[1]) , 18446744073709551615UL)) & 1L)), 6)) , l_1063) , l_1005[0][0][1].f4) || p_23.f0), g_233[1][0])), 4)) != (*g_494)) | 0xC5L), l_1005[0][0][1].f0));
                }
            }
            else
            { 
                int32_t *l_1064 = &l_920;
                int32_t *l_1072 = &g_233[6][0];
                (*l_1072) |= (((*l_1064) ^= (*g_165)) >= (l_1063.f3 , ((0L >= (safe_mod_func_uint32_t_u_u((safe_rshift_func_int8_t_s_u((0UL >= ((*l_36) |= (((safe_sub_func_uint32_t_u_u(((void*)0 == &l_916[6][1][1]), (g_555.f3 &= g_576[1].f5))) < p_23.f0) , p_23.f2))), 7)), l_1005[0][0][1].f4))) & l_1071)));
                (**g_164) &= (l_1063 , p_23.f2);
            }
            (*g_165) = ((safe_rshift_func_uint8_t_u_s(((((((safe_div_func_uint16_t_u_u(((((**g_756) != (l_1079[3][0] != ((*l_1080) = l_1079[0][1]))) , (safe_mul_func_uint16_t_u_u((((((((safe_lshift_func_int8_t_s_u((safe_mod_func_uint64_t_u_u((safe_mul_func_int8_t_s_s((((((safe_lshift_func_int8_t_s_s((*p_24), 3)) < ((&g_11 != l_1092) >= (l_1094 && l_937[3][1]))) != p_23.f0) == 0L) , 0x7AL), 0x6BL)), g_798)), p_23.f1)) > (-10L)) == p_23.f0) & 0x81L) ^ l_920) | p_23.f1) ^ 0UL), g_1095))) ^ l_1063.f0), 8UL)) , l_949[1][0].f0) < 0xA9141268L) == 0x01L) & (**g_164)) ^ l_1096), (*p_24))) == 9L);
            ++g_1101;
        }
        (**g_164) = (safe_div_func_int16_t_s_s((l_936[1][0] = p_23.f1), (safe_sub_func_uint8_t_u_u(((0x15093D4EA8387A73LL | (!(safe_add_func_int64_t_s_s(((*p_24) && (safe_div_func_int32_t_s_s(((safe_lshift_func_uint8_t_u_u((+(((*g_494) = ((*g_11) < ((*l_1118) = (*p_24)))) | (((((g_738[0][1][4]++) != ((safe_mod_func_int64_t_s_s((((((p_23.f0 != (safe_lshift_func_uint8_t_u_s((l_949[1][0].f2 != l_916[1][1][2]), (*p_24)))) , p_23.f0) > l_1005[0][0][1].f0) == 8UL) && g_218[1]), (-8L))) == 5UL)) & (-9L)) , l_1125) > p_23.f0))), l_916[1][1][3])) > l_1005[0][0][1].f2), l_1039))), l_1005[0][0][1].f4)))) == (-8L)), g_8.f2))));
        (**g_164) = (safe_lshift_func_uint8_t_u_s((safe_sub_func_uint8_t_u_u(0x39L, (l_1130 == 0x503C3BD2056F43C3LL))), (*p_24)));
        (**g_164) = l_1131;
    }
    else
    { 
        int8_t l_1136[5][4][5] = {{{(-4L),0xBBL,1L,1L,1L},{0x22L,(-3L),0xCBL,2L,4L},{2L,1L,(-1L),1L,2L},{0xAFL,0x84L,(-6L),0x22L,(-3L)}},{{1L,1L,1L,0xBBL,(-4L)},{4L,(-3L),0x84L,0x84L,(-3L)},{2L,0xBBL,0xC1L,0L,2L},{(-3L),2L,0x84L,0x22L,4L}},{{(-4L),0L,1L,0xE2L,1L},{(-3L),(-3L),(-6L),2L,0xAFL},{2L,0xE2L,(-1L),0xE2L,2L},{4L,0x84L,0xCBL,0x22L,0x22L}},{{1L,0xE2L,1L,0L,(-4L)},{0xAFL,(-3L),2L,0x84L,0x22L},{2L,0L,0xC1L,0xBBL,2L},{0x22L,2L,2L,0x22L,0xAFL}},{{(-4L),0xBBL,1L,1L,1L},{0x22L,(-3L),0xCBL,2L,4L},{2L,1L,(-1L),1L,2L},{0xAFL,0x84L,(-6L),0x22L,(-3L)}}};
        union U1 l_1137 = {6UL};
        int i, j, k;
        for (l_1096 = 0; (l_1096 != 0); l_1096 = safe_add_func_int16_t_s_s(l_1096, 9))
        { 
            l_440.f1 = (safe_mod_func_int64_t_s_s(g_91, l_1136[1][3][1]));
            return l_1137;
        }
        (*g_165) &= p_23.f2;
    }
    return p_23;
}



static int8_t * func_26(int16_t  p_27)
{ 
    return &g_12[0];
}



static uint32_t  func_40(int16_t * p_41, uint32_t  p_42)
{ 
    uint32_t l_274 = 0UL;
    uint8_t *l_277[6] = {&g_66,&g_66,&g_66,&g_66,&g_66,&g_66};
    union U2 l_278 = {0x5924AF79L};
    int32_t *l_279 = &g_233[1][0];
    int i;
    for (g_202 = 0; (g_202 <= 1); g_202 += 1)
    { 
        (**g_164) = 0L;
    }
    l_274++;
    (*l_279) = (((*g_165) = (((((*g_54) ^ l_274) <= 0xCD34BDB0L) <= g_202) , (((void*)0 == l_277[5]) , (l_278 , (-9L))))) | p_42);
    return p_42;
}



static int16_t * func_43(uint16_t * const  p_44, union U1  p_45, int8_t  p_46, int16_t  p_47)
{ 
    int16_t *l_99 = (void*)0;
    int32_t *l_103[7][7][5] = {{{&g_77,&g_77,&g_57,(void*)0,&g_77},{&g_77,&g_77,&g_57,&g_94.f1,&g_57},{&g_77,&g_77,(void*)0,&g_94.f1,&g_77},{&g_77,&g_77,&g_57,(void*)0,&g_77},{&g_77,&g_77,&g_57,&g_94.f1,&g_57},{&g_77,&g_77,(void*)0,&g_94.f1,&g_77},{&g_77,&g_77,&g_57,(void*)0,&g_77}},{{&g_77,&g_77,&g_57,&g_94.f1,&g_57},{&g_77,&g_77,(void*)0,&g_94.f1,&g_77},{&g_77,&g_77,&g_57,(void*)0,&g_77},{&g_77,&g_77,&g_57,&g_94.f1,&g_57},{&g_77,&g_77,(void*)0,&g_94.f1,&g_77},{&g_77,&g_77,&g_57,(void*)0,&g_77},{&g_77,&g_77,&g_57,&g_94.f1,&g_57}},{{&g_77,&g_77,(void*)0,&g_94.f1,&g_77},{(void*)0,&g_57,(void*)0,&g_57,&g_57},{&g_57,(void*)0,(void*)0,&g_94.f1,(void*)0},{&g_57,&g_57,&g_77,&g_94.f1,&g_57},{(void*)0,&g_57,(void*)0,&g_57,&g_57},{&g_57,(void*)0,(void*)0,&g_94.f1,(void*)0},{&g_57,&g_57,&g_77,&g_94.f1,&g_57}},{{(void*)0,&g_57,(void*)0,&g_57,&g_57},{&g_57,(void*)0,(void*)0,&g_94.f1,(void*)0},{&g_57,&g_57,&g_77,&g_94.f1,&g_57},{(void*)0,&g_57,(void*)0,&g_57,&g_57},{&g_57,(void*)0,(void*)0,&g_94.f1,(void*)0},{&g_57,&g_57,&g_77,&g_94.f1,&g_57},{(void*)0,&g_57,(void*)0,&g_57,&g_57}},{{&g_57,(void*)0,(void*)0,&g_94.f1,(void*)0},{&g_57,&g_57,&g_77,&g_94.f1,&g_57},{(void*)0,&g_57,(void*)0,&g_57,&g_57},{&g_57,(void*)0,(void*)0,&g_94.f1,(void*)0},{&g_57,&g_57,&g_77,&g_94.f1,&g_57},{(void*)0,&g_57,(void*)0,&g_57,&g_57},{&g_57,(void*)0,(void*)0,&g_94.f1,(void*)0}},{{&g_57,&g_57,&g_77,&g_94.f1,&g_57},{(void*)0,&g_57,(void*)0,&g_57,&g_57},{&g_57,(void*)0,(void*)0,&g_94.f1,(void*)0},{&g_57,&g_57,&g_77,&g_94.f1,&g_57},{(void*)0,&g_57,(void*)0,&g_57,&g_57},{&g_57,(void*)0,(void*)0,&g_94.f1,(void*)0},{&g_57,&g_57,&g_77,&g_94.f1,&g_57}},{{(void*)0,&g_57,(void*)0,&g_57,&g_57},{&g_57,(void*)0,(void*)0,&g_94.f1,(void*)0},{&g_57,&g_57,&g_77,&g_94.f1,&g_57},{(void*)0,&g_57,(void*)0,&g_57,&g_57},{&g_57,(void*)0,(void*)0,&g_94.f1,(void*)0},{&g_57,&g_57,&g_77,&g_94.f1,&g_57},{(void*)0,&g_57,(void*)0,&g_57,&g_57}}};
    int32_t **l_102 = &l_103[5][1][3];
    union U2 l_104 = {0UL};
    int i, j, k;
    for (p_45.f1 = 0; (p_45.f1 <= 28); p_45.f1++)
    { 
        for (g_94.f3.f2 = 0; (g_94.f3.f2 <= 0); g_94.f3.f2 += 1)
        { 
            int32_t *l_98 = &g_77;
            int32_t **l_97 = &l_98;
            (*l_97) = (void*)0;
        }
        return l_99;
    }
    for (g_94.f3.f7 = 0; (g_94.f3.f7 > 28); g_94.f3.f7++)
    { 
        int32_t **l_105 = &l_103[5][1][3];
        int64_t *l_106 = &g_107;
        int32_t l_147 = 1L;
        int32_t l_210 = (-10L);
        int32_t l_217 = 8L;
        uint16_t *l_232 = &g_55;
    }
    return l_99;
}



static union U1  func_48(int64_t  p_49, uint16_t * p_50)
{ 
    int32_t *l_56 = &g_57;
    int32_t l_58 = (-5L);
    int32_t *l_59 = &g_57;
    int32_t *l_60 = &l_58;
    int32_t *l_61 = (void*)0;
    int32_t *l_62 = &l_58;
    int32_t *l_63 = &l_58;
    int32_t *l_64 = &l_58;
    int32_t *l_65[2][1][5];
    int16_t *l_88 = &g_89;
    int16_t *l_90[3][3] = {{(void*)0,&g_91,&g_91},{(void*)0,&g_91,&g_91},{(void*)0,&g_91,&g_91}};
    int i, j, k;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 5; k++)
                l_65[i][j][k] = &l_58;
        }
    }
    ++g_66;
    g_77 &= (((safe_mul_func_uint8_t_u_u((((*l_62) ^= 0x1EBDC590L) >= (safe_add_func_int64_t_s_s(((void*)0 != p_50), (safe_mul_func_int8_t_s_s(((safe_sub_func_int16_t_s_s((((g_12[0] && g_8.f4) > p_49) >= (*g_54)), (-6L))) | p_49), (*l_59)))))), p_49)) , &l_58) != &g_57);
    (*l_64) = ((safe_mul_func_int16_t_s_s(((*l_56) && (g_91 |= ((*l_88) ^= ((((safe_lshift_func_uint8_t_u_u(1UL, 2)) == ((safe_unary_minus_func_int64_t_s(((*g_54) >= (*p_50)))) , ((safe_mod_func_int64_t_s_s(1L, (+(*g_54)))) , (safe_div_func_int32_t_s_s((*l_59), 8L))))) >= p_49) && g_12[0])))), (*p_50))) <= (*l_60));
    for (g_57 = 0; (g_57 == 21); ++g_57)
    { 
        return g_94;
    }
    return g_94;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_8.f0, "g_8.f0", print_hash_value);
    transparent_crc(g_8.f2, "g_8.f2", print_hash_value);
    transparent_crc(g_8.f3, "g_8.f3", print_hash_value);
    transparent_crc(g_8.f4, "g_8.f4", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_12[i], "g_12[i]", print_hash_value);

    }
    transparent_crc(g_30, "g_30", print_hash_value);
    transparent_crc(g_37, "g_37", print_hash_value);
    transparent_crc(g_55, "g_55", print_hash_value);
    transparent_crc(g_57, "g_57", print_hash_value);
    transparent_crc(g_66, "g_66", print_hash_value);
    transparent_crc(g_77, "g_77", print_hash_value);
    transparent_crc(g_89, "g_89", print_hash_value);
    transparent_crc(g_91, "g_91", print_hash_value);
    transparent_crc(g_94.f0, "g_94.f0", print_hash_value);
    transparent_crc(g_94.f1, "g_94.f1", print_hash_value);
    transparent_crc(g_94.f2, "g_94.f2", print_hash_value);
    transparent_crc(g_107, "g_107", print_hash_value);
    transparent_crc(g_120, "g_120", print_hash_value);
    transparent_crc(g_202, "g_202", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_205[i][j][k], "g_205[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_208[i], "g_208[i]", print_hash_value);

    }
    transparent_crc(g_211, "g_211", print_hash_value);
    transparent_crc(g_212, "g_212", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_214[i][j][k], "g_214[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_218[i], "g_218[i]", print_hash_value);

    }
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_233[i][j], "g_233[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_389, "g_389", print_hash_value);
    transparent_crc(g_433, "g_433", print_hash_value);
    transparent_crc(g_545, "g_545", print_hash_value);
    transparent_crc(g_555.f0, "g_555.f0", print_hash_value);
    transparent_crc(g_555.f1, "g_555.f1", print_hash_value);
    transparent_crc(g_555.f2, "g_555.f2", print_hash_value);
    transparent_crc(g_555.f3, "g_555.f3", print_hash_value);
    transparent_crc(g_555.f4, "g_555.f4", print_hash_value);
    transparent_crc(g_555.f5, "g_555.f5", print_hash_value);
    transparent_crc(g_555.f6, "g_555.f6", print_hash_value);
    transparent_crc(g_555.f7, "g_555.f7", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_576[i].f0, "g_576[i].f0", print_hash_value);
        transparent_crc(g_576[i].f1, "g_576[i].f1", print_hash_value);
        transparent_crc(g_576[i].f2, "g_576[i].f2", print_hash_value);
        transparent_crc(g_576[i].f3, "g_576[i].f3", print_hash_value);
        transparent_crc(g_576[i].f4, "g_576[i].f4", print_hash_value);
        transparent_crc(g_576[i].f5, "g_576[i].f5", print_hash_value);
        transparent_crc(g_576[i].f6, "g_576[i].f6", print_hash_value);
        transparent_crc(g_576[i].f7, "g_576[i].f7", print_hash_value);

    }
    transparent_crc(g_658.f0, "g_658.f0", print_hash_value);
    transparent_crc(g_658.f1, "g_658.f1", print_hash_value);
    transparent_crc(g_658.f2, "g_658.f2", print_hash_value);
    transparent_crc(g_690, "g_690", print_hash_value);
    transparent_crc(g_698, "g_698", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_719[i], "g_719[i]", print_hash_value);

    }
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_738[i][j][k], "g_738[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_748[i].f1, "g_748[i].f1", print_hash_value);
        transparent_crc(g_748[i].f2, "g_748[i].f2", print_hash_value);

    }
    transparent_crc(g_798, "g_798", print_hash_value);
    transparent_crc(g_862.f0, "g_862.f0", print_hash_value);
    transparent_crc(g_862.f2, "g_862.f2", print_hash_value);
    transparent_crc(g_862.f3, "g_862.f3", print_hash_value);
    transparent_crc(g_862.f4, "g_862.f4", print_hash_value);
    transparent_crc(g_1000.f1, "g_1000.f1", print_hash_value);
    transparent_crc(g_1000.f2, "g_1000.f2", print_hash_value);
    transparent_crc(g_1095, "g_1095", print_hash_value);
    transparent_crc(g_1101, "g_1101", print_hash_value);
    transparent_crc(g_1150, "g_1150", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(g_1194[i][j], "g_1194[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_1304.f0, "g_1304.f0", print_hash_value);
    transparent_crc(g_1304.f1, "g_1304.f1", print_hash_value);
    transparent_crc(g_1304.f2, "g_1304.f2", print_hash_value);
    transparent_crc(g_1304.f3, "g_1304.f3", print_hash_value);
    transparent_crc(g_1304.f4, "g_1304.f4", print_hash_value);
    transparent_crc(g_1304.f5, "g_1304.f5", print_hash_value);
    transparent_crc(g_1304.f6, "g_1304.f6", print_hash_value);
    transparent_crc(g_1304.f7, "g_1304.f7", print_hash_value);
    transparent_crc(g_1318, "g_1318", print_hash_value);
    transparent_crc(g_1414.f1, "g_1414.f1", print_hash_value);
    transparent_crc(g_1414.f2, "g_1414.f2", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_1416[i][j].f0, "g_1416[i][j].f0", print_hash_value);
            transparent_crc(g_1416[i][j].f1, "g_1416[i][j].f1", print_hash_value);
            transparent_crc(g_1416[i][j].f2, "g_1416[i][j].f2", print_hash_value);

        }
    }
    transparent_crc(g_1543, "g_1543", print_hash_value);
    transparent_crc(g_1876, "g_1876", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
