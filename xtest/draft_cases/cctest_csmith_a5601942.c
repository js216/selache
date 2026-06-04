// SPDX-License-Identifier: MIT
// cctest_csmith_a5601942.c --- cctest case csmith_a5601942 (csmith seed 2774538562)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xa07d4695 */
/* @exp_ticks 0x6f1 */

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

// Options:   -s 2774538562 -o /home/agent1/fast_data/tmp/csmith_gen_5wx5ywu2/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   int16_t  f0;
   const int32_t  f1;
   uint64_t  f2;
   int64_t  f3;
};
#pragma pack(pop)

struct S1 {
   int16_t  f0;
};

#pragma pack(push)
#pragma pack(1)
struct S2 {
   int8_t  f0;
   int8_t  f1;
   uint64_t  f2;
   uint32_t  f3;
   int64_t  f4;
};
#pragma pack(pop)

union U3 {
   int16_t  f0;
   int64_t  f1;
   int32_t  f2;
};


static int32_t g_2 = 0x70A77C87L;
static int32_t g_5[1] = {0x835A23E8L};
static struct S0 g_17 = {-1L,0xFD03B15AL,0xDF0442E11914CC5CLL,0xA3F1540EE1D4595ALL};
static struct S2 g_27 = {1L,-1L,18446744073709551615UL,1UL,1L};
static struct S1 g_36[1] = {{0xDCDEL}};
static uint64_t g_46 = 0xF6804519F073E42CLL;
static int64_t g_48 = 0x469FD68CABD04657LL;
static int32_t g_49 = 0x481FF7B5L;
static uint64_t g_50 = 0xDAE0A7320B692EDFLL;
static int16_t g_54 = 0x451EL;
static uint16_t g_62 = 0x725CL;
static int32_t g_89 = 0x37D68548L;
static int64_t g_127 = (-9L);
static union U3 g_172[4] = {{0xBFB3L},{0xBFB3L},{0xBFB3L},{0xBFB3L}};
static struct S2 g_173 = {0L,0xB6L,18446744073709551615UL,4UL,0x27892DAB10FF70A8LL};



static const uint16_t  func_1(void);
static union U3  func_8(int32_t  p_9);
static struct S2  func_11(struct S0  p_12, int8_t  p_13, const uint32_t  p_14, struct S2  p_15, union U3  p_16);
static int8_t  func_18(uint32_t  p_19, uint32_t  p_20, struct S2  p_21, struct S0  p_22, const struct S0  p_23);




