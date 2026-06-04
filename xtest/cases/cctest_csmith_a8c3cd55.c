// SPDX-License-Identifier: MIT
// cctest_csmith_a8c3cd55.c --- cctest case csmith_a8c3cd55 (csmith seed 2831404373)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x4eb7f643 */
/* @exp_ticks 0x1f9e */

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

// Options:   -s 2831404373 -o /home/agent1/fast_data/tmp/csmith_gen_l93cxjs6/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   const int8_t  f0;
   uint8_t  f1;
   const uint64_t  f2;
   uint64_t  f3;
};
#pragma pack(pop)

struct S1 {
   struct S0  f0;
   uint32_t  f1;
   uint32_t  f2;
   int32_t  f3;
   int64_t  f4;
};

#pragma pack(push)
#pragma pack(1)
struct S2 {
   uint8_t  f0;
   int32_t  f1;
   int32_t  f2;
   int32_t  f3;
};
#pragma pack(pop)

#pragma pack(push)
#pragma pack(1)
struct S3 {
   uint8_t  f0;
   uint32_t  f1;
};
#pragma pack(pop)

#pragma pack(push)
#pragma pack(1)
struct S4 {
   const int64_t  f0;
   const int32_t  f1;
   struct S2  f2;
   uint64_t  f3;
   const uint8_t  f4;
   const uint16_t  f5;
};
#pragma pack(pop)

#pragma pack(push)
#pragma pack(1)
struct S5 {
   int16_t  f0;
   uint32_t  f1;
   int32_t  f2;
};
#pragma pack(pop)

struct S6 {
   uint8_t  f0;
   struct S3  f1;
   uint32_t  f2;
   int16_t  f3;
   uint64_t  f4;
};

#pragma pack(push)
#pragma pack(1)
struct S7 {
   struct S4  f0;
   struct S0  f1;
   int8_t  f2;
};
#pragma pack(pop)

struct S8 {
   uint8_t  f0;
};

#pragma pack(push)
#pragma pack(1)
struct S10 {
   struct S0  f0;
};
#pragma pack(pop)

struct S12 {
   uint8_t  f0;
};

struct S13 {
   uint16_t  f0;
};

struct S14 {
   const struct S12  f0;
   uint16_t  f1;
   struct S13  f2;
   const uint64_t  f3;
   const uint32_t  f4;
};

union U15 {
   int64_t  f0;
   const int32_t  f1;
   const int32_t  f2;
   int32_t  f3;
};

union U16 {
   uint16_t  f0;
};

union U17 {
   uint16_t  f0;
   struct S10  f1;
};


static struct S1 g_17 = {{0xDCL,249UL,0xFAEF1792F5726B06LL,0x74F207E8793EB104LL},4294967295UL,0x6833E1ABL,0L,0xC011945B4E60D2E6LL};
static uint32_t g_19 = 1UL;
static struct S7 g_26 = {{0L,-4L,{0x2BL,0L,1L,0L},7UL,251UL,0x95A5L},{0L,1UL,0x8EB2634890B8A2E7LL,0x99AE1959CD49D549LL},0xCFL};
static uint32_t g_30 = 1UL;
static uint32_t g_32 = 5UL;
static union U16 g_33 = {0x296DL};
static struct S10 g_34[1] = {{{0xEDL,0x4CL,0xD5A68F7E2F801B02LL,0xB1A94CD5359122B3LL}}};
static struct S13 g_71 = {1UL};
static uint32_t g_96[3] = {0xCB312F1BL,0xCB312F1BL,0xCB312F1BL};
static int8_t g_106[3][1] = {{0x0EL},{0x0EL},{0x0EL}};
static int32_t g_125 = 0L;
static uint32_t g_149 = 0x1D77E6F0L;
static int64_t g_174 = 1L;
static int16_t g_175[3] = {1L,1L,1L};
static uint16_t g_176 = 0UL;
static struct S1 g_189 = {{0xA5L,1UL,0x5E51F4D32C972F05LL,0UL},0x17A761DCL,0x2FFA057DL,0xD6297384L,0x55E0BBD19619D596LL};
static struct S5 g_190[1] = {{1L,0x43C1BD20L,5L}};
static struct S8 g_198 = {0UL};
static struct S3 g_216[4] = {{0x67L,0xC453E170L},{0x67L,0xC453E170L},{0x67L,0xC453E170L},{0x67L,0xC453E170L}};
static int32_t g_259 = 0L;
static union U17 g_269 = {0x73D8L};
static int8_t g_303 = 0x98L;
static uint32_t g_305 = 0x7987FC7DL;
static int32_t g_311 = (-10L);
static int8_t g_312 = 0x2CL;
static int32_t g_314 = 0x856F5013L;
static uint32_t g_315[3] = {0x0C6C1C09L,0x0C6C1C09L,0x0C6C1C09L};
static int16_t g_336 = 0x37C2L;
static int32_t g_337 = 0x5BCDC44BL;
static union U15 g_341 = {0xC2F740028899DD60LL};
static uint8_t g_352 = 0x2CL;
static uint16_t g_385 = 0x7332L;
static struct S14 g_397[1][5][5] = {{{{{0UL},0xEF87L,{1UL},0x3267B2CED66CE1ADLL,4294967295UL},{{0xB8L},0x7D51L,{0xD0DBL},0x2E8EC5FE3E3D8750LL,8UL},{{4UL},65530UL,{0xC262L},0x250C0B7CC7ADC255LL,0x1383AA91L},{{0x22L},0x20D0L,{0xC911L},0x4A8F66EF92D749A8LL,4294967293UL},{{4UL},65530UL,{0xC262L},0x250C0B7CC7ADC255LL,0x1383AA91L}},{{{4UL},65530UL,{0xC262L},0x250C0B7CC7ADC255LL,0x1383AA91L},{{4UL},65530UL,{0xC262L},0x250C0B7CC7ADC255LL,0x1383AA91L},{{251UL},65530UL,{65535UL},0UL,0x61BB64D7L},{{0x22L},0x20D0L,{0xC911L},0x4A8F66EF92D749A8LL,4294967293UL},{{0xBAL},0x0519L,{0UL},6UL,0x0B66553EL}},{{{0xB8L},0x7D51L,{0xD0DBL},0x2E8EC5FE3E3D8750LL,8UL},{{0UL},0xEF87L,{1UL},0x3267B2CED66CE1ADLL,4294967295UL},{{0UL},0xEF87L,{1UL},0x3267B2CED66CE1ADLL,4294967295UL},{{0xB8L},0x7D51L,{0xD0DBL},0x2E8EC5FE3E3D8750LL,8UL},{{4UL},65530UL,{0xC262L},0x250C0B7CC7ADC255LL,0x1383AA91L}},{{{0xB8L},0x7D51L,{0xD0DBL},0x2E8EC5FE3E3D8750LL,8UL},{{0x22L},0x20D0L,{0xC911L},0x4A8F66EF92D749A8LL,4294967293UL},{{1UL},0x31F7L,{5UL},0x7A0182D448520B06LL,0x12D0AE6AL},{{1UL},0x31F7L,{5UL},0x7A0182D448520B06LL,0x12D0AE6AL},{{0x22L},0x20D0L,{0xC911L},0x4A8F66EF92D749A8LL,4294967293UL}},{{{4UL},65530UL,{0xC262L},0x250C0B7CC7ADC255LL,0x1383AA91L},{{0UL},0xEF87L,{1UL},0x3267B2CED66CE1ADLL,4294967295UL},{{1UL},0x31F7L,{5UL},0x7A0182D448520B06LL,0x12D0AE6AL},{{251UL},65530UL,{65535UL},0UL,0x61BB64D7L},{{251UL},65530UL,{65535UL},0UL,0x61BB64D7L}}}};



