// SPDX-License-Identifier: MIT
// cctest_csmith_f0824436.c --- cctest case csmith_f0824436 (csmith seed 4035068982)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xc0591fd3 */
/* @exp_ticks 0x5fda */

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

// Options:   -s 4035068982 -o /tmp/csmith_gen_r5ae8vfl/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   int32_t  f0;
   uint32_t  f1;
   int32_t  f2;
   int32_t  f3;
   uint16_t  f4;
   const uint16_t  f5;
};
#pragma pack(pop)

#pragma pack(push)
#pragma pack(1)
struct S1 {
   int32_t  f0;
   uint16_t  f1;
   const uint64_t  f2;
   uint16_t  f3;
   uint32_t  f4;
};
#pragma pack(pop)

#pragma pack(push)
#pragma pack(1)
struct S2 {
   int32_t  f0;
   int64_t  f1;
};
#pragma pack(pop)

#pragma pack(push)
#pragma pack(1)
struct S3 {
   struct S1  f0;
   uint16_t  f1;
   uint16_t  f2;
   uint16_t  f3;
   uint8_t  f4;
   const struct S1  f5;
};
#pragma pack(pop)

union U4 {
   const uint8_t  f0;
   uint32_t  f1;
};

union U5 {
   const int32_t  f0;
   struct S0  f1;
   struct S3  f2;
   const uint32_t  f3;
};

union U6 {
   uint64_t  f0;
};


static int32_t g_2 = (-9L);
static uint64_t g_5 = 0xBB6BC3EC3D4E7030LL;
static uint8_t g_21 = 249UL;
static struct S1 g_39[5][5] = {{{0x3506F8A1L,8UL,9UL,1UL,1UL},{0xF9C6A002L,0x50D2L,9UL,65526UL,4294967293UL},{0x3506F8A1L,8UL,9UL,1UL,1UL},{0x3506F8A1L,8UL,9UL,1UL,1UL},{0xF9C6A002L,0x50D2L,9UL,65526UL,4294967293UL}},{{0xF9C6A002L,0x50D2L,9UL,65526UL,4294967293UL},{0x3506F8A1L,8UL,9UL,1UL,1UL},{0x3506F8A1L,8UL,9UL,1UL,1UL},{0xF9C6A002L,0x50D2L,9UL,65526UL,4294967293UL},{0x3506F8A1L,8UL,9UL,1UL,1UL}},{{0xF9C6A002L,0x50D2L,9UL,65526UL,4294967293UL},{0xF9C6A002L,0x50D2L,9UL,65526UL,4294967293UL},{0xD2A6A8E4L,65535UL,1UL,0x84B8L,0UL},{0xF9C6A002L,0x50D2L,9UL,65526UL,4294967293UL},{0xF9C6A002L,0x50D2L,9UL,65526UL,4294967293UL}},{{0x3506F8A1L,8UL,9UL,1UL,1UL},{0xF9C6A002L,0x50D2L,9UL,65526UL,4294967293UL},{0x3506F8A1L,8UL,9UL,1UL,1UL},{0x3506F8A1L,8UL,9UL,1UL,1UL},{0xF9C6A002L,0x50D2L,9UL,65526UL,4294967293UL}},{{0xF9C6A002L,0x50D2L,9UL,65526UL,4294967293UL},{0x3506F8A1L,8UL,9UL,1UL,1UL},{0x3506F8A1L,8UL,9UL,1UL,1UL},{0xF9C6A002L,0x50D2L,9UL,65526UL,4294967293UL},{0x3506F8A1L,8UL,9UL,1UL,1UL}}};
static struct S0 g_43 = {0x686B7DE7L,0x8591F28FL,0x8172882CL,-7L,0UL,0x727FL};
static struct S2 g_44[1] = {{4L,0x6A0F30BDA1A75C26LL}};
static uint64_t g_94 = 1UL;
static union U4 g_115 = {6UL};
static union U6 g_150[1][3][2] = {{{{18446744073709551608UL},{18446744073709551608UL}},{{18446744073709551608UL},{18446744073709551608UL}},{{18446744073709551608UL},{18446744073709551608UL}}}};
static int16_t g_210 = 0xA0E0L;
static uint16_t g_212 = 0x426EL;
static union U5 g_293 = {1L};



