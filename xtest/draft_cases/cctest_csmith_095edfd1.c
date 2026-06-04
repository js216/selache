// SPDX-License-Identifier: MIT
// cctest_csmith_095edfd1.c --- cctest case csmith_095edfd1 (csmith seed 157212625)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xed5e7463 */
/* @exp_ticks 0x1292 */

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

// Options:   -s 157212625 -o /home/agent1/fast_data/tmp/csmith_gen_9h1mninn/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   uint64_t  f0;
   const uint16_t  f1;
   int32_t  f2;
   int16_t  f3;
   uint32_t  f4;
   uint16_t  f5;
};

#pragma pack(push)
#pragma pack(1)
struct S1 {
   uint32_t  f0;
   int32_t  f1;
   uint64_t  f2;
   int16_t  f3;
   uint8_t  f4;
};
#pragma pack(pop)

#pragma pack(push)
#pragma pack(1)
struct S2 {
   uint32_t  f0;
   struct S1  f1;
   uint16_t  f2;
};
#pragma pack(pop)

#pragma pack(push)
#pragma pack(1)
struct S3 {
   int32_t  f0;
   const int16_t  f1;
   struct S0  f2;
   uint32_t  f3;
   struct S2  f4;
   uint8_t  f5;
};
#pragma pack(pop)

struct S4 {
   const uint64_t  f0;
};

union U5 {
   uint8_t  f0;
};


static uint32_t g_18 = 1UL;
static int16_t g_19 = 2L;
static struct S2 g_20 = {0UL,{3UL,-6L,1UL,0xBEBDL,0x3FL},0UL};
static struct S3 g_31 = {0xA5DA0DE9L,1L,{0UL,0x4B00L,-1L,0xB917L,4294967286UL,0x4183L},0xA7A66B3EL,{1UL,{1UL,0x3D53AF4BL,1UL,0x4801L,1UL},0x7918L},0x90L};
static struct S4 g_32 = {0x2D450074354AF317LL};
static int32_t g_43[2] = {0x9D0E3EE8L,0x9D0E3EE8L};
static int16_t g_44[1][5] = {{0x220CL,0x220CL,0x220CL,0x220CL,0x220CL}};
static uint16_t g_45 = 0x7384L;
static uint64_t g_68 = 1UL;
static union U5 g_138 = {0x66L};
static uint16_t g_192[4][1] = {{0x4DE5L},{4UL},{0x4DE5L},{4UL}};
static uint64_t g_202 = 8UL;
static int32_t g_216 = (-10L);
static uint32_t g_217 = 0x78ADC5B0L;
static int32_t g_290[3] = {6L,6L,6L};
static int16_t g_310 = 0xE3B9L;
static int32_t g_311 = 0xF3ECA1C9L;
static int8_t g_312 = 0x1BL;
static uint32_t g_316[5] = {0x13CED05DL,0x13CED05DL,0x13CED05DL,0x13CED05DL,0x13CED05DL};
static uint32_t g_319 = 18446744073709551606UL;



static uint32_t  func_1(void);
static uint16_t  func_6(const struct S3  p_7, uint32_t  p_8, int32_t  p_9, const uint32_t  p_10, const uint16_t  p_11);
static uint32_t  func_15(int64_t  p_16, struct S2  p_17);
static const struct S2  func_26(uint16_t  p_27, struct S4  p_28);




