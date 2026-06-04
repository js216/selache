// SPDX-License-Identifier: MIT
// cctest_csmith_05086a98.c --- cctest case csmith_05086a98 (csmith seed 84437656)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x2473f785 */
/* @exp_ticks 0x8f6 */

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

// Options:   -s 84437656 -o /home/agent1/fast_data/tmp/csmith_gen_hp0hbnnu/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   uint16_t  f0;
   int16_t  f1;
   const int64_t  f2;
};

union U2 {
   int32_t  f0;
   uint32_t  f1;
   int32_t  f2;
   const int32_t  f3;
};


static int32_t g_2[2] = {0x2E08974BL,0x2E08974BL};
static int32_t g_5 = (-1L);
static union U2 g_36 = {0x45487972L};
static uint16_t g_48 = 0x014EL;
static struct S0 g_64 = {65535UL,0x579AL,1L};
static int8_t g_75 = 7L;
static uint64_t g_84[4] = {18446744073709551607UL,18446744073709551607UL,18446744073709551607UL,18446744073709551607UL};
static int16_t g_87 = 4L;
static uint32_t g_129[4][2][4] = {{{0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL}},{{0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL}},{{0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL}},{{0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL}}};
static uint32_t g_131 = 0UL;
static int8_t g_153 = 5L;
static int8_t g_158 = 0x9CL;
static uint32_t g_160[3] = {7UL,7UL,7UL};
static uint32_t g_163 = 0xDBAEAE63L;
static uint32_t g_166 = 0xDC2A9FDAL;
static uint16_t g_171 = 0x5FBEL;
static uint8_t g_173 = 8UL;
static uint8_t g_204 = 253UL;
static int32_t g_211 = 0xF466BE12L;
static int64_t g_212 = 0x43ED317036850D54LL;
static int32_t g_213 = 1L;
static uint16_t g_214 = 65535UL;
static uint16_t g_241[4] = {65527UL,65527UL,65527UL,65527UL};
static uint32_t g_323 = 1UL;



static int32_t  func_1(void);
static uint64_t  func_11(int8_t  p_12, int32_t  p_13, int16_t  p_14, uint64_t  p_15);
static const uint64_t  func_21(int32_t  p_22, uint64_t  p_23);
static uint64_t  func_27(const int8_t  p_28, struct S0  p_29, uint32_t  p_30, uint16_t  p_31, int8_t  p_32);




static int32_t  func_1(void)
{ 
    int32_t l_16 = 0L;
    for (g_2[0] = 23; (g_2[0] < (-24)); --g_2[0])
    { 
        int32_t l_10 = 1L;
        for (g_5 = 0; (g_5 <= (-25)); g_5 = safe_sub_func_uint8_t_u_u(g_5, 4))
        { 
            uint64_t l_17 = 0UL;
            g_323 = (safe_add_func_uint64_t_u_u(l_10, func_11((l_16 , 0x01L), (g_2[0] , (-1L)), l_17, g_2[0])));
            return l_17;
        }
    }
    return l_16;
}



