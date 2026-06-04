// SPDX-License-Identifier: MIT
// cctest_csmith_7d914cdd.c --- cctest case csmith_7d914cdd (csmith seed 2106674397)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x4db1a3e1 */
/* @exp_ticks 0x968 */

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

// Options:   -s 2106674397 -o /home/agent1/fast_data/tmp/csmith_gen_fl_8w9wq/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   int32_t  f0;
   uint8_t  f1;
   int8_t  f2;
   int32_t  f3;
   uint32_t  f4;
   uint16_t  f5;
};

union U1 {
   uint16_t  f0;
};


static uint64_t g_5 = 0x3CF95751CFD1F2E9LL;
static int32_t g_12 = 1L;
static int8_t g_18 = 0x4CL;
static struct S0 g_64 = {0x639B6AF4L,0UL,8L,0L,0xBD72F548L,0UL};
static uint16_t g_81[3][5] = {{2UL,2UL,2UL,2UL,2UL},{2UL,2UL,2UL,2UL,2UL},{2UL,2UL,2UL,2UL,2UL}};
static uint32_t g_85 = 1UL;
static uint32_t g_101 = 8UL;
static uint32_t g_102 = 4294967295UL;
static int16_t g_104 = 0x9DD6L;
static int32_t g_105 = 5L;
static int16_t g_106 = 0x7A7CL;
static int64_t g_107 = (-5L);
static uint16_t g_116 = 1UL;
static const uint32_t g_157[4] = {0x48C45170L,0x48C45170L,0x48C45170L,0x48C45170L};
static int16_t g_170[3][3] = {{1L,1L,1L},{0x610EL,0x610EL,0x610EL},{1L,1L,1L}};
static uint32_t g_172[1] = {0UL};
static uint64_t g_191 = 18446744073709551607UL;
static uint16_t g_194 = 3UL;
static int8_t g_208 = 1L;
static uint32_t g_216 = 18446744073709551612UL;
static int32_t g_237 = 0x8893D1EFL;
static uint8_t g_240 = 254UL;
static int32_t g_243[4][1][4] = {{{0x3360A1ABL,(-1L),(-1L),0x3360A1ABL}},{{(-1L),0x3360A1ABL,(-1L),(-1L)}},{{0x3360A1ABL,0x3360A1ABL,0x54C07296L,0x3360A1ABL}},{{0x3360A1ABL,(-1L),(-1L),0x3360A1ABL}}};



static uint32_t  func_1(void);
static uint8_t  func_21(uint8_t  p_22, struct S0  p_23);
static int8_t  func_35(uint32_t  p_36, const int32_t  p_37);
static const uint8_t  func_45(uint64_t  p_46, uint32_t  p_47, struct S0  p_48, int16_t  p_49);