static uint32_t  func_1(void)
{ 
    const struct S3 l_12 = {0x462A77B6L,0xC93EL,{6UL,0x3E73L,9L,-1L,0xBF7935DBL,65528UL},0xCDEE94CCL,{4294967295UL,{4294967292UL,0x51AC06E3L,0UL,0xD2ACL,255UL},0UL},0xECL};
    const uint32_t l_23 = 7UL;
    struct S1 l_212[5][5][5] = {{{{6UL,0x3F887DABL,0xDE77E4B2A5A679ECLL,0x25BDL,8UL},{0x754541C6L,0x668531C6L,0UL,0xD85DL,255UL},{4294967288UL,1L,9UL,0xCF1DL,248UL},{0UL,0xCE7B1CDFL,0x9E8F71FD4D924941LL,-2L,0xFCL},{0UL,0x613F60B2L,0xE1413FFB475F5708LL,0L,0x4AL}},{{4294967288UL,1L,9UL,0xCF1DL,248UL},{0xAE0A9D3AL,-1L,18446744073709551613UL,0x9CBDL,1UL},{0UL,1L,1UL,0x25CDL,0x62L},{4294967291UL,0L,0xF202E73300B0314DLL,0xBCBFL,5UL},{0xA8F09C82L,8L,18446744073709551615UL,-8L,1UL}},{{0x2D0F30BBL,0xE6809A12L,0x585A5F5D36CBC2DCLL,-6L,0x20L},{4294967295UL,4L,0x13217A38F7A20337LL,-10L,0xC5L},{0x4A77C499L,0xDAFD709BL,7UL,0x359FL,0xE0L},{0x5CEBB0EEL,0L,1UL,0x35ABL,255UL},{0x6ED0BEC7L,0x0F729FCBL,0xD8023FC29F5B1E06LL,0L,4UL}},{{0xA73AA586L,-10L,18446744073709551615UL,-1L,0UL},{4294967292UL,0x58D63BD2L,0x7505CF3AA05D0EB5LL,0L,9UL},{5UL,0xF4CC3A63L,0x0F0167743525ACAFLL,4L,6UL},{4294967288UL,1L,9UL,0xCF1DL,248UL},{0x6ED0BEC7L,0x0F729FCBL,0xD8023FC29F5B1E06LL,0L,4UL}},{{0UL,1L,1UL,0x25CDL,0x62L},{0x6ED0BEC7L,0x0F729FCBL,0xD8023FC29F5B1E06LL,0L,4UL},{1UL,0x278F4957L,0UL,0L,0x64L},{4294967287UL,-1L,0x0F4E434C99940735LL,-2L,0UL},{0xA8F09C82L,8L,18446744073709551615UL,-8L,1UL}}},{{{0xC2B7B0E1L,3L,0x2FD136104D248D75LL,-1L,255UL},{4294967287UL,-1L,0x0F4E434C99940735LL,-2L,0UL},{0x22753F27L,0L,0x8ACBB8F690F0AC8ALL,5L,0x41L},{4294967290UL,0L,0xDE5B9BBD235115D6LL,-3L,0x95L},{0UL,1L,1UL,0x25CDL,0x62L}},{{0x4A77C499L,0xDAFD709BL,7UL,0x359FL,0xE0L},{0xCC00BC70L,-3L,18446744073709551615UL,0L,0x82L},{5UL,0xF4CC3A63L,0x0F0167743525ACAFLL,4L,6UL},{0xE10E5CE8L,-1L,18446744073709551615UL,5L,252UL},{0xE10E5CE8L,-1L,18446744073709551615UL,5L,252UL}},{{0x6ED0BEC7L,0x0F729FCBL,0xD8023FC29F5B1E06LL,0L,4UL},{1UL,0xE0AABE5DL,18446744073709551610UL,0x14FAL,4UL},{0x6ED0BEC7L,0x0F729FCBL,0xD8023FC29F5B1E06LL,0L,4UL},{0x53888EF0L,0xE0E4D524L,0xC9C9E0DB0FBA3A9FLL,0xFF6CL,0xE4L},{2UL,0xE05F07CBL,18446744073709551613UL,1L,0x18L}},{{0UL,0xCE7B1CDFL,0x9E8F71FD4D924941LL,-2L,0xFCL},{0xD6EAD9EAL,0x529B2F41L,0UL,1L,248UL},{0x7DC5E8C6L,0x62538703L,0xF7F432ADD22AC3E5LL,0xA12FL,0xB8L},{0xD7C616BBL,0xF49CFE66L,0x637144D6AAB76A27LL,1L,1UL},{0xA73AA586L,-10L,18446744073709551615UL,-1L,0UL}},{{0x1E233BC6L,1L,18446744073709551615UL,-1L,1UL},{0x6ED0BEC7L,0x0F729FCBL,0xD8023FC29F5B1E06LL,0L,4UL},{0xA73AA586L,-10L,18446744073709551615UL,-1L,0UL},{6UL,0x3F887DABL,0xDE77E4B2A5A679ECLL,0x25BDL,8UL},{0UL,0x8DB81AA3L,0x21802581A573045CLL,0x4839L,0x5BL}}},{{{6UL,0x3F887DABL,0xDE77E4B2A5A679ECLL,0x25BDL,8UL},{0x2B6C12B6L,0x47648BD1L,1UL,0L,0xE8L},{0x7DC5E8C6L,0x62538703L,0xF7F432ADD22AC3E5LL,0xA12FL,0xB8L},{0xA73AA586L,-10L,18446744073709551615UL,-1L,0UL},{0x2D0F30BBL,0xE6809A12L,0x585A5F5D36CBC2DCLL,-6L,0x20L}},{{4294967290UL,0L,0xDE5B9BBD235115D6LL,-3L,0x95L},{0x7D640485L,-1L,0x10616E61DC435AD9LL,0x87AAL,0xBEL},{0x6ED0BEC7L,0x0F729FCBL,0xD8023FC29F5B1E06LL,0L,4UL},{0xC2ADA193L,-10L,0UL,0x4F36L,5UL},{0xD6EAD9EAL,0x529B2F41L,0UL,1L,248UL}},{{4UL,-1L,18446744073709551615UL,0xE911L,255UL},{0xA3A8EB31L,6L,0UL,0x2424L,255UL},{5UL,0xF4CC3A63L,0x0F0167743525ACAFLL,4L,6UL},{1UL,0xE0AABE5DL,18446744073709551610UL,0x14FAL,4UL},{0xF3DC7762L,0xA0CBBA41L,6UL,-6L,0x6BL}},{{0xF3DC7762L,0xA0CBBA41L,6UL,-6L,0x6BL},{0x0994805AL,0xFE1AAB16L,18446744073709551614UL,0xF6D2L,1UL},{0x22753F27L,0L,0x8ACBB8F690F0AC8ALL,5L,0x41L},{0x6ED0BEC7L,0x0F729FCBL,0xD8023FC29F5B1E06LL,0L,4UL},{4294967287UL,-1L,0x0F4E434C99940735LL,-2L,0UL}},{{0x7D640485L,-1L,0x10616E61DC435AD9LL,0x87AAL,0xBEL},{0x864C5905L,0L,1UL,0xE997L,0x5DL},{0x754541C6L,0x668531C6L,0UL,0xD85DL,255UL},{4294967295UL,-3L,0xA8FC994EAE7410E6LL,-1L,7UL},{4294967295UL,4L,0x13217A38F7A20337LL,-10L,0xC5L}}},{{{4294967288UL,1L,9UL,0xCF1DL,248UL},{0x7DC5E8C6L,0x62538703L,0xF7F432ADD22AC3E5LL,0xA12FL,0xB8L},{4294967294UL,0x2432C4BFL,1UL,0x8577L,0xA1L},{0UL,1L,1UL,0x25CDL,0x62L},{0x6ED0BEC7L,0x0F729FCBL,0xD8023FC29F5B1E06LL,0L,4UL}},{{4294967288UL,1L,9UL,0xCF1DL,248UL},{0x2388C2A8L,7L,0x932FCE170AE4FF38LL,0x2A48L,1UL},{0UL,0xCE7B1CDFL,0x9E8F71FD4D924941LL,-2L,0xFCL},{0x2D0F30BBL,0xE6809A12L,0x585A5F5D36CBC2DCLL,-6L,0x20L},{0x5CEBB0EEL,0L,1UL,0x35ABL,255UL}},{{0x7D640485L,-1L,0x10616E61DC435AD9LL,0x87AAL,0xBEL},{0x22753F27L,0L,0x8ACBB8F690F0AC8ALL,5L,0x41L},{4294967288UL,-9L,18446744073709551612UL,1L,0xB0L},{0xD822B14FL,0xEF38617DL,0x4FB6F4A190B2B29FLL,1L,1UL},{0x2A85E6C2L,0L,1UL,0x13F7L,0x61L}},{{0xF3DC7762L,0xA0CBBA41L,6UL,-6L,0x6BL},{0xD1BCB1F4L,7L,0x0BFA6F946EF15EC3LL,0L,0UL},{0xAF816F9AL,0x48AB5514L,18446744073709551611UL,-1L,0x27L},{0UL,0x613F60B2L,0xE1413FFB475F5708LL,0L,0x4AL},{0x864C5905L,0L,1UL,0xE997L,0x5DL}},{{4UL,-1L,18446744073709551615UL,0xE911L,255UL},{4294967287UL,0L,0x1C7E49223293A444LL,0L,0UL},{4294967287UL,0L,0x1C7E49223293A444LL,0L,0UL},{4UL,-1L,18446744073709551615UL,0xE911L,255UL},{1UL,0x278F4957L,0UL,0L,0x64L}}},{{{4294967290UL,0L,0xDE5B9BBD235115D6LL,-3L,0x95L},{6UL,0x3F887DABL,0xDE77E4B2A5A679ECLL,0x25BDL,8UL},{0xF3DC7762L,0xA0CBBA41L,6UL,-6L,0x6BL},{0xCC00BC70L,-3L,18446744073709551615UL,0L,0x82L},{0xAE0A9D3AL,-1L,18446744073709551613UL,0x9CBDL,1UL}},{{6UL,0x3F887DABL,0xDE77E4B2A5A679ECLL,0x25BDL,8UL},{5UL,0xF4CC3A63L,0x0F0167743525ACAFLL,4L,6UL},{0x4A77C499L,0xDAFD709BL,7UL,0x359FL,0xE0L},{0x7DC5E8C6L,0x62538703L,0xF7F432ADD22AC3E5LL,0xA12FL,0xB8L},{4294967295UL,1L,0x69AB204D8F182E84LL,0x8865L,7UL}},{{0x1E233BC6L,1L,18446744073709551615UL,-1L,1UL},{0x2A85E6C2L,0L,1UL,0x13F7L,0x61L},{1UL,8L,0x8886CC78ED14C347LL,4L,0x7BL},{0xCC00BC70L,-3L,18446744073709551615UL,0L,0x82L},{0xCEDB7DDFL,0L,0UL,0xD112L,0x35L}},{{0UL,0xCE7B1CDFL,0x9E8F71FD4D924941LL,-2L,0xFCL},{0xD7C616BBL,0xF49CFE66L,0x637144D6AAB76A27LL,1L,1UL},{4294967290UL,0L,0xDE5B9BBD235115D6LL,-3L,0x95L},{4UL,-1L,18446744073709551615UL,0xE911L,255UL},{0xA3A8EB31L,6L,0UL,0x2424L,255UL}},{{0x6ED0BEC7L,0x0F729FCBL,0xD8023FC29F5B1E06LL,0L,4UL},{0xC2ADA193L,-10L,0UL,0x4F36L,5UL},{0xD6EAD9EAL,0x529B2F41L,0UL,1L,248UL},{0UL,0x613F60B2L,0xE1413FFB475F5708LL,0L,0x4AL},{4UL,-1L,18446744073709551615UL,0xE911L,255UL}}}};
    int32_t l_257 = 1L;
    int32_t l_258 = (-10L);
    uint64_t l_259 = 0xD7A6BA7E399C6124LL;
    const uint32_t l_279 = 0UL;
    const uint32_t l_306 = 0x7DAFB3F4L;
    int64_t l_314 = 0xCFBAB2FB22B9342ALL;
    uint32_t l_350 = 4294967294UL;
    int i, j, k;
    if ((g_202 &= (safe_sub_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u(0xBF9FL, func_6(l_12, (safe_lshift_func_int16_t_s_u(l_12.f1, ((func_15((g_19 |= g_18), g_20) > l_23) <= g_20.f2))), g_20.f1.f3, g_20.f1.f1, l_12.f2.f4))), 65535UL))))
    { 
        uint64_t l_208 = 2UL;
        int32_t l_209[3];
        uint64_t l_256 = 0x40735C3782DB21E7LL;
        int i;
        for (i = 0; i < 3; i++)
            l_209[i] = (-4L);
        if (l_12.f2.f2)
        { 
            const struct S4 l_207 = {0x6AD7F4E2784B668ELL};
            struct S2 l_211 = {1UL,{0x64047758L,0x2310836FL,0xF2D47BFB23A12770LL,0x506DL,7UL},4UL};
            if (((safe_rshift_func_uint8_t_u_u(((safe_sub_func_uint8_t_u_u(((l_207 , g_32) , ((l_209[0] = ((l_12.f4.f1.f4 , l_208) != g_20.f1.f0)) <= 0xEEE85F25L)), 1UL)) != l_207.f0), 3)) ^ 1L))
            { 
                int8_t l_210 = 0xDCL;
                l_211 = (g_20 = func_26((g_31.f2.f5 &= l_210), g_32));
            }
            else
            { 
                uint32_t l_213 = 9UL;
                l_212[0][4][2] = g_20.f1;
                return l_213;
            }
        }
        else
        { 
            struct S3 l_214[1][5] = {{{9L,-4L,{0xD266B7CBA8AB6190LL,0UL,0xD37AC70BL,0xDFEEL,0x03222545L,0UL},8UL,{4294967295UL,{0x3CA96074L,0x041E97ADL,0xF23B5687EFE50595LL,-4L,4UL},0UL},0x1DL},{9L,-4L,{0xD266B7CBA8AB6190LL,0UL,0xD37AC70BL,0xDFEEL,0x03222545L,0UL},8UL,{4294967295UL,{0x3CA96074L,0x041E97ADL,0xF23B5687EFE50595LL,-4L,4UL},0UL},0x1DL},{9L,-4L,{0xD266B7CBA8AB6190LL,0UL,0xD37AC70BL,0xDFEEL,0x03222545L,0UL},8UL,{4294967295UL,{0x3CA96074L,0x041E97ADL,0xF23B5687EFE50595LL,-4L,4UL},0UL},0x1DL},{9L,-4L,{0xD266B7CBA8AB6190LL,0UL,0xD37AC70BL,0xDFEEL,0x03222545L,0UL},8UL,{4294967295UL,{0x3CA96074L,0x041E97ADL,0xF23B5687EFE50595LL,-4L,4UL},0UL},0x1DL},{9L,-4L,{0xD266B7CBA8AB6190LL,0UL,0xD37AC70BL,0xDFEEL,0x03222545L,0UL},8UL,{4294967295UL,{0x3CA96074L,0x041E97ADL,0xF23B5687EFE50595LL,-4L,4UL},0UL},0x1DL}}};
            int16_t l_215 = 0L;
            int i, j;
            if ((g_31.f2.f2 ^= (l_214[0][4] , g_44[0][4])))
            { 
                g_217--;
                l_212[0][4][2].f1 = (((safe_sub_func_int64_t_s_s((g_31.f2.f1 <= (!(safe_sub_func_uint16_t_u_u((safe_add_func_uint8_t_u_u(((g_31.f2.f4 = (safe_sub_func_int16_t_s_s(((g_20.f1.f1 && ((safe_sub_func_int16_t_s_s((safe_lshift_func_int16_t_s_u((l_214[0][4].f4.f1.f1 = ((safe_mod_func_int16_t_s_s((l_214[0][4].f2.f2 &= (((g_20.f1.f0 = (safe_add_func_uint64_t_u_u((l_12.f4.f1.f4 && (safe_sub_func_int16_t_s_s(0xC20AL, l_209[1]))), g_31.f5))) || 0x4B76B453L) && 0xA5L)), 0xEE24L)) || (-1L))), 15)), 8L)) , 0x755AL)) < g_45), l_208))) || 0xC0C7D5ACL), l_208)), g_18)))), 0x063FD6FBCA5A7E5BLL)) != 0x6487L) & l_12.f3);
            }
            else
            { 
                g_216 ^= g_31.f3;
            }
            l_212[0][4][2].f1 ^= (((safe_rshift_func_int16_t_s_s((safe_lshift_func_int16_t_s_u((~(((l_214[0][4].f4.f1 , (g_31.f2.f5 = 0x962BL)) != (safe_div_func_uint64_t_u_u(l_208, 0xCDC9DE3901CCEF30LL))) > 0x2FL)), 5)), g_31.f5)) > 0x713A9174L) && 0x397AL);
        }
        g_216 &= (g_31.f4.f1.f0 == (safe_div_func_uint64_t_u_u(((safe_div_func_int32_t_s_s((((l_212[0][4][2].f0 | ((((safe_add_func_uint16_t_u_u((safe_div_func_uint32_t_u_u((((1UL | (6L & l_256)) == 1UL) | l_12.f5), g_20.f2)), l_209[1])) <= 0x15B597D2L) , g_31.f4.f1.f3) , 8UL)) && g_31.f4.f2) <= 0x03AE8D22055AE60ELL), g_31.f1)) && 8L), 0xF2A40A62B4EBB3C2LL)));
        ++l_259;
    }
    else
    { 
        uint16_t l_264 = 2UL;
        int32_t l_282 = 0x12D40EA4L;
        g_216 &= ((safe_rshift_func_int8_t_s_u(l_264, l_264)) >= (safe_mul_func_uint8_t_u_u(((g_138 , g_20.f1.f3) && l_12.f2.f1), 1L)));
        for (g_20.f0 = 29; (g_20.f0 != 4); g_20.f0--)
        { 
            uint16_t l_280 = 65529UL;
            for (l_258 = (-6); (l_258 > 18); l_258++)
            { 
                int16_t l_281[3];
                int i;
                for (i = 0; i < 3; i++)
                    l_281[i] = (-6L);
                g_20.f1.f1 |= ((!((l_282 = (safe_div_func_uint32_t_u_u(((((safe_mul_func_uint8_t_u_u((l_12.f1 | ((((+l_264) == (0x9F323D68L < (l_279 == l_264))) , 0x15DC8556ABF53F7FLL) ^ l_280)), l_23)) > l_281[2]) < g_31.f4.f2) , l_281[2]), 1L))) > l_280)) <= 0x6F65CCC253A74ED6LL);
            }
            return g_216;
        }
    }
    if ((0xBAE65E62L == (safe_rshift_func_uint16_t_u_u(l_12.f5, 2))))
    { 
        uint32_t l_289 = 0x90E9D92AL;
        struct S1 l_291 = {0x58532303L,-8L,0x37098DB19007965FLL,-1L,1UL};
        struct S2 l_322 = {0x62097EB6L,{6UL,-1L,0UL,0x1653L,0x80L},65535UL};
        uint32_t l_325 = 4UL;
        g_31.f4.f1.f1 ^= (g_32 , (((g_290[0] = ((safe_lshift_func_int16_t_s_s((g_31.f2 , (safe_mul_func_uint8_t_u_u((l_289 >= (l_289 & 0x260F41EE8F791211LL)), g_45))), 5)) || l_12.f3)) > g_18) ^ 0xB3L));
        l_212[0][4][2] = (l_291 = l_212[3][3][4]);
        for (g_31.f4.f2 = 25; (g_31.f4.f2 > 29); ++g_31.f4.f2)
        { 
            int32_t l_300 = 1L;
            int32_t l_307 = 7L;
            int32_t l_308 = 0x4DE6321CL;
            int32_t l_309 = 0xD3A94EAFL;
            int32_t l_315[5][5][5] = {{{1L,0L,7L,0xD20F8E48L,0xB688D3BBL},{(-6L),0xA0E57AB4L,0xD20F8E48L,(-8L),1L},{1L,(-2L),9L,0L,0xB688D3BBL},{7L,(-8L),(-8L),7L,(-2L)},{0xB688D3BBL,(-8L),0xA7702F78L,0xB2D58D19L,7L}},{{0L,(-2L),0xB688D3BBL,0xBDF05914L,1L},{0xA7702F78L,0xA0E57AB4L,(-10L),0xB2D58D19L,0xB2D58D19L},{0xA0E57AB4L,0L,0xA0E57AB4L,7L,0xB5F7BA5FL},{0xA0E57AB4L,1L,0xBDF05914L,0L,0xD20F8E48L},{0xA7702F78L,(-10L),(-2L),(-8L),1L}},{{0L,0xB2D58D19L,0xBDF05914L,0xD20F8E48L,0xBDF05914L},{0xB688D3BBL,0xB688D3BBL,0xA0E57AB4L,1L,0xBDF05914L},{7L,0xB5F7BA5FL,(-10L),1L,1L},{1L,1L,0xB688D3BBL,(-6L),0xD20F8E48L},{(-6L),0xB5F7BA5FL,0xA7702F78L,0xA7702F78L,0xB5F7BA5FL}},{{1L,0xB688D3BBL,(-8L),0xA7702F78L,0xB2D58D19L},{(-2L),0xB2D58D19L,9L,(-6L),1L},{1L,(-10L),0xD20F8E48L,9L,0xA0E57AB4L},{1L,(-8L),0xA0E57AB4L,(-8L),1L},{0xB2D58D19L,(-10L),0xA0E57AB4L,0xA7702F78L,1L}},{{0xD20F8E48L,1L,0xA7702F78L,0xB688D3BBL,1L},{1L,1L,0L,(-10L),1L},{0xA0E57AB4L,0xB688D3BBL,0xB688D3BBL,0xA0E57AB4L,1L},{1L,0xB688D3BBL,7L,0xBDF05914L,0xA0E57AB4L},{(-10L),1L,1L,(-2L),9L}}};
            int i, j, k;
            if (((safe_div_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u((g_217 && g_44[0][3]), 0)), ((safe_div_func_int64_t_s_s((l_300 | (safe_sub_func_uint64_t_u_u((~((((safe_div_func_int32_t_s_s(1L, g_32.f0)) | l_212[0][4][2].f0) , g_32) , g_31.f4.f1.f1)), 0x230F2211BC0EC9FALL))), 0x34D2C63D11B82DC5LL)) | g_202))) < l_306))
            { 
                int64_t l_313 = 0L;
                g_31.f4.f1.f1 = (0x954BL < l_300);
                --g_316[2];
            }
            else
            { 
                ++g_319;
                l_322 = g_31.f4;
                if (g_45)
                    break;
            }
            l_258 = (((g_192[0][0] < 0UL) , (((safe_mul_func_uint8_t_u_u(((l_291.f4 , (g_31.f2.f0 = (l_12.f5 > g_216))) < l_12.f3), l_315[0][2][3])) || g_310) < 0xBBFDB6B1L)) , 0x5C9C9BE5L);
            ++l_325;
        }
    }
    else
    { 
        int16_t l_336 = 0x4A79L;
        int32_t l_355 = 0x993614B3L;
        g_31.f4.f1.f1 = (+(g_45 &= (safe_lshift_func_int8_t_s_u(((safe_mul_func_uint8_t_u_u((+(g_31.f4.f2 , (safe_sub_func_uint32_t_u_u(4294967295UL, (g_31.f4.f1.f0 ^= (l_12.f5 != g_43[1])))))), l_336)) & g_138.f0), g_31.f2.f2))));
        for (g_31.f2.f0 = 0; (g_31.f2.f0 >= 56); g_31.f2.f0 = safe_add_func_uint64_t_u_u(g_31.f2.f0, 1))
        { 
            uint64_t l_351 = 0UL;
            uint8_t l_352[3][2];
            int i, j;
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 2; j++)
                    l_352[i][j] = 0xFCL;
            }
            g_216 &= (g_31.f4.f1.f1 = (((safe_add_func_uint32_t_u_u((safe_sub_func_uint8_t_u_u(((safe_unary_minus_func_int8_t_s(((g_31.f3 = (((safe_add_func_int16_t_s_s(((l_352[1][0] = ((((-4L) <= (safe_sub_func_uint32_t_u_u((65526UL < (safe_mul_func_int8_t_s_s(0L, (((4L != g_31.f4.f1.f4) < g_19) | g_20.f1.f4)))), l_350))) || l_351) && 0xD5L)) > g_20.f0), g_31.f2.f2)) , l_336) , l_23)) || g_68))) != g_20.f0), l_12.f4.f2)), 0x4198391AL)) >= l_336) >= g_32.f0));
            l_355 = (safe_sub_func_uint32_t_u_u(0x75B5E6E2L, l_12.f4.f0));
        }
        for (g_68 = (-11); (g_68 < 36); g_68 = safe_add_func_int8_t_s_s(g_68, 4))
        { 
            g_216 &= 0x90192E4DL;
        }
    }
    return l_12.f4.f1.f0;
}



