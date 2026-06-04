// SPDX-License-Identifier: MIT
// cctest_csmith_408867f9.c --- cctest case csmith_408867f9 (csmith seed 1082681337)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x547f0a70 */
/* @exp_ticks 0x2ae6cd */

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

// Options:   -s 1082681337 -o /home/agent1/fast_data/tmp/csmith_gen_g8kpyiqr/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   uint64_t  f0;
   uint32_t  f1;
   uint32_t  f2;
   uint32_t  f3;
   uint32_t  f4;
   uint32_t  f5;
};
#pragma pack(pop)

struct S1 {
   int16_t  f0;
};

#pragma pack(push)
#pragma pack(1)
struct S3 {
   uint16_t  f0;
   uint32_t  f1;
};
#pragma pack(pop)

union U4 {
   const uint64_t  f0;
};

union U5 {
   int16_t  f0;
   int64_t  f1;
   const uint32_t  f2;
};

union U6 {
   uint32_t  f0;
   int16_t  f1;
   const uint32_t  f2;
   struct S3  f3;
};


static int32_t g_2 = 0xDF3D37A5L;
static struct S1 g_5[5][5] = {{{-4L},{-4L},{-4L},{-4L},{-4L}},{{0x10C1L},{0x10C1L},{0x10C1L},{0x10C1L},{0x10C1L}},{{-4L},{-4L},{-4L},{-4L},{-4L}},{{0x10C1L},{0x10C1L},{0x10C1L},{0x10C1L},{0x10C1L}},{{-4L},{-4L},{-4L},{-4L},{-4L}}};
static int32_t g_6 = 0xDB8E9646L;
static int32_t g_7 = 0x5245F5B1L;
static int8_t g_14 = 0xD1L;
static int32_t g_17 = 0x703ACB6DL;
static uint32_t g_19 = 0x737AE9F9L;
static uint64_t g_27 = 0x4F20077FEFB659BALL;
static uint64_t g_48 = 1UL;
static uint32_t g_64 = 0xC202EAB3L;
static uint64_t g_79 = 0xB8ECDE22F50FADE0LL;
static uint32_t g_80[3][3][3] = {{{1UL,0x40BBFB6FL,1UL},{7UL,4294967294UL,4294967294UL},{0xEB7CCD03L,0x40BBFB6FL,0xEB7CCD03L}},{{7UL,7UL,4294967294UL},{1UL,0x40BBFB6FL,1UL},{7UL,4294967294UL,4294967294UL}},{{0xEB7CCD03L,0x40BBFB6FL,0xEB7CCD03L},{7UL,7UL,4294967294UL},{1UL,0x40BBFB6FL,1UL}}};
static uint64_t g_92 = 1UL;
static uint32_t g_95 = 0xC11418CDL;
static union U6 g_105[2][1] = {{{0x9F167E62L}},{{0x9F167E62L}}};
static const union U4 g_113 = {0UL};
static uint64_t g_117 = 5UL;
static int64_t g_129 = 1L;
static uint8_t g_130[4] = {0xA6L,0xA6L,0xA6L,0xA6L};
static struct S3 g_133[2][4][1] = {{{{65535UL,0UL}},{{65535UL,0UL}},{{65535UL,0UL}},{{65535UL,0UL}}},{{{65535UL,0UL}},{{65535UL,0UL}},{{65535UL,0UL}},{{65535UL,0UL}}}};
static int8_t g_152 = 0x37L;
static uint32_t g_153 = 4294967294UL;
static uint64_t g_167 = 0x0A1B7E2076EB19FDLL;
static union U5 g_215 = {0xF9E7L};
static uint8_t g_223 = 0x87L;
static uint8_t g_224 = 255UL;
static uint8_t g_230 = 249UL;
static int16_t g_232 = (-2L);
static uint32_t g_260 = 0xF3676A42L;
static struct S0 g_261[2] = {{18446744073709551606UL,1UL,1UL,18446744073709551608UL,0x5BD06176L,0UL},{18446744073709551606UL,1UL,1UL,18446744073709551608UL,0x5BD06176L,0UL}};



static struct S3  func_1(void);
static int32_t  func_9(uint64_t  p_10);
static uint32_t  func_28(int8_t  p_29, union U6  p_30, int32_t  p_31);
static int32_t  func_34(int64_t  p_35, int8_t  p_36, const uint64_t  p_37, uint16_t  p_38, uint64_t  p_39);




