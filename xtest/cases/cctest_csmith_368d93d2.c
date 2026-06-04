// SPDX-License-Identifier: MIT
// cctest_csmith_368d93d2.c --- cctest case csmith_368d93d2 (csmith seed 915248082)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xe91e6ee3 */
/* @exp_ticks 0x57f */

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

// Options:   -s 915248082 -o /home/agent1/fast_data/tmp/csmith_gen_229wqcjh/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   int32_t  f0;
   const int32_t  f1;
   int16_t  f2;
   const int32_t  f3;
   uint8_t  f4;
   uint8_t  f5;
};

#pragma pack(push)
#pragma pack(1)
struct S1 {
   struct S0  f0;
   int32_t  f1;
   const int8_t  f2;
};
#pragma pack(pop)

union U2 {
   uint64_t  f0;
};


static int32_t g_2 = 0L;
static union U2 g_50 = {0xF732BC12A55B90CBLL};
static int32_t g_51[2] = {0L,0L};
static int32_t g_53 = 1L;
static uint64_t g_55 = 3UL;
static int8_t g_64 = (-1L);
static int32_t g_71 = 1L;
static int32_t g_72 = 0L;
static uint32_t g_73 = 0x534F93D1L;
static int64_t g_85[3] = {(-4L),(-4L),(-4L)};
static int8_t g_86 = 0xF5L;
static uint8_t g_88 = 0xB3L;
static uint8_t g_91 = 0UL;
static int16_t g_117 = 0xFB68L;
static union U2 g_125[1][5][3] = {{{{0x30389EC31A1128F6LL},{0x30389EC31A1128F6LL},{0x30389EC31A1128F6LL}},{{18446744073709551614UL},{18446744073709551614UL},{18446744073709551614UL}},{{0x30389EC31A1128F6LL},{0x30389EC31A1128F6LL},{0x30389EC31A1128F6LL}},{{18446744073709551614UL},{18446744073709551614UL},{18446744073709551614UL}},{{0x30389EC31A1128F6LL},{0x30389EC31A1128F6LL},{0x30389EC31A1128F6LL}}}};
static int8_t g_147 = 0x59L;
static uint32_t g_148 = 1UL;
static int8_t g_151 = 0x33L;
static uint16_t g_162 = 0x1D12L;
static int64_t g_169 = 0L;
static struct S0 g_172 = {-1L,0x5B373B1AL,-8L,0L,0x94L,0xECL};



static struct S0  func_1(void);
static union U2  func_7(uint32_t  p_8, union U2  p_9, uint64_t  p_10, uint64_t  p_11, union U2  p_12);
static uint32_t  func_22(uint32_t  p_23, int64_t  p_24, struct S1  p_25, int32_t  p_26);
static int32_t  func_38(int64_t  p_39, uint32_t  p_40, union U2  p_41);




static struct S0  func_1(void)
{ 
    uint32_t l_15 = 0xEB969161L;
    int32_t l_19 = 0x2C593C86L;
    int32_t l_170 = (-1L);
    int32_t l_171 = 0xEBA36B31L;
    for (g_2 = 0; (g_2 >= 12); ++g_2)
    { 
        struct S0 l_16 = {0x257EA0D0L,0x8D303F02L,0x4C3FL,0xF88039D6L,2UL,0xD6L};
        struct S1 l_27 = {{-2L,-8L,-1L,1L,0xABL,1UL},0x84365721L,0x67L};
        g_151 = (safe_mul_func_uint8_t_u_u((func_7((safe_mod_func_uint16_t_u_u((l_15 != (l_16 , ((safe_mod_func_uint8_t_u_u((l_19 = l_16.f4), (safe_div_func_uint8_t_u_u(((g_91 &= func_22(l_16.f4, l_16.f3, l_27, l_15)) , g_85[1]), 0x9EL)))) <= l_15))), l_15)), g_50, g_50.f0, g_86, g_50) , g_53), 0x65L));
        g_71 ^= (safe_rshift_func_int16_t_s_s((safe_div_func_uint16_t_u_u((safe_mod_func_int64_t_s_s((((g_151 <= (g_117 > (g_88 = (safe_mul_func_int16_t_s_s((g_162 = (0x03BF9ECD52D1B5B4LL & (safe_sub_func_int32_t_s_s((l_27.f1 = ((g_147 != l_27.f0.f5) > l_15)), l_16.f3)))), l_19))))) <= 18446744073709551614UL) & g_2), l_19)), 0xB043L)), 13));
        l_16.f0 = (safe_div_func_int32_t_s_s((l_171 &= (safe_div_func_int32_t_s_s((safe_sub_func_uint32_t_u_u(0x9F1CB05EL, 0xC8C60D7FL)), (l_170 = (g_169 &= (l_19 = (g_85[2] || l_16.f1))))))), l_15));
    }
    return g_172;
}



