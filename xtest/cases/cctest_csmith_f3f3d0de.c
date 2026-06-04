// SPDX-License-Identifier: MIT
// cctest_csmith_f3f3d0de.c --- cctest case csmith_f3f3d0de (csmith seed 4092842206)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xeca63a90 */
/* @exp_ticks 0x5c2 */

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

// Options:   -s 4092842206 -o /home/agent1/fast_data/tmp/csmith_gen_upracdnr/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   uint32_t  f0;
   const uint32_t  f1;
   int32_t  f2;
   int32_t  f3;
};

#pragma pack(push)
#pragma pack(1)
struct S1 {
   uint16_t  f0;
   uint32_t  f1;
   uint8_t  f2;
};
#pragma pack(pop)

#pragma pack(push)
#pragma pack(1)
struct S2 {
   uint32_t  f0;
   int16_t  f1;
   const uint64_t  f2;
};
#pragma pack(pop)

struct S3 {
   const int32_t  f0;
   int32_t  f1;
};

union U5 {
   struct S2  f0;
   uint32_t  f1;
   int8_t  f2;
   int64_t  f3;
};


static uint32_t g_8 = 0x207182B4L;
static struct S3 g_20 = {1L,8L};
static struct S0 g_21 = {18446744073709551614UL,1UL,0xC3D076C5L,1L};
static struct S1 g_22 = {65535UL,0UL,0xE8L};
static int32_t g_40 = (-7L);
static uint16_t g_46 = 65526UL;
static int16_t g_52[4] = {0L,0L,0L,0L};
static int16_t g_68 = 0x5A03L;
static int32_t g_69 = 1L;
static int32_t g_70 = 0x69F1341BL;
static int32_t g_71 = 2L;
static uint64_t g_72 = 18446744073709551615UL;
static struct S2 g_90 = {18446744073709551615UL,-1L,0x1C42294EC24AAD4DLL};
static const union U5 g_92 = {{2UL,-4L,0xB9866F533643AD1FLL}};
static uint32_t g_109 = 0x52CA465FL;



static struct S0  func_1(void);
static uint32_t  func_4(int32_t  p_5, uint64_t  p_6, uint16_t  p_7);
static uint64_t  func_14(struct S3  p_15, struct S0  p_16, int16_t  p_17, int32_t  p_18, struct S1  p_19);
static int32_t  func_28(uint8_t  p_29, struct S2  p_30, int64_t  p_31, const int32_t  p_32, int32_t  p_33);