static struct S3  func_1(void)
{ 
    struct S0 l_262 = {0x74AD0AB60F18CD61LL,0UL,0x0200DE27L,0xDF494586L,0x0DDE49BDL,0UL};
    struct S3 l_283 = {0UL,4294967286UL};
    for (g_2 = 1; (g_2 > (-9)); g_2--)
    { 
        int32_t l_250 = 0xBC10CF0FL;
        for (g_6 = 4; (g_6 >= 0); g_6 -= 1)
        { 
            int32_t l_11[1];
            int32_t l_231 = 1L;
            uint16_t l_256 = 0x3258L;
            int i, j;
            for (i = 0; i < 1; i++)
                l_11[i] = 0L;
            for (g_7 = 0; (g_7 <= 4); g_7 += 1)
            { 
                uint16_t l_8[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_8[i] = 0xA116L;
                g_232 = (l_8[1] < (l_231 = func_9(l_11[0])));
                l_250 |= ((1UL > 18446744073709551614UL) > (safe_mul_func_uint16_t_u_u(((~(safe_lshift_func_uint16_t_u_u(65535UL, 15))) ^ ((safe_mul_func_int16_t_s_s((safe_mod_func_int64_t_s_s(((safe_sub_func_int64_t_s_s((safe_div_func_uint64_t_u_u((safe_mod_func_int16_t_s_s(6L, l_8[1])), l_11[0])), g_129)) < l_11[0]), 0xD234C3152C746123LL)), l_11[0])) <= 65532UL)), 0x50AEL)));
                l_231 &= (g_215.f0 != (((+(-1L)) , l_250) || (safe_mod_func_uint8_t_u_u(((safe_mul_func_int8_t_s_s(((((g_105[0][0].f3.f0 = l_250) && 0x185AL) < l_256) ^ 0x3694979DL), 6UL)) > g_167), (-4L)))));
            }
            for (g_215.f1 = 4; (g_215.f1 >= 0); g_215.f1 -= 1)
            { 
                g_260 = (g_7 = (safe_unary_minus_func_int64_t_s((l_231 = (safe_rshift_func_uint16_t_u_u(4UL, 9))))));
                l_262 = g_261[1];
            }
            g_5[g_6][g_6] = g_5[g_6][g_6];
        }
        l_250 = (safe_lshift_func_int16_t_s_s(((l_262.f1 >= (safe_div_func_int64_t_s_s(((safe_add_func_int32_t_s_s((l_250 && (safe_div_func_uint32_t_u_u((safe_rshift_func_int8_t_s_u((~(((safe_lshift_func_uint16_t_u_s(8UL, 11)) & (~((safe_rshift_func_int16_t_s_u((safe_rshift_func_uint16_t_u_u(((!(!(l_250 , l_262.f0))) > (-9L)), 6)), 3)) && l_250))) != l_250)), g_95)), l_250))), 0xCD19120BL)) , 0x53FDA3CCD9C671D1LL), g_261[1].f4))) ^ g_19), 15));
    }
    return l_283;
}



static int32_t  func_9(uint64_t  p_10)
{ 
    int32_t l_15 = 0xD77CCCAEL;
    int32_t l_16 = (-7L);
    int32_t l_18 = 1L;
    union U4 l_24 = {0x3BD791F9E6A0122DLL};
    union U6 l_33 = {0x7D757520L};
    union U5 l_164[5] = {{1L},{1L},{1L},{1L},{1L}};
    uint16_t l_168[4][2];
    struct S3 l_179[1] = {{0x1FB4L,4294967295UL}};
    int16_t l_222 = 0L;
    int i, j;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 2; j++)
            l_168[i][j] = 0x0C8DL;
    }
