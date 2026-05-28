// SPDX-License-Identifier: MIT
// cctest_csmith_725dcb5e.c --- cctest case csmith_725dcb5e (csmith seed 1918749534)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x784bae0d */
/* @exp_ticks 0x41b0 */

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

// Options:   -s 1918749534 -o /tmp/csmith_gen_qhxueihj/csmith.c --concise --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


struct S0 {
   uint32_t  f0;
   int64_t  f1;
   const int32_t  f2;
   const int64_t  f3;
   uint64_t  f4;
   uint8_t  f5;
   int16_t  f6;
   int16_t  f7;
};

union U1 {
   int32_t  f0;
   int64_t  f1;
   int8_t  f2;
   int64_t  f3;
   struct S0  f4;
};


static int8_t g_2 = 0xD5L;
static uint32_t g_27 = 8UL;
static int32_t g_37 = 0L;
static struct S0 *g_46 = (void*)0;
static uint16_t g_59[7] = {0x43A4L,0x43A4L,0x43A4L,0x43A4L,0x43A4L,0x43A4L,0x43A4L};
static uint32_t g_76 = 5UL;
static uint32_t *g_75[7][7] = {{&g_76,&g_76,&g_76,&g_76,&g_76,&g_76,&g_76},{&g_76,&g_76,&g_76,&g_76,&g_76,&g_76,&g_76},{&g_76,&g_76,&g_76,&g_76,&g_76,&g_76,&g_76},{&g_76,&g_76,&g_76,&g_76,&g_76,&g_76,&g_76},{&g_76,&g_76,&g_76,&g_76,&g_76,&g_76,&g_76},{&g_76,&g_76,&g_76,&g_76,&g_76,&g_76,&g_76},{&g_76,&g_76,&g_76,&g_76,&g_76,&g_76,&g_76}};
static int8_t g_99[1][3] = {{8L,8L,8L}};
static uint16_t g_100 = 0x0461L;
static int32_t *g_118 = (void*)0;
static int32_t **g_117[4][5][5] = {{{&g_118,&g_118,&g_118,&g_118,&g_118},{&g_118,&g_118,(void*)0,&g_118,&g_118},{&g_118,&g_118,&g_118,&g_118,&g_118},{&g_118,&g_118,&g_118,&g_118,&g_118},{&g_118,&g_118,&g_118,&g_118,&g_118}},{{&g_118,&g_118,&g_118,&g_118,&g_118},{&g_118,&g_118,&g_118,&g_118,&g_118},{&g_118,&g_118,(void*)0,&g_118,&g_118},{&g_118,&g_118,&g_118,&g_118,&g_118},{&g_118,&g_118,&g_118,&g_118,&g_118}},{{&g_118,&g_118,&g_118,&g_118,&g_118},{&g_118,&g_118,&g_118,&g_118,&g_118},{&g_118,&g_118,&g_118,&g_118,&g_118},{&g_118,&g_118,&g_118,&g_118,&g_118},{&g_118,&g_118,&g_118,&g_118,&g_118}},{{&g_118,&g_118,&g_118,&g_118,&g_118},{&g_118,&g_118,&g_118,&g_118,&g_118},{&g_118,&g_118,(void*)0,&g_118,&g_118},{&g_118,&g_118,&g_118,&g_118,&g_118},{&g_118,&g_118,&g_118,&g_118,&g_118}}};
static const int32_t *g_179 = &g_37;
static const int32_t **g_178 = &g_179;
static int32_t g_198 = 0x11E99CA7L;
static uint16_t g_203[6] = {65534UL,0x74B2L,65534UL,65534UL,0x74B2L,65534UL};
static uint16_t *g_205 = &g_203[4];
static uint16_t **g_204[7][6][2] = {{{&g_205,&g_205},{&g_205,&g_205},{&g_205,&g_205},{&g_205,&g_205},{&g_205,&g_205},{&g_205,&g_205}},{{&g_205,&g_205},{&g_205,&g_205},{&g_205,&g_205},{&g_205,&g_205},{&g_205,&g_205},{&g_205,&g_205}},{{&g_205,&g_205},{&g_205,&g_205},{&g_205,&g_205},{&g_205,&g_205},{&g_205,&g_205},{&g_205,&g_205}},{{&g_205,&g_205},{&g_205,&g_205},{&g_205,&g_205},{&g_205,&g_205},{&g_205,&g_205},{&g_205,&g_205}},{{&g_205,&g_205},{&g_205,&g_205},{&g_205,&g_205},{&g_205,&g_205},{&g_205,&g_205},{&g_205,&g_205}},{{&g_205,&g_205},{&g_205,&g_205},{&g_205,&g_205},{&g_205,&g_205},{&g_205,&g_205},{&g_205,&g_205}},{{&g_205,&g_205},{&g_205,&g_205},{&g_205,&g_205},{&g_205,&g_205},{&g_205,&g_205},{&g_205,&g_205}}};
static struct S0 g_209 = {4UL,0x3E4D8844572FAC39LL,-1L,0x7166276FC4B73796LL,0xB2488C446EDB0458LL,0x2CL,0L,-8L};
static union U1 g_223 = {0x4E8AFE3AL};
static union U1 g_226[7] = {{-3L},{-3L},{-3L},{-3L},{-3L},{-3L},{-3L}};
static int32_t g_251 = 0x5C26318DL;
static uint16_t g_308 = 1UL;
static const int32_t ***g_312[1][7][3] = {{{&g_178,&g_178,&g_178},{&g_178,&g_178,&g_178},{&g_178,&g_178,&g_178},{&g_178,(void*)0,&g_178},{&g_178,(void*)0,&g_178},{&g_178,&g_178,&g_178},{&g_178,&g_178,&g_178}}};
static const int32_t ****g_311 = &g_312[0][4][0];
static uint64_t *g_346 = &g_209.f4;
static uint32_t **g_452 = &g_75[1][5];
static uint32_t ***g_451 = &g_452;
static uint32_t ****g_450 = &g_451;
static int64_t g_508[4] = {1L,1L,1L,1L};
static uint32_t *****g_642 = &g_450;
static int16_t **g_677 = (void*)0;
static int16_t ** const *g_676 = &g_677;
static uint64_t g_704[1] = {18446744073709551612UL};
static int8_t g_741 = 0xA8L;
static struct S0 ***g_752 = (void*)0;
static uint8_t g_832 = 1UL;
static int16_t ***g_895 = &g_677;
static int16_t ****g_894 = &g_895;
static uint32_t g_945 = 0xFE4D5ABBL;
static uint32_t g_974 = 0UL;
static int8_t **g_1074 = (void*)0;
static uint32_t **** const g_1142 = (void*)0;
static uint32_t **** const *g_1141 = &g_1142;