static uint16_t  func_6(const struct S3  p_7, uint32_t  p_8, int32_t  p_9, const uint32_t  p_10, const uint16_t  p_11)
{ 
    struct S4 l_29 = {18446744073709551611UL};
    uint64_t l_119 = 0xC95AB7803ABDF95BLL;
    int32_t l_120 = 0x604849EAL;
    int32_t l_137[2];
    int32_t l_169 = 1L;
    int32_t l_171 = 0xDF932BF6L;
    int32_t l_172 = 0xEE9E0683L;
    struct S2 l_188 = {0x8E98AEBEL,{0x639B7998L,-1L,0x9F738797E1D4163ELL,0x924BL,0xAAL},1UL};
    int i;
    for (i = 0; i < 2; i++)
        l_137[i] = (-2L);
    l_120 = ((safe_div_func_uint8_t_u_u((func_26(g_18, l_29) , ((safe_sub_func_uint32_t_u_u(((safe_div_func_uint32_t_u_u((l_29 , l_119), (-10L))) & (-1L)), 0xED7D2562L)) | 1UL)), 0x78L)) >= 1L);
    if ((l_120 ^= (safe_rshift_func_uint8_t_u_s(((((safe_div_func_int16_t_s_s((safe_sub_func_uint16_t_u_u(1UL, (safe_rshift_func_int16_t_s_u((safe_add_func_uint64_t_u_u((safe_rshift_func_uint8_t_u_u(0xEBL, (g_43[0] >= (0xBFL > g_31.f2.f3)))), 4UL)), l_119)))), 0xDA23L)) && 0x690DL) >= 0xDF1BL) & g_31.f2.f4), g_31.f4.f2))))
    { 
        uint16_t l_149 = 0x2B98L;
        int32_t l_166[2][2][1] = {{{0x741FA38BL},{0x0B4A55CDL}},{{0x741FA38BL},{0x0B4A55CDL}}};
        int32_t l_189[4][1];
        uint16_t l_190 = 65533UL;
        int32_t l_191[5][4] = {{0xFB7A4C9AL,0x82E7F024L,0x82E7F024L,0xFB7A4C9AL},{0x82E7F024L,0xFB7A4C9AL,0x82E7F024L,0x82E7F024L},{0xFB7A4C9AL,0xFB7A4C9AL,0xF6B5423CL,0xFB7A4C9AL},{0xFB7A4C9AL,0x82E7F024L,0x82E7F024L,0xFB7A4C9AL},{0x82E7F024L,0xFB7A4C9AL,0x82E7F024L,0x82E7F024L}};
        int i, j, k;
        for (i = 0; i < 4; i++)
        {
            for (j = 0; j < 1; j++)
                l_189[i][j] = 0x3260E939L;
        }
        if ((safe_rshift_func_uint16_t_u_u(((((safe_div_func_int32_t_s_s(l_137[0], g_45)) | (((g_138 , ((g_20 = g_20) , 0x487DL)) > 0x2178L) <= l_120)) || g_20.f0) == 0x92L), 14)))
        { 
            struct S1 l_147 = {4294967288UL,0x40EAF7AEL,18446744073709551615UL,4L,1UL};
            int32_t l_148 = 0L;
            if (((safe_div_func_uint32_t_u_u((safe_lshift_func_int16_t_s_s((g_20.f1.f3 &= (252UL | (((safe_mod_func_int64_t_s_s((safe_div_func_uint32_t_u_u((l_148 &= (l_147 , 4294967295UL)), (p_7.f4.f1 , p_7.f2.f1))), g_31.f2.f5)) , g_44[0][0]) <= l_149))), p_7.f5)), g_31.f4.f0)) , 0x756FD921L))
            { 
                return g_31.f4.f0;
            }
            else
            { 
                g_31.f2.f2 &= (p_10 && ((((-1L) < ((65528UL > p_7.f4.f1.f4) >= p_7.f4.f1.f1)) > 18446744073709551615UL) & 0UL));
                return g_31.f2.f3;
            }
        }
        else
        { 
            uint16_t l_156 = 0x2BD4L;
            int32_t l_157 = 0xF7F12930L;
            int32_t l_158[5];
            struct S3 l_165 = {7L,0L,{0x286F7500B1CAC37ELL,0UL,0L,0x37B5L,0xA5956B61L,0x9CCBL},0xD5FB0443L,{0x2DFB8A68L,{0UL,-4L,3UL,0x3837L,0xFBL},0x96D2L},0x5DL};
            uint32_t l_176 = 0x686F9EF0L;
            int i;
            for (i = 0; i < 5; i++)
                l_158[i] = 1L;
            l_158[0] = ((l_149 | (l_157 = ((safe_div_func_int32_t_s_s(((safe_mul_func_int8_t_s_s((-1L), (g_20.f1.f2 | ((safe_lshift_func_int16_t_s_u((l_156 < 4294967286UL), 7)) >= g_31.f1)))) > p_7.f2.f0), (-1L))) ^ l_149))) , g_20.f2);
            l_166[0][0][0] = ((safe_sub_func_uint64_t_u_u(((p_7.f4.f1 , (safe_add_func_int8_t_s_s((safe_add_func_int64_t_s_s((g_32 , ((l_165 , 0x7665D8ACL) & l_119)), g_20.f1.f3)), p_7.f4.f1.f0))) , l_165.f1), 0x5E963BA376BEBF0BLL)) | 0xF1L);
            for (p_8 = 4; (p_8 == 52); p_8++)
            { 
                int32_t l_170 = 0xBDCEA1F6L;
                uint32_t l_173 = 1UL;
                int32_t l_179 = 1L;
                l_173--;
                ++l_176;
                l_179 = 0xDEFC65C1L;
            }
        }
        l_190 = (safe_mod_func_int32_t_s_s((g_31.f4.f1.f2 == (g_20.f1.f0 | (l_172 = (safe_mul_func_uint16_t_u_u(l_149, ((safe_rshift_func_uint8_t_u_u(((safe_div_func_uint32_t_u_u(((l_188 , (-5L)) != 0xFAL), p_7.f2.f5)) > l_189[0][0]), 4)) && 0x49L)))))), g_31.f0));
        --g_192[0][0];
    }
    else
    { 
        int16_t l_201 = 0L;
        g_20.f1.f1 = (((p_7.f2.f1 == g_31.f0) != ((safe_sub_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u(1UL, (safe_lshift_func_uint8_t_u_u((g_18 ^ l_201), l_188.f1.f1)))), g_44[0][4])) == 0UL)) | l_188.f1.f2);
    }
    return g_31.f2.f1;
}



