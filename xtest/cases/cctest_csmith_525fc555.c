// SPDX-License-Identifier: MIT
// cctest_csmith_525fc555.c --- cctest case csmith_525fc555 (csmith seed 1382008149)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xe9334b75 */
/* @exp_ticks 0x3aad */

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

// Options:   -s 1382008149 -o /tmp/csmith_gen_lindfmn8/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   int16_t  f0;
   uint32_t  f1;
   uint8_t  f2;
   uint32_t  f3;
};

struct S1 {
   uint16_t  f0;
   uint32_t  f1;
   uint32_t  f2;
   struct S0  f3;
   int64_t  f4;
};

union U2 {
   int64_t  f0;
   const uint64_t  f1;
   int32_t  f2;
   int8_t  f3;
};


static int64_t g_17 = 0L;
static struct S1 g_29[2] = {{0xE511L,0xD77DFCC8L,0xF80366E5L,{0x3240L,0x7BC6200DL,0x0AL,0UL},-1L},{0xE511L,0xD77DFCC8L,0xF80366E5L,{0x3240L,0x7BC6200DL,0x0AL,0UL},-1L}};
static uint32_t g_55 = 0UL;
static struct S0 g_64 = {1L,0x634890B8L,252UL,1UL};
static int64_t g_69[5] = {0L,0L,0L,0L,0L};
static int8_t g_70 = 9L;
static uint8_t g_75 = 250UL;
static int16_t g_79[1] = {0xA0D0L};
static int32_t g_81[3][2] = {{0xC6615269L,(-1L)},{0xC6615269L,0xC6615269L},{(-1L),0xC6615269L}};
static uint32_t g_86 = 0xD1396874L;
static union U2 g_98 = {1L};



static uint32_t  func_1(void);
static int64_t  func_9(struct S1  p_10, const uint32_t  p_11, struct S1  p_12, int32_t  p_13);
static int8_t  func_20(int64_t  p_21, int64_t  p_22, uint32_t  p_23, int16_t  p_24);
static const int32_t  func_32(int64_t  p_33);




static uint32_t  func_1(void)
{ 
    const uint64_t l_8 = 18446744073709551607UL;
    int32_t l_74 = 1L;
    int32_t l_80 = 0x35C4AE6DL;
    struct S0 l_109 = {2L,0UL,255UL,0x95C9911EL};
    uint32_t l_121 = 8UL;
    uint32_t l_130 = 0x337086DDL;
    int32_t l_136[1][3];
    int32_t l_152 = 0xBBA839ADL;
    int i, j;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
            l_136[i][j] = 0x2ABFE337L;
    }
