// SPDX-License-Identifier: MIT
// cctest_csmith_f9d80f3c.c --- cctest case csmith_f9d80f3c (csmith seed 4191686460)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x716943bd */
/* @exp_ticks 0x3bb7 */

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

// Options:   -s 4191686460 -o /tmp/csmith_gen__w4gmv_8/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   uint8_t  f0;
   const int16_t  f1;
   int64_t  f2;
};

#pragma pack(push)
#pragma pack(1)
struct S1 {
   int64_t  f0;
};
#pragma pack(pop)

#pragma pack(push)
#pragma pack(1)
struct S2 {
   int8_t  f0;
   const uint32_t  f1;
   struct S1  f2;
   uint32_t  f3;
};
#pragma pack(pop)

union U3 {
   const int64_t  f0;
   struct S0  f1;
};


static int32_t g_6 = 7L;
static uint32_t g_8 = 0x19F23E52L;
static int32_t g_60 = 0L;
static int16_t g_61 = 1L;
static struct S0 g_62[5] = {{0UL,0x4D52L,2L},{0UL,0x4D52L,2L},{0UL,0x4D52L,2L},{0UL,0x4D52L,2L},{0UL,0x4D52L,2L}};
static const union U3 g_69 = {1L};
static uint16_t g_70 = 0x7D65L;
static uint8_t g_71[5] = {1UL,1UL,1UL,1UL,1UL};
static uint64_t g_72 = 18446744073709551609UL;
static int64_t g_85 = 5L;
static uint16_t g_86[4] = {0x9F9DL,0x9F9DL,0x9F9DL,0x9F9DL};
static struct S1 g_124 = {0xF2CAE24E5D96F57FLL};
static uint32_t g_159 = 0x01FFE247L;
static int8_t g_168 = (-1L);
static int32_t g_181 = 0x34DAAF50L;



static union U3  func_1(void);
static const union U3  func_13(uint8_t  p_14, uint16_t  p_15, int64_t  p_16);
static uint8_t  func_17(struct S0  p_18, struct S0  p_19);
static struct S0  func_21(int64_t  p_22, uint64_t  p_23, int32_t  p_24, int32_t  p_25, uint16_t  p_26);