static union U2  func_7(uint32_t  p_8, union U2  p_9, uint64_t  p_10, uint64_t  p_11, union U2  p_12)
{ 
    uint64_t l_94 = 0x4368EC64C767A1E7LL;
    int32_t l_116 = 0xD8BE8FF3L;
    int32_t l_118 = 0x944EAF9AL;
    int32_t l_144 = 1L;
    int64_t l_145 = 0x280F67D394C19A24LL;
    int32_t l_146[5][5][4] = {{{0xDDE60598L,0x652A4294L,0xF474991CL,0x652A4294L},{0xBF1E6694L,1L,0x83F7B260L,0xF474991CL},{0x652A4294L,1L,1L,0x652A4294L},{1L,0x652A4294L,0xBF1E6694L,0xDDE60598L},{1L,0xBF1E6694L,1L,0x83F7B260L}},{{0x652A4294L,0xDDE60598L,0x83F7B260L,0x83F7B260L},{0xBF1E6694L,0xBF1E6694L,0xBF1E6694L,0x83F7B260L},{0x83F7B260L,1L,0xBF1E6694L,1L},{(-9L),0xDDE60598L,0xF474991CL,0xBF1E6694L},{1L,0xDDE60598L,0xDDE60598L,1L}},{{0xDDE60598L,1L,(-9L),0x83F7B260L},{0xDDE60598L,(-9L),0xDDE60598L,0xF474991CL},{1L,0x83F7B260L,0xF474991CL,0xF474991CL},{(-9L),(-9L),0xBF1E6694L,0x83F7B260L},{0x83F7B260L,1L,0xBF1E6694L,1L}},{{(-9L),0xDDE60598L,0xF474991CL,0xBF1E6694L},{1L,0xDDE60598L,0xDDE60598L,1L},{0xDDE60598L,1L,(-9L),0x83F7B260L},{0xDDE60598L,(-9L),0xDDE60598L,0xF474991CL},{1L,0x83F7B260L,0xF474991CL,0xF474991CL}},{{(-9L),(-9L),0xBF1E6694L,0x83F7B260L},{0x83F7B260L,1L,0xBF1E6694L,1L},{(-9L),0xDDE60598L,0xF474991CL,0xBF1E6694L},{1L,0xDDE60598L,0xDDE60598L,1L},{0xDDE60598L,1L,(-9L),0x83F7B260L}}};
    int i, j, k;
    if (p_11)
    { 
lbl_119:
        for (g_55 = 0; (g_55 >= 45); g_55++)
        { 
            --l_94;
        }
    }
    else
    { 
        struct S0 l_109[4][4] = {{{7L,0xB28538E7L,0x4845L,0xB5F4D78FL,0x0EL,9UL},{7L,0xB28538E7L,0x4845L,0xB5F4D78FL,0x0EL,9UL},{7L,0xB28538E7L,0x4845L,0xB5F4D78FL,0x0EL,9UL},{7L,0xB28538E7L,0x4845L,0xB5F4D78FL,0x0EL,9UL}},{{7L,0xB28538E7L,0x4845L,0xB5F4D78FL,0x0EL,9UL},{7L,0xB28538E7L,0x4845L,0xB5F4D78FL,0x0EL,9UL},{7L,0xB28538E7L,0x4845L,0xB5F4D78FL,0x0EL,9UL},{7L,0xB28538E7L,0x4845L,0xB5F4D78FL,0x0EL,9UL}},{{7L,0xB28538E7L,0x4845L,0xB5F4D78FL,0x0EL,9UL},{7L,0xB28538E7L,0x4845L,0xB5F4D78FL,0x0EL,9UL},{7L,0xB28538E7L,0x4845L,0xB5F4D78FL,0x0EL,9UL},{7L,0xB28538E7L,0x4845L,0xB5F4D78FL,0x0EL,9UL}},{{7L,0xB28538E7L,0x4845L,0xB5F4D78FL,0x0EL,9UL},{7L,0xB28538E7L,0x4845L,0xB5F4D78FL,0x0EL,9UL},{7L,0xB28538E7L,0x4845L,0xB5F4D78FL,0x0EL,9UL},{7L,0xB28538E7L,0x4845L,0xB5F4D78FL,0x0EL,9UL}}};
        int32_t l_143 = 1L;
        int i, j;
        for (g_64 = 0; (g_64 <= 16); g_64 = safe_add_func_uint8_t_u_u(g_64, 1))
        { 
            int32_t l_110[4][1][3] = {{{0L,8L,6L}},{{0L,0L,8L}},{{0x726E94FAL,8L,8L}},{{8L,(-1L),6L}}};
            int i, j, k;
            if ((safe_sub_func_uint64_t_u_u(p_11, (safe_div_func_int32_t_s_s((((safe_sub_func_uint32_t_u_u((((((safe_rshift_func_uint16_t_u_u((g_86 , g_86), 7)) && ((safe_add_func_int8_t_s_s(((g_51[1] , l_109[2][3]) , g_2), 0x28L)) < 0x3429DD6FL)) , g_53) && 0x05L) & g_91), g_73)) , (-1L)) , l_110[0][0][2]), 0x127A5081L)))))
            { 
                uint32_t l_124 = 1UL;
                l_118 &= (((65534UL ^ (safe_add_func_uint8_t_u_u(((g_117 = (safe_add_func_uint32_t_u_u(((safe_unary_minus_func_int64_t_s(l_116)) <= 0L), (p_12.f0 < 0x42CAA49FFA34A9EDLL)))) && 0x84D55884L), g_73))) < 0xCBL) || g_73);
                if (p_11)
                    goto lbl_119;
                l_124 |= (safe_mul_func_uint8_t_u_u((0x71L < (safe_mul_func_uint16_t_u_u(p_9.f0, p_9.f0))), p_11));
            }
            else
            { 
                return g_125[0][2][1];
            }
        }
        l_109[2][3].f0 = ((g_64 = g_53) && ((((safe_mod_func_uint64_t_u_u(((safe_div_func_uint16_t_u_u((g_51[1] , (l_118 ^= ((((safe_div_func_uint16_t_u_u((safe_mul_func_int8_t_s_s((g_71 , (((safe_div_func_uint16_t_u_u(((0x43F0L == g_71) || 1L), g_72)) , l_109[2][3].f2) && 0xD7L)), l_116)), p_9.f0)) && l_116) > g_51[1]) != l_94))), l_94)) ^ p_11), p_11)) <= 0x174F72E784E7BDFFLL) >= 0x4D06L) != 0xA3B5982017E6F66ALL));
        for (g_64 = 0; (g_64 > (-10)); --g_64)
        { 
            uint32_t l_142 = 0x54331F87L;
            g_71 = (l_143 = ((l_142 ^= (g_53 = (0x13080926L < (l_109[2][3].f0 |= ((((p_10 ^ (safe_div_func_int16_t_s_s((p_9.f0 <= (g_55 ^ 0x3CL)), g_55))) ^ p_8) > 4294967292UL) <= 0xDDL))))) <= (-8L)));
        }
    }
    g_148--;
    return g_125[0][2][1];
}