static uint64_t  func_1(void);
static struct S0 * func_5(struct S0 * p_6, struct S0 * p_7, uint64_t  p_8, uint16_t  p_9, int64_t  p_10);
static struct S0 * func_11(union U1  p_12);
static union U1  func_13(uint32_t  p_14, struct S0  p_15, const uint8_t  p_16, struct S0  p_17);
static struct S0  func_28(struct S0  p_29, uint32_t  p_30, struct S0 * const  p_31, uint32_t * p_32, uint32_t * p_33);
static struct S0  func_34(uint16_t  p_35);
static int32_t  func_39(int8_t  p_40);
static int64_t  func_65(const int32_t * const * p_66, int32_t * p_67, uint32_t * p_68, uint32_t * p_69, int32_t ** p_70);




static uint64_t  func_1(void)
{ 
    uint16_t **l_206 = (void*)0;
    int32_t l_831 = 0x634C0174L;
    int8_t l_834 = 0x3FL;
    struct S0 l_836 = {4294967295UL,0x0EFAF505CA9551EALL,0x41F44001L,0xB9B83C70EFC1702ALL,0x59DE4614C83BF9BDLL,8UL,0L,-1L};
    int16_t ***l_932 = &g_677;
    int32_t l_943 = 0x6C2C8AA2L;
    uint16_t l_1002 = 7UL;
    struct S0 l_1007 = {0x6FFA0B26L,1L,0xEAD42709L,0L,0xAB068BB161A37C2CLL,252UL,0xA3CEL,0xD4EAL};
    int16_t l_1064 = 0x63B5L;
    uint16_t l_1067[1];
    int16_t l_1068 = (-5L);
    int32_t l_1103 = 1L;
    int32_t l_1108[5][1][3];
    int8_t l_1109 = 9L;
    int32_t l_1110 = 0xAAFE63E0L;
    int32_t *l_1115 = &l_831;
    int32_t ***l_1127 = &g_117[0][0][2];
    int32_t ****l_1126 = &l_1127;
    uint32_t **** const *l_1140 = &g_450;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_1067[i] = 0x5062L;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 3; k++)
                l_1108[i][j][k] = 0x0F898FB9L;
        }
    }
    if (g_2)
    { 
        struct S0 * const l_208 = &g_209;
        int32_t l_833 = 0x2FDFF1A9L;
        const int16_t *l_931[2][2][5] = {{{&l_836.f6,&l_836.f6,&g_209.f6,&g_209.f6,&l_836.f6},{&g_209.f7,&g_209.f6,&g_209.f7,&g_209.f6,&g_209.f7}},{{&l_836.f6,&g_209.f6,&g_209.f6,&l_836.f6,&l_836.f6},{&l_836.f6,&g_209.f6,&l_836.f6,&g_209.f6,&l_836.f6}}};
        const int16_t **l_930 = &l_931[1][1][1];
        const int16_t ***l_929 = &l_930;
        uint32_t *l_944 = &g_945;
        uint16_t *** const l_959 = &l_206;
        int8_t l_1003 = 4L;
        int32_t l_1005 = (-1L);
        struct S0 * const **l_1009 = (void*)0;
        int32_t l_1025[3][1];
        uint8_t *l_1043 = &g_832;
        uint8_t **l_1042 = &l_1043;
        union U1 *l_1053 = &g_223;
        union U1 **l_1052[6] = {&l_1053,&l_1053,&l_1053,&l_1053,&l_1053,&l_1053};
        union U1 ***l_1051 = &l_1052[4];
        uint32_t l_1066 = 0xA5479345L;
        int8_t *l_1072 = (void*)0;
        int8_t **l_1071 = &l_1072;
        uint64_t l_1083 = 18446744073709551615UL;
        int32_t l_1102 = 0L;
        int32_t l_1104 = 0xE1A9104BL;
        int32_t l_1105 = 0x967FBB06L;
        int32_t l_1111 = 0x29102910L;
        struct S0 l_1116 = {0xD6F311F0L,1L,7L,0x94AC53BC42D6CF01LL,0xBE5B29F98F44FC29LL,248UL,0xBCA6L,0xDF1BL};
        int i, j, k;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 1; j++)
                l_1025[i][j] = 0x7688FFF4L;
        }
        for (g_2 = 0; (g_2 < (-28)); g_2 = safe_sub_func_uint64_t_u_u(g_2, 3))
        { 
            uint32_t *l_26[2][7][3] = {{{&g_27,&g_27,&g_27},{&g_27,&g_27,&g_27},{&g_27,(void*)0,&g_27},{&g_27,&g_27,(void*)0},{&g_27,&g_27,(void*)0},{&g_27,&g_27,&g_27},{&g_27,&g_27,&g_27}},{{&g_27,&g_27,&g_27},{&g_27,&g_27,(void*)0},{&g_27,&g_27,(void*)0},{&g_27,&g_27,&g_27},{&g_27,&g_27,&g_27},{&g_27,&g_27,&g_27},{&g_27,&g_27,&g_27}}};
            uint16_t *l_202 = &g_203[3];
            uint16_t **l_201 = &l_202;
            int32_t l_207 = (-1L);
            struct S0 l_835 = {0x6D706B03L,0x6AFF2125A2730245LL,-1L,0L,0UL,251UL,1L,-1L};
            struct S0 **l_924 = &g_46;
            int i, j, k;
        }
        if ((((safe_rshift_func_uint16_t_u_u(l_833, 4)) > (((safe_rshift_func_uint16_t_u_s(((((*l_944) = ((*g_346) < (((l_929 == l_932) , (safe_lshift_func_uint16_t_u_u(((safe_add_func_int8_t_s_s((((((safe_mod_func_int8_t_s_s(((((safe_add_func_int32_t_s_s(((**g_452) & (safe_div_func_int64_t_s_s(l_833, (l_836.f7 || l_833)))), l_943)) & 0xCB94L) , l_833) == (*g_205)), g_741)) | g_832) && g_27) ^ l_833) <= g_76), g_308)) ^ l_836.f5), 6))) | 0x25E919BB73BAA4A1LL))) , 0x6F69L) < l_943), 10)) , (*l_929)) != (*l_932))) == (-7L)))
        { 
            uint32_t l_950 = 0x0A25CF0DL;
            struct S0 *l_951 = &l_836;
            struct S0 **l_952 = &l_951;
            uint16_t * const *l_958 = &g_205;
            uint16_t * const **l_957 = &l_958;
            int32_t l_971 = (-2L);
            int32_t l_977 = 0x15368C94L;
            (*g_178) = &l_831;
            (*l_952) = (((l_836.f6 == (((((*g_346) = (safe_mul_func_int16_t_s_s((0x19BF2AC5L && 0xDF5B6BDBL), 0UL))) , ((0xABC2L == ((safe_mod_func_uint32_t_u_u((**g_452), l_833)) && 0x4DL)) & 0x78L)) ^ g_508[1]) == l_836.f6)) != l_950) , l_951);
            for (l_836.f5 = 4; (l_836.f5 != 34); l_836.f5++)
            { 
                int64_t *l_966 = &g_226[2].f3;
                int64_t *l_967 = &g_209.f1;
                int32_t l_968 = 0x69ECFD08L;
                uint8_t l_969 = 0x0FL;
                int64_t l_970 = 1L;
                if (((safe_add_func_int64_t_s_s(((l_957 == l_959) || ((g_223.f0 != ((l_836.f4 ^ ((safe_sub_func_uint32_t_u_u((safe_sub_func_int64_t_s_s(((l_950 != ((safe_add_func_int64_t_s_s(((*l_967) |= ((void*)0 != &g_945)), l_968)) ^ (**g_178))) , g_832), l_833)), (-10L))) < l_969)) || (*g_346))) >= 0UL)), l_836.f6)) ^ 5L))
                { 
                    if (l_970)
                        break;
                    if (l_836.f5)
                        break;
                }
                else
                { 
                    int32_t *l_972 = &g_226[2].f0;
                    int32_t *l_973[6][4] = {{&l_831,&l_833,&l_833,&l_831},{&l_833,&l_831,&l_833,&l_833},{&l_831,&l_831,(void*)0,&l_831},{&l_831,&l_833,&l_833,&l_831},{&l_833,&l_831,&l_833,&l_833},{&l_831,&l_831,(void*)0,&l_831}};
                    int i, j;
                    ++g_974;
                    l_833 |= l_970;
                }
                if (l_977)
                    continue;
                for (g_832 = 0; (g_832 <= 6); g_832 += 1)
                { 
                    int i;
                    return g_59[g_832];
                }
            }
        }
        else
        { 
            int64_t *l_984 = &l_836.f1;
            int64_t *l_987 = &g_223.f4.f1;
            int64_t *l_988 = &g_223.f4.f1;
            uint16_t *l_1004[3];
            int32_t l_1006 = 0xB377E57AL;
            struct S0 **l_1008 = &g_46;
            struct S0 * const ***l_1010 = &l_1009;
            uint8_t **l_1044 = (void*)0;
            const union U1 *l_1049 = &g_223;
            const union U1 ** const l_1048 = &l_1049;
            const union U1 ** const *l_1047 = &l_1048;
            int i;
            for (i = 0; i < 3; i++)
                l_1004[i] = &g_59[6];
            (*l_1008) = func_11(func_13((safe_lshift_func_int8_t_s_u((safe_mul_func_int8_t_s_s((safe_add_func_int16_t_s_s((((*l_984) |= (g_226[2].f3 = g_209.f2)) & (g_508[0] ^= (safe_unary_minus_func_int16_t_s((g_209.f5 && (!l_833)))))), (safe_rshift_func_int8_t_s_u((safe_lshift_func_uint16_t_u_s((((safe_mod_func_uint32_t_u_u(6UL, (safe_rshift_func_int16_t_s_s((safe_sub_func_int64_t_s_s(((*l_987) = (~(l_1005 = ((*g_205) = ((safe_rshift_func_uint16_t_u_s((*g_205), l_833)) | (((((g_223.f2 >= l_1002) && 1UL) > l_834) , (*****g_642)) || l_1003)))))), 0xDCA72D9FB45552FFLL)), l_1006)))) < (*g_346)) & (*g_346)), l_1006)), 0)))), 0UL)), g_251)), (*l_208), g_832, l_1007));
            (*l_1010) = l_1009;
            if ((safe_mul_func_uint8_t_u_u(l_834, (safe_div_func_int16_t_s_s(l_1003, ((safe_add_func_int32_t_s_s((safe_lshift_func_int8_t_s_s(((safe_lshift_func_int16_t_s_s((safe_mul_func_uint8_t_u_u(((void*)0 == &l_831), l_1007.f7)), (l_1007.f0 >= (safe_add_func_uint64_t_u_u(18446744073709551615UL, (*g_346)))))) >= l_1006), g_99[0][1])), 0xC5C3AF57L)) && l_1025[0][0]))))))
            { 
                uint8_t *l_1030[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                int32_t l_1031[3];
                const union U1 ** const **l_1050 = &l_1047;
                int32_t *l_1065 = &l_943;
                int32_t *l_1069 = (void*)0;
                int32_t *l_1070 = &g_223.f0;
                int i;
                for (i = 0; i < 3; i++)
                    l_1031[i] = 6L;
                l_1044 = (func_28(((safe_add_func_int16_t_s_s(((--g_832) < 0UL), (safe_div_func_int32_t_s_s(((safe_rshift_func_int8_t_s_u(((*g_205) != (safe_sub_func_int16_t_s_s((l_1006 & (-3L)), l_1006))), 4)) ^ ((*g_205) & (safe_mod_func_uint8_t_u_u(g_59[0], g_508[1])))), l_836.f4)))) , (*l_208)), l_831, &l_1007, (**g_451), (***g_450)) , l_1042);
                (*l_1070) ^= (safe_mul_func_int16_t_s_s((l_1068 = ((((*l_1050) = l_1047) != l_1051) == (safe_lshift_func_uint16_t_u_s(((safe_add_func_uint64_t_u_u(0x743F51237E784D65LL, (-1L))) || ((safe_add_func_uint16_t_u_u((((****g_450) ^= (safe_mul_func_int16_t_s_s((safe_add_func_uint8_t_u_u((l_1003 & (((((*l_1065) = l_1064) <= l_1025[0][0]) , 0x26L) & l_1066)), (-1L))), l_1006))) & l_1067[0]), 6L)) , (*l_1065))), l_1006)))), (*g_205)));
            }
            else
            { 
                int8_t ***l_1073[3][7][4] = {{{&l_1071,&l_1071,&l_1071,&l_1071},{&l_1071,&l_1071,&l_1071,&l_1071},{&l_1071,&l_1071,&l_1071,&l_1071},{&l_1071,&l_1071,&l_1071,&l_1071},{&l_1071,&l_1071,&l_1071,&l_1071},{&l_1071,&l_1071,&l_1071,&l_1071},{&l_1071,&l_1071,&l_1071,&l_1071}},{{&l_1071,&l_1071,&l_1071,&l_1071},{&l_1071,&l_1071,&l_1071,&l_1071},{&l_1071,&l_1071,&l_1071,&l_1071},{&l_1071,&l_1071,&l_1071,&l_1071},{&l_1071,&l_1071,&l_1071,&l_1071},{&l_1071,&l_1071,&l_1071,&l_1071},{&l_1071,&l_1071,&l_1071,&l_1071}},{{&l_1071,&l_1071,&l_1071,&l_1071},{&l_1071,&l_1071,&l_1071,&l_1071},{&l_1071,&l_1071,&l_1071,&l_1071},{&l_1071,&l_1071,&l_1071,&l_1071},{&l_1071,&l_1071,&l_1071,&l_1071},{&l_1071,&l_1071,&l_1071,&l_1071},{&l_1071,&l_1071,&l_1071,&l_1071}}};
                int32_t l_1082 = 0xBE088089L;
                int i, j, k;
                g_1074 = l_1071;
                l_1082 = (((safe_lshift_func_uint16_t_u_s((+(((safe_mod_func_uint32_t_u_u(l_1006, (safe_div_func_int32_t_s_s((func_28(l_1007, (**g_452), (*l_1008), (*g_452), &l_1066) , (-7L)), l_1082)))) , 0UL) , l_1083)), 4)) > 3UL) , 4L);
            }
        }
lbl_1084:
        (*g_178) = &l_1005;
        if ((*g_179))
        { 
            int32_t *l_1085 = &l_1005;
            int32_t *l_1086 = &g_251;
            int32_t *l_1087[6][1][1] = {{{&g_223.f0}},{{&l_831}},{{&g_223.f0}},{{&l_831}},{{&g_223.f0}},{{&l_831}}};
            uint32_t l_1088 = 0xEDDDF890L;
            int i, j, k;
            if (g_832)
                goto lbl_1084;
            l_1088--;
            return l_1007.f0;
        }
        else
        { 
            int16_t l_1101[4][3] = {{0x1BE0L,0x1BE0L,0x1BE0L},{0xB043L,0xB043L,0xB043L},{0x1BE0L,0x1BE0L,0x1BE0L},{0xB043L,0xB043L,0xB043L}};
            int32_t l_1106[7] = {(-1L),0x9778F2DDL,(-1L),(-1L),0x9778F2DDL,(-1L),(-1L)};
            int16_t l_1107 = 1L;
            uint32_t l_1112 = 0x3B7BFA16L;
            int i, j;
            for (l_836.f5 = 26; (l_836.f5 == 4); l_836.f5--)
            { 
                int32_t *l_1093 = (void*)0;
                int32_t *l_1094 = &g_251;
                int32_t *l_1095 = (void*)0;
                int32_t *l_1096 = &g_251;
                int32_t *l_1097 = &g_251;
                int32_t *l_1098 = &g_223.f0;
                int32_t *l_1099 = &l_1005;
                int32_t *l_1100[7] = {&g_251,&g_251,&g_37,&g_251,&g_251,&g_37,&g_251};
                int i;
                (*l_1094) = l_1005;
                ++l_1112;
                return l_1007.f2;
            }
            for (g_223.f0 = 2; (g_223.f0 <= 6); g_223.f0 += 1)
            { 
                int i;
                l_1115 = (void*)0;
                (*g_178) = (l_1116 , &l_1106[g_223.f0]);
                return (*g_346);
            }
        }
    }
    else
    { 
        const int32_t ****l_1125[6] = {&g_312[0][4][0],&g_312[0][4][0],&g_312[0][4][0],&g_312[0][4][0],&g_312[0][4][0],&g_312[0][4][0]};
        uint8_t *l_1128[7][7][2] = {{{&g_223.f4.f5,&l_836.f5},{(void*)0,&g_209.f5},{&g_209.f5,(void*)0},{&l_836.f5,&g_223.f4.f5},{&l_836.f5,(void*)0},{&g_209.f5,&g_209.f5},{(void*)0,&l_836.f5}},{{&g_223.f4.f5,&l_836.f5},{(void*)0,&g_209.f5},{&g_209.f5,(void*)0},{&l_836.f5,&g_223.f4.f5},{&l_836.f5,(void*)0},{&g_209.f5,&g_209.f5},{(void*)0,&l_836.f5}},{{&g_223.f4.f5,&l_836.f5},{(void*)0,&g_209.f5},{&g_209.f5,(void*)0},{&l_836.f5,&g_223.f4.f5},{&l_836.f5,(void*)0},{&g_209.f5,&g_209.f5},{(void*)0,&l_836.f5}},{{&g_223.f4.f5,&l_836.f5},{(void*)0,&g_209.f5},{&g_209.f5,(void*)0},{&l_836.f5,&g_223.f4.f5},{&l_836.f5,(void*)0},{&g_209.f5,&g_209.f5},{(void*)0,&l_836.f5}},{{&g_223.f4.f5,&l_836.f5},{(void*)0,&g_209.f5},{&g_209.f5,(void*)0},{&l_836.f5,&g_223.f4.f5},{&l_836.f5,(void*)0},{&g_209.f5,&g_209.f5},{(void*)0,&l_836.f5}},{{&g_223.f4.f5,&l_836.f5},{(void*)0,&g_209.f5},{&g_209.f5,(void*)0},{&l_836.f5,&g_223.f4.f5},{&l_836.f5,(void*)0},{&g_209.f5,&g_209.f5},{(void*)0,&l_836.f5}},{{&g_223.f4.f5,&l_836.f5},{(void*)0,&g_209.f5},{&g_209.f5,(void*)0},{&l_836.f5,&g_223.f4.f5},{&l_836.f5,(void*)0},{&g_209.f5,&g_209.f5},{(void*)0,&l_836.f5}}};
        int64_t *l_1137 = &g_226[2].f3;
        int8_t *l_1138 = &l_834;
        struct S0 l_1139[1][1] = {{{5UL,-3L,1L,8L,0xBFA6C4FF871C1684LL,0x2AL,0xCBE0L,0L}}};
        int i, j, k;
        l_1103 ^= ((safe_rshift_func_uint8_t_u_s((((safe_mul_func_int8_t_s_s((&g_450 == (g_1141 = (func_13((*l_1115), func_28(l_1007, (safe_mod_func_uint8_t_u_u((((safe_mul_func_uint8_t_u_u((g_209.f5 |= (l_1125[2] != l_1126)), ((*l_1138) = ((safe_rshift_func_int16_t_s_s(7L, (safe_div_func_int64_t_s_s(((*l_1137) = ((safe_lshift_func_uint8_t_u_u((safe_add_func_int8_t_s_s(g_209.f7, g_76)), (*l_1115))) , g_99[0][2])), (*l_1115))))) ^ (***g_451))))) > g_209.f3) == (*g_346)), 0x75L)), &l_1007, (*g_452), l_1115), g_203[1], l_1139[0][0]) , l_1140))), g_209.f6)) , (-10L)) , (*l_1115)), 3)) , (*l_1115));
        for (g_209.f6 = 0; (g_209.f6 != 0); g_209.f6 = safe_add_func_int8_t_s_s(g_209.f6, 7))
        { 
            int64_t l_1150 = 0x753F47F2850BC44FLL;
            int8_t **l_1159 = &l_1138;
            const int8_t l_1160 = (-10L);
            uint64_t * const *l_1161 = &g_346;
            uint64_t l_1162 = 1UL;
            const int32_t *l_1163[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            int i;
            (*l_1115) &= (4294967291UL == ((*g_346) && (g_59[5] , 0x263F3963714641C3LL)));
            (*g_178) = (((((+((((g_223.f2 = 7L) ^ g_100) | ((safe_div_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s(l_1150, 8)), g_209.f1)) , ((safe_add_func_int64_t_s_s((((safe_add_func_int32_t_s_s(((safe_mod_func_uint8_t_u_u((safe_mul_func_int8_t_s_s(0x49L, ((g_209.f1 < (l_1159 == &l_1138)) < l_1160))), g_209.f2)) & g_832), (*l_1115))) , &g_346) != l_1161), g_945)) == 0x9B1C5B60L))) == 1L)) || l_1162) <= g_226[2].f0) < g_100) , l_1163[2]);
        }
        return (*g_346);
    }
    g_1141 = (g_642 = &g_450);
    return (*g_346);
}