static const uint16_t  func_1(void)
{ 
    uint32_t l_73[1];
    int8_t l_88 = 0xEAL;
    struct S1 l_99 = {7L};
    int32_t l_107 = 0x0B0AC707L;
    int32_t l_137 = (-1L);
    int32_t l_178 = 0x026FCD83L;
    int32_t l_180 = 0L;
    int32_t l_185 = 0xAB87D125L;
    int32_t l_186 = 0x48489ECFL;
    int32_t l_187 = 0xB078A46EL;
    int32_t l_188 = 0xE9E46C90L;
    int32_t l_189 = 0xBAA9240DL;
    int32_t l_190 = 0x2B180339L;
    int i;
    for (i = 0; i < 1; i++)
        l_73[i] = 0xC7DC7579L;
    for (g_2 = 0; (g_2 > 26); ++g_2)
    { 
        uint8_t l_10 = 1UL;
        int32_t l_80 = 7L;
        int32_t l_90 = 1L;
        if (g_2)
        { 
            uint8_t l_61[2];
            int32_t l_78 = 0x0DB06F5CL;
            int i;
            for (i = 0; i < 2; i++)
                l_61[i] = 3UL;
            for (g_5[0] = 0; (g_5[0] != (-3)); --g_5[0])
            { 
                const int32_t l_63 = 0L;
                struct S2 l_64 = {0x4DL,0xB7L,0x21CC8E035E3094FCLL,0xA55566ECL,0xB7CF170C459F779DLL};
                l_64 = ((func_8(l_10) , ((safe_add_func_uint32_t_u_u((safe_mul_func_uint16_t_u_u((g_62 = (safe_div_func_int32_t_s_s((255UL == (func_8(l_61[0]) , g_49)), 0x28F8C844L))), l_61[0])), g_27.f1)) == l_63)) , g_27);
            }
            for (g_27.f4 = 0; (g_27.f4 >= (-3)); --g_27.f4)
            { 
                int16_t l_79 = 1L;
                l_80 = (safe_lshift_func_int8_t_s_u((safe_sub_func_int64_t_s_s(4L, (((l_73[0] <= (l_73[0] != (safe_sub_func_int64_t_s_s((safe_rshift_func_uint16_t_u_u(((((((l_78 = l_61[0]) , l_10) | l_79) && g_54) , 0UL) , l_73[0]), 4)), 1UL)))) , g_17.f0) , l_10))), l_10));
                return g_17.f2;
            }
            if (l_61[0])
                break;
        }
        else
        { 
            l_90 |= ((!(0x8BL & (((g_36[0] , (safe_sub_func_int64_t_s_s((l_80 = (g_89 = (g_49 >= (safe_mul_func_int8_t_s_s(((safe_div_func_uint16_t_u_u((g_49 < 0xBCA1L), l_10)) != l_88), l_80))))), g_2))) <= l_73[0]) , 0x43L))) , g_49);
            g_5[0] ^= (((safe_sub_func_uint8_t_u_u((g_89 & ((((safe_div_func_uint64_t_u_u(l_80, (safe_add_func_int8_t_s_s(0L, (safe_div_func_int64_t_s_s((g_48 ^= (((l_99 , l_73[0]) != 0x90C5DD00L) | 4294967291UL)), g_2)))))) <= 6UL) < 18446744073709551608UL) | (-10L))), l_80)) < 0xF3F9EAB4L) > l_73[0]);
        }
        for (g_17.f2 = 0; (g_17.f2 != 14); g_17.f2 = safe_add_func_int64_t_s_s(g_17.f2, 7))
        { 
            uint32_t l_102[3][3][1] = {{{0x2D794290L},{18446744073709551611UL},{18446744073709551611UL}},{{0x2D794290L},{18446744073709551611UL},{18446744073709551611UL}},{{0x2D794290L},{18446744073709551611UL},{18446744073709551611UL}}};
            int32_t l_138 = 0xC72CAAA7L;
            const uint8_t l_139[1][4][1] = {{{0x56L},{0x56L},{0x56L},{0x56L}}};
            int32_t l_140 = 0xC334F837L;
            int i, j, k;
            if ((l_102[1][1][0] | ((safe_lshift_func_uint16_t_u_u((safe_sub_func_int8_t_s_s((g_27.f0 = 6L), (l_107 = 4L))), (0xABL != g_89))) <= l_102[1][1][0])))
            { 
                uint32_t l_136 = 4294967288UL;
                g_5[0] |= (safe_sub_func_uint32_t_u_u(((safe_sub_func_int16_t_s_s(((l_140 ^= (safe_mul_func_uint16_t_u_u(g_89, ((((safe_unary_minus_func_int64_t_s(((safe_lshift_func_uint16_t_u_s((((((safe_add_func_int16_t_s_s(0x49E2L, (l_138 = (safe_mod_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_s((safe_rshift_func_uint8_t_u_s(((safe_add_func_int64_t_s_s((((g_127 = 0xA3L) & (safe_div_func_uint32_t_u_u((safe_lshift_func_int8_t_s_u((((safe_mod_func_int8_t_s_s((safe_mod_func_uint32_t_u_u(l_136, l_102[2][2][0])), l_136)) <= 0xEE1BL) != l_88), g_27.f1)), 4294967287UL))) && (-1L)), 1L)) , l_137), g_48)), 11)), 4L))))) < l_102[2][0][0]) | g_89) | 0xB6558982L) & g_49), 8)) < g_50))) <= g_27.f0) ^ l_139[0][2][0]) & l_137)))) ^ 0x1009BDDAL), l_73[0])) ^ l_139[0][2][0]), g_17.f1));
                return g_46;
            }
            else
            { 
                int16_t l_143 = 0x9335L;
                l_140 |= (safe_lshift_func_int8_t_s_s(((l_143 >= g_36[0].f0) >= (1UL & (safe_sub_func_uint8_t_u_u((safe_sub_func_uint64_t_u_u(l_90, l_102[1][1][0])), l_73[0])))), 0));
                if (l_143)
                    break;
            }
            l_90 = ((safe_mod_func_uint8_t_u_u(((safe_mod_func_uint32_t_u_u((g_48 | g_49), (safe_div_func_uint64_t_u_u(((safe_add_func_uint64_t_u_u(l_90, (l_80 = (safe_rshift_func_uint16_t_u_u(((l_80 ^ g_27.f2) & l_138), 12))))) | 0UL), 0x5AED9211E9822E91LL)))) > 0xB261L), g_17.f0)) >= g_27.f0);
        }
    }
    for (l_137 = 0; (l_137 <= 0); l_137 += 1)
    { 
        uint32_t l_164 = 0x511BF24CL;
        struct S2 l_171 = {0L,2L,0x9BA2161173E69D14LL,1UL,1L};
        int32_t l_177 = (-6L);
        int32_t l_179 = 9L;
        int32_t l_181 = 0x99948144L;
        int32_t l_182 = 0x1F001D5FL;
        int32_t l_183 = 0x4E822E76L;
        int32_t l_184[5] = {0xE65B2953L,0xE65B2953L,0xE65B2953L,0xE65B2953L,0xE65B2953L};
        uint8_t l_191 = 0x51L;
        const int32_t l_194 = 0L;
        uint32_t l_205[3];
        int i;
        for (i = 0; i < 3; i++)
            l_205[i] = 0UL;
        g_27 = g_27;
        for (l_88 = 0; (l_88 <= 0); l_88 += 1)
        { 
            int16_t l_170[3];
            int32_t l_176[4][1][4] = {{{1L,1L,1L,1L}},{{1L,1L,1L,1L}},{{1L,1L,1L,1L}},{{1L,1L,1L,1L}}};
            int i, j, k;
            for (i = 0; i < 3; i++)
                l_170[i] = 0x27FBL;
            for (g_27.f3 = 0; (g_27.f3 <= 0); g_27.f3 += 1)
            { 
                int i;
                g_173 = func_11(g_17, ((!(safe_rshift_func_int16_t_s_u((+((safe_mod_func_uint16_t_u_u((l_164++), (safe_unary_minus_func_uint8_t_u((safe_add_func_int64_t_s_s((g_5[l_88] || l_99.f0), (g_127 = (((-1L) == g_5[0]) < 1UL)))))))) || l_170[0])), 1))) && g_17.f3), l_170[2], l_171, g_172[2]);
                g_5[l_88] = (safe_add_func_uint64_t_u_u(g_54, g_172[2].f0));
            }
            l_191--;
            return l_194;
        }
        for (l_178 = 0; (l_178 <= 0); l_178 += 1)
        { 
            int64_t l_195[3][4] = {{0x65AAC15ABFE8D434LL,0x65AAC15ABFE8D434LL,0L,0x65AAC15ABFE8D434LL},{0x65AAC15ABFE8D434LL,0x018BE0E5867A26E7LL,0L,0x018BE0E5867A26E7LL},{0L,0x018BE0E5867A26E7LL,0L,0L}};
            int i, j;
            for (l_187 = 0; (l_187 <= 0); l_187 += 1)
            { 
                struct S2 l_208 = {-7L,0L,18446744073709551607UL,3UL,0x60961C7848F6BBE4LL};
                int i;
                g_5[l_178] ^= (0x10L & l_195[1][3]);
                g_5[l_178] = g_5[l_178];
                g_5[0] = ((safe_mul_func_int16_t_s_s((safe_div_func_uint16_t_u_u(((safe_lshift_func_int16_t_s_u(((func_11(g_17, (~(safe_add_func_uint64_t_u_u((5L && l_205[1]), (safe_sub_func_int16_t_s_s(0xE2F3L, l_195[1][1]))))), g_5[l_178], l_208, g_172[1]) , l_208.f4) == (-7L)), g_173.f3)) ^ g_62), l_164)), 65527UL)) , 0x2FAA1E91L);
            }
        }
        for (g_173.f3 = 0; (g_173.f3 <= 0); g_173.f3 += 1)
        { 
            struct S2 l_216[4] = {{0xBAL,0xB2L,0x1666AC21E7AE008CLL,18446744073709551611UL,0L},{0xBAL,0xB2L,0x1666AC21E7AE008CLL,18446744073709551611UL,0L},{0xBAL,0xB2L,0x1666AC21E7AE008CLL,18446744073709551611UL,0L},{0xBAL,0xB2L,0x1666AC21E7AE008CLL,18446744073709551611UL,0L}};
            int32_t l_223 = 0L;
            int i;
            for (l_171.f2 = 0; (l_171.f2 <= 0); l_171.f2 += 1)
            { 
                uint64_t l_213 = 0x9858D2371772FEA1LL;
                struct S2 l_214[5][1] = {{{-1L,0xAEL,0x8503F6EA208960F6LL,0xE080E16AL,0L}},{{0x21L,1L,0xC7F9658A0C0796E7LL,0x4B218C28L,0xC6314671A0E041CELL}},{{-1L,0xAEL,0x8503F6EA208960F6LL,0xE080E16AL,0L}},{{0x21L,1L,0xC7F9658A0C0796E7LL,0x4B218C28L,0xC6314671A0E041CELL}},{{-1L,0xAEL,0x8503F6EA208960F6LL,0xE080E16AL,0L}}};
                union U3 l_215[3] = {{0xF278L},{0xF278L},{0xF278L}};
                int i, j;
                l_216[0] = func_11(g_17, ((safe_rshift_func_uint8_t_u_s(((((((safe_lshift_func_int8_t_s_s(0xA5L, 1)) | (l_205[1] , (4294967295UL >= 1L))) || 1UL) ^ l_205[0]) != l_88) ^ l_189), l_213)) != g_36[0].f0), l_181, l_214[2][0], l_215[0]);
            }
            l_181 = (safe_sub_func_uint32_t_u_u(((0L ^ (0x316CF6D4L ^ (g_36[0].f0 != (safe_mod_func_int8_t_s_s(((l_223 = (safe_mod_func_uint8_t_u_u(0x69L, 1UL))) >= 0x8443L), 1L))))) , l_216[0].f1), g_27.f4));
        }
    }
    return l_190;
}