static uint32_t  func_22(uint32_t  p_23, int64_t  p_24, struct S1  p_25, int32_t  p_26)
{ 
    uint32_t l_32[1];
    int32_t l_49 = 1L;
    int32_t l_82 = 0xC31E9240L;
    int32_t l_83 = 1L;
    int32_t l_84 = 0xBCD962F9L;
    int32_t l_87[5][5][3] = {{{0xA94EDB4AL,8L,0xA94EDB4AL},{(-1L),0L,1L},{(-1L),(-1L),0L},{0xA94EDB4AL,0L,0L},{0L,8L,1L}},{{0xA94EDB4AL,8L,0xA94EDB4AL},{(-1L),0L,1L},{(-1L),(-1L),0L},{0xA94EDB4AL,0L,0L},{0L,8L,1L}},{{0xA94EDB4AL,8L,0xA94EDB4AL},{(-1L),0L,1L},{(-1L),(-1L),0L},{0xA94EDB4AL,0L,0L},{0L,8L,1L}},{{0xA94EDB4AL,8L,0xA94EDB4AL},{(-1L),0L,1L},{(-1L),(-1L),0L},{0xA94EDB4AL,0L,0L},{0L,8L,1L}},{{0xA94EDB4AL,8L,0xA94EDB4AL},{(-1L),0L,1L},{(-1L),(-1L),0L},{0xA94EDB4AL,0L,0L},{0L,8L,1L}}};
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_32[i] = 1UL;
    for (p_25.f0.f4 = 0; (p_25.f0.f4 != 31); p_25.f0.f4++)
    { 
        return p_26;
    }
    for (p_25.f0.f4 = (-18); (p_25.f0.f4 == 46); p_25.f0.f4++)
    { 
        int32_t l_37 = (-1L);
        int32_t l_81[2][2];
        int i, j;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 2; j++)
                l_81[i][j] = 0xADCC66F1L;
        }
        l_32[0] ^= p_24;
        for (p_24 = 2; (p_24 > (-6)); p_24 = safe_sub_func_uint32_t_u_u(p_24, 1))
        { 
            int32_t l_48 = 0x6D70783DL;
            for (p_25.f0.f2 = (-7); (p_25.f0.f2 >= 8); p_25.f0.f2++)
            { 
                return l_37;
            }
            g_71 |= func_38(((g_2 == (safe_add_func_uint32_t_u_u((((safe_mul_func_int8_t_s_s((0x6AL <= (p_25.f2 | ((l_49 = (safe_lshift_func_int8_t_s_s(l_48, 4))) | 0xB1EDL))), l_37)) | 0UL) , g_2), p_25.f1))) | g_2), g_2, g_50);
        }
        g_88++;
    }
    return g_53;
}