static struct S6  func_1(void);
static int64_t  func_2(union U16  p_3, struct S1  p_4, struct S5  p_5);
static union U16  func_6(struct S4  p_7, union U16  p_8, struct S10  p_9, int8_t  p_10, struct S8  p_11);
static struct S4  func_12(struct S1  p_13, struct S1  p_14, int8_t  p_15, int16_t  p_16);




static struct S6  func_1(void)
{ 
    struct S1 l_18 = {{0xF1L,3UL,0UL,0x16A8E8C0996BD0C7LL},0UL,0UL,0xEBDC1AABL,0x7745DDB3F0F592B0LL};
    struct S8 l_35 = {1UL};
    uint32_t l_300 = 0x4B670619L;
    int32_t l_301 = (-1L);
    int32_t l_309 = (-2L);
    int32_t l_310 = 0x95623D9EL;
    struct S10 l_348 = {{0x1FL,0x78L,18446744073709551612UL,18446744073709551608UL}};
    struct S3 l_359 = {0xE0L,0xC4E1B6C5L};
    const uint32_t l_366 = 0xB313F41BL;
    int32_t l_383 = 1L;
    int32_t l_413 = (-1L);
    int32_t l_414 = 8L;
    int32_t l_415 = 0x07258004L;
    int32_t l_416[1][1][5];
    uint16_t l_417 = 3UL;
    struct S6 l_420 = {1UL,{0x95L,18446744073709551608UL},0x153BA334L,0x672FL,0xD1F364D628F1B933LL};
    int i, j, k;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 5; k++)
                l_416[i][j][k] = 0L;
        }
    }
    g_259 ^= (func_2(func_6(func_12(g_17, l_18, g_17.f4, (g_19 = g_17.f0.f2)), g_33, g_34[0], g_26.f0.f1, l_35), g_189, g_190[0]) & 0L);
    if ((((g_17.f4 = (safe_div_func_int32_t_s_s((g_189.f4 == (g_33 , ((safe_rshift_func_int16_t_s_s(l_18.f0.f1, 9)) | ((safe_div_func_int16_t_s_s((((g_26.f0.f5 | g_26.f0.f4) | l_35.f0) < l_18.f3), g_174)) < l_18.f0.f1)))), l_18.f4))) , l_18.f0.f0) == l_18.f0.f3))
    { 
        int32_t l_272 = (-1L);
        int32_t l_274 = 0x8B1C7C94L;
        int32_t l_304 = 0x74E24A5DL;
        struct S8 l_334 = {0x77L};
        if (((!((g_26 , (safe_mod_func_int16_t_s_s((g_269 , ((safe_sub_func_int8_t_s_s(l_272, g_34[0].f0.f0)) >= 6L)), l_18.f0.f3))) , 0xB549L)) ^ 0UL))
        { 
            struct S6 l_273[2] = {{6UL,{252UL,0x69F1D021L},4294967287UL,0x3FAEL,18446744073709551610UL},{6UL,{252UL,0x69F1D021L},4294967287UL,0x3FAEL,18446744073709551610UL}};
            int i;
            return l_273[0];
        }
        else
        { 
            uint32_t l_292 = 18446744073709551610UL;
            int32_t l_302 = 0L;
            int32_t l_313 = 2L;
            struct S3 l_328 = {1UL,18446744073709551606UL};
            if (l_274)
            { 
                union U17 l_279 = {1UL};
                g_259 ^= (safe_div_func_int32_t_s_s(g_198.f0, g_189.f0.f3));
                g_125 = (((g_174 > (safe_add_func_int8_t_s_s(((l_279 , g_71) , (safe_mod_func_int8_t_s_s((safe_rshift_func_uint16_t_u_s(g_259, 14)), l_279.f0))), (-1L)))) & 18446744073709551614UL) > (-8L));
                g_26.f0.f2.f2 = (((4294967286UL != (l_274 |= (g_269 , (safe_mul_func_uint8_t_u_u((0L <= ((safe_mod_func_int64_t_s_s((safe_unary_minus_func_uint32_t_u(((+(safe_mod_func_int16_t_s_s(g_190[0].f0, 0x1C97L))) < l_292))), 0x044C8E39011DAF7CLL)) < g_17.f2)), 0xCAL))))) ^ 4294967288UL) & g_189.f0.f0);
            }
            else
            { 
                uint32_t l_293 = 4294967291UL;
                l_293 |= g_17.f2;
                g_26.f0.f2.f3 &= ((l_292 <= (((g_26.f1.f0 == (g_106[0][0] &= (((g_174 , ((safe_add_func_uint16_t_u_u((safe_div_func_int64_t_s_s(0xF52D78BA9CD08036LL, 1L)), 0x684FL)) ^ 0UL)) && 1UL) <= g_17.f1))) >= l_300) < 0UL)) && 0xA9552559L);
                l_301 = l_35.f0;
            }
            if (l_18.f0.f3)
            { 
                ++g_305;
                if (g_189.f0.f2)
                    goto lbl_308;
            }
            else
            { 
lbl_308:
                l_301 = 0L;
                g_315[0]--;
            }
            for (g_198.f0 = (-18); (g_198.f0 == 30); g_198.f0 = safe_add_func_int64_t_s_s(g_198.f0, 1))
            { 
                uint16_t l_329 = 0xA7FEL;
                l_329 = ((safe_add_func_int64_t_s_s((safe_mul_func_uint16_t_u_u((0x5AL | 0x0FL), l_18.f1)), (l_302 = (safe_add_func_int16_t_s_s(((l_328 = (((safe_rshift_func_int8_t_s_s((-1L), 1)) != 0xEBE1E89DL) , g_216[3])) , l_274), 0xAD55L))))) & 0x04539A42L);
                l_302 = ((((g_216[3].f0 &= 0x54L) > (0xC331L ^ (l_313 | ((safe_mod_func_int64_t_s_s(((safe_rshift_func_uint16_t_u_s(l_300, l_18.f3)) && l_304), l_313)) != g_26.f0.f5)))) && g_34[0].f0.f1) == g_26.f0.f2.f2);
                g_125 &= (g_26.f0.f2 , 6L);
            }
        }
        l_35 = l_334;
    }
    else
    { 
        int64_t l_335 = 1L;
        uint32_t l_338[5];
        struct S4 l_346 = {1L,0x79485C10L,{9UL,0L,0x6FA893C5L,0x93FFD582L},18446744073709551615UL,0xC0L,0UL};
        union U16 l_347[5][3][1] = {{{{0UL}},{{0UL}},{{3UL}}},{{{3UL}},{{0UL}},{{1UL}}},{{{0UL}},{{3UL}},{{3UL}}},{{{0UL}},{{1UL}},{{0UL}}},{{{3UL}},{{3UL}},{{0UL}}}};
        struct S6 l_353[3][5] = {{{247UL,{1UL,18446744073709551615UL},1UL,6L,0UL},{0x8CL,{0xFBL,0x19B11235L},4294967286UL,0xF5E0L,1UL},{247UL,{1UL,18446744073709551615UL},1UL,6L,0UL},{247UL,{1UL,18446744073709551615UL},1UL,6L,0UL},{0x8CL,{0xFBL,0x19B11235L},4294967286UL,0xF5E0L,1UL}},{{0x8CL,{0xFBL,0x19B11235L},4294967286UL,0xF5E0L,1UL},{247UL,{1UL,18446744073709551615UL},1UL,6L,0UL},{247UL,{1UL,18446744073709551615UL},1UL,6L,0UL},{0x8CL,{0xFBL,0x19B11235L},4294967286UL,0xF5E0L,1UL},{247UL,{1UL,18446744073709551615UL},1UL,6L,0UL}},{{0x8CL,{0xFBL,0x19B11235L},4294967286UL,0xF5E0L,1UL},{0x8CL,{0xFBL,0x19B11235L},4294967286UL,0xF5E0L,1UL},{1UL,{0xA9L,0xBF1562FCL},4294967295UL,0L,0x62B476A0469A3388LL},{0x8CL,{0xFBL,0x19B11235L},4294967286UL,0xF5E0L,1UL},{0x8CL,{0xFBL,0x19B11235L},4294967286UL,0xF5E0L,1UL}}};
        struct S5 l_354 = {0x3C3BL,0x94DDF7CEL,0x966006FFL};
        uint64_t l_373 = 18446744073709551615UL;
        int32_t l_380[3][2];
        int32_t l_411 = 4L;
        int i, j, k;
        for (i = 0; i < 5; i++)
            l_338[i] = 0xA25DFF6FL;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 2; j++)
                l_380[i][j] = 0xFDD5A355L;
        }
        --l_338[1];
        if ((g_341 , l_338[1]))
        { 
            uint32_t l_374 = 0x97C9DD1EL;
            for (l_35.f0 = 0; (l_35.f0 > 26); l_35.f0++)
            { 
                g_352 = (g_341.f3 = ((safe_div_func_int8_t_s_s(((func_6(l_346, l_347[1][2][0], l_348, (((safe_mul_func_int8_t_s_s((~0x20136B555794F23ALL), g_189.f0.f0)) , g_26.f0.f2.f1) & l_346.f2.f0), g_198) , 8L) < l_18.f0.f3), g_190[0].f0)) >= g_26.f0.f1));
                if (g_26.f0.f2.f0)
                    goto lbl_355;
                return l_353[0][1];
            }
lbl_355:
            l_354 = g_190[0];
            if ((0L == ((g_303 == l_346.f0) == (-7L))))
            { 
                const struct S3 l_358 = {0xA7L,0xBBA21B07L};
                int32_t l_375 = (-3L);
                l_359 = l_358;
                l_346.f2.f3 &= ((safe_rshift_func_uint8_t_u_u((safe_sub_func_int8_t_s_s(g_26.f0.f5, (safe_div_func_int32_t_s_s(l_366, 0xC872CCCBL)))), (safe_mod_func_int32_t_s_s(g_269.f0, 4294967291UL)))) && g_352);
                l_346.f2.f2 = (l_375 = (g_259 ^= ((g_71.f0 = g_190[0].f1) & ((safe_lshift_func_uint16_t_u_u(((((safe_div_func_int8_t_s_s(g_125, g_26.f1.f3)) & l_353[0][1].f2) <= g_26.f1.f2) > l_373), l_374)) ^ g_189.f0.f1))));
            }
            else
            { 
                uint32_t l_376 = 4294967288UL;
                if (g_26.f0.f1)
                    goto lbl_355;
                ++l_376;
            }
        }
        else
        { 
            int32_t l_381 = 3L;
            if ((l_359.f1 || g_17.f0.f3))
            { 
                int64_t l_379 = 0x52823067E3487615LL;
                int8_t l_382[3];
                int32_t l_384 = 0xC29A8622L;
                int i;
                for (i = 0; i < 3; i++)
                    l_382[i] = 0L;
                g_311 = l_346.f2.f1;
                g_26.f0.f2.f3 ^= g_26.f1.f1;
                --g_385;
            }
            else
            { 
                int16_t l_401 = (-1L);
                l_383 = g_26.f1.f0;
                g_26.f0.f2.f2 = ((0xB370E800A0C4BEEALL != ((safe_add_func_int64_t_s_s((safe_rshift_func_int16_t_s_s((!(safe_add_func_uint8_t_u_u((safe_mod_func_uint64_t_u_u((g_397[0][1][2] , (((g_190[0].f0 = ((!(safe_add_func_uint32_t_u_u(g_397[0][1][2].f1, 0L))) >= l_401)) || 0x632BL) != l_401)), l_381)), 0x2AL))), 13)), g_106[0][0])) > 0x008EL)) != 0L);
            }
        }
        for (g_341.f3 = (-26); (g_341.f3 <= (-27)); g_341.f3 = safe_sub_func_uint8_t_u_u(g_341.f3, 5))
        { 
            uint16_t l_404[1][4] = {{0x5479L,0x5479L,0x5479L,0x5479L}};
            int32_t l_412[3][3][3] = {{{(-6L),0xF970DCF1L,(-4L)},{0xD9717760L,0xD9717760L,0xD7ABAE8BL},{(-6L),0xF970DCF1L,(-4L)}},{{0xD9717760L,0xD9717760L,0xD7ABAE8BL},{(-6L),0xF970DCF1L,(-4L)},{0xD9717760L,0xD9717760L,0xD7ABAE8BL}},{{(-6L),0xF970DCF1L,(-4L)},{0xD9717760L,0xD9717760L,0xD7ABAE8BL},{(-6L),0xF970DCF1L,(-4L)}}};
            int i, j, k;
            l_404[0][3]++;
            l_412[1][1][1] = (safe_rshift_func_uint16_t_u_s(0UL, (safe_mul_func_int16_t_s_s((l_411 = 1L), l_18.f0.f0))));
            return l_353[2][1];
        }
    }
    l_417--;
    return l_420;
}