static union U4  func_1(void);
static uint16_t  func_8(int64_t  p_9, const union U6  p_10, uint32_t  p_11, int8_t  p_12);
static const struct S1  func_31(struct S1  p_32, uint32_t  p_33, struct S0  p_34, int64_t  p_35, struct S3  p_36);
static struct S1  func_37(struct S1  p_38);




static union U4  func_1(void)
{ 
    int32_t l_13[5] = {0L,0L,0L,0L,0L};
    struct S2 l_283 = {0xAB6A0651L,4L};
    const uint64_t l_284 = 1UL;
    uint64_t l_287 = 0x1C527838CB54408CLL;
    union U4 l_301 = {0x85L};
    int i;
    for (g_2 = 0; (g_2 >= (-13)); g_2--)
    { 
        int32_t l_20 = (-1L);
        uint64_t l_26 = 0x13CEF339200279E5LL;
        const union U6 l_27 = {0x9AFCA8629342BB1ELL};
        uint16_t l_262 = 65535UL;
        uint32_t l_263 = 1UL;
        --g_5;
        l_13[0] = ((g_39[1][4].f0 = (func_8(l_13[4], (((safe_add_func_int64_t_s_s((safe_mul_func_int8_t_s_s(((l_13[0] > (((safe_lshift_func_int16_t_s_u(((--g_21) != ((safe_rshift_func_int8_t_s_u(((g_2 >= l_26) & l_26), 6)) && 1L)), 8)) & 6L) , l_20)) >= g_5), l_20)), 0L)) <= g_2) , l_27), g_2, l_13[4]) , 8L)) > 0x896C2465L);
        g_44[0].f0 = (((safe_rshift_func_uint8_t_u_s(l_26, 6)) < ((safe_lshift_func_int8_t_s_u(((((safe_sub_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s((safe_sub_func_int32_t_s_s(1L, ((safe_mod_func_uint8_t_u_u(0x88L, (+(l_13[2] , g_21)))) != g_39[1][4].f3))), 4)), g_43.f0)) != 65526UL) | l_262) > g_44[0].f0), l_13[0])) < l_13[2])) >= l_263);
    }
    for (g_43.f3 = 0; (g_43.f3 >= 0); g_43.f3 -= 1)
    { 
        int32_t l_264 = 1L;
        union U6 l_271 = {18446744073709551615UL};
        int32_t l_285 = (-1L);
        if (l_264)
            break;
        if ((((safe_mul_func_int8_t_s_s(((safe_div_func_int32_t_s_s((safe_mod_func_uint64_t_u_u((l_271 , ((safe_mod_func_int8_t_s_s((+(g_39[1][4].f0 ^= (safe_mod_func_int32_t_s_s((g_115 , (((safe_add_func_uint32_t_u_u(l_13[4], (g_2 = ((safe_lshift_func_int8_t_s_u(g_2, l_271.f0)) >= g_43.f1)))) ^ l_264) ^ 0xFA74C0A3L)), l_13[4])))), 0x9BL)) < l_264)), l_271.f0)), g_94)) ^ g_115.f0), g_39[1][4].f4)) , g_115.f0) || 6UL))
        { 
            l_13[4] = l_264;
        }
        else
        { 
            int64_t l_282 = 0xC4FBF5521942E4CELL;
            l_282 = (+l_271.f0);
        }
        for (g_94 = 0; (g_94 <= 0); g_94 += 1)
        { 
            int i;
            g_44[g_43.f3] = l_283;
            l_285 = l_284;
            for (g_43.f4 = 0; (g_43.f4 <= 0); g_43.f4 += 1)
            { 
                int32_t l_286 = 0L;
                l_287 ^= ((g_43.f0 = (l_286 , g_2)) , (g_44[0].f0 = l_285));
                g_43.f2 = 0x56E7CEAEL;
                if (g_212)
                    break;
            }
        }
        for (g_2 = 0; (g_2 >= 0); g_2 -= 1)
        { 
            struct S1 l_290 = {-1L,0xED9CL,8UL,65534UL,0xFA685711L};
            l_283.f0 &= (g_293.f2.f0.f0 = (safe_lshift_func_uint16_t_u_u(((func_37(l_290) , (safe_div_func_uint8_t_u_u(l_264, (((g_293 , g_150[0][0][0].f0) < l_290.f4) | g_39[1][4].f2)))) | l_290.f2), 3)));
            for (l_285 = 0; (l_285 <= 0); l_285 += 1)
            { 
                uint64_t l_300 = 0UL;
                l_13[3] = (safe_mod_func_int32_t_s_s((safe_add_func_int8_t_s_s((((safe_sub_func_int16_t_s_s(g_39[1][4].f2, 0UL)) == l_290.f3) || (l_300 < (-1L))), l_300)), g_293.f0));
            }
        }
    }
    return l_301;
}