static int32_t  func_38(int64_t  p_39, uint32_t  p_40, union U2  p_41)
{ 
    uint8_t l_52 = 1UL;
    int32_t l_54 = 0xA13735CAL;
    for (p_39 = 0; (p_39 <= 1); p_39 += 1)
    { 
        uint64_t l_65 = 18446744073709551615UL;
        int32_t l_67 = 0xBA845DB3L;
        int i;
        l_52 = g_51[p_39];
        for (p_40 = 0; (p_40 <= 1); p_40 += 1)
        { 
            int64_t l_66 = 0L;
            int32_t l_80 = 0xFBA83E1AL;
            l_67 &= ((--g_55) , (safe_mul_func_int8_t_s_s((((g_53 >= ((safe_lshift_func_int16_t_s_u((((g_51[p_39] >= ((safe_mul_func_uint16_t_u_u(((((g_50.f0 >= (g_64 = (((4294967294UL < g_50.f0) < p_39) != l_54))) <= l_65) || g_55) != 0x6653L), l_66)) & l_66)) , l_66) ^ (-3L)), p_40)) && 0L)) != 0xCABBE7F6L) > p_39), 0xE1L)));
            for (l_67 = 0; (l_67 <= 1); l_67 += 1)
            { 
                int64_t l_68 = 1L;
                int32_t l_69 = (-8L);
                int32_t l_70 = 0xCD9178FBL;
                int i;
                ++g_73;
                if (g_51[p_39])
                    continue;
                l_80 = (safe_sub_func_uint32_t_u_u(g_53, (0xC0L != (safe_lshift_func_uint16_t_u_u(p_40, 15)))));
            }
            for (l_80 = 0; (l_80 <= 1); l_80 += 1)
            { 
                if (g_72)
                    break;
            }
        }
    }
    return g_51[1];
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_50.f0, "g_50.f0", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_51[i], "g_51[i]", print_hash_value);

    }
    transparent_crc(g_53, "g_53", print_hash_value);
    transparent_crc(g_55, "g_55", print_hash_value);
    transparent_crc(g_64, "g_64", print_hash_value);
    transparent_crc(g_71, "g_71", print_hash_value);
    transparent_crc(g_72, "g_72", print_hash_value);
    transparent_crc(g_73, "g_73", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_85[i], "g_85[i]", print_hash_value);

    }
    transparent_crc(g_86, "g_86", print_hash_value);
    transparent_crc(g_88, "g_88", print_hash_value);
    transparent_crc(g_91, "g_91", print_hash_value);
    transparent_crc(g_117, "g_117", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_125[i][j][k].f0, "g_125[i][j][k].f0", print_hash_value);

            }
        }
    }
    transparent_crc(g_147, "g_147", print_hash_value);
    transparent_crc(g_148, "g_148", print_hash_value);
    transparent_crc(g_151, "g_151", print_hash_value);
    transparent_crc(g_162, "g_162", print_hash_value);
    transparent_crc(g_169, "g_169", print_hash_value);
    transparent_crc(g_172.f0, "g_172.f0", print_hash_value);
    transparent_crc(g_172.f1, "g_172.f1", print_hash_value);
    transparent_crc(g_172.f2, "g_172.f2", print_hash_value);
    transparent_crc(g_172.f3, "g_172.f3", print_hash_value);
    transparent_crc(g_172.f4, "g_172.f4", print_hash_value);
    transparent_crc(g_172.f5, "g_172.f5", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