static struct S0 * func_5(struct S0 * p_6, struct S0 * p_7, uint64_t  p_8, uint16_t  p_9, int64_t  p_10)
{ 
    int32_t l_880 = 9L;
    const int64_t l_890 = (-2L);
    int32_t *l_891 = &g_223.f0;
    int16_t ***l_893 = (void*)0;
    int16_t **** const l_892 = &l_893;
    int16_t ****l_896[3];
    int32_t *l_913 = &g_251;
    int8_t l_914[2][4][2] = {{{0x04L,0xE6L},{0xE6L,0x04L},{0xE6L,0xE6L},{0x04L,0xE6L}},{{0xE6L,0x5FL},{0x04L,0x04L},{0x5FL,0x04L},{0x04L,0x5FL}}};
    int32_t *l_915 = &g_226[2].f0;
    int32_t *l_916 = &l_880;
    int32_t *l_917 = (void*)0;
    int32_t *l_918 = &g_37;
    int32_t l_919 = 0L;
    int32_t *l_920[5] = {&l_880,&l_880,&l_880,&l_880,&l_880};
    uint8_t l_921 = 255UL;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_896[i] = &g_895;
    l_880 = ((*l_891) &= (safe_div_func_int64_t_s_s((l_880 == p_8), ((*g_346) &= ((((safe_unary_minus_func_int32_t_s(p_9)) < (safe_sub_func_int8_t_s_s(p_8, 0x68L))) , (((safe_sub_func_int8_t_s_s((safe_rshift_func_int8_t_s_u(((safe_rshift_func_uint8_t_u_u(p_10, 3)) && 4294967293UL), 5)), l_890)) , l_890) , l_890)) , p_8)))));
    (*l_913) &= ((l_892 == (l_896[0] = g_894)) && (safe_rshift_func_int16_t_s_s(((((safe_sub_func_uint32_t_u_u((((((safe_lshift_func_int16_t_s_s(((l_880 |= (((safe_mul_func_uint8_t_u_u(((safe_mul_func_uint16_t_u_u(((*g_205)--), (safe_sub_func_int64_t_s_s((p_10 = (*l_891)), ((l_891 != (void*)0) && (safe_add_func_uint32_t_u_u(((****g_450) != ((*l_891) < (*l_891))), 0x698CC400L))))))) != p_9), 0xA7L)) && p_9) == (*l_891))) != 0x5098L), (*l_891))) != p_8) , (void*)0) != &g_198) | (*g_346)), 4294967292UL)) <= p_9) & p_8) , (*l_891)), 9)));
    l_921--;
    return &g_209;
}