static uint32_t  func_1(void)
{ 
    int64_t l_4 = 0x61C0F8067E307B5CLL;
    struct S0 l_111 = {0x82C1F1FEL,0x34L,1L,0xB8A93D2DL,0xDA1B12C1L,1UL};
    int32_t l_239[4];
    int32_t l_257 = 0x63E1A2BDL;
    int i;
    for (i = 0; i < 4; i++)
        l_239[i] = (-5L);
    if (((safe_mod_func_int16_t_s_s((l_4 && (((g_5 | 0x73E7ED6F1860EC01LL) || (safe_lshift_func_int16_t_s_u((safe_div_func_uint8_t_u_u((safe_add_func_uint8_t_u_u(l_4, l_4)), 255UL)), 6))) ^ l_4)), g_5)) , 0x3C1DE6FCL))
    { 
        g_12 ^= 0x92280643L;
    }
    else
    { 
        uint16_t l_15 = 65529UL;
        int32_t l_226 = 1L;
        int32_t l_244 = (-9L);
        int32_t l_245 = 0xBA366069L;
        int32_t l_246[1];
        struct S0 l_264[2] = {{0x6EB4E549L,1UL,0L,1L,4294967290UL,65530UL},{0x6EB4E549L,1UL,0L,1L,4294967290UL,65530UL}};
        int i;
        for (i = 0; i < 1; i++)
            l_246[i] = 0x4F8DC888L;
        if ((safe_sub_func_uint16_t_u_u(l_15, g_12)))
        { 
            uint32_t l_215 = 8UL;
            int32_t l_225 = (-1L);
            struct S0 l_227 = {0x3597859AL,255UL,1L,0x697A0A95L,4294967295UL,1UL};
            for (g_12 = (-4); (g_12 > 22); g_12 = safe_add_func_int32_t_s_s(g_12, 8))
            { 
                int8_t l_26 = 0x0EL;
                uint64_t l_40[3][2][3] = {{{18446744073709551615UL,18446744073709551615UL,18446744073709551609UL},{0x37D660F181E21435LL,18446744073709551607UL,0x37D660F181E21435LL}},{{0x37D660F181E21435LL,18446744073709551615UL,18446744073709551607UL},{18446744073709551615UL,0x37D660F181E21435LL,0x37D660F181E21435LL}},{{18446744073709551607UL,0x37D660F181E21435LL,18446744073709551609UL},{18446744073709551615UL,18446744073709551615UL,5UL}}};
                int i, j, k;
                g_18 = g_12;
                l_215 = (safe_mul_func_int8_t_s_s((func_21(((safe_add_func_int32_t_s_s((l_26 = g_18), 0xCD17CD95L)) , (safe_lshift_func_uint16_t_u_u((safe_rshift_func_int8_t_s_u((g_18 = (safe_mul_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u(func_35((g_18 != (safe_sub_func_int64_t_s_s((g_12 , l_4), l_40[2][0][2]))), l_15), l_15)), g_64.f2))), 4)), 12))), l_111) < (-1L)), 0L));
                --g_216;
            }
            l_226 = (65535UL & ((safe_add_func_int64_t_s_s((0xDEL | ((safe_mod_func_int32_t_s_s((l_225 = (((safe_sub_func_uint8_t_u_u((((1UL <= (-1L)) < 0UL) ^ 0x2091D055632A555FLL), 0UL)) & g_5) ^ 0x06L)), g_105)) >= g_216)), 0UL)) , g_172[0]));
            g_64 = l_227;
        }
        else
        { 
            int32_t l_235[2];
            int32_t l_236 = (-1L);
            int8_t l_238[2];
            uint32_t l_254 = 2UL;
            int64_t l_258 = 0xF03AABBA4A270C91LL;
            uint16_t l_259 = 0xF452L;
            int i;
            for (i = 0; i < 2; i++)
                l_235[i] = 0x2D600B73L;
            for (i = 0; i < 2; i++)
                l_238[i] = 1L;
            if ((+(safe_add_func_int16_t_s_s(g_116, (safe_sub_func_int16_t_s_s((g_64.f3 || (l_236 = (g_106 , ((g_64.f5 = ((safe_sub_func_int8_t_s_s(0x3CL, g_64.f5)) | g_64.f2)) , l_235[1])))), g_18))))))
            { 
                return g_157[0];
            }
            else
            { 
                int32_t l_247 = (-1L);
                int32_t l_248 = (-1L);
                int32_t l_249 = (-1L);
                int32_t l_250 = 0xD9D4D481L;
                int32_t l_251 = (-8L);
                int32_t l_252 = 0xD564FFCEL;
                int32_t l_253[3];
                int i;
                for (i = 0; i < 3; i++)
                    l_253[i] = 0xCA51E73EL;
                g_240++;
                --l_254;
                g_243[2][0][2] |= g_237;
            }
            l_259++;
            l_246[0] = (safe_div_func_uint32_t_u_u((l_264[0] , ((safe_rshift_func_int8_t_s_u((l_111.f3 < (l_235[1] = ((((g_191 = ((1L < (safe_rshift_func_uint16_t_u_s(l_257, g_237))) && l_111.f5)) != l_235[1]) || g_240) , l_258))), g_64.f4)) != g_64.f1)), g_157[1]));
        }
        g_243[3][0][2] = (-4L);
    }
    return g_64.f0;
}