lbl_210:
    if ((p_10 <= (safe_lshift_func_int8_t_s_u(((g_19++) == ((safe_lshift_func_int8_t_s_u(((g_14 && (l_24 , ((l_16 |= (g_27 = (safe_sub_func_int8_t_s_s(p_10, p_10)))) || g_7))) && g_6), g_17)) | g_6)), p_10))))
    { 
        int64_t l_32[5][2] = {{7L,7L},{7L,7L},{7L,7L},{7L,7L},{7L,7L}};
        int i, j;
        l_18 = (1L && ((func_28(l_32[3][0], l_33, func_34(((safe_sub_func_int16_t_s_s(((~(safe_sub_func_int16_t_s_s(0x20BAL, g_19))) , (-7L)), g_27)) ^ g_14), p_10, p_10, p_10, p_10)) , 0x0BDFC586C6A208CALL) >= 0xD9FAADC8FC35A002LL));
        for (g_48 = (-19); (g_48 >= 15); g_48 = safe_add_func_uint16_t_u_u(g_48, 7))
        { 
            uint32_t l_138[3][4] = {{0x48BFE3BBL,4294967291UL,0x48BFE3BBL,0x48BFE3BBL},{4294967291UL,4294967291UL,0xDBA41957L,4294967291UL},{4294967291UL,0x48BFE3BBL,0x48BFE3BBL,4294967291UL}};
            int i, j;
            for (g_95 = 17; (g_95 < 43); g_95++)
            { 
                ++g_130[3];
                g_105[0][0].f3 = g_133[1][0][0];
            }
            for (l_18 = 7; (l_18 > (-9)); l_18--)
            { 
                uint16_t l_145 = 0xA375L;
                l_138[0][3] = (safe_add_func_int8_t_s_s(g_27, 0x8DL));
                g_152 = ((safe_rshift_func_uint16_t_u_u((safe_sub_func_uint64_t_u_u(7UL, (safe_rshift_func_int8_t_s_u(l_145, (((((safe_rshift_func_uint8_t_u_u((safe_div_func_int16_t_s_s(g_64, (p_10 ^ g_133[1][0][0].f1))), l_33.f2)) & l_18) | 0UL) != 0x43A8C46F0373520ELL) != 1UL))))), 3)) == l_138[0][3]);
                return l_32[3][0];
            }
            --g_153;
        }
    }
    else
    { 
        uint16_t l_156 = 0x6D0CL;
        l_156--;
        g_167 &= (l_16 = (~(((safe_sub_func_uint8_t_u_u((--g_130[3]), (l_164[3] , (safe_sub_func_int64_t_s_s((0L >= p_10), ((g_133[1][0][0].f0 = g_129) >= 0x4284L)))))) , p_10) | l_156)));
        ++l_168[3][0];
    }
    l_18 = (safe_mod_func_int64_t_s_s((((safe_div_func_int32_t_s_s((((safe_rshift_func_int8_t_s_u((safe_mul_func_int8_t_s_s(0x37L, (65526UL & 65532UL))), (g_130[3] = (l_179[0] , l_24.f0)))) & g_27) <= l_16), l_24.f0)) ^ l_33.f1) >= l_179[0].f0), g_95));
    if (((safe_rshift_func_uint16_t_u_u(l_168[3][0], (((safe_lshift_func_int8_t_s_s((l_164[3].f0 && (((safe_mul_func_int16_t_s_s((((g_19 | l_33.f1) == g_129) | l_33.f2), (-1L))) > g_105[0][0].f2) <= p_10)), g_105[0][0].f1)) && 0xA1L) > p_10))) != g_133[1][0][0].f1))
    { 
        int8_t l_199[3];
        struct S3 l_200 = {0x65C5L,0UL};
        int i;
        for (i = 0; i < 3; i++)
            l_199[i] = 0L;
        l_15 = (safe_sub_func_uint16_t_u_u(((!g_153) != (safe_mul_func_int8_t_s_s((((((((g_133[1][0][0].f0++) > (safe_mod_func_int16_t_s_s((+(1UL ^ (((+p_10) ^ (safe_mul_func_int8_t_s_s(l_18, g_79))) & p_10))), (-1L)))) || g_95) != 18446744073709551615UL) <= g_117) != g_130[3]) && l_199[0]), 1L))), 0xD43BL));
        l_33.f3 = l_200;
        return l_200.f0;
    }
    else
    { 
        int64_t l_206 = 0xBACBEA5583D22D4ELL;
        int32_t l_207[2];
        uint8_t l_229 = 0xC8L;
        int i;
        for (i = 0; i < 2; i++)
            l_207[i] = 0x188D16BFL;
        if ((((safe_mod_func_uint32_t_u_u(((((l_18 = ((safe_lshift_func_int8_t_s_s(l_164[3].f0, l_24.f0)) >= ((0x99L & (l_207[0] = (((l_206 |= (+p_10)) < 65535UL) <= p_10))) ^ 0L))) , 1UL) || g_79) | 0xB356D7480F3EF49ELL), 0xAC1B64A9L)) || g_7) == 0L))
        { 
            for (g_27 = 24; (g_27 == 1); --g_27)
            { 
                if (g_48)
                    goto lbl_210;
                return p_10;
            }
        }
        else
        { 
            uint8_t l_221 = 0x7BL;
            g_223 &= (~(((safe_add_func_int32_t_s_s((((l_207[0] &= 0x5ED0L) >= (~(g_130[2] = p_10))) , (g_215 , (l_222 = (((!(g_133[1][0][0].f0--)) > (safe_sub_func_int16_t_s_s(1L, p_10))) >= l_221)))), p_10)) < l_221) && p_10));
        }
        g_224++;
        g_230 |= (g_152 <= ((((((safe_mul_func_uint16_t_u_u(0UL, g_130[3])) || ((0xE9DECBAAL > l_33.f1) != g_105[0][0].f1)) , g_79) >= l_229) ^ p_10) && l_222));
    }
    return p_10;
}