static uint64_t  func_11(int8_t  p_12, int32_t  p_13, int16_t  p_14, uint64_t  p_15)
{ 
    int32_t l_307 = 0xF3BBD960L;
    int32_t l_312 = 0xB3CFD91DL;
    uint8_t l_322 = 0xC0L;
    for (p_15 = 0; (p_15 > 16); ++p_15)
    { 
        int8_t l_20 = (-5L);
        int32_t l_294 = 0x345A6AC6L;
        int32_t l_308 = 0x09BB11AEL;
        if ((g_2[1] > (l_294 ^= (l_20 ^ (p_12 , (func_21(p_12, l_20) >= p_15))))))
        { 
            int8_t l_297 = 0x9FL;
            int32_t l_309 = 0xD43D75D1L;
            g_211 ^= (safe_add_func_uint32_t_u_u(((p_12 | ((l_297 == p_15) & g_75)) | p_15), 0x2CA0AF4EL));
            l_309 = ((((safe_mod_func_int32_t_s_s(((safe_rshift_func_uint16_t_u_u(((safe_add_func_uint64_t_u_u((safe_sub_func_uint32_t_u_u(((!(0L < 0x6F827C98L)) > g_64.f2), 4294967290UL)), l_307)) | l_308), 6)) , p_15), g_5)) & l_308) == 0x1C78L) > g_241[3]);
        }
        else
        { 
            uint8_t l_313[5][3] = {{0x5CL,255UL,0x5CL},{0xB9L,0xB9L,0xB9L},{0x5CL,255UL,0x5CL},{0xB9L,0xB9L,0xB9L},{0x5CL,255UL,0x5CL}};
            int i, j;
            for (g_131 = 0; (g_131 >= 18); g_131++)
            { 
                if (g_241[3])
                    break;
                l_312 = 0L;
                g_211 = g_5;
            }
            l_313[4][1] = p_13;
        }
    }
    g_211 = (((safe_mod_func_int8_t_s_s(((safe_add_func_int16_t_s_s(((safe_rshift_func_int8_t_s_u(((l_312 == (safe_mul_func_uint8_t_u_u(g_204, 8UL))) >= 0xBC259659D1DFF827LL), p_13)) ^ l_322), l_322)) >= p_13), 3L)) | l_312) != 0xA2L);
    return p_13;
}



static const uint64_t  func_21(int32_t  p_22, uint64_t  p_23)
{ 
    uint32_t l_26[2][1][1];
    int32_t l_37 = 8L;
    struct S0 l_38[2][4] = {{{0x0525L,-1L,7L},{0x0525L,-1L,7L},{0x0525L,-1L,7L},{0x0525L,-1L,7L}},{{0x0525L,-1L,7L},{0x0525L,-1L,7L},{0x0525L,-1L,7L},{0x0525L,-1L,7L}}};
    int16_t l_265 = 0xDA0CL;
    uint64_t l_275 = 18446744073709551615UL;
    int i, j, k;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 1; k++)
                l_26[i][j][k] = 0x13C27F35L;
        }
    }
    for (p_23 = 0; (p_23 <= 52); p_23 = safe_add_func_uint8_t_u_u(p_23, 1))
    { 
        int32_t l_258 = 0xA71A3699L;
        union U2 l_267 = {6L};
        int32_t l_272 = (-6L);
        uint64_t l_281 = 1UL;
        if ((l_26[1][0][0] | func_27((((safe_lshift_func_uint8_t_u_s(((l_37 ^= (~(g_2[0] , ((((g_36 , g_2[0]) && g_36.f0) | p_23) && 0x85L)))) < g_36.f1), 3)) ^ l_26[1][0][0]) , 0x98L), l_38[1][2], l_38[1][2].f1, l_38[1][2].f1, g_2[0])))
        { 
            g_211 = (safe_sub_func_int16_t_s_s((g_212 && 0x9EL), ((l_37 = (safe_div_func_uint64_t_u_u((g_64 , l_258), (-4L)))) & g_153)));
        }
        else
        { 
            int8_t l_266 = (-1L);
            l_266 |= ((-10L) == (safe_add_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s(0x3FL, 6)), (((g_158 = l_258) | ((safe_mul_func_int8_t_s_s((((g_153 && (-1L)) & g_48) , l_265), l_258)) ^ l_258)) < 18446744073709551609UL))));
            if (((-9L) & ((p_23 < (l_272 = (((l_267 , ((((safe_add_func_uint64_t_u_u((safe_div_func_int8_t_s_s((p_22 == g_75), l_267.f3)), 0x590174D8FE965C81LL)) , 6L) , p_22) <= p_23)) != g_36.f0) || p_22))) ^ p_22)))
            { 
                int8_t l_280 = (-8L);
                l_37 ^= (((safe_mod_func_uint64_t_u_u(((l_275 < l_38[1][2].f0) <= ((l_267.f1 > (safe_div_func_int64_t_s_s((safe_add_func_int8_t_s_s((l_280 <= l_266), l_281)), 0xEE34DF51DCF8AAB9LL))) < 4294967287UL)), g_36.f0)) , 1UL) | 0xE9L);
            }
            else
            { 
                struct S0 l_288 = {1UL,0L,0x9750AABC08B88E97LL};
                int32_t l_293 = (-9L);
                l_293 = (safe_mul_func_uint8_t_u_u(((safe_rshift_func_int16_t_s_s(0x93D7L, ((safe_add_func_int64_t_s_s((l_288 , 0x16EFC717972E57F3LL), (safe_add_func_int64_t_s_s((safe_rshift_func_int8_t_s_s(g_204, p_23)), 0xDD5C52C778925770LL)))) == p_23))) > 0x8B66DF69L), g_84[1]));
                g_211 = p_23;
            }
        }
        return g_75;
    }
    g_211 = 9L;
    return g_129[3][1][3];
}