static struct S0 * func_11(union U1  p_12)
{ 
    int32_t *l_845 = &g_223.f0;
    int8_t *l_848[3][4] = {{(void*)0,&g_226[2].f2,(void*)0,(void*)0},{&g_226[2].f2,&g_226[2].f2,(void*)0,&g_226[2].f2},{&g_226[2].f2,(void*)0,(void*)0,&g_226[2].f2}};
    int32_t l_849 = 0L;
    int64_t *l_865 = (void*)0;
    int64_t *l_866[6];
    int32_t l_867 = 0L;
    int16_t *** const l_868 = (void*)0;
    int16_t *l_869 = &g_209.f7;
    int32_t l_870 = 0x0A932574L;
    uint32_t l_871 = 3UL;
    int32_t l_872[2];
    int32_t *l_873 = &g_251;
    struct S0 *l_877 = &g_209;
    int i, j;
    for (i = 0; i < 6; i++)
        l_866[i] = (void*)0;
    for (i = 0; i < 2; i++)
        l_872[i] = 0x457CDA57L;
    (*l_845) = 0xA95A1F9BL;
    (*g_178) = l_845;
    if (((*l_873) = (safe_lshift_func_int8_t_s_s((l_849 = ((*l_845) = (g_226[2].f2 = (p_12.f2 = (*l_845))))), ((safe_add_func_int32_t_s_s((safe_lshift_func_int8_t_s_s((safe_lshift_func_int8_t_s_u((((safe_div_func_uint32_t_u_u(((++(*g_205)) , (((!g_308) & (((safe_lshift_func_uint8_t_u_u(((safe_sub_func_int64_t_s_s(0xFE81204C34D9B77DLL, (l_867 ^= g_37))) > (((((l_868 == (((((*l_869) = 0x5A96L) >= l_870) ^ l_870) , l_868)) | 1UL) , g_251) != g_251) == 0x935EL)), 5)) & l_870) != g_99[0][0])) && l_871)), (-1L))) == l_872[1]) < 0xC36804F927D249A1LL), 7)), l_872[1])), 0x0E212465L)) <= g_251)))))
    { 
        for (g_223.f4.f5 = 28; (g_223.f4.f5 < 5); g_223.f4.f5--)
        { 
            struct S0 *l_876 = &g_209;
            return l_876;
        }
        (*g_178) = (*g_178);
        (*g_178) = ((&g_832 == (void*)0) , (void*)0);
    }
    else
    { 
        (*g_178) = &l_849;
    }
    return l_877;
}