static int64_t  func_2(union U16  p_3, struct S1  p_4, struct S5  p_5)
{ 
    const int32_t l_195 = (-2L);
    struct S8 l_199 = {251UL};
    uint32_t l_231[5][4][3] = {{{0x37019865L,18446744073709551610UL,0x1D8A4D54L},{0UL,0UL,0x1D8A4D54L},{18446744073709551610UL,0x37019865L,0x1D8A4D54L},{0x37019865L,18446744073709551610UL,0x1D8A4D54L}},{{0UL,0UL,0x1D8A4D54L},{18446744073709551610UL,0x37019865L,0x1D8A4D54L},{0x37019865L,18446744073709551610UL,0x1D8A4D54L},{0UL,0UL,0x1D8A4D54L}},{{18446744073709551610UL,0x37019865L,0x1D8A4D54L},{0x37019865L,18446744073709551610UL,0x1D8A4D54L},{0UL,0UL,0x1D8A4D54L},{18446744073709551610UL,0x37019865L,0x1D8A4D54L}},{{0x37019865L,18446744073709551610UL,0x1D8A4D54L},{0UL,0UL,0x1D8A4D54L},{18446744073709551610UL,0x37019865L,0x1D8A4D54L},{0x37019865L,18446744073709551610UL,0x1D8A4D54L}},{{0UL,0UL,0x1D8A4D54L},{18446744073709551610UL,0x37019865L,0x1D8A4D54L},{0x37019865L,18446744073709551610UL,0x1D8A4D54L},{0UL,0UL,0x1D8A4D54L}}};
    union U17 l_242 = {0x6F29L};
    int32_t l_255 = (-8L);
    int32_t l_256 = 0xDE38A64BL;
    int i, j, k;
lbl_257:
    if (((g_125 >= (safe_div_func_int8_t_s_s((safe_mul_func_int8_t_s_s((l_195 ^ (safe_add_func_uint32_t_u_u((g_33 , (g_71 , l_195)), p_4.f2))), l_195)), 1UL))) >= p_3.f0))
    { 
        l_199 = g_198;
    }
    else
    { 
        int32_t l_211[3];
        uint32_t l_217 = 0UL;
        int32_t l_218 = 0xAA6CD7ECL;
        int32_t l_232[5][4];
        int i, j;
        for (i = 0; i < 3; i++)
            l_211[i] = (-1L);
        for (i = 0; i < 5; i++)
        {
            for (j = 0; j < 4; j++)
                l_232[i][j] = 0xE3BE0401L;
        }
        for (p_4.f0.f1 = 0; (p_4.f0.f1 <= 2); p_4.f0.f1 += 1)
        { 
            return p_4.f1;
        }
        for (g_26.f1.f3 = 0; (g_26.f1.f3 <= 0); g_26.f1.f3 += 1)
        { 
            int32_t l_202 = 0xF87B300BL;
            int i;
            g_26.f0.f2.f3 = (safe_rshift_func_uint16_t_u_s((g_96[(g_26.f1.f3 + 1)] || ((g_17.f1++) , ((safe_add_func_int32_t_s_s((safe_sub_func_int8_t_s_s(0x67L, (safe_mul_func_int8_t_s_s(g_189.f4, 0L)))), 0x10E70EACL)) > l_211[1]))), p_4.f4));
            for (g_30 = 0; (g_30 <= 0); g_30 += 1)
            { 
                struct S12 l_212 = {0xE4L};
                int i, j;
                l_218 = ((l_212 , (((l_217 = (((safe_rshift_func_int16_t_s_u(((safe_unary_minus_func_int64_t_s((((65535UL > (p_3.f0 = (g_33 , ((g_216[3] , p_4.f2) , p_5.f1)))) < g_26.f1.f2) , g_19))) == p_5.f0), 5)) < (-1L)) <= g_106[1][0])) < p_5.f1) <= 1UL)) <= g_189.f4);
                l_232[3][3] = ((l_218 = (-1L)) >= ((safe_rshift_func_int8_t_s_s((safe_add_func_int8_t_s_s((((safe_lshift_func_uint8_t_u_u(p_5.f2, 3)) ^ (l_231[2][0][0] = ((safe_mul_func_uint8_t_u_u(((safe_rshift_func_int8_t_s_u(((g_106[(g_30 + 1)][g_30] = (safe_lshift_func_uint8_t_u_u(p_4.f0.f1, 4))) < (0x75L <= 0L)), g_216[3].f1)) < g_96[1]), 4UL)) < 0xEF3AD9C0L))) < p_5.f2), l_211[2])), 2)) || 2UL));
                if (l_202)
                    continue;
            }
        }
        l_255 = (safe_lshift_func_int16_t_s_u((l_218 = (((p_4.f0.f1 = (safe_add_func_int16_t_s_s((safe_mul_func_uint16_t_u_u(((g_17 , l_232[3][2]) >= ((safe_lshift_func_uint16_t_u_u((+(l_242 , ((safe_add_func_int16_t_s_s((safe_lshift_func_int16_t_s_u((safe_lshift_func_int16_t_s_u((safe_div_func_int32_t_s_s(((safe_sub_func_uint64_t_u_u((safe_lshift_func_int8_t_s_s((p_4.f1 <= 0x48DDA1A3L), p_4.f0.f2)), l_231[4][3][0])) > p_5.f0), p_4.f1)), p_4.f3)), 11)), g_26.f0.f2.f3)) & 0x4EL))), 12)) & p_4.f0.f2)), g_19)), g_189.f1))) || 0x68L) < l_231[2][0][0])), g_34[0].f0.f2));
    }
    l_255 = p_4.f0.f3;
    if ((l_255 = (l_256 | g_216[3].f0)))
    { 
        if (g_26.f0.f2.f3)
            goto lbl_257;
    }
    else
    { 
        uint64_t l_258 = 0UL;
        l_255 &= l_258;
        return p_4.f0.f2;
    }
    return l_256;
}