static uint32_t  func_28(int8_t  p_29, union U6  p_30, int32_t  p_31)
{ 
    struct S1 l_72 = {0L};
    int32_t l_86 = 0L;
    int32_t l_89 = 0x0857B263L;
    int32_t l_91 = (-10L);
    struct S3 l_107[4] = {{0x072EL,0x8FFC0A99L},{0x072EL,0x8FFC0A99L},{0x072EL,0x8FFC0A99L},{0x072EL,0x8FFC0A99L}};
    struct S3 l_108 = {0xF1C2L,1UL};
    int i;
    for (g_17 = 0; (g_17 > (-3)); g_17--)
    { 
        struct S1 l_67 = {5L};
        int32_t l_85[5][2];
        struct S3 l_106[4] = {{0x0AD7L,9UL},{0x0AD7L,9UL},{0x0AD7L,9UL},{0x0AD7L,9UL}};
        int32_t l_124[2];
        int i, j;
        for (i = 0; i < 5; i++)
        {
            for (j = 0; j < 2; j++)
                l_85[i][j] = 0xCDF3DC49L;
        }
        for (i = 0; i < 2; i++)
            l_124[i] = (-1L);
        l_67 = l_67;
        if ((safe_add_func_int16_t_s_s(0L, ((g_79 = (safe_lshift_func_int16_t_s_s((((l_72 , (g_14 , (((safe_rshift_func_int16_t_s_s((safe_sub_func_uint32_t_u_u(((safe_add_func_int64_t_s_s((1L == l_67.f0), p_29)) >= l_72.f0), (-1L))), p_29)) < 0x9D53C4A2L) & 0xA6DCL))) , g_19) || p_29), l_67.f0))) == g_27))))
        { 
            int32_t l_87 = 0L;
            g_80[2][0][2] |= l_67.f0;
            for (g_48 = 10; (g_48 == 25); g_48 = safe_add_func_int32_t_s_s(g_48, 6))
            { 
                return g_7;
            }
            for (l_72.f0 = 4; (l_72.f0 < 13); l_72.f0 = safe_add_func_int64_t_s_s(l_72.f0, 1))
            { 
                int8_t l_88 = 0x85L;
                int32_t l_90[5] = {0x88D378B3L,0x88D378B3L,0x88D378B3L,0x88D378B3L,0x88D378B3L};
                int i;
                l_85[1][1] |= (g_27 <= p_30.f2);
                --g_92;
                g_95++;
            }
        }
        else
        { 
            uint8_t l_98 = 4UL;
            int32_t l_101 = 5L;
            for (p_29 = 0; (p_29 <= 4); p_29 += 1)
            { 
                uint16_t l_102 = 0x03DCL;
                l_98++;
                l_102--;
            }
            l_108 = (g_105[0][0].f3 = (l_107[1] = (g_105[0][0] , l_106[1])));
            for (g_64 = (-29); (g_64 != 8); g_64++)
            { 
                g_117 &= (safe_mul_func_int8_t_s_s(((g_7 < (g_113 , (((safe_sub_func_int8_t_s_s(l_98, ((p_30.f3.f1 = (~((p_30.f1 , p_30.f1) , l_86))) , p_30.f2))) , g_105[0][0].f1) >= 7UL))) >= l_108.f0), l_98));
                l_91 = ((((((g_105[0][0].f3.f0 = ((safe_div_func_int16_t_s_s(((-2L) >= ((((safe_lshift_func_uint8_t_u_u(0x13L, (safe_rshift_func_uint8_t_u_u(l_108.f1, (((g_117 != p_31) < g_105[0][0].f0) , 0x9BL))))) , g_113.f0) ^ l_108.f0) ^ 1L)), g_92)) < l_107[1].f0)) ^ p_31) == p_30.f0) == 0xB271L) < (-4L)) < p_29);
                l_89 = l_124[0];
            }
        }
    }
    return g_105[0][0].f0;
}