static struct S0  func_1(void)
{ 
    union U5 l_9[3][3][3] = {{{{{0x6DBC1C23L,6L,18446744073709551615UL}},{{0x6DBC1C23L,6L,18446744073709551615UL}},{{0x7747BB7AL,-1L,0x583DC0E3E7631615LL}}},{{{0xDADE661FL,0xC9FAL,0xBC07C2076ACB8F2BLL}},{{0x7747BB7AL,-1L,0x583DC0E3E7631615LL}},{{0x7747BB7AL,-1L,0x583DC0E3E7631615LL}}},{{{0x7747BB7AL,-1L,0x583DC0E3E7631615LL}},{{0xE81720D7L,1L,18446744073709551608UL}},{{18446744073709551612UL,0xC28CL,0UL}}}},{{{{0xDADE661FL,0xC9FAL,0xBC07C2076ACB8F2BLL}},{{0xE81720D7L,1L,18446744073709551608UL}},{{0xDADE661FL,0xC9FAL,0xBC07C2076ACB8F2BLL}}},{{{0x6DBC1C23L,6L,18446744073709551615UL}},{{0x7747BB7AL,-1L,0x583DC0E3E7631615LL}},{{18446744073709551612UL,0xC28CL,0UL}}},{{{0x6DBC1C23L,6L,18446744073709551615UL}},{{0x6DBC1C23L,6L,18446744073709551615UL}},{{0x7747BB7AL,-1L,0x583DC0E3E7631615LL}}}},{{{{0xDADE661FL,0xC9FAL,0xBC07C2076ACB8F2BLL}},{{0x7747BB7AL,-1L,0x583DC0E3E7631615LL}},{{0x7747BB7AL,-1L,0x583DC0E3E7631615LL}}},{{{0x7747BB7AL,-1L,0x583DC0E3E7631615LL}},{{0xE81720D7L,1L,18446744073709551608UL}},{{18446744073709551612UL,0xC28CL,0UL}}},{{{0xDADE661FL,0xC9FAL,0xBC07C2076ACB8F2BLL}},{{0xE81720D7L,1L,18446744073709551608UL}},{{0xDADE661FL,0xC9FAL,0xBC07C2076ACB8F2BLL}}}}};
    int32_t l_63 = 0x3ABE6526L;
    int32_t l_66[3][2];
    const struct S3 l_137 = {0L,1L};
    struct S1 l_138 = {6UL,0x334A2236L,247UL};
    int i, j, k;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
            l_66[i][j] = 0x6281B62CL;
    }
    if ((safe_div_func_uint32_t_u_u(func_4(g_8, (l_9[1][0][0] , (safe_mod_func_int8_t_s_s((safe_add_func_uint64_t_u_u(g_8, (g_52[0] = func_14(g_20, g_21, g_21.f1, l_9[1][0][0].f1, g_22)))), g_21.f2))), g_20.f0), 4294967287UL)))
    { 
        int8_t l_64 = 0x33L;
        for (g_22.f1 = 27; (g_22.f1 < 60); ++g_22.f1)
        { 
            int8_t l_65 = (-3L);
            int32_t l_67 = 0xBF4D75DBL;
            ++g_72;
        }
        g_70 &= (+(g_20 , (g_40 = (g_69 ^ ((!g_21.f3) , l_9[1][0][0].f1)))));
    }
    else
    { 
        int32_t l_93 = (-9L);
        int32_t l_108 = 0L;
        int32_t l_121 = 0xABB3E6A6L;
        union U5 l_127[5][3] = {{{{0xA9F0F70EL,-1L,0xCF8BD7A0FECAD7D9LL}},{{0xA9F0F70EL,-1L,0xCF8BD7A0FECAD7D9LL}},{{0xA9F0F70EL,-1L,0xCF8BD7A0FECAD7D9LL}}},{{{0xDAAD3E24L,2L,3UL}},{{0xDAAD3E24L,2L,3UL}},{{0xDAAD3E24L,2L,3UL}}},{{{0xA9F0F70EL,-1L,0xCF8BD7A0FECAD7D9LL}},{{0xA9F0F70EL,-1L,0xCF8BD7A0FECAD7D9LL}},{{0xA9F0F70EL,-1L,0xCF8BD7A0FECAD7D9LL}}},{{{0xDAAD3E24L,2L,3UL}},{{0xDAAD3E24L,2L,3UL}},{{0xDAAD3E24L,2L,3UL}}},{{{0xA9F0F70EL,-1L,0xCF8BD7A0FECAD7D9LL}},{{0xA9F0F70EL,-1L,0xCF8BD7A0FECAD7D9LL}},{{0xA9F0F70EL,-1L,0xCF8BD7A0FECAD7D9LL}}}};
        int i, j;
        if (((safe_div_func_int16_t_s_s((safe_div_func_int16_t_s_s(l_63, (safe_add_func_uint8_t_u_u(((~0x7AC39A88L) | (safe_div_func_uint16_t_u_u(g_20.f1, 1L))), g_21.f1)))), 65530UL)) <= l_9[1][0][0].f3))
        { 
            uint32_t l_95 = 0xB11E4031L;
            int32_t l_122 = 0xAACA8A92L;
            if ((safe_mod_func_uint32_t_u_u((((g_21.f3 = 0x9EF25AD8L) > g_21.f0) || ((safe_add_func_uint16_t_u_u((g_90 , (g_20.f0 && 0xD4ADL)), g_20.f1)) > 0x84BC67B678304AF2LL)), l_9[1][0][0].f0.f2)))
            { 
                uint16_t l_91 = 0x3E25L;
                g_21.f3 ^= (l_91 & (g_92 , l_93));
                if (g_22.f0)
                    goto lbl_128;
                g_40 ^= (~(l_95 | (safe_mul_func_int16_t_s_s(((safe_mul_func_uint8_t_u_u(((g_22.f0 | ((safe_mul_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u((safe_sub_func_int64_t_s_s((safe_add_func_uint8_t_u_u((g_22.f2 = g_20.f0), l_95)), l_95)), l_9[1][0][0].f3)), l_95)) != l_95)) >= l_91), g_71)) , 0x92A3L), 0xA01CL))));
                g_109++;
            }
            else
            { 
                l_122 = ((safe_mul_func_uint16_t_u_u((((l_121 = (l_108 |= ((safe_sub_func_int8_t_s_s(((g_21.f1 , 0x59B5L) , (safe_add_func_uint64_t_u_u((((safe_mul_func_int16_t_s_s(((((!249UL) || (g_92.f3 < g_90.f2)) == g_40) , 6L), g_21.f0)) & 1UL) != 0x965D0453L), g_52[0]))), 6L)) , g_90.f0))) ^ g_92.f1) <= g_92.f2), 1L)) == g_22.f0);
            }
lbl_128:
            g_40 = (safe_add_func_int8_t_s_s(l_121, ((safe_mul_func_uint16_t_u_u(((l_127[3][1] , g_109) , l_127[3][1].f1), l_66[1][1])) & 0L)));
            g_40 &= g_90.f1;
        }
        else
        { 
            for (g_22.f2 = 0; (g_22.f2 <= 3); g_22.f2 += 1)
            { 
                return g_21;
            }
        }
    }
    g_40 = (l_66[1][1] = (safe_mul_func_uint16_t_u_u((safe_div_func_int8_t_s_s((!g_90.f2), (((g_8 = (l_9[1][0][0] , (safe_div_func_int8_t_s_s(((safe_unary_minus_func_int16_t_s((g_92.f0 , ((((l_137 , g_92.f1) | 1UL) < 0x6534L) && g_71)))) != g_21.f1), l_9[1][0][0].f0.f0)))) <= g_21.f0) & g_109))), 1UL)));
    g_22 = l_138;
    return g_21;
}