static union U1  func_13(uint32_t  p_14, struct S0  p_15, const uint8_t  p_16, struct S0  p_17)
{ 
    int32_t *l_843 = (void*)0;
    union U1 l_844 = {1L};
    for (p_17.f6 = 0; (p_17.f6 < 20); p_17.f6++)
    { 
        const int32_t * const l_841 = &g_209.f2;
        for (g_223.f1 = 0; (g_223.f1 >= (-6)); g_223.f1 = safe_sub_func_uint64_t_u_u(g_223.f1, 6))
        { 
            const int32_t **l_842 = &g_179;
            (*l_842) = l_841;
            (*g_178) = l_843;
        }
    }
    return l_844;
}



static struct S0  func_28(struct S0  p_29, uint32_t  p_30, struct S0 * const  p_31, uint32_t * p_32, uint32_t * p_33)
{ 
    uint32_t **l_215 = &g_75[6][0];
    uint32_t ***l_214[7][3] = {{&l_215,(void*)0,(void*)0},{(void*)0,&l_215,&l_215},{&l_215,&l_215,&l_215},{&l_215,(void*)0,&l_215},{&l_215,&l_215,(void*)0},{&l_215,(void*)0,(void*)0},{(void*)0,&l_215,&l_215}};
    union U1 *l_225 = &g_226[2];
    int32_t l_239 = 0x99FF8B33L;
    int32_t l_240 = (-9L);
    int32_t l_243[5];
    int32_t l_244 = 0x0FADCD0BL;
    int8_t l_249 = 0x1EL;
    int32_t l_250 = 8L;
    int32_t l_252 = 8L;
    int32_t l_253 = 0L;
    int32_t l_254 = (-6L);
    uint32_t l_270[6];
    int64_t l_273 = 2L;
    struct S0 l_298 = {0x76AAA291L,0x3C11ECB03B6AADC2LL,0x6E37E5EEL,0L,3UL,0xF2L,8L,0L};
    uint64_t *l_339[3][4];
    const uint16_t *l_433 = (void*)0;
    uint16_t *l_435 = &g_308;
    int64_t l_594 = 0x96ADC7F885C5605CLL;
    int32_t l_602 = 0x6A45A026L;
    int32_t l_603 = 0xC2A7CC1AL;
    int32_t l_604 = (-1L);
    int32_t l_605 = 5L;
    int32_t l_606[3];
    uint16_t l_607 = 1UL;
    int64_t l_611[2][3];
    const struct S0 l_612 = {0x4C6E1C4FL,4L,-3L,0x675931AD29F45B8ALL,6UL,0x6CL,0x5293L,-1L};
    int32_t **l_698 = &g_118;
    uint32_t l_715 = 0xAAED11DEL;
    int16_t ****l_746 = (void*)0;
    int16_t l_757 = 0x528DL;
    int32_t l_781 = (-3L);
    uint64_t l_784 = 5UL;
    uint8_t l_807[7][5][3] = {{{6UL,0UL,9UL},{247UL,0x7BL,0x1EL},{0x79L,0UL,0xBEL},{250UL,0x6EL,0xCAL},{0xE5L,0x58L,0xE5L}},{{0xCAL,0x6EL,250UL},{0xBEL,0UL,0x79L},{0x1EL,0x7BL,247UL},{9UL,0UL,6UL},{0x1EL,0xCAL,0x7BL}},{{0xBEL,250UL,253UL},{0xCAL,1UL,1UL},{0xE5L,0x23L,253UL},{250UL,246UL,0x7BL},{0x79L,253UL,6UL}},{{247UL,247UL,247UL},{6UL,253UL,0x79L},{0x7BL,246UL,250UL},{253UL,0x23L,0xE5L},{1UL,1UL,0xCAL}},{{253UL,250UL,0xBEL},{0x7BL,0xCAL,0x1EL},{6UL,0UL,9UL},{247UL,0x7BL,0x1EL},{0x79L,0UL,0xBEL}},{{250UL,0x6EL,0xCAL},{0xE5L,0x58L,0xE5L},{0xCAL,0x6EL,250UL},{0xBEL,0UL,0x79L},{0x1EL,0x7BL,247UL}},{{9UL,0UL,6UL},{0x1EL,0xCAL,0x7BL},{0xBEL,250UL,253UL},{0xCAL,1UL,1UL},{0xE5L,0x23L,253UL}}};
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_243[i] = 0x908283C7L;
    for (i = 0; i < 6; i++)
        l_270[i] = 0xA62254FAL;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
            l_339[i][j] = (void*)0;
    }
    for (i = 0; i < 3; i++)
        l_606[i] = 2L;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
            l_611[i][j] = (-5L);
    }
    for (p_29.f1 = (-1); (p_29.f1 == 5); p_29.f1 = safe_add_func_int16_t_s_s(p_29.f1, 7))
    { 
        int16_t l_217 = 5L;
        uint32_t ****l_233 = (void*)0;
        int32_t l_245 = 0L;
        int32_t l_247 = 0x9B93CA6DL;
        int32_t l_276 = (-1L);
        int32_t l_277 = 0xFCDB4EE3L;
        int32_t l_278 = (-1L);
        int32_t l_279 = 0x60284BEEL;
        uint32_t l_381[2];
        uint32_t *****l_471 = (void*)0;
        uint32_t *****l_472 = &g_450;
        uint16_t l_477 = 0x03CBL;
        union U1 *l_574 = &g_226[2];
        int32_t l_600[6] = {0x9E86ACDCL,(-5L),0x9E86ACDCL,0x9E86ACDCL,(-5L),0x9E86ACDCL};
        uint32_t l_687 = 0xBF06D18DL;
        int16_t l_703 = 3L;
        int32_t l_725[2][6][7] = {{{(-8L),(-8L),0xB8FFBD81L,0x2DB15801L,0x31D67725L,(-6L),(-1L)},{0x677FF15CL,0xB8FFBD81L,(-1L),0x1A808B6CL,0x88498D54L,0x31D67725L,5L},{(-6L),0x49B52A1BL,0x31D67725L,(-1L),0x31D67725L,0x49B52A1BL,(-6L)},{(-4L),(-6L),0xFD577E22L,(-1L),(-8L),5L,0x1A808B6CL},{0xDA906407L,0x9BB91A0DL,0L,0x1A808B6CL,(-4L),0x88498D54L,0x88498D54L},{0x2DB15801L,0x1A808B6CL,0xB8FFBD81L,0x1A808B6CL,0x2DB15801L,(-1L),(-4L)}},{{(-4L),0x1A808B6CL,0L,0x9BB91A0DL,0xDA906407L,(-6L),0x49B52A1BL},{0x1A808B6CL,0x677FF15CL,0xDA906407L,(-6L),0xB8FFBD81L,0xB8FFBD81L,(-6L)},{(-4L),0x9BB91A0DL,(-4L),0xB8FFBD81L,1L,0x677FF15CL,(-6L)},{0x2DB15801L,0x31D67725L,(-6L),(-1L),(-6L),(-4L),0x49B52A1BL},{0xFD577E22L,(-4L),0x677FF15CL,0x31D67725L,0x31D67725L,0x677FF15CL,(-4L)},{0x49B52A1BL,0x88498D54L,(-8L),0xFD577E22L,0x31D67725L,0xB8FFBD81L,1L}}};
        uint16_t l_733 = 0UL;
        int32_t l_742[6][5][1] = {{{0xBEBA082EL},{1L},{0xBEBA082EL},{1L},{0xBEBA082EL}},{{1L},{0xBEBA082EL},{1L},{0xBEBA082EL},{1L}},{{0xBEBA082EL},{1L},{0xBEBA082EL},{1L},{0xBEBA082EL}},{{1L},{0xBEBA082EL},{1L},{0xBEBA082EL},{1L}},{{0xBEBA082EL},{1L},{0xBEBA082EL},{1L},{0xBEBA082EL}},{{1L},{0xBEBA082EL},{1L},{0xBEBA082EL},{1L}}};
        uint16_t l_743[7][4] = {{0x8EEFL,1UL,1UL,1UL},{65535UL,65535UL,0xBC76L,1UL},{1UL,65535UL,65535UL,1UL},{65535UL,1UL,65535UL,0x8EEFL},{65535UL,65535UL,65535UL,0xBC76L},{1UL,0x8EEFL,0xBC76L,0xBC76L},{65535UL,65535UL,1UL,0x8EEFL}};
        struct S0 l_783[5][2] = {{{4294967294UL,0xA790E8397AA347D4LL,1L,0x893BE66073672B16LL,0UL,1UL,-1L,-3L},{4294967295UL,0L,-1L,0x11E81D7CAD984FA3LL,0x83ADC0C6C457C95DLL,0x5DL,0x2855L,-1L}},{{0x121E67EEL,0xCEF3A9A6E1889A1DLL,1L,1L,18446744073709551615UL,8UL,0x3C0DL,0xEEB3L},{0x3E78A29AL,1L,-1L,0x95F5EC73F73A035FLL,0UL,0xE1L,0x9F22L,1L}},{{4294967295UL,0L,-1L,0x11E81D7CAD984FA3LL,0x83ADC0C6C457C95DLL,0x5DL,0x2855L,-1L},{0x3E78A29AL,1L,-1L,0x95F5EC73F73A035FLL,0UL,0xE1L,0x9F22L,1L}},{{0x121E67EEL,0xCEF3A9A6E1889A1DLL,1L,1L,18446744073709551615UL,8UL,0x3C0DL,0xEEB3L},{4294967295UL,0L,-1L,0x11E81D7CAD984FA3LL,0x83ADC0C6C457C95DLL,0x5DL,0x2855L,-1L}},{{4294967294UL,0xA790E8397AA347D4LL,1L,0x893BE66073672B16LL,0UL,1UL,-1L,-3L},{4294967294UL,0xA790E8397AA347D4LL,1L,0x893BE66073672B16LL,0UL,1UL,-1L,-3L}}};
        int64_t l_803 = 0x645CA0DFB9E90AE6LL;
        int32_t *l_810 = &l_606[2];
        int16_t ****l_827 = (void*)0;
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_381[i] = 18446744073709551606UL;
    }
    return g_209;
}