static uint16_t  func_8(int64_t  p_9, const union U6  p_10, uint32_t  p_11, int8_t  p_12)
{ 
    int64_t l_29 = 2L;
    struct S3 l_133 = {{0x96A4908DL,65531UL,18446744073709551615UL,0xD855L,0x04A48274L},0x71E8L,0UL,0x1553L,2UL,{-4L,65535UL,0xD0663B70AC92BCF4LL,65535UL,7UL}};
    struct S2 l_225[2][3][3] = {{{{-1L,6L},{-1L,6L},{0x575F8629L,0x82947E045539E865LL}},{{0L,0xC78A0E73B8899DCFLL},{0L,0xC78A0E73B8899DCFLL},{-1L,5L}},{{-1L,6L},{-1L,6L},{0x575F8629L,0x82947E045539E865LL}}},{{{0x274A4447L,0xB15AC9E3CE139A79LL},{0x274A4447L,0xB15AC9E3CE139A79LL},{0L,0xC78A0E73B8899DCFLL}},{{0L,0x07A6BF1C6E7CB5A7LL},{0L,0x07A6BF1C6E7CB5A7LL},{-1L,6L}},{{0x274A4447L,0xB15AC9E3CE139A79LL},{0x274A4447L,0xB15AC9E3CE139A79LL},{0L,0xC78A0E73B8899DCFLL}}}};
    int32_t l_246 = 0x44003832L;
    int i, j, k;
    if ((!l_29))
    { 
        int32_t l_128 = (-1L);
        struct S0 l_131 = {0xE25C62FDL,0xA48C6250L,0xA518F3EDL,0x6D573B10L,0x1C41L,65530UL};
        uint32_t l_132 = 0xB8B31588L;
        struct S2 l_224 = {0x8AFD0531L,0x7A17F35A23FF211DLL};
        if ((safe_unary_minus_func_int64_t_s(((l_29 != (func_31(func_37(g_39[1][4]), (p_11--), l_131, l_132, l_133) , l_128)) < p_10.f0))))
        { 
            l_225[1][0][2] = l_224;
        }
        else
        { 
            for (g_94 = 0; (g_94 == 54); g_94 = safe_add_func_uint8_t_u_u(g_94, 5))
            { 
                struct S2 l_228 = {0x3DCE3E1BL,0x06D71C5E754A42A4LL};
                int32_t l_237 = 0x4407F4ECL;
                l_225[1][0][2] = l_228;
                l_237 = ((l_128 = (p_10.f0 == (l_228.f0 = (safe_sub_func_uint8_t_u_u((safe_sub_func_int32_t_s_s(((p_12 & ((safe_mod_func_int8_t_s_s((safe_div_func_int8_t_s_s(((p_9 , 18446744073709551615UL) , p_9), g_39[1][4].f1)), g_2)) != 2L)) , (-7L)), l_228.f0)), 0xC3L))))) && l_133.f0.f0);
                if (g_39[1][4].f2)
                    break;
            }
            g_44[0] = g_44[0];
        }
    }
    else
    { 
        return g_94;
    }
    for (p_12 = (-10); (p_12 != (-17)); --p_12)
    { 
        l_225[1][0][2].f0 &= ((safe_rshift_func_int16_t_s_s(7L, 10)) | p_12);
    }
    l_246 = (((l_133 , ((safe_sub_func_uint16_t_u_u(p_11, g_44[0].f0)) < (l_225[1][0][2].f0 = ((l_133.f0.f0 = ((((safe_div_func_uint8_t_u_u(l_133.f5.f3, l_133.f5.f3)) & 0xF8E8L) || 0xBCL) & p_11)) < g_39[1][4].f0)))) , p_11) >= 0xBCL);
    return p_9;
}