lbl_110:
    if ((g_75 |= (l_74 = (safe_sub_func_int16_t_s_s((safe_add_func_int64_t_s_s((safe_mod_func_int16_t_s_s(l_8, l_8)), func_9(((g_70 = (safe_add_func_int16_t_s_s(((+(g_17 || ((safe_div_func_uint16_t_u_u((func_20(l_8, g_17, g_17, l_8) < 0x91L), g_69[2])) >= 0xE4L))) && l_8), (-7L)))) , g_29[1]), g_69[0], g_29[1], l_8))), l_8)))))
    { 
        int16_t l_78[4] = {0x1AACL,0x1AACL,0x1AACL,0x1AACL};
        int32_t l_82 = 0x70AF2841L;
        uint32_t l_83 = 0x99091BB2L;
        int i;
        if ((g_55 | (g_64.f0 |= ((safe_unary_minus_func_uint32_t_u((~0xBDL))) < l_78[3]))))
        { 
            ++l_83;
            g_86 &= 3L;
        }
        else
        { 
            int64_t l_89 = (-1L);
lbl_92:
            for (l_80 = 21; (l_80 != (-17)); l_80 = safe_sub_func_int16_t_s_s(l_80, 2))
            { 
                g_81[2][0] = g_79[0];
                if (g_55)
                    goto lbl_110;
                return l_89;
            }
            g_81[0][0] = (((g_64.f0 == (((safe_sub_func_uint16_t_u_u(l_80, 0xCD97L)) && l_89) || l_8)) != 0xE2D86AEC8E115B8ALL) && g_70);
            if (g_64.f0)
                goto lbl_92;
        }
    }
    else
    { 
        const uint16_t l_99 = 0UL;
        l_74 ^= ((((safe_rshift_func_uint16_t_u_u(((6L & g_86) > (+(safe_div_func_int64_t_s_s((((g_98 , l_99) , 1UL) > 0x143445DC917A0EAALL), 0xAD9C2790A7DF4BEBLL)))), g_75)) , (-1L)) <= l_80) , g_17);
        l_74 = (safe_add_func_uint16_t_u_u(0xD76CL, ((safe_mul_func_uint8_t_u_u((safe_mod_func_uint8_t_u_u(1UL, ((-9L) || (safe_sub_func_uint16_t_u_u(((+l_80) , g_79[0]), l_99))))), l_99)) ^ 0xF3DCL)));
        l_109 = l_109;
    }
    g_81[0][0] = (safe_lshift_func_uint8_t_u_u(((safe_add_func_int8_t_s_s(((((((((((safe_mod_func_int16_t_s_s((((safe_mul_func_int8_t_s_s(2L, ((safe_add_func_int32_t_s_s(l_121, (safe_div_func_uint64_t_u_u((safe_mod_func_uint64_t_u_u(g_55, (g_69[2] |= ((((safe_div_func_int64_t_s_s((safe_mul_func_uint16_t_u_u((((-1L) | l_74) <= 3L), g_64.f0)), (-1L))) && 0xE77FE76CL) < l_8) != g_81[0][1])))), 1UL)))) <= l_109.f3))) >= g_79[0]) < 18446744073709551612UL), l_130)) || g_64.f1) , 0xD4L) <= l_109.f2) <= 0xD6L) , 0x5EF69CA31E374D1ALL) && (-9L)) && g_75) == l_74) != g_17), l_8)) , 248UL), g_55));
    for (l_80 = 2; (l_80 == (-22)); l_80 = safe_sub_func_int16_t_s_s(l_80, 2))
    { 
        uint64_t l_137 = 0x9FFC3C19AB705B54LL;
        uint32_t l_154 = 1UL;
        int32_t l_155 = 1L;
        int32_t l_166 = 0L;
        for (l_74 = 0; (l_74 > (-5)); l_74--)
        { 
            int32_t l_135 = 0x8AAF6E95L;
            int32_t l_150 = 0x7FE13056L;
            uint16_t l_151[4] = {0xFE06L,0xFE06L,0xFE06L,0xFE06L};
            int i;
            l_136[0][1] = l_135;
            if (((l_137 && ((safe_mod_func_uint16_t_u_u((safe_add_func_uint8_t_u_u((l_109.f3 <= (safe_lshift_func_int8_t_s_u(((l_151[1] = ((l_150 = (safe_lshift_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u(65535UL, ((safe_mod_func_int16_t_s_s(((0xADL > g_70) | 0x71C4A646L), g_64.f2)) | (-2L)))), 7))) ^ g_79[0])) || g_81[1][1]), g_75))), (-1L))), g_64.f3)) < l_152)) && l_151[1]))
            { 
                l_136[0][1] = 4L;
            }
            else
            { 
                struct S0 l_153 = {0x7AE0L,4UL,0xCEL,0x28C9940EL};
                g_81[1][1] |= g_64.f0;
                l_153 = g_64;
            }
        }
        l_155 &= l_154;
        for (l_155 = 0; (l_155 <= (-1)); l_155--)
        { 
            int8_t l_164 = 0x98L;
            struct S0 l_165 = {-1L,0UL,255UL,0UL};
            int32_t l_167 = (-1L);
            uint16_t l_168[5][5] = {{65527UL,65527UL,0x9940L,65527UL,65527UL},{1UL,0x2A41L,1UL,0xCDE8L,0x973CL},{65527UL,65529UL,65529UL,65527UL,65529UL},{0x973CL,0x2A41L,1UL,0x2A41L,0x973CL},{65529UL,65527UL,65529UL,65529UL,65529UL}};
            int i, j;
            for (g_64.f0 = 1; (g_64.f0 >= 0); g_64.f0 -= 1)
            { 
                int i, j;
                g_81[(g_64.f0 + 1)][g_64.f0] = g_81[(g_64.f0 + 1)][g_64.f0];
                g_81[(g_64.f0 + 1)][g_64.f0] = (safe_add_func_uint64_t_u_u((l_155 > (safe_add_func_int32_t_s_s(((safe_rshift_func_int8_t_s_u(l_164, l_137)) || (l_109.f1 , (-2L))), (-1L)))), (-1L)));
            }
            for (g_98.f0 = 0; (g_98.f0 <= 1); g_98.f0 += 1)
            { 
                g_64 = l_165;
                l_168[2][2]++;
            }
            return g_64.f1;
        }
    }
    return g_81[0][1];
}