static uint32_t  func_4(int32_t  p_5, uint64_t  p_6, uint16_t  p_7)
{ 
    struct S0 l_57 = {0x7593EB6BL,0xEEF59DFFL,0x4C396C7BL,-1L};
    struct S1 l_58 = {0x6CD3L,0xA08C8198L,0x03L};
    for (p_6 = (-9); (p_6 == 53); p_6 = safe_add_func_uint32_t_u_u(p_6, 4))
    { 
        g_40 = ((safe_div_func_int32_t_s_s(p_7, (l_57 , (l_58 , (safe_div_func_int32_t_s_s(p_6, p_7)))))) > g_22.f2);
    }
    g_22 = l_58;
    return g_52[3];
}



static uint64_t  func_14(struct S3  p_15, struct S0  p_16, int16_t  p_17, int32_t  p_18, struct S1  p_19)
{ 
    uint64_t l_27 = 0x48A57461D0EE3B00LL;
    struct S2 l_41 = {0x03CA5435L,8L,0x39A53AA4807C1F4BLL};
    int32_t l_50 = 8L;
    int32_t l_51 = 0L;
    l_51 = (((safe_mul_func_int8_t_s_s(l_27, l_27)) ^ ((l_50 |= (0xCC7BC501L && func_28((safe_div_func_uint32_t_u_u((safe_div_func_int8_t_s_s((g_40 = (safe_div_func_uint8_t_u_u(0xBFL, g_20.f1))), 0x40L)), 0x79B2C397L)), l_41, p_17, g_20.f0, g_21.f3))) != g_22.f1)) || p_16.f0);
    return l_41.f1;
}



static int32_t  func_28(uint8_t  p_29, struct S2  p_30, int64_t  p_31, const int32_t  p_32, int32_t  p_33)
{ 
    int8_t l_42 = 0xF5L;
    int32_t l_43 = (-7L);
    struct S1 l_49 = {65535UL,0x3D7BF5F1L,7UL};
    g_40 |= (255UL ^ (g_21.f3 <= (l_42 < (l_43 = ((((g_22.f0 < 0x446FL) || p_31) ^ p_29) == 0x378C3A3BL)))));
    for (g_20.f1 = 0; (g_20.f1 >= 14); g_20.f1 = safe_add_func_uint8_t_u_u(g_20.f1, 2))
    { 
        if (p_29)
            break;
        ++g_46;
    }
    l_49 = l_49;
    return p_32;
}





int test_main(void)
{
    int i;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_8, "g_8", print_hash_value);
    transparent_crc(g_20.f0, "g_20.f0", print_hash_value);
    transparent_crc(g_20.f1, "g_20.f1", print_hash_value);
    transparent_crc(g_21.f0, "g_21.f0", print_hash_value);
    transparent_crc(g_21.f1, "g_21.f1", print_hash_value);
    transparent_crc(g_21.f2, "g_21.f2", print_hash_value);
    transparent_crc(g_21.f3, "g_21.f3", print_hash_value);
    transparent_crc(g_22.f0, "g_22.f0", print_hash_value);
    transparent_crc(g_22.f1, "g_22.f1", print_hash_value);
    transparent_crc(g_22.f2, "g_22.f2", print_hash_value);
    transparent_crc(g_40, "g_40", print_hash_value);
    transparent_crc(g_46, "g_46", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_52[i], "g_52[i]", print_hash_value);

    }
    transparent_crc(g_68, "g_68", print_hash_value);
    transparent_crc(g_69, "g_69", print_hash_value);
    transparent_crc(g_70, "g_70", print_hash_value);
    transparent_crc(g_71, "g_71", print_hash_value);
    transparent_crc(g_72, "g_72", print_hash_value);
    transparent_crc(g_90.f0, "g_90.f0", print_hash_value);
    transparent_crc(g_90.f1, "g_90.f1", print_hash_value);
    transparent_crc(g_90.f2, "g_90.f2", print_hash_value);
    transparent_crc(g_92.f0.f0, "g_92.f0.f0", print_hash_value);
    transparent_crc(g_92.f0.f1, "g_92.f0.f1", print_hash_value);
    transparent_crc(g_92.f0.f2, "g_92.f0.f2", print_hash_value);
    transparent_crc(g_92.f1, "g_92.f1", print_hash_value);
    transparent_crc(g_92.f2, "g_92.f2", print_hash_value);
    transparent_crc(g_92.f3, "g_92.f3", print_hash_value);
    transparent_crc(g_109, "g_109", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