static uint64_t  func_27(const int8_t  p_28, struct S0  p_29, uint32_t  p_30, uint16_t  p_31, int8_t  p_32)
{ 
    int32_t l_47 = 0xBA5493A5L;
    uint16_t l_98 = 0x10ABL;
    const int16_t l_99 = 0L;
    int16_t l_100[5] = {2L,2L,2L,2L,2L};
    const uint64_t l_130 = 18446744073709551615UL;
    int32_t l_159 = 0L;
    uint16_t l_218 = 0x6FBCL;
    int32_t l_253 = 0x962E55FAL;
    int i;
lbl_132:
    for (p_31 = 0; (p_31 == 10); p_31++)
    { 
        uint32_t l_45 = 0x1081B270L;
        int32_t l_85 = (-8L);
        int32_t l_86 = 0xA71D4F06L;
        for (p_30 = 0; (p_30 <= 3); p_30++)
        { 
            uint16_t l_46 = 7UL;
            int64_t l_49[1][3];
            int i, j;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 3; j++)
                    l_49[i][j] = 0x1939EFD9132E8824LL;
            }
            g_48 = ((safe_div_func_int64_t_s_s((p_29 , (((l_45 <= (0xC7L >= (l_46 ^= 0x2FL))) , g_2[0]) , (-1L))), l_47)) || g_36.f1);
            for (g_36.f0 = 0; (g_36.f0 >= 0); g_36.f0 -= 1)
            { 
                int32_t l_67 = 0L;
                int32_t l_76 = 0L;
                int i, j;
                l_67 = (safe_mod_func_uint64_t_u_u((safe_rshift_func_int8_t_s_s(((0x7B8A5F03L != (l_49[g_36.f0][(g_36.f0 + 1)] != (((safe_mul_func_int16_t_s_s((safe_rshift_func_uint8_t_u_s((((safe_add_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u((safe_mul_func_int16_t_s_s((g_64 , ((safe_mul_func_uint8_t_u_u((8UL & 0xE6L), l_49[g_36.f0][(g_36.f0 + 1)])) && 255UL)), p_28)), p_32)), p_29.f2)) >= (-9L)) , g_36.f1), 5)), g_64.f0)) < 0x2ACF1929B4DB59FBLL) <= l_49[0][2]))) , l_45), 3)), p_29.f2));
                l_47 = (safe_lshift_func_int16_t_s_s(g_36.f2, (safe_mul_func_int8_t_s_s((safe_sub_func_int32_t_s_s(p_31, ((+((l_49[g_36.f0][(g_36.f0 + 1)] >= (l_76 ^= (l_67 = ((p_29.f1 > p_31) < g_75)))) , 0xDFL)) ^ 0x02E83987EDF5A291LL))), 0x5FL))));
                if (g_64.f1)
                    break;
            }
            return l_47;
        }
        g_87 = (((((-1L) <= (((safe_sub_func_int8_t_s_s((safe_add_func_int32_t_s_s(((+(l_86 = ((safe_rshift_func_uint16_t_u_s((4294967286UL != ((g_36.f3 & ((((((g_48 = (((g_84[1] ^= ((g_64.f0 ^ 4294967293UL) < l_47)) | l_85) | 0x86B00112L)) && l_45) & g_36.f2) , l_45) & g_36.f0) && (-1L))) , g_64.f1)), 4)) > 255UL))) , g_36.f0), p_29.f1)), p_29.f1)) & g_2[0]) , p_28)) ^ p_32) == l_85) && 0x5B73L);
    }
    if ((((l_47 = l_47) , (safe_add_func_uint16_t_u_u((((safe_rshift_func_uint16_t_u_u(l_47, 1)) == (((((((safe_mul_func_int16_t_s_s((l_47 != ((safe_lshift_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u((8UL == 0xD54F57EBL), p_32)), g_2[1])) <= 255UL)), 65535UL)) >= 0x1E9346F9L) && l_47) > l_98) == 0xA6L) && l_99) , g_84[2])) || 255UL), p_29.f1))) == l_100[0]))
    { 
        int8_t l_105[3][2] = {{(-1L),(-1L)},{(-1L),(-1L)},{(-1L),(-1L)}};
        const int16_t l_106[4][4][4] = {{{0xAAB3L,(-7L),1L,1L},{0xAAB3L,0xAAB3L,0xDBF0L,0x25D9L},{(-10L),1L,0xAAB3L,0xBD2FL},{(-7L),1L,0xA10FL,0xAAB3L}},{{(-1L),1L,(-1L),0xBD2FL},{1L,1L,0xBE12L,0x25D9L},{0x25D9L,0xAAB3L,(-7L),1L},{0x8679L,(-7L),(-7L),0x8679L}},{{0x25D9L,0xBD2FL,0xBE12L,(-1L)},{1L,0xFD22L,(-1L),0xDBF0L},{(-1L),0xDBF0L,0xA10FL,0xDBF0L},{(-7L),0xFD22L,0xAAB3L,(-1L)}},{{(-10L),0xBD2FL,0xDBF0L,0x8679L},{0xAAB3L,(-7L),1L,1L},{0xAAB3L,0xAAB3L,0xDBF0L,0x25D9L},{(-10L),1L,0xAAB3L,0xBD2FL}}};
        int32_t l_143 = 0xC6434686L;
        int32_t l_202 = 5L;
        int i, j, k;
        if ((safe_mul_func_int16_t_s_s(p_31, ((((0x5E37C3E796DA1768LL & (safe_lshift_func_int8_t_s_s((((g_36.f1 >= 0xA708L) & g_84[2]) < p_29.f0), g_36.f0))) == g_2[1]) < l_105[1][0]) & l_106[2][0][0]))))
        { 
            int16_t l_109 = 0x9B5CL;
            int32_t l_142 = 0x44F880E7L;
            uint32_t l_152[2];
            uint8_t l_156 = 0x00L;
            int32_t l_157 = 0xBE786ADAL;
            int i;
            for (i = 0; i < 2; i++)
                l_152[i] = 0x89590F8BL;
            if (((safe_div_func_int32_t_s_s(l_109, p_30)) >= (safe_rshift_func_int16_t_s_s(l_109, (safe_mul_func_int16_t_s_s((safe_sub_func_uint16_t_u_u(p_32, 0xE21EL)), 1UL))))))
            { 
                return g_2[0];
            }
            else
            { 
                l_47 = (-1L);
            }
            if ((g_87 | (((l_47 = (g_131 = (safe_add_func_int16_t_s_s(g_87, (safe_add_func_uint32_t_u_u((!((g_48 ^= (safe_mod_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s((g_75 ^= (safe_add_func_uint64_t_u_u(0xE93423A3813E0D8CLL, ((safe_rshift_func_uint16_t_u_u(((g_129[3][1][3] = 1L) > g_64.f0), p_29.f1)) ^ g_5)))), l_130)), 0x6A4DL))) <= p_31)), g_64.f0)))))) || p_28) | 0xBD0BL)))
            { 
                if (p_28)
                    goto lbl_132;
                l_47 ^= (l_143 = ((g_64.f0 , (+((g_84[0] = ((((l_142 = ((safe_div_func_int16_t_s_s(0xAE13L, (((0x96BB96E4L || ((safe_rshift_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s((((safe_add_func_int16_t_s_s(p_28, 0x2F11L)) ^ p_29.f2) | 1L), 5)), 15)) < 0x91466E0B1FDE04ABLL)) | p_31) ^ 1UL))) , p_29.f2)) && l_106[2][0][0]) , l_142) != l_106[2][0][0])) | l_109))) && l_142));
                l_142 = ((safe_add_func_int64_t_s_s(l_143, (safe_rshift_func_int8_t_s_s((p_32 &= ((safe_mod_func_uint64_t_u_u(g_2[1], (l_106[2][0][0] && ((((safe_mod_func_uint8_t_u_u(255UL, l_152[0])) < g_153) | 0x64F8L) ^ 1L)))) <= p_30)), 2)))) ^ p_29.f1);
            }
            else
            { 
                return l_100[4];
            }
            if (((g_64.f1 < (((g_129[3][1][3] < ((g_36.f0 , (safe_lshift_func_int16_t_s_s((((l_156 < g_36.f3) < 4294967293UL) <= l_100[0]), 14))) == g_84[1])) ^ 0xD052D8D885D17D95LL) > l_47)) & 1UL))
            { 
                l_47 = g_2[0];
                g_160[2]++;
                g_163++;
            }
            else
            { 
                uint64_t l_172[3][4][2] = {{{0xC77FDBCA6F5D40A5LL,18446744073709551606UL},{0xFE557E69CC3E7F26LL,18446744073709551606UL},{0xC77FDBCA6F5D40A5LL,0xFE557E69CC3E7F26LL},{18446744073709551615UL,18446744073709551615UL}},{{18446744073709551615UL,0xFE557E69CC3E7F26LL},{0xC77FDBCA6F5D40A5LL,18446744073709551606UL},{0xFE557E69CC3E7F26LL,18446744073709551606UL},{0xC77FDBCA6F5D40A5LL,0xFE557E69CC3E7F26LL}},{{18446744073709551615UL,18446744073709551615UL},{18446744073709551615UL,0xFE557E69CC3E7F26LL},{0xC77FDBCA6F5D40A5LL,18446744073709551606UL},{0xFE557E69CC3E7F26LL,18446744073709551606UL}}};
                int32_t l_174 = 0xC3DA0F21L;
                int i, j, k;
                g_166 = p_29.f2;
                l_174 = ((safe_rshift_func_uint16_t_u_s(g_131, 9)) , (g_173 &= (safe_add_func_uint16_t_u_u(((((((((p_29.f2 | l_47) || (g_171 = 5L)) >= 0L) != l_172[0][1][1]) == p_29.f2) & l_172[0][1][1]) , p_29.f0) ^ 0x011399F0L), p_31))));
                l_47 = (((safe_add_func_int64_t_s_s((0UL | (0UL < (((safe_rshift_func_int16_t_s_s((safe_mod_func_int32_t_s_s((safe_lshift_func_uint16_t_u_u((0xCE8BB6BBL && ((((safe_mul_func_int16_t_s_s(l_106[3][1][1], g_2[0])) > p_29.f0) ^ l_174) || l_142)), p_31)), 5UL)), 1)) | p_31) >= 0xFC68CCC0L))), l_47)) , l_172[0][1][1]) | g_36.f0);
            }
        }
        else
        { 
            int32_t l_197 = (-6L);
            int32_t l_200 = 1L;
            int32_t l_203 = 0x85E3D3FFL;
            for (g_171 = 0; (g_171 < 39); ++g_171)
            { 
                const int8_t l_198 = (-1L);
                int64_t l_199 = 0x8BBE49A10EB1AB08LL;
                int32_t l_201[1][3];
                int i, j;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 3; j++)
                        l_201[i][j] = (-9L);
                }
                l_200 = ((g_36 , (safe_mod_func_int8_t_s_s((safe_sub_func_uint32_t_u_u((safe_mod_func_int8_t_s_s((g_129[3][1][3] && ((safe_sub_func_int16_t_s_s(l_197, (0x485C87E2L | 0x3BB3813AL))) , l_198)), g_48)), g_171)), p_29.f0))) >= l_199);
                g_204--;
            }
            l_47 = ((1L != (safe_mul_func_uint16_t_u_u((l_100[0] < p_28), 65531UL))) != g_84[1]);
            for (p_30 = 0; (p_30 <= 22); p_30 = safe_add_func_uint64_t_u_u(p_30, 7))
            { 
                g_214++;
            }
        }
    }
    else
    { 
        int32_t l_217[1];
        uint16_t l_238 = 0x4F27L;
        int i;
        for (i = 0; i < 1; i++)
            l_217[i] = 9L;
        for (g_64.f1 = 1; (g_64.f1 <= 4); g_64.f1 += 1)
        { 
            int32_t l_239 = 0x6BEB426BL;
            int32_t l_240 = 2L;
            int16_t l_252 = 0L;
            int i;
            l_218--;
            l_238 = (safe_add_func_int16_t_s_s((safe_sub_func_uint32_t_u_u((((!l_100[g_64.f1]) ^ ((safe_rshift_func_int16_t_s_s((((l_100[g_64.f1] > (((safe_div_func_int64_t_s_s((safe_mod_func_uint8_t_u_u((safe_mul_func_int8_t_s_s((safe_rshift_func_int8_t_s_s((0x9E0CL && ((safe_lshift_func_uint8_t_u_u(g_64.f1, l_217[0])) != p_30)), g_163)), p_29.f2)), l_217[0])), 0xD5C1E0805CE0736ALL)) <= l_217[0]) & p_29.f1)) < g_129[0][0][1]) != 0x3313L), 10)) > (-9L))) , 4294967291UL), 0UL)), g_64.f2));
            if (l_217[0])
            { 
                g_211 = p_32;
                g_241[3]++;
            }
            else
            { 
                g_211 = l_100[g_64.f1];
                l_159 = ((-1L) < (safe_lshift_func_uint16_t_u_u((++p_29.f0), g_131)));
            }
            for (l_47 = 3; (l_47 >= 0); l_47 -= 1)
            { 
                int i;
                g_211 = ((((g_166 ^= ((safe_sub_func_int16_t_s_s((l_100[l_47] &= (p_29.f1 & ((l_240 = ((g_36.f3 | ((safe_add_func_uint32_t_u_u(l_217[0], (((g_171 <= g_64.f1) || l_217[0]) || l_252))) < g_211)) < l_217[0])) > 0xD723124BL))), 9UL)) , 8UL)) && l_217[0]) == l_253) & 0xA5L);
            }
        }
    }
    return p_31;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_2[i], "g_2[i]", print_hash_value);

    }
    transparent_crc(g_5, "g_5", print_hash_value);
    transparent_crc(g_36.f0, "g_36.f0", print_hash_value);
    transparent_crc(g_36.f1, "g_36.f1", print_hash_value);
    transparent_crc(g_36.f2, "g_36.f2", print_hash_value);
    transparent_crc(g_36.f3, "g_36.f3", print_hash_value);
    transparent_crc(g_48, "g_48", print_hash_value);
    transparent_crc(g_64.f0, "g_64.f0", print_hash_value);
    transparent_crc(g_64.f1, "g_64.f1", print_hash_value);
    transparent_crc(g_64.f2, "g_64.f2", print_hash_value);
    transparent_crc(g_75, "g_75", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_84[i], "g_84[i]", print_hash_value);

    }
    transparent_crc(g_87, "g_87", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_129[i][j][k], "g_129[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_131, "g_131", print_hash_value);
    transparent_crc(g_153, "g_153", print_hash_value);
    transparent_crc(g_158, "g_158", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_160[i], "g_160[i]", print_hash_value);

    }
    transparent_crc(g_163, "g_163", print_hash_value);
    transparent_crc(g_166, "g_166", print_hash_value);
    transparent_crc(g_171, "g_171", print_hash_value);
    transparent_crc(g_173, "g_173", print_hash_value);
    transparent_crc(g_204, "g_204", print_hash_value);
    transparent_crc(g_211, "g_211", print_hash_value);
    transparent_crc(g_212, "g_212", print_hash_value);
    transparent_crc(g_213, "g_213", print_hash_value);
    transparent_crc(g_214, "g_214", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_241[i], "g_241[i]", print_hash_value);

    }
    transparent_crc(g_323, "g_323", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