static uint32_t  func_15(int64_t  p_16, struct S2  p_17)
{ 
    for (p_17.f2 = 0; (p_17.f2 < 30); p_17.f2++)
    { 
        return g_19;
    }
    return g_20.f1.f2;
}



static const struct S2  func_26(uint16_t  p_27, struct S4  p_28)
{ 
    uint32_t l_30[1];
    struct S1 l_33 = {0x26E73BF6L,0xC7DC1DF7L,0x2E0A50B65BDA1241LL,2L,0xCDL};
    const struct S2 l_34 = {5UL,{0xB897E7B3L,0x6DF6458AL,0UL,2L,0x6DL},65531UL};
    struct S2 l_35 = {9UL,{0xF785D6CFL,-9L,0x55DAA1C1E79BFF94LL,0xF55BL,0x23L},65528UL};
    int32_t l_38 = 0L;
    int32_t l_40[3][4] = {{0L,0L,1L,0L},{0L,0L,0L,0L},{0L,0L,0L,0L}};
    int i, j;
    for (i = 0; i < 1; i++)
        l_30[i] = 0xD19DDA5CL;
    for (g_19 = 0; g_19 < 1; g_19 += 1)
    {
        l_30[g_19] = 18446744073709551615UL;
    }
    l_35 = ((g_31 , g_32) , (l_33 , l_34));
    for (l_35.f1.f4 = 0; (l_35.f1.f4 >= 22); l_35.f1.f4 = safe_add_func_int64_t_s_s(l_35.f1.f4, 1))
    { 
        int64_t l_39 = 1L;
        int32_t l_41 = 0x13F082F4L;
        int32_t l_42 = 0x91D0AB3BL;
        int32_t l_61 = 0x794CA015L;
        int32_t l_62 = 0xF9F99068L;
        g_45++;
        l_62 = ((0x6649A346L == (safe_add_func_int8_t_s_s(((l_39 | (l_42 = (safe_div_func_int64_t_s_s((safe_mul_func_int16_t_s_s((safe_sub_func_int16_t_s_s((safe_mod_func_int8_t_s_s((l_61 = (~(l_38 = ((l_41 & ((safe_add_func_uint32_t_u_u(g_20.f1.f0, (-8L))) > g_31.f1)) || g_31.f4.f1.f3)))), 0xCAL)), (-10L))), 0UL)), l_41)))) , p_27), g_31.f0))) < 255UL);
        for (g_31.f4.f1.f4 = 0; (g_31.f4.f1.f4 >= 43); g_31.f4.f1.f4 = safe_add_func_int64_t_s_s(g_31.f4.f1.f4, 4))
        { 
            int32_t l_67 = 0xE95B6698L;
            int32_t l_91 = 0x6F312D9EL;
            if ((safe_lshift_func_int8_t_s_u((-8L), p_27)))
            { 
                g_31.f4.f1.f1 = 0x6A5085D5L;
                l_67 = g_20.f2;
            }
            else
            { 
                g_31.f4.f1.f1 = l_67;
            }
            if (g_68)
            { 
                uint32_t l_86 = 18446744073709551615UL;
                g_31.f2.f2 |= (safe_sub_func_int64_t_s_s((safe_sub_func_int16_t_s_s((safe_sub_func_int16_t_s_s((safe_lshift_func_uint8_t_u_s(((l_33.f1 = (safe_rshift_func_uint8_t_u_u((safe_div_func_uint8_t_u_u((safe_sub_func_int32_t_s_s((safe_div_func_int64_t_s_s(g_31.f2.f4, 1UL)), 0x7A6402E1L)), (safe_unary_minus_func_int32_t_s(0xA389647EL)))), 5))) != l_86), 7)), l_34.f1.f2)), l_67)), p_28.f0));
            }
            else
            { 
                uint32_t l_92 = 0UL;
                l_33.f1 |= (safe_sub_func_uint32_t_u_u(0x904F0D90L, (((safe_lshift_func_int8_t_s_u((l_67 == p_28.f0), (p_27 < 6UL))) , p_28.f0) <= 3L)));
                l_92++;
                g_20.f1 = g_20.f1;
            }
            l_35.f1.f1 &= (!((safe_mod_func_int8_t_s_s((safe_rshift_func_uint8_t_u_s((safe_div_func_int16_t_s_s((safe_unary_minus_func_uint8_t_u((((g_20.f0--) & ((l_38 = ((safe_mod_func_int16_t_s_s((((safe_mod_func_uint64_t_u_u((safe_div_func_uint32_t_u_u(l_33.f4, g_31.f4.f1.f3)), ((safe_div_func_uint64_t_u_u(p_27, (((safe_div_func_uint8_t_u_u(0xF1L, 255UL)) || l_35.f1.f0) ^ l_34.f2))) , l_67))) || 0x7B54L) | l_39), 0x6B6AL)) >= l_91)) > l_33.f4)) <= (-1L)))), p_27)), p_27)), p_27)) >= g_44[0][3]));
        }
    }
    return l_35;
}