static const struct S1  func_31(struct S1  p_32, uint32_t  p_33, struct S0  p_34, int64_t  p_35, struct S3  p_36)
{ 
    uint32_t l_137 = 0xBA501070L;
    int32_t l_205 = 0xC5DCDB80L;
    int32_t l_206[1];
    uint8_t l_221 = 0xCCL;
    int i;
    for (i = 0; i < 1; i++)
        l_206[i] = 0x5490DEC9L;
    for (p_32.f0 = 0; (p_32.f0 <= 0); p_32.f0 += 1)
    { 
        uint32_t l_134 = 18446744073709551611UL;
        int32_t l_173 = 0L;
        union U6 l_192 = {18446744073709551615UL};
        int32_t l_200 = 1L;
        int32_t l_209 = (-2L);
        int32_t l_211 = 0xFFB89C85L;
        union U5 l_215 = {0x50B9248AL};
        if (l_134)
        { 
            const int16_t l_138 = (-4L);
            int32_t l_141[2];
            int32_t l_142[3];
            int i;
            for (i = 0; i < 2; i++)
                l_141[i] = 6L;
            for (i = 0; i < 3; i++)
                l_142[i] = 0x21A4600CL;
            p_34.f3 = l_134;
            l_142[1] |= (l_134 ^ (safe_mod_func_int16_t_s_s(l_137, ((l_138 > (l_141[1] &= (g_5 = ((safe_lshift_func_uint8_t_u_s(8UL, 2)) == p_36.f2)))) && p_36.f0.f1))));
            p_36.f0.f0 = (l_137 , (-10L));
        }
        else
        { 
            int8_t l_145 = 1L;
            int16_t l_151 = 0x26FDL;
            int32_t l_156 = 0x9440013EL;
            int32_t l_157 = (-1L);
            int16_t l_170 = 0xAEA9L;
            const union U4 l_178 = {0xE5L};
            g_39[1][4].f0 = (safe_lshift_func_uint8_t_u_s((l_145 != ((safe_lshift_func_int8_t_s_u(0x6CL, 7)) & (safe_mul_func_int16_t_s_s((g_150[0][0][0] , (5UL <= 0xB55C4BC6AF4C53DELL)), l_151)))), g_43.f1));
            p_34.f2 = ((l_134 & (6L > (safe_add_func_int32_t_s_s((g_43.f3 &= (l_157 = ((p_36.f1 || ((p_32.f4++) || (l_156 = 6L))) ^ g_39[1][4].f3))), l_134)))) , 0L);
            for (p_34.f4 = 0; (p_34.f4 <= 0); p_34.f4 += 1)
            { 
                uint32_t l_171 = 4294967295UL;
                int32_t l_172 = (-9L);
                l_173 |= (l_156 = (p_34.f3 = (((-1L) > (l_172 ^= ((safe_add_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u((safe_mul_func_uint16_t_u_u(l_137, ((safe_mod_func_int32_t_s_s((safe_lshift_func_uint16_t_u_s((safe_add_func_uint64_t_u_u((g_43.f1 ^ p_32.f2), 0x1770C5B0B88990D2LL)), g_39[1][4].f1)), 6L)) | l_170))), l_157)), 0xC701L)) == l_171))) , l_170)));
                g_43.f3 = (safe_add_func_int16_t_s_s((safe_sub_func_uint32_t_u_u((0x0087D275BA9C812FLL | (l_156 |= (((l_178 , ((safe_lshift_func_int8_t_s_u((safe_add_func_int32_t_s_s(l_137, ((l_134 >= p_34.f1) , g_2))), 3)) && l_171)) , l_151) <= g_5))), l_171)), l_134));
            }
        }
        for (l_173 = 0; (l_173 >= 0); l_173 -= 1)
        { 
            int32_t l_195[4][1][2] = {{{1L,1L}},{{0L,1L}},{{1L,0L}},{{1L,1L}}};
            int32_t l_199[3][1][1];
            int8_t l_207 = 1L;
            int i, j, k;
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 1; j++)
                {
                    for (k = 0; k < 1; k++)
                        l_199[i][j][k] = 5L;
                }
            }
            p_36.f0.f0 ^= (safe_add_func_int64_t_s_s((((+((safe_lshift_func_uint16_t_u_s((safe_div_func_int32_t_s_s((safe_mul_func_uint8_t_u_u((l_192 , (safe_div_func_uint32_t_u_u(4294967291UL, 6L))), 0L)), p_36.f2)), 4)) & p_34.f3)) && l_195[2][0][1]) ^ l_137), l_195[3][0][0]));
            if ((((-1L) == (safe_unary_minus_func_uint16_t_u(((l_195[2][0][1] | (safe_div_func_uint8_t_u_u((l_137 < (p_36.f0.f4++)), (safe_div_func_int8_t_s_s((g_43.f4 , p_34.f5), p_36.f5.f2))))) && 65535UL)))) == p_36.f4))
            { 
                int32_t l_208 = 0xDB606F96L;
                ++g_212;
            }
            else
            { 
                int i;
                g_44[l_173] = g_44[p_32.f0];
            }
        }
        for (g_43.f3 = 0; (g_43.f3 <= 0); g_43.f3 += 1)
        { 
            int i;
            g_44[0] = (l_215 , g_44[g_43.f3]);
            for (l_215.f2.f3 = (-23); (l_215.f2.f3 != 31); l_215.f2.f3 = safe_add_func_uint64_t_u_u(l_215.f2.f3, 2))
            { 
                uint32_t l_218[1];
                int i;
                for (i = 0; i < 1; i++)
                    l_218[i] = 0xF4EFCB69L;
                p_34.f2 ^= p_32.f1;
                ++l_218[0];
                g_44[0].f0 |= (g_210 & p_36.f5.f2);
            }
        }
    }
    ++l_221;
    return g_39[1][4];
}