static int64_t  func_9(struct S1  p_10, const uint32_t  p_11, struct S1  p_12, int32_t  p_13)
{ 
    uint32_t l_71 = 0x95A02EA2L;
    p_12.f3 = g_64;
    --l_71;
    return p_12.f3.f1;
}



static int8_t  func_20(int64_t  p_21, int64_t  p_22, uint32_t  p_23, int16_t  p_24)
{ 
    int64_t l_43[1];
    const int32_t l_49 = (-2L);
    int32_t l_53 = 0L;
    int32_t l_54[4] = {0L,0L,0L,0L};
    int i;
    for (i = 0; i < 1; i++)
        l_43[i] = 0x25BB54A037A762AFLL;
    for (g_17 = 8; (g_17 == (-15)); g_17 = safe_sub_func_int8_t_s_s(g_17, 8))
    { 
        int8_t l_47 = 0xBFL;
        for (p_21 = 7; (p_21 < (-9)); p_21--)
        { 
            uint16_t l_38 = 0x6736L;
            const uint32_t l_63 = 0x9480DD00L;
            for (p_24 = 0; (p_24 <= 1); p_24 += 1)
            { 
                int64_t l_48 = (-1L);
                l_54[3] = (!(((l_53 &= ((~func_32((g_17 , (safe_mul_func_int8_t_s_s((safe_mul_func_uint8_t_u_u((((l_38 ^ ((((safe_sub_func_uint64_t_u_u(((safe_mul_func_uint8_t_u_u(((l_43[0] <= (safe_sub_func_int16_t_s_s(((!0x95C8F381C4EDD679LL) ^ l_47), l_48))) > p_21), l_47)) >= l_49), 0x1ABB416C011945B4LL)) | l_43[0]) , 0x1AL) , p_24)) < g_17) > (-9L)), p_21)), g_17))))) & g_17)) , p_21) | 1L));
                g_55 ^= g_17;
                if (g_17)
                    continue;
            }
            g_64 = ((p_22 || (safe_rshift_func_int16_t_s_s(((l_38 , (((~(safe_sub_func_int16_t_s_s((((((l_54[1] &= (safe_mul_func_uint8_t_u_u(p_23, 0xFBL))) || l_63) , (-8L)) == g_55) == p_23), g_55))) && l_49) , g_17)) , g_17), 5))) , g_64);
        }
    }
    l_53 |= (((((safe_mul_func_int8_t_s_s((safe_mul_func_uint8_t_u_u((((l_43[0] , l_54[1]) != 0L) , ((((l_43[0] && (-1L)) & 2L) | 8UL) | g_64.f2)), l_54[1])), 5UL)) , l_54[3]) <= p_23) > l_43[0]) > 18446744073709551615UL);
    return l_54[0];
}



static const int32_t  func_32(int64_t  p_33)
{ 
    uint64_t l_50 = 18446744073709551615UL;
    l_50--;
    return l_50;
}





int test_main(void)
{
    int i, j;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_17, "g_17", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_29[i].f0, "g_29[i].f0", print_hash_value);
        transparent_crc(g_29[i].f1, "g_29[i].f1", print_hash_value);
        transparent_crc(g_29[i].f2, "g_29[i].f2", print_hash_value);
        transparent_crc(g_29[i].f3.f0, "g_29[i].f3.f0", print_hash_value);
        transparent_crc(g_29[i].f3.f1, "g_29[i].f3.f1", print_hash_value);
        transparent_crc(g_29[i].f3.f2, "g_29[i].f3.f2", print_hash_value);
        transparent_crc(g_29[i].f3.f3, "g_29[i].f3.f3", print_hash_value);
        transparent_crc(g_29[i].f4, "g_29[i].f4", print_hash_value);

    }
    transparent_crc(g_55, "g_55", print_hash_value);
    transparent_crc(g_64.f0, "g_64.f0", print_hash_value);
    transparent_crc(g_64.f1, "g_64.f1", print_hash_value);
    transparent_crc(g_64.f2, "g_64.f2", print_hash_value);
    transparent_crc(g_64.f3, "g_64.f3", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_69[i], "g_69[i]", print_hash_value);

    }
    transparent_crc(g_70, "g_70", print_hash_value);
    transparent_crc(g_75, "g_75", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_79[i], "g_79[i]", print_hash_value);

    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_81[i][j], "g_81[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_86, "g_86", print_hash_value);
    transparent_crc(g_98.f0, "g_98.f0", print_hash_value);
    transparent_crc(g_98.f1, "g_98.f1", print_hash_value);
    transparent_crc(g_98.f2, "g_98.f2", print_hash_value);
    transparent_crc(g_98.f3, "g_98.f3", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