static union U3  func_1(void)
{ 
    uint64_t l_2 = 18446744073709551614UL;
    uint32_t l_5[3][3][5] = {{{0x5BFC88EBL,0x8591B68DL,0x870A3267L,0x5BFC88EBL,0x870A3267L},{0x5BFC88EBL,0x5BFC88EBL,0x87642760L,0xE21AFA9BL,18446744073709551615UL},{1UL,18446744073709551615UL,0x870A3267L,0x870A3267L,18446744073709551615UL}},{{18446744073709551615UL,0x8591B68DL,1UL,18446744073709551615UL,0x870A3267L},{0xE21AFA9BL,18446744073709551615UL,0x87642760L,18446744073709551615UL,0xE21AFA9BL},{1UL,0x5BFC88EBL,0x8591B68DL,0x870A3267L,0x5BFC88EBL}},{{0xE21AFA9BL,0x8591B68DL,0x87642760L,0x8591B68DL,0x4FDA7EF5L},{0x870A3267L,0x8591B68DL,0x5BFC88EBL,1UL,1UL},{0x374B1B05L,0x8591B68DL,0x374B1B05L,0x4FDA7EF5L,0x8591B68DL}}};
    int32_t l_81 = 0L;
    const struct S2 l_100 = {0x13L,1UL,{0x7325C604081ECF37LL},0x808B432AL};
    uint32_t l_123 = 3UL;
    union U3 l_152 = {1L};
    struct S1 l_186 = {5L};
    int i, j, k;
    if (l_2)
    { 
        uint64_t l_82 = 0x59D8E95A6083B6D9LL;
        for (l_2 = (-29); (l_2 >= 49); l_2 = safe_add_func_int32_t_s_s(l_2, 3))
        { 
            int16_t l_32 = 0L;
            for (g_6 = 0; (g_6 <= 2); g_6 += 1)
            { 
                int64_t l_7 = 0x018D9DCEE34EDF6BLL;
                struct S0 l_20 = {0UL,-7L,-4L};
                int64_t l_29[5][3] = {{0xD1A6F32215F8F506LL,(-5L),0x3A64E785C2F4FE10LL},{(-7L),0x484F75DF1563CFEBLL,0x0C1979116971DB95LL},{0xD1A6F32215F8F506LL,0xD1A6F32215F8F506LL,0x0C1979116971DB95LL},{0x484F75DF1563CFEBLL,(-7L),0x3A64E785C2F4FE10LL},{(-5L),0xD1A6F32215F8F506LL,(-5L)}};
                int64_t l_33 = 0x3B6910C33490CE61LL;
                int i, j;
                g_8--;
                if (l_7)
                    break;
                g_72 = (g_71[3] = (g_70 = (safe_rshift_func_uint16_t_u_s((func_13((g_62[2].f0 = func_17(l_20, func_21((safe_lshift_func_uint16_t_u_s((((l_20 , ((((l_29[2][0] ^ (safe_rshift_func_uint8_t_u_u(0xDDL, 3))) ^ g_8) && l_2) == l_32)) | 0xAC16B405B7518DB0LL) || 0xAE264689L), 13)), g_6, l_32, g_6, l_33))), l_32, g_62[2].f2) , g_61), g_62[2].f1))));
            }
            l_82 = ((l_81 = ((g_69.f0 , (safe_div_func_uint16_t_u_u((safe_mul_func_int8_t_s_s((safe_add_func_uint64_t_u_u((g_62[1] , (safe_rshift_func_uint8_t_u_s(((9L || g_60) < g_6), g_71[3]))), l_32)), 254UL)), 0xD5F6L))) || 0xAD57AD3C07AF8E1FLL)) && 0xD7L);
        }
    }
    else
    { 
        int64_t l_101 = (-9L);
        for (l_2 = (-22); (l_2 == 22); l_2++)
        { 
            int16_t l_91[4][3][4] = {{{(-1L),(-4L),0L,(-1L)},{0L,(-1L),0x5E89L,0x5E89L},{0L,0L,0x57A5L,0xF0F7L}},{{0L,(-4L),0x5E89L,0L},{0L,0xF0F7L,0L,0x5E89L},{(-1L),0xF0F7L,0x57A5L,0L}},{{0xF0F7L,(-4L),(-4L),0xF0F7L},{0L,0L,(-4L),0x5E89L},{0xF0F7L,(-1L),0x57A5L,(-1L)}},{{(-1L),(-4L),0L,(-1L)},{0L,(-1L),0x5E89L,0x5E89L},{0L,0L,0x57A5L,0xF0F7L}}};
            int32_t l_107 = 0L;
            struct S1 l_125 = {0xEB3B6C1D071B3E14LL};
            struct S1 l_126[3] = {{1L},{1L},{1L}};
            int i, j, k;
            for (g_8 = 0; (g_8 <= 4); g_8 += 1)
            { 
                int i;
                if (g_71[g_8])
                    break;
                g_86[3]++;
                g_6 &= (((0xA4F9L & g_71[g_8]) >= (safe_rshift_func_uint16_t_u_s(((l_5[0][2][2] | ((-1L) & 0x190EL)) <= l_91[1][1][1]), 15))) | 246UL);
            }
            l_81 = ((safe_mod_func_int8_t_s_s((safe_div_func_uint32_t_u_u((g_8 = ((safe_mul_func_uint32_t_u_u(g_62[2].f1, ((safe_rshift_func_int16_t_s_u(((((g_60 & (l_100 , 0L)) <= g_62[2].f1) , g_8) , 0x5F70L), 0)) < g_71[2]))) & 0x88AFD611L)), l_91[1][1][1])), l_101)) != g_62[2].f2);
            for (g_72 = 24; (g_72 == 48); g_72 = safe_add_func_uint32_t_u_u(g_72, 3))
            { 
                int64_t l_106[1];
                int32_t l_120 = 0x274B4BCEL;
                int i;
                for (i = 0; i < 1; i++)
                    l_106[i] = 0xDC77BC62773D59F1LL;
                l_120 &= ((safe_add_func_uint16_t_u_u((--g_86[3]), (safe_sub_func_uint16_t_u_u(((g_62[2].f0 & l_5[1][0][1]) & ((safe_mod_func_int16_t_s_s((((safe_sub_func_int16_t_s_s(g_85, ((((safe_div_func_uint64_t_u_u(((safe_add_func_int8_t_s_s(((0x4AB3L | l_101) >= g_61), l_91[1][2][3])) || l_100.f2.f0), g_6)) >= 0xD6C54523L) & 5L) ^ g_70))) < l_107) , 0xFF73L), l_106[0])) ^ g_62[2].f0)), (-2L))))) && g_62[2].f2);
                l_126[1] = (g_124 = ((safe_rshift_func_uint16_t_u_s((g_70 = 3UL), 12)) , (l_125 = ((g_62[2].f0 > (l_120 &= (g_60 < l_123))) , g_124))));
            }
        }
    }
    if (((+(((g_124.f0 = (l_81 = l_100.f2.f0)) ^ 18446744073709551614UL) != g_71[3])) < ((((safe_div_func_int16_t_s_s((safe_lshift_func_uint16_t_u_u((safe_mod_func_uint32_t_u_u((safe_lshift_func_int8_t_s_u(((g_62[2].f0 | l_100.f2.f0) <= g_62[2].f0), 1)), l_100.f2.f0)), l_100.f1)), g_71[3])) , g_61) != l_100.f0) , 0x49L)))
    { 
        uint64_t l_136[2][2][2] = {{{1UL,0x06E961C82C1C9F68LL},{1UL,0x06E961C82C1C9F68LL}},{{1UL,0x06E961C82C1C9F68LL},{1UL,0x06E961C82C1C9F68LL}}};
        union U3 l_146 = {-10L};
        uint32_t l_155 = 3UL;
        int32_t l_157 = 1L;
        int8_t l_190[4][1][5] = {{{0L,0L,0xFDL,0L,0L}},{{0x33L,0L,0x33L,0x33L,0L}},{{0L,0x33L,0x33L,0L,0x33L}},{{0L,0L,0xFDL,0L,0L}}};
        int i, j, k;
        l_136[1][0][0] = g_6;
        if (g_86[3])
        { 
            uint32_t l_140 = 1UL;
            int32_t l_141 = 1L;
            struct S1 l_149 = {-1L};
            for (l_81 = 0; (l_81 <= 0); ++l_81)
            { 
                uint32_t l_139[2][1][5] = {{{1UL,1UL,1UL,1UL,1UL}},{{0x69AB3D76L,0x69AB3D76L,0x69AB3D76L,0x69AB3D76L,0x69AB3D76L}}};
                int i, j, k;
                g_6 &= (g_71[4] > (((((((l_140 = l_139[0][0][0]) & l_141) , (l_141 ^= (safe_mul_func_uint16_t_u_u(((((safe_mul_func_int16_t_s_s((l_5[1][0][4] < 65535UL), 0xFA46L)) || l_123) & g_70) >= l_5[1][0][0]), l_100.f0)))) < g_61) ^ 1UL) , l_146) , (-4L)));
                if (g_72)
                    break;
            }
            for (g_70 = 0; (g_70 == 4); ++g_70)
            { 
                g_124 = l_149;
            }
            for (g_61 = 2; (g_61 >= 0); g_61 -= 1)
            { 
                int32_t l_156 = 0x1C8EEA47L;
                struct S1 l_158 = {-1L};
                l_157 = ((safe_mod_func_int32_t_s_s(((((((g_60 , (((l_152 , (safe_lshift_func_int8_t_s_s(0L, 2))) >= ((0xD9C254B3L & l_141) && 0x6EA0L)) & l_136[1][1][0])) || 0L) , l_155) <= g_62[2].f1) != l_146.f0) != g_86[0]), l_156)) == 0xB1L);
                l_158 = g_124;
            }
        }
        else
        { 
            int32_t l_166[4][3] = {{0x2045DDD7L,(-9L),0x2045DDD7L},{0x96D3B482L,0x96D3B482L,0x96D3B482L},{0x2045DDD7L,(-9L),0x2045DDD7L},{0x96D3B482L,0x96D3B482L,0x96D3B482L}};
            uint32_t l_167 = 18446744073709551615UL;
            int32_t l_169 = 0x0BE2FE8CL;
            uint16_t l_170 = 0xD1B2L;
            int i, j;
            ++g_159;
            if (g_159)
                goto lbl_182;
lbl_182:
            if ((safe_mod_func_int32_t_s_s((safe_mul_func_uint16_t_u_u((((l_169 = ((g_168 = (l_167 = ((0x2488L || ((l_2 & ((l_166[0][2] ^ (l_157 = 0x6C7A1140L)) , g_86[1])) == 1UL)) ^ g_60))) , g_72)) <= g_71[3]) > l_166[0][1]), l_136[0][1][1])), l_170)))
            { 
                return l_152;
            }
            else
            { 
                g_6 = (((safe_lshift_func_uint8_t_u_s(((((safe_add_func_int64_t_s_s((safe_lshift_func_int16_t_s_s(g_71[4], g_86[3])), ((safe_lshift_func_int8_t_s_s(l_169, g_62[2].f2)) > 1UL))) != g_62[2].f1) , 18446744073709551608UL) , l_5[0][2][4]), 6)) > 4UL) | g_86[3]);
                g_6 = (l_166[2][0] && (((l_136[1][0][0] && g_69.f0) | (safe_mul_func_uint8_t_u_u(((g_181 = (g_60 = 0xF3BF82D5L)) , l_167), l_167))) > 0xD6E3L));
            }
            for (g_168 = 0; (g_168 != 0); g_168 = safe_add_func_int16_t_s_s(g_168, 4))
            { 
                uint8_t l_185 = 0x25L;
                if (l_185)
                    break;
                l_186 = l_100.f2;
                if (l_186.f0)
                    continue;
            }
        }
        l_157 = ((((safe_add_func_int64_t_s_s(g_62[2].f0, (safe_unary_minus_func_int32_t_s(((((g_181 | (0xA50AL && (g_86[1] = g_159))) & g_61) , l_136[1][0][0]) >= g_62[2].f1))))) >= l_190[1][0][4]) != 65529UL) | g_8);
    }
    else
    { 
        for (g_85 = 0; (g_85 > 5); g_85 = safe_add_func_int64_t_s_s(g_85, 1))
        { 
            uint32_t l_195 = 4294967294UL;
            for (l_123 = 0; (l_123 <= 16); l_123 = safe_add_func_int16_t_s_s(l_123, 4))
            { 
                return g_69;
            }
            if (g_85)
            { 
                g_6 = g_71[4];
            }
            else
            { 
                return l_152;
            }
            l_195--;
        }
    }
    return l_152;
}