static union U16  func_6(struct S4  p_7, union U16  p_8, struct S10  p_9, int8_t  p_10, struct S8  p_11)
{ 
    struct S1 l_42 = {{-8L,0UL,18446744073709551615UL,0x06170AF28410211DLL},0x04F9330BL,1UL,1L,0xB64C99091BB24BDBLL};
    uint32_t l_45 = 18446744073709551615UL;
    int16_t l_46 = (-7L);
    uint32_t l_64[3];
    int32_t l_82 = 0xACE2E08AL;
    uint32_t l_105 = 4294967293UL;
    int i;
    for (i = 0; i < 3; i++)
        l_64[i] = 0xE249038CL;
    if (((safe_rshift_func_uint16_t_u_u(g_26.f1.f0, ((safe_rshift_func_uint16_t_u_u(65529UL, 14)) != (safe_rshift_func_int8_t_s_s((l_42 , (safe_add_func_uint32_t_u_u(l_45, l_46))), 4))))) || 0UL))
    { 
        uint32_t l_60[4][4][2] = {{{4294967288UL,4294967288UL},{0xE7D9AD9CL,4294967288UL},{4294967288UL,0xE7D9AD9CL},{4294967288UL,4294967288UL}},{{0xE7D9AD9CL,4294967288UL},{4294967288UL,0xE7D9AD9CL},{4294967288UL,4294967288UL},{0xE7D9AD9CL,4294967288UL}},{{4294967288UL,0xE7D9AD9CL},{4294967288UL,4294967288UL},{0xE7D9AD9CL,4294967288UL},{4294967288UL,0xE7D9AD9CL}},{{4294967288UL,4294967288UL},{0xE7D9AD9CL,4294967288UL},{4294967288UL,0xE7D9AD9CL},{4294967288UL,4294967288UL}}};
        int64_t l_61 = 0x80BE8948E2C0BE23LL;
        int32_t l_81[5][4];
        uint32_t l_89 = 0xB5AAB8F2L;
        int i, j, k;
        for (i = 0; i < 5; i++)
        {
            for (j = 0; j < 4; j++)
                l_81[i][j] = (-1L);
        }
        if ((safe_lshift_func_int8_t_s_u(((~(p_8.f0--)) != (p_7.f4 ^ (safe_add_func_uint32_t_u_u((((safe_add_func_int32_t_s_s(((((((l_42.f4 , (((safe_mod_func_uint16_t_u_u((((g_26.f1.f1 > l_42.f3) != g_26.f1.f2) < 5UL), l_60[0][2][1])) && l_60[0][2][1]) >= 0x27AEC375L)) >= 0xC8L) || 0UL) & g_26.f1.f3) , l_61) && p_7.f5), g_17.f1)) , l_60[0][2][1]) < g_34[0].f0.f2), (-1L))))), g_26.f2)))
        { 
            struct S13 l_72 = {0xF7E4L};
            if (g_34[0].f0.f3)
            { 
                struct S10 l_67 = {{0x7DL,1UL,8UL,0x75AA404801D3CF30LL}};
                int32_t l_70[3];
                int i;
                for (i = 0; i < 3; i++)
                    l_70[i] = 0xAEE08D72L;
                g_26.f0.f2.f3 = (safe_sub_func_int32_t_s_s(p_9.f0.f3, 0x7E243D31L));
                l_64[2]++;
                p_7.f2.f2 = ((l_70[1] &= (l_67 , (l_60[0][2][1] < (safe_div_func_int64_t_s_s((g_26.f0.f1 >= g_17.f0.f0), l_45))))) & l_60[0][2][0]);
            }
            else
            { 
                l_72 = g_71;
                p_7.f2.f2 = (safe_sub_func_int32_t_s_s((g_34[0].f0.f0 >= ((safe_mul_func_uint16_t_u_u((p_8.f0 = (~(g_17.f4 ^= g_19))), ((((l_61 > 0x5843D7D1579E7742LL) && 3L) & g_26.f2) > l_72.f0))) < 0UL)), g_26.f1.f3));
            }
        }
        else
        { 
            p_11 = p_11;
        }
        l_89 = (((safe_unary_minus_func_int64_t_s(((0x889EA80ACB108F1FLL > (l_82 = (l_81[1][0] ^= 0x4EB65092C45C1CA5LL))) > 0x6E95L))) || (g_26.f0.f2.f0++)) >= (safe_mul_func_uint16_t_u_u((g_71.f0 ^= (safe_lshift_func_int16_t_s_s(l_60[0][2][1], g_26.f1.f1))), (-7L))));
        for (g_17.f4 = (-27); (g_17.f4 > (-5)); g_17.f4 = safe_add_func_uint64_t_u_u(g_17.f4, 2))
        { 
            union U16 l_97 = {0x71F2L};
            if (g_30)
            { 
                l_81[4][2] |= g_17.f3;
                l_82 = ((safe_mod_func_int64_t_s_s((safe_div_func_uint8_t_u_u(255UL, g_26.f2)), 18446744073709551612UL)) > 1L);
            }
            else
            { 
                if (g_34[0].f0.f2)
                    break;
            }
            if ((p_7.f5 & (g_96[0] = 0x46FAL)))
            { 
                return l_97;
            }
            else
            { 
                uint32_t l_107 = 4294967287UL;
                int32_t l_108[5][3][2] = {{{(-6L),0x3A6F3299L},{(-1L),(-1L)},{0x84DF7A92L,(-5L)}},{{0x822EBED4L,8L},{0xA6B16CC9L,(-1L)},{0x3A6F3299L,0xA6B16CC9L}},{{0x53A53F0CL,(-6L)},{0x53A53F0CL,0xA6B16CC9L},{0x3A6F3299L,(-1L)}},{{0xA6B16CC9L,8L},{0x822EBED4L,(-5L)},{0x84DF7A92L,(-1L)}},{{(-1L),0x3A6F3299L},{(-6L),0x3A6F3299L},{(-1L),(-1L)}}};
                int i, j, k;
                l_108[3][0][0] &= (g_26.f0.f0 < ((l_82 ^= (-10L)) < ((((((safe_mod_func_int64_t_s_s((g_106[0][0] = (safe_lshift_func_uint8_t_u_u(g_33.f0, (safe_sub_func_int64_t_s_s((+((0x66F017B851E10200LL != g_34[0].f0.f1) & l_105)), l_97.f0))))), l_42.f0.f1)) != l_97.f0) && l_107) != 4294967286UL) , l_97.f0) || 0x8EC0L)));
                if (g_26.f0.f5)
                    break;
            }
        }
    }
    else
    { 
        return p_8;
    }
    if (((safe_div_func_uint64_t_u_u(((safe_mod_func_uint32_t_u_u((safe_mod_func_int16_t_s_s(((g_30 <= g_26.f0.f2.f3) < (safe_mul_func_uint8_t_u_u(((p_9.f0.f0 & (safe_sub_func_int8_t_s_s(p_9.f0.f2, g_106[0][0]))) >= 0x1388L), l_42.f2))), g_34[0].f0.f2)), p_7.f2.f3)) < 0x4DL), l_64[2])) >= (-3L)))
    { 
        int32_t l_126 = (-3L);
        int32_t l_127 = 0x3700861FL;
        int32_t l_128[4][4] = {{0x3EA59E92L,0x3EA59E92L,0x3EA59E92L,0x3EA59E92L},{0x3EA59E92L,0x3EA59E92L,0x3EA59E92L,0x3EA59E92L},{0x3EA59E92L,0x3EA59E92L,0x3EA59E92L,0x3EA59E92L},{0x3EA59E92L,0x3EA59E92L,0x3EA59E92L,0x3EA59E92L}};
        int64_t l_150 = 0x5F5214CDC618289BLL;
        const struct S7 l_153 = {{0x5AF88492F6A5E5ADLL,0x12CEF03FL,{0UL,-1L,0xB8A06608L,7L},0x9FB56803DAA861DALL,0xFAL,0x6DD2L},{0xECL,255UL,0x3A405008DB593B29LL,0xC1B99DA1B10BFE30LL},0x8EL};
        int i, j;
        l_128[2][0] |= (((p_7.f2.f1 >= g_26.f2) < (p_9.f0.f3 = ((0x6D9CL == ((safe_mod_func_int8_t_s_s((((safe_add_func_int16_t_s_s((g_125 = (safe_rshift_func_int8_t_s_s((((((((8L >= 0UL) > g_26.f0.f5) <= g_71.f0) & g_26.f1.f2) != 0x0D034B6EL) ^ g_26.f0.f2.f3) & p_11.f0), g_26.f0.f4))), 0x4525L)) || g_96[1]) <= l_126), 0x22L)) , l_127)) || g_17.f3))) != p_7.f3);
        l_128[2][0] = (0x40L >= l_42.f3);
        if (((g_149 = (safe_add_func_uint32_t_u_u((safe_sub_func_uint8_t_u_u((safe_add_func_uint8_t_u_u(l_127, ((safe_mod_func_uint16_t_u_u((g_71.f0--), (safe_add_func_int32_t_s_s(((!((g_96[0] |= (0xCD56L || (safe_sub_func_int64_t_s_s(0L, (p_9.f0.f3 ^= (safe_sub_func_int16_t_s_s((safe_mul_func_uint16_t_u_u(((((!g_17.f3) && (-1L)) < 0x0BL) == 0x9612CB44B8A7ECDALL), 5L)), 8L))))))) && 4294967295UL)) != 65535UL), l_105)))) < l_128[2][0]))), 0x22L)), p_7.f2.f3))) | l_150))
        { 
            const struct S0 l_158 = {-1L,1UL,0xB1F41A29CFF1D986LL,5UL};
            for (g_17.f2 = 0; (g_17.f2 >= 6); g_17.f2 = safe_add_func_int16_t_s_s(g_17.f2, 8))
            { 
                uint32_t l_155 = 4294967295UL;
                g_125 |= 0x305BF0C4L;
                l_155 = (l_153 , (((!p_7.f2.f2) || l_45) == ((l_42.f0.f0 < 0xB431681AL) > 0x0BE9L)));
            }
            p_7.f2.f3 = (((g_26.f1.f1 || ((0x3CA7L | (safe_rshift_func_uint8_t_u_u(((l_158 , (safe_rshift_func_uint8_t_u_u((g_17 , 255UL), g_96[1]))) > 0xE3L), g_96[1]))) >= 0xACCDL)) > 1L) && l_64[2]);
        }
        else
        { 
            int64_t l_173 = 0xD89794761D9DC543LL;
            for (p_7.f3 = 0; (p_7.f3 <= 3); p_7.f3 += 1)
            { 
                uint16_t l_169 = 0x8027L;
                uint32_t l_170[4] = {18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL};
                int i;
                g_26.f0.f2.f2 = (safe_rshift_func_int16_t_s_s((((safe_add_func_int32_t_s_s(p_9.f0.f0, ((0x646124FEL > ((safe_rshift_func_uint16_t_u_u(0x9757L, 11)) >= l_169)) <= p_7.f4))) == l_153.f0.f2.f1) | g_26.f0.f2.f1), l_153.f0.f5));
                l_170[3]--;
            }
            g_176++;
        }
    }
    else
    { 
        g_125 |= (+((safe_sub_func_int8_t_s_s(p_7.f1, ((safe_div_func_int8_t_s_s(((0xC2L & g_96[0]) ^ ((!(safe_mul_func_int16_t_s_s((safe_add_func_uint8_t_u_u(l_82, g_26.f0.f2.f1)), 0L))) == (-2L))), 0xA7L)) <= (-1L)))) > l_42.f0.f0));
    }
    return g_33;
}