static union U3  func_8(int32_t  p_9)
{ 
    int8_t l_26[2];
    struct S0 l_28 = {1L,0xF82244F8L,0x3D35555D5DF5B04CLL,-1L};
    int32_t l_34 = 0L;
    union U3 l_35[5] = {{0x240EL},{0x240EL},{0x240EL},{0x240EL},{0x240EL}};
    int i;
    for (i = 0; i < 2; i++)
        l_26[i] = (-10L);
    g_54 |= (func_11(g_17, (l_34 = func_18(g_5[0], (safe_sub_func_int16_t_s_s(0x84CBL, (l_26[1] != 1L))), g_27, l_28, g_17)), p_9, g_27, l_35[2]) , l_28.f0);
    return l_35[2];
}



static struct S2  func_11(struct S0  p_12, int8_t  p_13, const uint32_t  p_14, struct S2  p_15, union U3  p_16)
{ 
    struct S0 l_45 = {7L,3L,0xD44E4153CDCE3FF5LL,0xEDC67586E024B173LL};
    int32_t l_47[2];
    struct S2 l_53 = {3L,-6L,0x6A276D00DAEFF8EELL,6UL,0xDF831B5E352544EELL};
    int i;
    for (i = 0; i < 2; i++)
        l_47[i] = 0L;
    g_36[0] = g_36[0];
    l_47[1] = (safe_mod_func_int8_t_s_s((g_27.f2 == p_12.f3), (((g_36[0].f0 = (((((((safe_sub_func_int64_t_s_s((((safe_rshift_func_uint16_t_u_s((safe_rshift_func_int16_t_s_s((g_17.f0 ^= 0xC160L), ((l_45 , l_45) , 0x2E23L))), 10)) != p_15.f2) == p_15.f1), g_36[0].f0)) ^ l_45.f2) || 0x93878D320CD53B18LL) , l_45.f2) != l_45.f0) == g_36[0].f0) >= 0x7AC1L)) & g_46) & g_27.f2)));
    g_50--;
    return l_53;
}