static struct S0  func_34(uint16_t  p_35)
{ 
    int32_t *l_36 = &g_37;
    int32_t **l_38 = &l_36;
    uint64_t l_41 = 18446744073709551610UL;
    int8_t l_57[6] = {0x01L,0x01L,0x01L,0x01L,0x01L,0x01L};
    int32_t l_58 = 0x8795192CL;
    struct S0 l_62[1] = {{4294967290UL,-1L,5L,1L,0x536C3AC5B6CC60A9LL,0UL,0L,0xB3EEL}};
    int32_t **l_77 = &l_36;
    uint32_t * const *l_94 = &g_75[0][3];
    int32_t *l_125 = (void*)0;
    int i;
lbl_187:
    (*l_38) = l_36;
    if (func_39(l_41))
    { 
        int32_t l_43[1];
        int i;
        for (i = 0; i < 1; i++)
            l_43[i] = 0x8E103CA5L;
        (**l_38) |= p_35;
        (**l_38) = 0x404179B2L;
        for (p_35 = 0; p_35 < 1; p_35 += 1)
        {
            l_43[p_35] = 3L;
        }
    }
    else
    { 
        int64_t l_47 = 1L;
        int32_t l_49 = (-1L);
        int32_t *l_50 = &l_49;
        int32_t *l_51 = &g_37;
        int32_t *l_52 = &l_49;
        int32_t l_53[5][2][2] = {{{7L,7L},{7L,7L}},{{7L,7L},{7L,7L}},{{7L,7L},{7L,7L}},{{7L,7L},{7L,7L}},{{7L,7L},{7L,7L}}};
        int32_t *l_54 = &l_53[3][1][0];
        int32_t *l_55 = &l_49;
        int32_t *l_56[1][6][1] = {{{(void*)0},{&l_53[3][1][0]},{(void*)0},{(void*)0},{&l_53[3][1][0]},{(void*)0}}};
        const struct S0 *l_97[1][4];
        const uint8_t l_113 = 0x06L;
        uint64_t *l_121 = &l_62[0].f4;
        int32_t *** const l_136 = &g_117[0][1][1];
        int16_t l_169 = 0L;
        int i, j, k;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 4; j++)
                l_97[i][j] = (void*)0;
        }
        for (g_37 = 0; (g_37 < 17); g_37 = safe_add_func_uint8_t_u_u(g_37, 4))
        { 
            int8_t l_48 = (-10L);
            l_47 = ((void*)0 == g_46);
            if (l_48)
                continue;
        }
        g_59[3]++;
        for (l_49 = 0; (l_49 <= 0); l_49 += 1)
        { 
            return l_62[0];
        }
        for (g_37 = 15; (g_37 == (-21)); g_37 = safe_sub_func_uint64_t_u_u(g_37, 1))
        { 
            const int32_t * const l_72 = (void*)0;
            const int32_t * const *l_71 = &l_72;
            uint32_t *l_74 = &l_62[0].f0;
            uint32_t **l_73 = &l_74;
            const int32_t *l_79 = &l_62[0].f2;
            const int32_t **l_80 = (void*)0;
            const int32_t **l_81 = &l_79;
            if (g_37)
                break;
            (*l_50) &= (func_39((func_65((l_71 = l_71), (*l_38), ((*l_73) = l_36), g_75[6][0], l_77) && (g_59[3] , (**l_38)))) ^ g_59[3]);
            if (p_35)
                continue;
            (*l_81) = l_79;
        }
        for (l_58 = 28; (l_58 <= 18); l_58 = safe_sub_func_uint64_t_u_u(l_58, 7))
        { 
            int16_t l_98 = 0x8B3BL;
            uint32_t *l_106 = &l_62[0].f0;
            int32_t l_124 = 0L;
            struct S0 *l_168 = &l_62[0];
            const int32_t ***l_180 = &g_178;
            const int32_t **l_182 = (void*)0;
            const int32_t ***l_181 = &l_182;
            uint16_t *l_183 = &g_100;
            uint16_t *l_184 = (void*)0;
            uint16_t *l_185 = &g_59[1];
            union U1 l_186 = {1L};
            uint16_t **l_197 = &l_183;
            for (p_35 = 1; (p_35 <= 5); p_35 += 1)
            { 
                uint32_t * const **l_95 = &l_94;
                struct S0 l_103 = {4294967293UL,1L,-1L,1L,1UL,1UL,0xBC92L,0L};
                uint64_t *l_114 = &l_103.f4;
                int i, j;
            }
            (*l_54) ^= (safe_rshift_func_uint8_t_u_s(((**l_38) & (safe_mul_func_uint8_t_u_u((*l_51), (safe_div_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_s((((&l_36 != (p_35 , ((*l_181) = ((*l_180) = g_178)))) >= (((*l_185) = ((*l_183) = g_99[0][2])) ^ (l_186 , g_2))) , g_2), g_76)), g_76))))), 2));
            if (l_186.f0)
                goto lbl_187;
            (*l_51) = ((safe_mul_func_uint8_t_u_u((g_198 = (p_35 ^ (safe_rshift_func_uint8_t_u_s((+((safe_sub_func_uint64_t_u_u(((18446744073709551615UL || 0UL) | p_35), ((p_35 , 254UL) < ((safe_rshift_func_uint16_t_u_s((((*l_197) = &p_35) == (void*)0), (***l_181))) == 0x46L)))) == p_35)), 4)))), (**l_77))) , (***l_181));
            return l_62[0];
        }
    }
    return l_62[0];
}