static const union U3  func_13(uint8_t  p_14, uint16_t  p_15, int64_t  p_16)
{ 
    int32_t l_68 = 0xB22E0064L;
    l_68 &= p_16;
    return g_69;
}



static uint8_t  func_17(struct S0  p_18, struct S0  p_19)
{ 
    int64_t l_63 = 0x1E2C0253A1071FCCLL;
    int32_t l_66 = 0xCA997203L;
    int32_t l_67 = 1L;
    l_67 |= ((l_63 || ((l_66 ^= (g_62[2].f0 || (safe_rshift_func_uint8_t_u_s(((0x85807939L && ((g_61 &= p_18.f0) >= 0xA418L)) <= l_63), l_63)))) || 0x870DL)) == l_63);
    return g_62[2].f2;
}



static struct S0  func_21(int64_t  p_22, uint64_t  p_23, int32_t  p_24, int32_t  p_25, uint16_t  p_26)
{ 
    int64_t l_38 = 1L;
    int32_t l_54[1];
    int64_t l_55 = 5L;
    int i;
    for (i = 0; i < 1; i++)
        l_54[i] = 0L;
    for (p_24 = (-15); (p_24 < 1); p_24++)
    { 
        uint64_t l_53 = 0UL;
        p_25 = ((safe_mod_func_uint32_t_u_u((l_38 ^= 0x97FB6F8AL), 0x1BBDB817L)) >= 0x5C02AC6AA04D97F6LL);
        l_55 = ((((safe_rshift_func_int8_t_s_u(((safe_add_func_int8_t_s_s((((l_54[0] = ((safe_mul_func_uint8_t_u_u(0x30L, (safe_sub_func_int32_t_s_s((safe_add_func_int32_t_s_s((p_25 = p_23), (safe_div_func_uint32_t_u_u((safe_mul_func_uint16_t_u_u(l_53, 1UL)), 0xF4D21FD0L)))), p_23)))) , p_26)) & p_22) , l_38), g_6)) > p_24), p_24)) ^ p_23) , p_23) , p_24);
    }
    g_61 |= ((safe_mul_func_int16_t_s_s(9L, g_8)) < (((((g_60 = ((safe_mod_func_int16_t_s_s((l_54[0] ^= g_8), 0xD660L)) , p_22)) == l_55) > p_24) > (-1L)) == l_38));
    return g_62[2];
}





int test_main(void)
{
    int i;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_6, "g_6", print_hash_value);
    transparent_crc(g_8, "g_8", print_hash_value);
    transparent_crc(g_60, "g_60", print_hash_value);
    transparent_crc(g_61, "g_61", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_62[i].f0, "g_62[i].f0", print_hash_value);
        transparent_crc(g_62[i].f1, "g_62[i].f1", print_hash_value);
        transparent_crc(g_62[i].f2, "g_62[i].f2", print_hash_value);

    }
    transparent_crc(g_69.f0, "g_69.f0", print_hash_value);
    transparent_crc(g_70, "g_70", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_71[i], "g_71[i]", print_hash_value);

    }
    transparent_crc(g_72, "g_72", print_hash_value);
    transparent_crc(g_85, "g_85", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_86[i], "g_86[i]", print_hash_value);

    }
    transparent_crc(g_124.f0, "g_124.f0", print_hash_value);
    transparent_crc(g_159, "g_159", print_hash_value);
    transparent_crc(g_168, "g_168", print_hash_value);
    transparent_crc(g_181, "g_181", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