static uint8_t  func_21(uint8_t  p_22, struct S0  p_23)
{ 
    int32_t l_123[5] = {6L,6L,6L,6L,6L};
    uint32_t l_138 = 18446744073709551615UL;
    uint8_t l_140[2][4][5] = {{{2UL,0x42L,251UL,251UL,0x42L},{0x2BL,8UL,255UL,1UL,255UL},{2UL,0x42L,251UL,251UL,0x42L},{0x2BL,8UL,255UL,1UL,255UL}},{{2UL,0x42L,251UL,251UL,0x42L},{0x2BL,8UL,255UL,1UL,255UL},{2UL,0x42L,251UL,251UL,0x42L},{0x2BL,8UL,255UL,1UL,255UL}}};
    int32_t l_141 = (-1L);
    uint64_t l_162 = 0UL;
    int32_t l_171 = 0x6261DBC5L;
    int i, j, k;
    if (p_23.f1)
    { 
        struct S0 l_114 = {-1L,0UL,-7L,1L,0xE6483285L,65531UL};
        int32_t l_124 = 6L;
        int64_t l_139 = 0xEC6B6B0D4880774ELL;
        for (g_105 = (-19); (g_105 > (-4)); g_105++)
        { 
            for (p_23.f5 = 0; (p_23.f5 <= 2); p_23.f5 += 1)
            { 
                int16_t l_115 = 0L;
                int i, j;
                l_114 = p_23;
                --g_116;
                if (g_81[p_23.f5][p_23.f5])
                    break;
            }
            l_124 = (safe_mod_func_int32_t_s_s((!(((~(p_22 > g_18)) < (g_64.f1 <= (l_123[3] < 0xB375AFA8L))) < l_114.f4)), 3UL));
        }
        l_114 = p_23;
        l_141 |= ((safe_div_func_uint16_t_u_u((safe_sub_func_int8_t_s_s((g_64 , ((p_23.f3 | ((l_124 = (p_23.f2 = l_124)) > ((safe_rshift_func_uint16_t_u_u(((safe_rshift_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u((l_139 = (safe_unary_minus_func_int32_t_s((l_138 & 6L)))), p_23.f1)), g_64.f3)) && 249UL), 6)) > g_101))) <= l_140[0][0][1])), g_64.f5)), l_138)) <= 0UL);
    }
    else
    { 
        uint64_t l_154 = 18446744073709551615UL;
        int32_t l_155 = (-8L);
        int32_t l_156 = 4L;
        union U1 l_203 = {65535UL};
        if ((g_5 < (((safe_mul_func_int8_t_s_s((l_156 = (safe_add_func_uint8_t_u_u((safe_mul_func_int8_t_s_s((((p_23.f4 , (l_155 = (safe_mod_func_int8_t_s_s((safe_add_func_int32_t_s_s((l_154 = (safe_rshift_func_int16_t_s_s(g_81[2][0], 5))), (p_23 , (-1L)))), p_22)))) < 0xD47C0CCAC7596E12LL) >= l_138), 0xA1L)), 255UL))), g_157[0])) || g_64.f3) != 0x899EAA038080D849LL)))
        { 
            for (g_106 = 0; (g_106 != 5); ++g_106)
            { 
                l_141 = ((safe_mod_func_int32_t_s_s((l_162 > l_155), (safe_mod_func_uint8_t_u_u((safe_div_func_uint8_t_u_u((p_23.f4 , (+((safe_mul_func_int8_t_s_s(0xBFL, p_22)) , (-1L)))), g_157[3])), 0x2EL)))) , g_101);
                g_172[0]--;
            }
        }
        else
        { 
            int64_t l_175 = 0L;
            int32_t l_187[5] = {0x5778D356L,0x5778D356L,0x5778D356L,0x5778D356L,0x5778D356L};
            int i;
            l_175 = 0xBA0D44C9L;
            if (g_81[1][2])
            { 
                uint32_t l_184 = 4294967288UL;
                int32_t l_188[2][1];
                int i, j;
                for (i = 0; i < 2; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_188[i][j] = 1L;
                }
                l_141 = (safe_add_func_uint8_t_u_u((safe_mod_func_uint64_t_u_u((safe_mul_func_uint16_t_u_u(((safe_add_func_int16_t_s_s(p_23.f2, (l_184 & l_175))) || ((((l_187[0] = (safe_div_func_uint32_t_u_u(p_23.f3, g_5))) , g_85) , 0x8A4C82FAL) < p_23.f1)), 0L)), l_154)), 2UL));
                l_188[1][0] = g_172[0];
            }
            else
            { 
                int16_t l_189[3];
                int32_t l_190 = 0xC8F8D307L;
                int i;
                for (i = 0; i < 3; i++)
                    l_189[i] = 0xFF7DL;
                --g_191;
                ++g_194;
                p_23 = g_64;
            }
        }
        g_64 = g_64;
        g_208 |= (((safe_div_func_uint32_t_u_u(((safe_sub_func_int8_t_s_s((safe_sub_func_uint32_t_u_u(0xFB5F1427L, ((g_157[1] != ((l_203 , (safe_sub_func_int64_t_s_s((safe_mod_func_uint8_t_u_u((p_23.f3 == 0xCC51AB32L), (-1L))), p_23.f3))) < p_23.f5)) || 65530UL))), g_5)) > 0x5EA3161F60A75A90LL), 0x22E9D9AFL)) | l_140[0][0][1]) == 0x97A8B7766AA345BFLL);
    }
    l_141 = p_23.f1;
    l_141 = (0x6DL == ((l_123[2] || (safe_mod_func_uint32_t_u_u(((g_64.f5 >= ((safe_add_func_int16_t_s_s(((((safe_sub_func_int16_t_s_s(((18446744073709551615UL <= l_171) , g_172[0]), l_171)) | g_107) != g_5) , p_23.f0), p_23.f5)) ^ g_191)) | g_170[0][0]), g_85))) <= l_138));
    return g_157[0];
}