static int8_t  func_18(uint32_t  p_19, uint32_t  p_20, struct S2  p_21, struct S0  p_22, const struct S0  p_23)
{ 
    struct S2 l_32 = {0x18L,0x96L,0xCAE4674E6A83B1D3LL,0x9D7FCCEAL,0x9F7C1AE2EFAADAD2LL};
    int32_t l_33 = 0x71350D55L;
    l_33 = (~(safe_sub_func_uint64_t_u_u(g_17.f0, (p_21.f1 , ((l_32 , g_27.f1) && g_17.f0)))));
    return g_17.f3;
}





int test_main(void)
{
    int i;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_5[i], "g_5[i]", print_hash_value);

    }
    transparent_crc(g_17.f0, "g_17.f0", print_hash_value);
    transparent_crc(g_17.f1, "g_17.f1", print_hash_value);
    transparent_crc(g_17.f2, "g_17.f2", print_hash_value);
    transparent_crc(g_17.f3, "g_17.f3", print_hash_value);
    transparent_crc(g_27.f0, "g_27.f0", print_hash_value);
    transparent_crc(g_27.f1, "g_27.f1", print_hash_value);
    transparent_crc(g_27.f2, "g_27.f2", print_hash_value);
    transparent_crc(g_27.f3, "g_27.f3", print_hash_value);
    transparent_crc(g_27.f4, "g_27.f4", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_36[i].f0, "g_36[i].f0", print_hash_value);

    }
    transparent_crc(g_46, "g_46", print_hash_value);
    transparent_crc(g_48, "g_48", print_hash_value);
    transparent_crc(g_49, "g_49", print_hash_value);
    transparent_crc(g_50, "g_50", print_hash_value);
    transparent_crc(g_54, "g_54", print_hash_value);
    transparent_crc(g_62, "g_62", print_hash_value);
    transparent_crc(g_89, "g_89", print_hash_value);
    transparent_crc(g_127, "g_127", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_172[i].f0, "g_172[i].f0", print_hash_value);

    }
    transparent_crc(g_173.f0, "g_173.f0", print_hash_value);
    transparent_crc(g_173.f1, "g_173.f1", print_hash_value);
    transparent_crc(g_173.f2, "g_173.f2", print_hash_value);
    transparent_crc(g_173.f3, "g_173.f3", print_hash_value);
    transparent_crc(g_173.f4, "g_173.f4", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