static int32_t  func_39(int8_t  p_40)
{ 
    uint16_t l_42 = 65535UL;
    return l_42;
}



static int64_t  func_65(const int32_t * const * p_66, int32_t * p_67, uint32_t * p_68, uint32_t * p_69, int32_t ** p_70)
{ 
    uint32_t l_78 = 18446744073709551610UL;
    return l_78;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_27, "g_27", print_hash_value);
    transparent_crc(g_37, "g_37", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_59[i], "g_59[i]", print_hash_value);

    }
    transparent_crc(g_76, "g_76", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_99[i][j], "g_99[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_100, "g_100", print_hash_value);
    transparent_crc(g_198, "g_198", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_203[i], "g_203[i]", print_hash_value);

    }
    transparent_crc(g_209.f0, "g_209.f0", print_hash_value);
    transparent_crc(g_209.f1, "g_209.f1", print_hash_value);
    transparent_crc(g_209.f2, "g_209.f2", print_hash_value);
    transparent_crc(g_209.f3, "g_209.f3", print_hash_value);
    transparent_crc(g_209.f4, "g_209.f4", print_hash_value);
    transparent_crc(g_209.f5, "g_209.f5", print_hash_value);
    transparent_crc(g_209.f6, "g_209.f6", print_hash_value);
    transparent_crc(g_209.f7, "g_209.f7", print_hash_value);
    transparent_crc(g_223.f2, "g_223.f2", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_226[i].f2, "g_226[i].f2", print_hash_value);

    }
    transparent_crc(g_251, "g_251", print_hash_value);
    transparent_crc(g_308, "g_308", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_508[i], "g_508[i]", print_hash_value);

    }
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_704[i], "g_704[i]", print_hash_value);

    }
    transparent_crc(g_741, "g_741", print_hash_value);
    transparent_crc(g_832, "g_832", print_hash_value);
    transparent_crc(g_945, "g_945", print_hash_value);
    transparent_crc(g_974, "g_974", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