static int8_t  func_35(uint32_t  p_36, const int32_t  p_37)
{ 
    uint8_t l_54[3][2] = {{0x27L,0x27L},{0xBEL,0x27L},{0x27L,0xBEL}};
    struct S0 l_73 = {1L,6UL,-9L,-1L,4294967295UL,65527UL};
    int32_t l_76 = 0x3CFE8907L;
    int32_t l_103 = 0x606EF8CBL;
    int i, j;
    for (p_36 = (-2); (p_36 >= 12); p_36 = safe_add_func_int16_t_s_s(p_36, 5))
    { 
        uint8_t l_63 = 0x1BL;
        int32_t l_68 = 0x14A8A5A2L;
        l_68 = (p_37 || (safe_sub_func_uint8_t_u_u(func_45(((safe_mod_func_uint16_t_u_u(((safe_rshift_func_int16_t_s_u(((l_54[0][1] || ((safe_mul_func_int8_t_s_s((safe_mod_func_int64_t_s_s((safe_add_func_int32_t_s_s((safe_mod_func_uint16_t_u_u(1UL, g_18)), 0x98E47BEBL)), l_63)), p_36)) != 0x2BL)) <= (-10L)), 3)) , g_12), g_12)) < g_12), g_18, g_64, l_54[0][1]), 0xC4L)));
    }
    if ((((safe_rshift_func_int16_t_s_u(0xB356L, (safe_rshift_func_uint8_t_u_u((l_73 , ((safe_div_func_uint64_t_u_u((l_76 = (g_5 = 4UL)), (safe_div_func_uint16_t_u_u((safe_div_func_uint16_t_u_u((((l_54[0][1] , 9L) == 1UL) , 0x10DAL), l_73.f0)), 0x59D7L)))) == g_12)), 6)))) >= 0x44L) > g_12))
    { 
        --g_81[1][2];
    }
    else
    { 
        int64_t l_92 = 0x803B567AB62727C3LL;
        uint64_t l_108 = 6UL;
        g_85 = (+g_81[1][2]);
        g_102 = (g_101 = (safe_mul_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u((safe_rshift_func_int16_t_s_s(l_92, (l_76 &= (0UL | ((safe_sub_func_uint32_t_u_u((safe_sub_func_uint64_t_u_u(((((safe_div_func_uint16_t_u_u(((((((4UL && (safe_lshift_func_uint8_t_u_u(0x1AL, 4))) < 0x271DC8D5L) != 1L) && p_37) ^ p_37) < 0x9F48L), l_73.f0)) < 0x31L) >= l_92) & 0x00A8L), p_37)), p_36)) , p_36))))), p_37)), p_37)));
        l_108--;
    }
    return g_5;
}



static const uint8_t  func_45(uint64_t  p_46, uint32_t  p_47, struct S0  p_48, int16_t  p_49)
{ 
    uint64_t l_65[3][2];
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
            l_65[i][j] = 0xF9D99D06D0C81CF0LL;
    }
    l_65[0][0]--;
    return g_18;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_5, "g_5", print_hash_value);
    transparent_crc(g_12, "g_12", print_hash_value);
    transparent_crc(g_18, "g_18", print_hash_value);
    transparent_crc(g_64.f0, "g_64.f0", print_hash_value);
    transparent_crc(g_64.f1, "g_64.f1", print_hash_value);
    transparent_crc(g_64.f2, "g_64.f2", print_hash_value);
    transparent_crc(g_64.f3, "g_64.f3", print_hash_value);
    transparent_crc(g_64.f4, "g_64.f4", print_hash_value);
    transparent_crc(g_64.f5, "g_64.f5", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_81[i][j], "g_81[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_85, "g_85", print_hash_value);
    transparent_crc(g_101, "g_101", print_hash_value);
    transparent_crc(g_102, "g_102", print_hash_value);
    transparent_crc(g_104, "g_104", print_hash_value);
    transparent_crc(g_105, "g_105", print_hash_value);
    transparent_crc(g_106, "g_106", print_hash_value);
    transparent_crc(g_107, "g_107", print_hash_value);
    transparent_crc(g_116, "g_116", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_157[i], "g_157[i]", print_hash_value);

    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_170[i][j], "g_170[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_172[i], "g_172[i]", print_hash_value);

    }
    transparent_crc(g_191, "g_191", print_hash_value);
    transparent_crc(g_194, "g_194", print_hash_value);
    transparent_crc(g_208, "g_208", print_hash_value);
    transparent_crc(g_216, "g_216", print_hash_value);
    transparent_crc(g_237, "g_237", print_hash_value);
    transparent_crc(g_240, "g_240", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_243[i][j][k], "g_243[i][j][k]", print_hash_value);

            }
        }
    }
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