static struct S1  func_37(struct S1  p_38)
{ 
    uint16_t l_40 = 65529UL;
    int32_t l_46 = 0L;
    int32_t l_85[5][2][4] = {{{0x7AAB454EL,0x27EA9C8CL,0x7AAB454EL,0x27EA9C8CL},{0x7AAB454EL,0x27EA9C8CL,0x7AAB454EL,0x27EA9C8CL}},{{0x7AAB454EL,0x27EA9C8CL,0x7AAB454EL,0x27EA9C8CL},{0x7AAB454EL,0x27EA9C8CL,0x7AAB454EL,0x27EA9C8CL}},{{0x7AAB454EL,0x27EA9C8CL,0x7AAB454EL,0x27EA9C8CL},{0x7AAB454EL,0x27EA9C8CL,0x7AAB454EL,0x27EA9C8CL}},{{0x7AAB454EL,0x27EA9C8CL,0x7AAB454EL,0x27EA9C8CL},{0x7AAB454EL,0x27EA9C8CL,0x7AAB454EL,0x27EA9C8CL}},{{0x7AAB454EL,0x27EA9C8CL,0x7AAB454EL,0x27EA9C8CL},{0x7AAB454EL,0x27EA9C8CL,0x7AAB454EL,0x27EA9C8CL}}};
    const union U6 l_106[3] = {{0xCE45356EB84F5D4ALL},{0xCE45356EB84F5D4ALL},{0xCE45356EB84F5D4ALL}};
    struct S2 l_118[4][4] = {{{0xA6B924B8L,-6L},{0x7E95C8E4L,0L},{0xA6B924B8L,-6L},{-9L,-2L}},{{0L,0x039BA748E4F8FBF4LL},{0x8363A23DL,-10L},{-9L,-2L},{-9L,-2L}},{{0x7E95C8E4L,0L},{0x7E95C8E4L,0L},{-1L,-1L},{0x8363A23DL,-10L}},{{0x8363A23DL,-10L},{0L,0x039BA748E4F8FBF4LL},{-1L,-1L},{0L,0x039BA748E4F8FBF4LL}}};
    int16_t l_124 = 8L;
    int i, j, k;
lbl_79:
    l_40 = (-10L);
    if ((0L | (p_38.f0 = (-4L))))
    { 
        int16_t l_45[2][2];
        int32_t l_47 = 0x0CC90FA2L;
        int i, j;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 2; j++)
                l_45[i][j] = 0xBE83L;
        }
        if ((safe_mod_func_uint8_t_u_u((l_47 &= (g_43 , (0x6C48L > (((l_46 &= (((g_44[0] , ((((g_39[1][4].f4 == l_45[0][0]) || 0L) || g_44[0].f0) ^ 0x1995L)) != p_38.f0) || l_45[0][0])) , l_40) , g_43.f5)))), g_43.f0)))
        { 
            const int32_t l_62[2][3][5] = {{{0L,0xD785ABE1L,0xD785ABE1L,0L,0xD785ABE1L},{0x947F7088L,0x947F7088L,1L,0x947F7088L,0x947F7088L},{0xD785ABE1L,0L,0xD785ABE1L,0xD785ABE1L,0L}},{{0x947F7088L,1L,1L,0x947F7088L,1L},{0L,0L,0L,0L,0L},{1L,0x947F7088L,1L,1L,0x947F7088L}}};
            int32_t l_63 = 6L;
            int i, j, k;
            for (p_38.f3 = (-19); (p_38.f3 < 11); p_38.f3++)
            { 
                return p_38;
            }
            l_47 = (safe_rshift_func_uint16_t_u_s((((p_38.f1 && ((safe_mod_func_uint16_t_u_u((safe_sub_func_int32_t_s_s((l_45[1][1] || (safe_mod_func_uint8_t_u_u((safe_mod_func_uint64_t_u_u((safe_lshift_func_int8_t_s_s(1L, (g_39[1][4].f4 & 0x8F5644FE3D079042LL))), p_38.f0)), 0xE0L))), 1L)), 0x548DL)) || l_62[0][1][3])) , 0x1266FB991B7FB1DALL) == p_38.f3), 14));
            l_63 = (p_38.f0 = p_38.f1);
        }
        else
        { 
            int32_t l_78 = 0x5B336EB9L;
            p_38.f0 |= ((safe_add_func_uint32_t_u_u((safe_rshift_func_int16_t_s_u(p_38.f3, 0)), (safe_div_func_int64_t_s_s((g_44[0].f1 = (safe_mul_func_int8_t_s_s(((l_78 = (safe_mod_func_uint8_t_u_u((p_38.f1 == (0xB8E030C7L & ((l_47 ^= (safe_div_func_int32_t_s_s((safe_div_func_uint64_t_u_u(((g_44[0].f1 != g_43.f5) <= p_38.f3), l_46)), p_38.f3))) > p_38.f4))), 0xF7L))) || l_78), 0x2DL))), p_38.f3)))) != g_43.f1);
        }
        if (p_38.f0)
            goto lbl_79;
    }
    else
    { 
        uint32_t l_88[1][5];
        int32_t l_89 = 0xFC2E2BE6L;
        int32_t l_90 = 0xAF966864L;
        int32_t l_91 = 0x8C56EC93L;
        int32_t l_92 = 1L;
        int32_t l_93 = 0xD986BD2DL;
        struct S1 l_119 = {0x95BF6126L,0x6071L,0xD43F7002FB210D5BLL,8UL,3UL};
        struct S2 l_120 = {0xF55E833FL,0xFB61F0D97DA6E296LL};
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 5; j++)
                l_88[i][j] = 0xCE4CEB91L;
        }
        if (((((safe_unary_minus_func_int8_t_s(g_5)) && l_46) == ((safe_add_func_uint16_t_u_u((p_38.f1 || (safe_lshift_func_int16_t_s_s((l_85[0][1][1] = ((g_44[0].f0 & 0x1B9A735059AB7399LL) != g_43.f3)), g_39[1][4].f0))), l_40)) == 2UL)) | g_43.f1))
        { 
lbl_127:
            l_46 = (((g_21 || 4294967291UL) != p_38.f4) == (safe_lshift_func_int16_t_s_u((((g_43.f5 <= 0x5740F152L) , l_88[0][1]) , 0x9D0AL), p_38.f0)));
            return p_38;
        }
        else
        { 
            uint32_t l_107 = 0xD2223408L;
            g_94++;
            for (g_94 = 0; (g_94 <= 0); g_94 += 1)
            { 
                int16_t l_99 = 1L;
                g_43.f2 = ((safe_lshift_func_uint16_t_u_u((((((4L > (p_38 , 1L)) < g_39[1][4].f0) && 0x62CBL) , p_38.f3) != 0x24E9L), l_99)) , 0L);
                l_107 = (((safe_lshift_func_int16_t_s_u(g_39[1][4].f4, 11)) , (safe_mul_func_uint8_t_u_u(((safe_div_func_uint16_t_u_u((((l_106[2] , (p_38.f1 | ((((g_44[0].f0 || l_91) > 0xC2B9L) == 0x30L) && p_38.f3))) != 0x997128C3L) , g_39[1][4].f0), g_44[0].f0)) <= p_38.f4), p_38.f1))) , l_88[0][1]);
                g_43.f2 &= (safe_mod_func_int32_t_s_s(g_39[1][4].f3, (safe_rshift_func_int16_t_s_u(0xC2DCL, 10))));
            }
        }
        l_46 = (safe_unary_minus_func_uint16_t_u((safe_add_func_uint16_t_u_u((l_46 == (g_115 , (g_44[0].f1 == (((-1L) | l_90) | (-1L))))), 0UL))));
        for (g_115.f1 = 0; (g_115.f1 > 59); g_115.f1++)
        { 
            int64_t l_123 = 0xAEF2F43CA9903D9CLL;
            int32_t l_125 = 7L;
            int32_t l_126 = 0L;
            g_44[0] = l_118[3][0];
            g_39[1][4].f0 = (0x3078B0CAL | (((((((l_119 , l_120) , (((safe_add_func_int64_t_s_s((l_125 ^= ((l_123 = l_92) < l_124)), 18446744073709551615UL)) ^ p_38.f2) > g_43.f3)) >= 5L) ^ l_126) > (-10L)) , g_39[1][4].f1) | p_38.f2));
            if (l_120.f1)
                goto lbl_127;
        }
    }
    return p_38;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_5, "g_5", print_hash_value);
    transparent_crc(g_21, "g_21", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_39[i][j].f0, "g_39[i][j].f0", print_hash_value);
            transparent_crc(g_39[i][j].f1, "g_39[i][j].f1", print_hash_value);
            transparent_crc(g_39[i][j].f2, "g_39[i][j].f2", print_hash_value);
            transparent_crc(g_39[i][j].f3, "g_39[i][j].f3", print_hash_value);
            transparent_crc(g_39[i][j].f4, "g_39[i][j].f4", print_hash_value);

        }
    }
    transparent_crc(g_43.f0, "g_43.f0", print_hash_value);
    transparent_crc(g_43.f1, "g_43.f1", print_hash_value);
    transparent_crc(g_43.f2, "g_43.f2", print_hash_value);
    transparent_crc(g_43.f3, "g_43.f3", print_hash_value);
    transparent_crc(g_43.f4, "g_43.f4", print_hash_value);
    transparent_crc(g_43.f5, "g_43.f5", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_44[i].f0, "g_44[i].f0", print_hash_value);
        transparent_crc(g_44[i].f1, "g_44[i].f1", print_hash_value);

    }
    transparent_crc(g_94, "g_94", print_hash_value);
    transparent_crc(g_115.f0, "g_115.f0", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_150[i][j][k].f0, "g_150[i][j][k].f0", print_hash_value);

            }
        }
    }
    transparent_crc(g_210, "g_210", print_hash_value);
    transparent_crc(g_212, "g_212", print_hash_value);
    transparent_crc(g_293.f0, "g_293.f0", print_hash_value);
    transparent_crc(g_293.f3, "g_293.f3", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