static struct S4  func_12(struct S1  p_13, struct S1  p_14, int8_t  p_15, int16_t  p_16)
{ 
    struct S6 l_29 = {0x49L,{255UL,18446744073709551615UL},0UL,0x7FAFL,0xA3E439E4EAF162BBLL};
    int32_t l_31 = (-1L);
    g_32 ^= (((safe_add_func_uint32_t_u_u(p_13.f4, ((safe_add_func_int64_t_s_s((l_31 = ((safe_mul_func_int16_t_s_s((g_26 , (safe_mul_func_int16_t_s_s(0x101DL, (g_30 = (l_29 , 0x3AB5L))))), g_26.f2)) < 0L)), 0x96EB75E0BD005A08LL)) == l_29.f3))) == g_26.f0.f2.f3) ^ 0UL);
    return g_26.f0;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_17.f0.f0, "g_17.f0.f0", print_hash_value);
    transparent_crc(g_17.f0.f1, "g_17.f0.f1", print_hash_value);
    transparent_crc(g_17.f0.f2, "g_17.f0.f2", print_hash_value);
    transparent_crc(g_17.f0.f3, "g_17.f0.f3", print_hash_value);
    transparent_crc(g_17.f1, "g_17.f1", print_hash_value);
    transparent_crc(g_17.f2, "g_17.f2", print_hash_value);
    transparent_crc(g_17.f3, "g_17.f3", print_hash_value);
    transparent_crc(g_17.f4, "g_17.f4", print_hash_value);
    transparent_crc(g_19, "g_19", print_hash_value);
    transparent_crc(g_26.f0.f0, "g_26.f0.f0", print_hash_value);
    transparent_crc(g_26.f0.f1, "g_26.f0.f1", print_hash_value);
    transparent_crc(g_26.f0.f2.f0, "g_26.f0.f2.f0", print_hash_value);
    transparent_crc(g_26.f0.f2.f1, "g_26.f0.f2.f1", print_hash_value);
    transparent_crc(g_26.f0.f2.f2, "g_26.f0.f2.f2", print_hash_value);
    transparent_crc(g_26.f0.f2.f3, "g_26.f0.f2.f3", print_hash_value);
    transparent_crc(g_26.f0.f3, "g_26.f0.f3", print_hash_value);
    transparent_crc(g_26.f0.f4, "g_26.f0.f4", print_hash_value);
    transparent_crc(g_26.f0.f5, "g_26.f0.f5", print_hash_value);
    transparent_crc(g_26.f1.f0, "g_26.f1.f0", print_hash_value);
    transparent_crc(g_26.f1.f1, "g_26.f1.f1", print_hash_value);
    transparent_crc(g_26.f1.f2, "g_26.f1.f2", print_hash_value);
    transparent_crc(g_26.f1.f3, "g_26.f1.f3", print_hash_value);
    transparent_crc(g_26.f2, "g_26.f2", print_hash_value);
    transparent_crc(g_30, "g_30", print_hash_value);
    transparent_crc(g_32, "g_32", print_hash_value);
    transparent_crc(g_33.f0, "g_33.f0", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_34[i].f0.f0, "g_34[i].f0.f0", print_hash_value);
        transparent_crc(g_34[i].f0.f1, "g_34[i].f0.f1", print_hash_value);
        transparent_crc(g_34[i].f0.f2, "g_34[i].f0.f2", print_hash_value);
        transparent_crc(g_34[i].f0.f3, "g_34[i].f0.f3", print_hash_value);

    }
    transparent_crc(g_71.f0, "g_71.f0", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_96[i], "g_96[i]", print_hash_value);

    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_106[i][j], "g_106[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_125, "g_125", print_hash_value);
    transparent_crc(g_149, "g_149", print_hash_value);
    transparent_crc(g_174, "g_174", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_175[i], "g_175[i]", print_hash_value);

    }
    transparent_crc(g_176, "g_176", print_hash_value);
    transparent_crc(g_189.f0.f0, "g_189.f0.f0", print_hash_value);
    transparent_crc(g_189.f0.f1, "g_189.f0.f1", print_hash_value);
    transparent_crc(g_189.f0.f2, "g_189.f0.f2", print_hash_value);
    transparent_crc(g_189.f0.f3, "g_189.f0.f3", print_hash_value);
    transparent_crc(g_189.f1, "g_189.f1", print_hash_value);
    transparent_crc(g_189.f2, "g_189.f2", print_hash_value);
    transparent_crc(g_189.f3, "g_189.f3", print_hash_value);
    transparent_crc(g_189.f4, "g_189.f4", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_190[i].f0, "g_190[i].f0", print_hash_value);
        transparent_crc(g_190[i].f1, "g_190[i].f1", print_hash_value);
        transparent_crc(g_190[i].f2, "g_190[i].f2", print_hash_value);

    }
    transparent_crc(g_198.f0, "g_198.f0", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_216[i].f0, "g_216[i].f0", print_hash_value);
        transparent_crc(g_216[i].f1, "g_216[i].f1", print_hash_value);

    }
    transparent_crc(g_259, "g_259", print_hash_value);
    transparent_crc(g_269.f0, "g_269.f0", print_hash_value);
    transparent_crc(g_303, "g_303", print_hash_value);
    transparent_crc(g_305, "g_305", print_hash_value);
    transparent_crc(g_311, "g_311", print_hash_value);
    transparent_crc(g_312, "g_312", print_hash_value);
    transparent_crc(g_314, "g_314", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_315[i], "g_315[i]", print_hash_value);

    }
    transparent_crc(g_336, "g_336", print_hash_value);
    transparent_crc(g_337, "g_337", print_hash_value);
    transparent_crc(g_341.f1, "g_341.f1", print_hash_value);
    transparent_crc(g_341.f2, "g_341.f2", print_hash_value);
    transparent_crc(g_341.f3, "g_341.f3", print_hash_value);
    transparent_crc(g_352, "g_352", print_hash_value);
    transparent_crc(g_385, "g_385", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_397[i][j][k].f0.f0, "g_397[i][j][k].f0.f0", print_hash_value);
                transparent_crc(g_397[i][j][k].f1, "g_397[i][j][k].f1", print_hash_value);
                transparent_crc(g_397[i][j][k].f2.f0, "g_397[i][j][k].f2.f0", print_hash_value);
                transparent_crc(g_397[i][j][k].f3, "g_397[i][j][k].f3", print_hash_value);
                transparent_crc(g_397[i][j][k].f4, "g_397[i][j][k].f4", print_hash_value);

            }
        }
    }
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