int test_main(void)
{
    int i, j;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_18, "g_18", print_hash_value);
    transparent_crc(g_19, "g_19", print_hash_value);
    transparent_crc(g_20.f0, "g_20.f0", print_hash_value);
    transparent_crc(g_20.f1.f0, "g_20.f1.f0", print_hash_value);
    transparent_crc(g_20.f1.f1, "g_20.f1.f1", print_hash_value);
    transparent_crc(g_20.f1.f2, "g_20.f1.f2", print_hash_value);
    transparent_crc(g_20.f1.f3, "g_20.f1.f3", print_hash_value);
    transparent_crc(g_20.f1.f4, "g_20.f1.f4", print_hash_value);
    transparent_crc(g_20.f2, "g_20.f2", print_hash_value);
    transparent_crc(g_31.f0, "g_31.f0", print_hash_value);
    transparent_crc(g_31.f1, "g_31.f1", print_hash_value);
    transparent_crc(g_31.f2.f0, "g_31.f2.f0", print_hash_value);
    transparent_crc(g_31.f2.f1, "g_31.f2.f1", print_hash_value);
    transparent_crc(g_31.f2.f2, "g_31.f2.f2", print_hash_value);
    transparent_crc(g_31.f2.f3, "g_31.f2.f3", print_hash_value);
    transparent_crc(g_31.f2.f4, "g_31.f2.f4", print_hash_value);
    transparent_crc(g_31.f2.f5, "g_31.f2.f5", print_hash_value);
    transparent_crc(g_31.f3, "g_31.f3", print_hash_value);
    transparent_crc(g_31.f4.f0, "g_31.f4.f0", print_hash_value);
    transparent_crc(g_31.f4.f1.f0, "g_31.f4.f1.f0", print_hash_value);
    transparent_crc(g_31.f4.f1.f1, "g_31.f4.f1.f1", print_hash_value);
    transparent_crc(g_31.f4.f1.f2, "g_31.f4.f1.f2", print_hash_value);
    transparent_crc(g_31.f4.f1.f3, "g_31.f4.f1.f3", print_hash_value);
    transparent_crc(g_31.f4.f1.f4, "g_31.f4.f1.f4", print_hash_value);
    transparent_crc(g_31.f4.f2, "g_31.f4.f2", print_hash_value);
    transparent_crc(g_31.f5, "g_31.f5", print_hash_value);
    transparent_crc(g_32.f0, "g_32.f0", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_43[i], "g_43[i]", print_hash_value);

    }
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_44[i][j], "g_44[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_45, "g_45", print_hash_value);
    transparent_crc(g_68, "g_68", print_hash_value);
    transparent_crc(g_138.f0, "g_138.f0", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_192[i][j], "g_192[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_202, "g_202", print_hash_value);
    transparent_crc(g_216, "g_216", print_hash_value);
    transparent_crc(g_217, "g_217", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_290[i], "g_290[i]", print_hash_value);

    }
    transparent_crc(g_310, "g_310", print_hash_value);
    transparent_crc(g_311, "g_311", print_hash_value);
    transparent_crc(g_312, "g_312", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_316[i], "g_316[i]", print_hash_value);

    }
    transparent_crc(g_319, "g_319", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