static int32_t  func_34(int64_t  p_35, int8_t  p_36, const uint64_t  p_37, uint16_t  p_38, uint64_t  p_39)
{ 
    int8_t l_47 = 1L;
    uint16_t l_55 = 0UL;
    int32_t l_56 = 0xE519C81BL;
    int32_t l_63[1];
    int i;
    for (i = 0; i < 1; i++)
        l_63[i] = 0x03003393L;
    l_56 |= (safe_add_func_int64_t_s_s(((g_48 = l_47) != (p_38 = (safe_div_func_int64_t_s_s(g_2, (safe_lshift_func_uint8_t_u_u((safe_mod_func_int8_t_s_s(((2L >= l_55) >= g_14), 0x78L)), 3)))))), l_47));
    g_64 = (6UL | (l_63[0] |= ((safe_sub_func_int8_t_s_s(1L, (safe_div_func_int8_t_s_s(((l_56 = g_48) == (safe_sub_func_uint8_t_u_u(((p_36 == p_39) > 0xA391L), p_38))), p_38)))) && p_36)));
    return l_55;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_5[i][j].f0, "g_5[i][j].f0", print_hash_value);

        }
    }
    transparent_crc(g_6, "g_6", print_hash_value);
    transparent_crc(g_7, "g_7", print_hash_value);
    transparent_crc(g_14, "g_14", print_hash_value);
    transparent_crc(g_17, "g_17", print_hash_value);
    transparent_crc(g_19, "g_19", print_hash_value);
    transparent_crc(g_27, "g_27", print_hash_value);
    transparent_crc(g_48, "g_48", print_hash_value);
    transparent_crc(g_64, "g_64", print_hash_value);
    transparent_crc(g_79, "g_79", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_80[i][j][k], "g_80[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_92, "g_92", print_hash_value);
    transparent_crc(g_95, "g_95", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_105[i][j].f0, "g_105[i][j].f0", print_hash_value);
            transparent_crc(g_105[i][j].f1, "g_105[i][j].f1", print_hash_value);
            transparent_crc(g_105[i][j].f2, "g_105[i][j].f2", print_hash_value);

        }
    }
    transparent_crc(g_113.f0, "g_113.f0", print_hash_value);
    transparent_crc(g_117, "g_117", print_hash_value);
    transparent_crc(g_129, "g_129", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_130[i], "g_130[i]", print_hash_value);

    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_133[i][j][k].f0, "g_133[i][j][k].f0", print_hash_value);
                transparent_crc(g_133[i][j][k].f1, "g_133[i][j][k].f1", print_hash_value);

            }
        }
    }
    transparent_crc(g_152, "g_152", print_hash_value);
    transparent_crc(g_153, "g_153", print_hash_value);
    transparent_crc(g_167, "g_167", print_hash_value);
    transparent_crc(g_215.f0, "g_215.f0", print_hash_value);
    transparent_crc(g_223, "g_223", print_hash_value);
    transparent_crc(g_224, "g_224", print_hash_value);
    transparent_crc(g_230, "g_230", print_hash_value);
    transparent_crc(g_232, "g_232", print_hash_value);
    transparent_crc(g_260, "g_260", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_261[i].f0, "g_261[i].f0", print_hash_value);
        transparent_crc(g_261[i].f1, "g_261[i].f1", print_hash_value);
        transparent_crc(g_261[i].f2, "g_261[i].f2", print_hash_value);
        transparent_crc(g_261[i].f3, "g_261[i].f3", print_hash_value);
        transparent_crc(g_261[i].f4, "g_261[i].f4", print_hash_value);
        transparent_crc(g_261[i].f5, "g_261[i].f5", print_hash_value);

    }
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
