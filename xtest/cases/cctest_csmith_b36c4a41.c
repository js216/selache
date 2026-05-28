// SPDX-License-Identifier: MIT
// cctest_csmith_b36c4a41.c --- cctest case csmith_b36c4a41 (csmith seed 3010218561)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x1b4940fa */
/* @exp_ticks 0xda95 */

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

// Options:   -s 3010218561 -o /tmp/csmith_gen_cew1k695/csmith.c --concise --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   int32_t  f0;
   uint32_t  f1;
   uint16_t  f2;
   uint32_t  f3;
   int64_t  f4;
   uint16_t  f5;
};
#pragma pack(pop)

union U1 {
   int32_t  f0;
   int8_t * f1;
   uint32_t  f2;
   uint8_t  f3;
};


static int32_t g_2[7] = {0L,8L,0L,0L,8L,0L,0L};
static uint64_t g_16[5] = {0xE6B6CD3335637001LL,0xE6B6CD3335637001LL,0xE6B6CD3335637001LL,0xE6B6CD3335637001LL,0xE6B6CD3335637001LL};
static int8_t g_19[5][7][6] = {{{0xDDL,0L,(-3L),0L,0L,(-3L)},{0L,0L,0x71L,0xDDL,0x40L,0L},{0x25L,(-1L),0x00L,0x71L,(-3L),0x71L},{0x00L,0x25L,0x00L,0xDEL,0L,0L},{0x47L,0xDEL,0x71L,0x1AL,(-3L),(-3L)},{0x1AL,(-3L),(-3L),0x1AL,0x25L,(-1L)},{0x00L,(-3L),0x71L,(-1L),0L,0xDDL}},{{0L,0x25L,0x47L,0x25L,0L,0x40L},{0xDDL,(-3L),(-3L),0xDEL,0x25L,0x71L},{0x71L,0x1AL,(-3L),(-3L),0x1AL,0x71L},{0xDEL,(-1L),(-3L),0L,0x71L,0x40L},{0x1AL,0xDDL,0x47L,0x71L,0x47L,0xDDL},{0x1AL,0x40L,0x71L,0L,(-3L),(-1L)},{0xDEL,0x71L,0x1AL,(-3L),(-3L),0x1AL}},{{0x71L,0x71L,0x25L,0xDEL,(-3L),(-3L)},{0xDDL,0x40L,0L,0x25L,0x47L,0x25L},{0L,0xDDL,0L,(-1L),0x71L,(-3L)},{0x00L,(-1L),0x25L,0L,0x1AL,0x1AL},{0L,0x1AL,0x1AL,0L,0x25L,(-1L)},{0x00L,(-3L),0x71L,(-1L),0L,0xDDL},{0L,0x25L,0x47L,0x25L,0L,0x40L}},{{0xDDL,(-3L),(-3L),0xDEL,0x25L,0x71L},{0x71L,0x1AL,(-3L),(-3L),0x1AL,0x71L},{0xDEL,(-1L),(-3L),0L,0x71L,0x40L},{0x1AL,0xDDL,0x47L,0x71L,0x47L,0xDDL},{0x1AL,0x40L,0x71L,0L,(-3L),(-1L)},{0xDEL,0x71L,0x1AL,(-3L),(-3L),0x1AL},{0x71L,0x71L,0x25L,0xDEL,(-3L),(-3L)}},{{0xDDL,0x40L,0L,0x25L,0x47L,0x25L},{0L,0xDDL,0L,(-1L),0x71L,(-3L)},{0x00L,(-1L),0x25L,0L,0x1AL,0x1AL},{0L,0x1AL,0x1AL,0L,0x25L,(-1L)},{0x00L,(-3L),0x71L,(-1L),0L,0xDDL},{0L,0x25L,0x47L,0x25L,0L,0x40L},{0xDDL,(-3L),(-3L),0xDEL,0x25L,0x71L}}};
static int8_t *g_18 = &g_19[0][0][1];
static int16_t g_48[7] = {0x2E52L,0xB78CL,0x2E52L,0x2E52L,0xB78CL,0x2E52L,0x2E52L};
static struct S0 g_52 = {0x2742E7FFL,0xB9ACCE30L,0x4B13L,18446744073709551613UL,0x77D7E7D1C2B13F3BLL,0x20FAL};
static int8_t g_61 = 0x49L;
static int32_t g_70[3] = {0x3E1243B3L,0x3E1243B3L,0x3E1243B3L};
static uint64_t g_112 = 0x14FE225A2E691EA7LL;
static union U1 g_121 = {1L};
static int16_t g_256 = (-1L);
static const struct S0 *g_260 = &g_52;
static int32_t *g_278 = &g_70[0];
static uint16_t *g_311[2][2] = {{&g_52.f5,&g_52.f5},{&g_52.f5,&g_52.f5}};
static uint64_t g_312 = 8UL;
static uint32_t g_356 = 18446744073709551610UL;
static uint32_t g_433 = 9UL;
static uint32_t *g_558 = &g_52.f3;
static uint32_t **g_557 = &g_558;
static const int32_t *g_561 = &g_70[2];
static uint64_t *g_611 = &g_16[1];
static uint64_t **g_610[5] = {&g_611,&g_611,&g_611,&g_611,&g_611};
static uint64_t ***g_609 = &g_610[4];
static uint64_t ****g_608 = &g_609;
static uint16_t g_647 = 1UL;
static int64_t **g_674 = (void*)0;
static union U1 *g_687 = &g_121;
static union U1 **g_686 = &g_687;
static int64_t g_694 = 0x2951DF71AD2FBE06LL;
static uint16_t **g_699 = &g_311[0][1];
static uint16_t ***g_698 = &g_699;
static uint16_t ** const ***g_822 = (void*)0;
static union U1 g_874 = {0x117625F9L};
static int32_t g_1013 = 0xF12D6415L;
static int8_t **g_1062[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
static int8_t ***g_1061 = &g_1062[4];
static int8_t g_1086 = 0x20L;
static int32_t g_1155[7][4][6] = {{{0x7F9FDD01L,(-7L),0x7F9FDD01L,3L,3L,0x7F9FDD01L},{0x7ED576BCL,0x7ED576BCL,3L,0L,3L,0x7ED576BCL},{3L,(-7L),0L,0L,(-7L),3L},{0x7ED576BCL,3L,0L,3L,0x7ED576BCL,0x7ED576BCL}},{{0x7F9FDD01L,3L,3L,0x7F9FDD01L,(-7L),0x7F9FDD01L},{0x7F9FDD01L,(-7L),0x7F9FDD01L,3L,3L,0x7F9FDD01L},{0x7ED576BCL,0x7ED576BCL,3L,0L,3L,0x7ED576BCL},{3L,(-7L),0L,0L,(-7L),3L}},{{0x7ED576BCL,3L,0L,3L,0x7ED576BCL,0x7ED576BCL},{0x7F9FDD01L,3L,3L,0x7F9FDD01L,(-7L),0x7F9FDD01L},{0x7F9FDD01L,(-7L),0x7F9FDD01L,3L,3L,0x7F9FDD01L},{0x7ED576BCL,0x7ED576BCL,3L,0L,3L,0x7ED576BCL}},{{3L,(-7L),0L,0L,(-7L),3L},{0x7ED576BCL,3L,0L,3L,0x7ED576BCL,0x7ED576BCL},{0x7F9FDD01L,3L,3L,0x7F9FDD01L,(-7L),0x7F9FDD01L},{0x7F9FDD01L,(-7L),0x7F9FDD01L,3L,3L,0x7F9FDD01L}},{{0x7ED576BCL,0x7ED576BCL,3L,0L,3L,0x7ED576BCL},{3L,(-7L),0L,0L,(-7L),3L},{0x7ED576BCL,3L,0L,3L,0x7ED576BCL,0x7ED576BCL},{0x7F9FDD01L,3L,3L,0x7F9FDD01L,(-7L),0x7F9FDD01L}},{{0x7F9FDD01L,(-7L),0x7F9FDD01L,3L,3L,0x7F9FDD01L},{0x7ED576BCL,0x7ED576BCL,3L,0L,3L,0x7ED576BCL},{3L,(-7L),0L,0L,(-7L),3L},{0x7ED576BCL,3L,0L,3L,0x7ED576BCL,0x7ED576BCL}},{{0x7F9FDD01L,3L,3L,0x7F9FDD01L,(-7L),0x7F9FDD01L},{0x7F9FDD01L,(-7L),0x7F9FDD01L,3L,3L,0x7F9FDD01L},{0x7ED576BCL,0x7ED576BCL,3L,0L,3L,0x7ED576BCL},{3L,(-7L),0L,0L,(-7L),3L}}};
static struct S0 g_1196 = {-6L,5UL,1UL,18446744073709551615UL,0L,1UL};
static int8_t *g_1365 = &g_19[3][2][3];
static uint8_t g_1451[4][3][7] = {{{0UL,0UL,0UL,249UL,255UL,0UL,1UL},{0x9BL,9UL,4UL,0xEDL,255UL,0UL,0xECL},{0xEDL,4UL,9UL,0x9BL,4UL,5UL,0UL}},{{0xD5L,0x63L,0x89L,0UL,1UL,1UL,0UL},{255UL,255UL,255UL,0UL,0UL,254UL,0xECL},{6UL,0x9BL,0UL,0UL,0xD5L,9UL,6UL}},{{0x9BL,0UL,0xECL,0UL,0x40L,254UL,0x9CL},{0x63L,0x9CL,0x40L,0x63L,0UL,1UL,0UL},{6UL,255UL,5UL,0UL,0UL,5UL,255UL}},{{0UL,0x89L,254UL,4UL,0x40L,0UL,0UL},{254UL,6UL,255UL,0x89L,0xD5L,0UL,0x40L},{0xEDL,255UL,0x77L,4UL,0UL,0x14L,6UL}}};
static int16_t *g_1464 = (void*)0;
static uint32_t g_1515 = 2UL;
static int64_t g_1519 = 0x4D4A711F0E7534E2LL;
static uint32_t g_1566[1][7] = {{0UL,0UL,0UL,0UL,0UL,0UL,0UL}};
static uint64_t *** const *g_1570 = &g_609;
static uint64_t *** const **g_1569 = &g_1570;
static struct S0 g_1618 = {-10L,4294967286UL,0UL,0xC5B1AFB4L,1L,0xA7EEL};
static union U1 ***g_1624 = (void*)0;
static const uint8_t g_1724 = 0xCDL;
static const uint8_t *g_1723 = &g_1724;
static uint8_t g_1901[2][1] = {{0x1AL},{0x1AL}};
static struct S0 *g_1909 = (void*)0;
static struct S0 **g_1908 = &g_1909;
static int16_t g_2013 = 4L;
static int64_t g_2052[6][2][1] = {{{0x52D9B33E7975BE20LL},{(-1L)}},{{0x52D9B33E7975BE20LL},{0x52D9B33E7975BE20LL}},{{(-1L)},{0x52D9B33E7975BE20LL}},{{0x52D9B33E7975BE20LL},{(-1L)}},{{0x52D9B33E7975BE20LL},{0x52D9B33E7975BE20LL}},{{(-1L)},{0x52D9B33E7975BE20LL}}};
static uint32_t g_2081 = 0xA90C95D0L;
static uint32_t g_2107 = 0x89F9D5E5L;
static int8_t ****g_2114 = &g_1061;
static int8_t *****g_2113 = &g_2114;
static uint8_t g_2214 = 1UL;
static int16_t g_2266 = 0L;
static int32_t g_2318 = (-4L);
static uint32_t g_2377[4][6] = {{0xC841322BL,4294967294UL,0xE5E99842L,0x4E550D27L,0xE5E99842L,4294967294UL},{0xC841322BL,4294967294UL,0xE5E99842L,0x4E550D27L,0xE5E99842L,4294967294UL},{0xC841322BL,4294967294UL,0xE5E99842L,0x4E550D27L,0xE5E99842L,4294967294UL},{0xC841322BL,4294967294UL,0xE5E99842L,0x4E550D27L,0xE5E99842L,4294967294UL}};
static int16_t g_2428 = 0L;
static int8_t g_2429[5] = {0x78L,0x78L,0x78L,0x78L,0x78L};
static struct S0 **g_2460 = &g_1909;
static int32_t *g_2499 = &g_52.f0;



static int64_t  func_1(void);
static uint8_t  func_7(uint64_t  p_8, int8_t * p_9, int8_t * p_10, int8_t * p_11, struct S0  p_12);
static int8_t * func_20(int8_t * p_21, int8_t  p_22, uint64_t * p_23);
static int8_t * func_24(int8_t * p_25);
static int8_t * func_26(uint64_t  p_27, uint64_t * p_28, int8_t * p_29, int8_t  p_30);
static int8_t  func_32(uint64_t * p_33, int8_t * p_34, uint64_t * p_35, int8_t  p_36, const int32_t  p_37);
static uint64_t * func_38(const struct S0  p_39, int16_t  p_40, int16_t  p_41, struct S0  p_42, union U1  p_43);
static uint32_t  func_116(uint32_t  p_117, int32_t  p_118, uint32_t  p_119);




static int64_t  func_1(void)
{ 
    uint32_t l_14 = 0UL;
    uint64_t l_17 = 0x2E3F9150FAEB382ELL;
    struct S0 l_49 = {0x191B8600L,4294967289UL,0xE6D9L,5UL,0xA8055A5481F04FECLL,0UL};
    uint64_t *l_111[2];
    int8_t *****l_2115 = (void*)0;
    uint8_t **l_2126 = (void*)0;
    uint8_t *** const l_2125[7][2][7] = {{{(void*)0,(void*)0,&l_2126,&l_2126,(void*)0,&l_2126,(void*)0},{&l_2126,&l_2126,&l_2126,&l_2126,&l_2126,(void*)0,(void*)0}},{{&l_2126,&l_2126,&l_2126,&l_2126,(void*)0,&l_2126,&l_2126},{&l_2126,(void*)0,&l_2126,(void*)0,&l_2126,&l_2126,(void*)0}},{{&l_2126,&l_2126,(void*)0,(void*)0,&l_2126,(void*)0,(void*)0},{&l_2126,(void*)0,&l_2126,&l_2126,(void*)0,&l_2126,&l_2126}},{{&l_2126,(void*)0,&l_2126,&l_2126,(void*)0,(void*)0,(void*)0},{&l_2126,&l_2126,&l_2126,&l_2126,&l_2126,&l_2126,&l_2126}},{{&l_2126,(void*)0,&l_2126,&l_2126,&l_2126,&l_2126,&l_2126},{&l_2126,(void*)0,(void*)0,(void*)0,(void*)0,&l_2126,&l_2126}},{{(void*)0,&l_2126,&l_2126,&l_2126,&l_2126,(void*)0,&l_2126},{&l_2126,(void*)0,(void*)0,&l_2126,&l_2126,&l_2126,(void*)0}},{{&l_2126,&l_2126,&l_2126,&l_2126,(void*)0,(void*)0,&l_2126},{&l_2126,(void*)0,&l_2126,(void*)0,&l_2126,&l_2126,(void*)0}}};
    int32_t l_2135 = 0xD303F024L;
    int32_t l_2136 = 3L;
    uint8_t l_2141 = 1UL;
    uint8_t l_2156 = 0x5AL;
    uint32_t *l_2216 = &g_1566[0][6];
    int32_t l_2251 = 0x3FE373EAL;
    int32_t l_2300 = 0xF4D6F548L;
    uint64_t *****l_2306 = &g_608;
    int32_t *l_2334 = &g_1013;
    uint16_t l_2386 = 0UL;
    union U1 ***l_2399 = (void*)0;
    uint64_t l_2433 = 0xB555A2FE9D70BD93LL;
    struct S0 ***l_2445 = &g_1908;
    uint32_t l_2481[2];
    union U1 l_2493 = {-5L};
    uint16_t l_2520 = 0UL;
    uint16_t *** const *l_2527 = (void*)0;
    union U1 *l_2530[3][2] = {{&l_2493,&g_121},{&g_121,&l_2493},{&g_121,&g_121}};
    uint8_t l_2531 = 252UL;
    int16_t *l_2542 = &g_256;
    const union U1 *l_2544[5][2][6] = {{{&l_2493,&g_874,&l_2493,(void*)0,&g_121,&g_874},{&g_874,&g_121,(void*)0,(void*)0,(void*)0,(void*)0}},{{&l_2493,&l_2493,&g_121,(void*)0,&l_2493,&g_874},{&g_874,&l_2493,&l_2493,&g_121,&g_874,&g_121}},{{(void*)0,&g_874,&l_2493,&g_874,&l_2493,&g_874},{&g_121,&g_874,&g_121,&g_874,&g_874,(void*)0}},{{&g_874,&g_874,(void*)0,&l_2493,&g_121,&g_874},{&g_874,&g_874,&l_2493,&l_2493,&g_874,&g_874}},{{&g_874,&g_874,&g_874,&l_2493,&l_2493,&g_121},{&l_2493,&g_874,&g_121,(void*)0,&g_874,(void*)0}}};
    const union U1 **l_2543 = &l_2544[3][1][3];
    int64_t ***l_2549 = &g_674;
    uint8_t l_2556[4][3] = {{255UL,255UL,255UL},{255UL,255UL,255UL},{255UL,255UL,255UL},{255UL,255UL,255UL}};
    int32_t *l_2559[7][6] = {{&g_2318,(void*)0,&l_2135,&g_70[0],&g_1013,&g_70[0]},{&l_2135,&g_2318,&l_2135,(void*)0,&l_2251,&l_2135},{&l_2135,(void*)0,&g_70[0],&g_1013,&g_70[0],&g_70[0]},{&g_1013,&g_70[0],&g_70[0],&g_1013,&g_70[0],(void*)0},{&l_2135,&l_2135,&l_2251,(void*)0,&l_2135,&g_2318},{&l_2135,&g_70[0],&g_1013,&g_70[0],&l_2135,(void*)0},{&g_2318,&l_2135,&g_70[1],(void*)0,&g_70[0],&l_2251}};
    uint16_t l_2560 = 65527UL;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_111[i] = &g_112;
    for (i = 0; i < 2; i++)
        l_2481[i] = 6UL;
    for (g_2[6] = 0; (g_2[6] < (-17)); g_2[6] = safe_sub_func_int64_t_s_s(g_2[6], 7))
    { 
        uint64_t *l_15[6][6] = {{&g_16[1],(void*)0,&g_16[1],(void*)0,(void*)0,(void*)0},{&g_16[1],&g_16[1],&g_16[1],(void*)0,&g_16[1],&g_16[1]},{&g_16[1],(void*)0,(void*)0,(void*)0,(void*)0,&g_16[1]},{&g_16[1],(void*)0,&g_16[1],(void*)0,(void*)0,(void*)0},{&g_16[1],&g_16[1],&g_16[1],(void*)0,&g_16[1],&g_16[1]},{&g_16[1],(void*)0,(void*)0,(void*)0,(void*)0,&g_16[1]}};
        const struct S0 l_44 = {0L,1UL,65535UL,0UL,0x64069A3E2BE8CA40LL,0UL};
        int16_t *l_47 = &g_48[5];
        union U1 l_50 = {0x52B7283DL};
        int8_t *l_701 = &g_61;
        int8_t **l_700 = &l_701;
        uint8_t *l_2084 = &g_874.f3;
        union U1 ***l_2096 = &g_686;
        int32_t l_2116 = 1L;
        int32_t l_2140[4] = {7L,7L,7L,7L};
        uint32_t ***l_2150 = &g_557;
        int32_t *l_2204 = &l_2135;
        uint64_t ** const *l_2227 = &g_610[4];
        uint64_t ** const **l_2226 = &l_2227;
        uint32_t **l_2282 = &l_2216;
        uint32_t ***l_2281 = &l_2282;
        uint32_t ****l_2280 = &l_2281;
        int32_t **l_2332 = (void*)0;
        int32_t **l_2333[1];
        uint64_t **l_2358 = &g_611;
        uint8_t **l_2413 = &l_2084;
        const uint8_t l_2414 = 251UL;
        uint32_t l_2427[3][4][4] = {{{1UL,4294967294UL,1UL,4294967294UL},{4294967294UL,0xFB7F7314L,0UL,4294967294UL},{0UL,4294967294UL,0UL,0UL},{4294967294UL,4294967294UL,1UL,1UL}},{{4294967294UL,0xFB7F7314L,0UL,4294967294UL},{0UL,1UL,0UL,0UL},{4294967294UL,1UL,1UL,4294967294UL},{1UL,0xFB7F7314L,0xFB7F7314L,1UL}},{{0UL,4294967294UL,0xFB7F7314L,0UL},{1UL,4294967294UL,1UL,4294967294UL},{4294967294UL,0xFB7F7314L,0UL,4294967294UL},{0UL,4294967294UL,0UL,0UL}}};
        int32_t l_2430 = (-1L);
        uint32_t l_2431 = 4294967290UL;
        struct S0 ***l_2444 = &g_1908;
        int32_t l_2500 = 0x5235FB33L;
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_2333[i] = (void*)0;
    }
    (*l_2334) = (safe_mul_func_int8_t_s_s(((((*l_2334) >= (safe_rshift_func_uint16_t_u_s(0UL, 7))) , &g_698) == l_2527), (7L & (0xA1B1FD5959697A26LL | (((safe_sub_func_uint32_t_u_u((((*g_686) = l_2530[1][1]) != &l_2493), 0x7AAFB623L)) , l_2531) < (-1L))))));
    g_2318 ^= (safe_lshift_func_int8_t_s_s(((((**g_686) , (safe_mod_func_int32_t_s_s((((safe_mul_func_uint16_t_u_u(((*g_1723) >= (safe_mod_func_uint32_t_u_u((safe_mod_func_int16_t_s_s((0x74EF8BDCD6B1DEE5LL & (l_2542 != (void*)0)), (((**g_699) = 1UL) & ((*l_2334) = (((*l_2542) = g_112) && 0xC1A3L))))), g_1724))), 9UL)) && (*l_2334)) , (*g_561)), 0xD97C3141L))) , l_2543) == &l_2544[3][1][3]), 0));
    g_2[6] &= (((safe_mul_func_uint8_t_u_u((safe_mul_func_int16_t_s_s(((void*)0 != l_2549), (safe_sub_func_uint16_t_u_u(0xE9F8L, ((safe_lshift_func_int16_t_s_s(((((safe_mod_func_int8_t_s_s(((((l_2556[1][0] & ((((((*g_278) < ((*g_687) , (safe_add_func_int16_t_s_s(g_1515, (*l_2334))))) >= 0xFBDE6B57360E75E4LL) && (*l_2334)) || (*l_2334)) && 0x8EEDL)) <= (*g_278)) | 0UL) > (*l_2334)), (*l_2334))) < (*l_2334)) , 0x2DA02071L) != g_2377[3][5]), (*l_2334))) != (*l_2334)))))), 8L)) <= (*g_1723)) >= (*l_2334));
    l_2560++;
    return g_70[2];
}



static uint8_t  func_7(uint64_t  p_8, int8_t * p_9, int8_t * p_10, int8_t * p_11, struct S0  p_12)
{ 
    uint16_t **l_1621[1][6][2] = {{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}}};
    union U1 ***l_1623[4][6] = {{&g_686,&g_686,&g_686,&g_686,&g_686,&g_686},{&g_686,&g_686,&g_686,&g_686,&g_686,&g_686},{&g_686,&g_686,&g_686,&g_686,&g_686,&g_686},{&g_686,&g_686,&g_686,&g_686,&g_686,&g_686}};
    union U1 ****l_1622[4];
    int64_t *l_1625 = &g_694;
    int32_t l_1626[5][5][5] = {{{0x2FD00501L,(-1L),(-1L),0x2FD00501L,0L},{0xC6668DB9L,(-1L),6L,0xC6668DB9L,0L},{0x2FD00501L,6L,6L,0x2FD00501L,0xA532A716L},{0x2FD00501L,(-1L),(-1L),0x2FD00501L,0L},{0xC6668DB9L,(-1L),6L,0xC6668DB9L,0L}},{{0x2FD00501L,6L,6L,0x2FD00501L,0xA532A716L},{0x2FD00501L,(-1L),(-1L),0x2FD00501L,0L},{0xC6668DB9L,(-1L),6L,0xC6668DB9L,0L},{0x2FD00501L,6L,6L,0x2FD00501L,0xA532A716L},{0x2FD00501L,(-1L),(-1L),0x2FD00501L,0L}},{{0xC6668DB9L,(-1L),6L,0xC6668DB9L,0L},{0x2FD00501L,6L,6L,0x2FD00501L,0xA532A716L},{0x2FD00501L,(-1L),(-1L),0x2FD00501L,0L},{0xC6668DB9L,(-1L),6L,0xC6668DB9L,0L},{0x2FD00501L,6L,6L,0x2FD00501L,0xA532A716L}},{{0x2FD00501L,(-1L),(-1L),0x2FD00501L,0L},{0xC6668DB9L,(-1L),6L,0xC6668DB9L,0L},{0x2FD00501L,6L,6L,0x2FD00501L,0xA532A716L},{0x2FD00501L,(-1L),(-1L),0x2FD00501L,0L},{0xC6668DB9L,(-1L),6L,0xC6668DB9L,0L}},{{0x2FD00501L,6L,6L,0x2FD00501L,0xA532A716L},{0x2FD00501L,(-1L),(-1L),0x8A0F3025L,(-1L)},{0xE7B379DDL,0xC6668DB9L,(-3L),0xE7B379DDL,(-1L)},{0x8A0F3025L,(-3L),(-3L),0x8A0F3025L,0x927468ABL},{0x8A0F3025L,0xC6668DB9L,0x2FD00501L,0x8A0F3025L,(-1L)}}};
    int32_t l_1785 = 1L;
    int16_t *l_1806 = &g_48[3];
    const int32_t *l_1808 = &l_1785;
    int32_t l_1866 = (-8L);
    int16_t l_1877 = 0L;
    uint64_t *****l_1882 = &g_608;
    int32_t l_1884[4][2][6] = {{{(-1L),0x51CC2414L,0L,0x999484F5L,0x92F6A640L,0x999484F5L},{0xCA418173L,0x51CC2414L,0xCA418173L,(-6L),0x6CA78089L,0L}},{{0x384AB8B9L,0x9F2D87B4L,0xCA418173L,0x384AB8B9L,0x51CC2414L,0x999484F5L},{0x999484F5L,1L,0L,0x384AB8B9L,0x378BB950L,(-6L)}},{{0x384AB8B9L,0x378BB950L,(-6L),(-6L),0x378BB950L,0x384AB8B9L},{0xCA418173L,1L,(-1L),0x999484F5L,0x51CC2414L,0x384AB8B9L}},{{(-1L),0x9F2D87B4L,(-6L),0L,0x6CA78089L,(-6L)},{(-1L),0x51CC2414L,0L,0x999484F5L,0x92F6A640L,0x999484F5L}}};
    uint64_t l_1888 = 0x17B56E250DAE252BLL;
    uint32_t l_1954[5];
    struct S0 l_1964[2] = {{0xBA3E545BL,0x00B1D2E1L,0x893FL,0xBABAFAF8L,0x8F4DA00AEB8F7C41LL,1UL},{0xBA3E545BL,0x00B1D2E1L,0x893FL,0xBABAFAF8L,0x8F4DA00AEB8F7C41LL,1UL}};
    int32_t *l_2078 = &l_1626[4][3][0];
    int32_t *l_2079 = &g_70[0];
    int32_t *l_2080[1][6];
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_1622[i] = &l_1623[2][2];
    for (i = 0; i < 5; i++)
        l_1954[i] = 0xB7CDD45DL;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 6; j++)
            l_2080[i][j] = (void*)0;
    }
    return (*l_2079);
}



static int8_t * func_20(int8_t * p_21, int8_t  p_22, uint64_t * p_23)
{ 
    int32_t *l_1294 = &g_70[0];
    int8_t l_1304 = 0xCAL;
    struct S0 l_1307 = {0L,0x73D6D121L,0x971FL,0x655CF0DFL,-4L,1UL};
    int16_t *l_1308 = &g_256;
    int16_t *l_1309 = (void*)0;
    int16_t *l_1310[2][3][1];
    int16_t l_1311[4] = {0x6F1BL,0x6F1BL,0x6F1BL,0x6F1BL};
    uint64_t *l_1327[2];
    int32_t l_1413 = (-8L);
    int32_t l_1414 = 0L;
    int32_t l_1417 = 0L;
    int32_t l_1419 = (-7L);
    int32_t l_1422 = 0L;
    int32_t l_1423 = 1L;
    int32_t l_1425 = (-7L);
    int8_t *l_1489 = &g_61;
    uint32_t *l_1504 = &g_52.f3;
    uint32_t ** const l_1503 = &l_1504;
    uint64_t ****l_1511 = &g_609;
    uint32_t l_1531 = 0x80BC7552L;
    const uint32_t ***l_1571 = (void*)0;
    uint32_t ***l_1573 = &g_557;
    int32_t *l_1609 = &g_70[2];
    int32_t *l_1610[1][3][3];
    int8_t l_1611 = 0x68L;
    int16_t l_1612 = 0x39BDL;
    int32_t l_1613 = 0xA7025A17L;
    uint64_t l_1614 = 3UL;
    int8_t *l_1617 = &g_61;
    int i, j, k;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 1; k++)
                l_1310[i][j][k] = &g_48[2];
        }
    }
    for (i = 0; i < 2; i++)
        l_1327[i] = &g_312;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 3; k++)
                l_1610[i][j][k] = &g_70[0];
        }
    }
    for (g_1196.f3 = (-8); (g_1196.f3 == 47); g_1196.f3 = safe_add_func_int32_t_s_s(g_1196.f3, 2))
    { 
        int32_t **l_1295 = &g_278;
        (*l_1295) = l_1294;
    }
    if ((((((((safe_div_func_uint16_t_u_u((0x64A3L < (safe_lshift_func_int16_t_s_s(((((~((-4L) && (+l_1304))) & ((void*)0 != &l_1294)) || ((g_48[5] ^= ((*l_1308) = ((((safe_mod_func_uint16_t_u_u(((0x39900CF5L == p_22) ^ (*l_1294)), 0x55F6L)) , 4294967295UL) , l_1307) , g_312))) < (*l_1294))) == 0x6220L), 13))), g_356)) > 0UL) < p_22) | 5L) || l_1311[0]) >= (*l_1294)) > p_22))
    { 
        uint64_t *l_1324 = (void*)0;
        int32_t l_1336 = 8L;
        int32_t l_1339 = 0x0C50E9D2L;
        for (l_1307.f0 = 0; (l_1307.f0 >= (-11)); l_1307.f0 = safe_sub_func_uint64_t_u_u(l_1307.f0, 4))
        { 
            int32_t *l_1314 = &g_2[6];
            int32_t **l_1315 = &g_278;
            uint64_t **l_1325 = &l_1324;
            uint64_t **l_1326 = &g_611;
            int32_t *l_1331 = (void*)0;
            int32_t *l_1332 = &g_1013;
            const int8_t *l_1335 = &g_19[0][0][1];
            int64_t *l_1337 = (void*)0;
            int64_t *l_1338[5][2] = {{&g_694,&g_1196.f4},{&g_694,&g_1196.f4},{&g_694,&g_1196.f4},{&g_694,&g_1196.f4},{&g_694,&g_1196.f4}};
            int i, j;
            (*l_1315) = l_1314;
            l_1339 &= (safe_div_func_uint32_t_u_u((((safe_rshift_func_int16_t_s_s((safe_mul_func_uint8_t_u_u((((*l_1294) <= (((*l_1325) = l_1324) == (l_1327[0] = p_23))) >= (!(safe_add_func_int32_t_s_s((((*g_18) = ((((*l_1332) &= p_22) ^ (*g_278)) && ((18446744073709551607UL && (g_1196.f4 = ((((((void*)0 != l_1335) | 0xEF6EL) && 0UL) ^ p_22) <= l_1336))) , (*l_1294)))) < (*l_1294)), l_1336)))), g_48[3])), g_2[2])) >= p_22) || 0x1DFFE9EF4E786BB3LL), 4294967289UL));
        }
    }
    else
    { 
        const uint32_t l_1345 = 0UL;
        int8_t *l_1364 = &l_1304;
        struct S0 l_1372 = {0xDDA0222EL,0x4278220DL,0x3083L,0x4BD0D367L,0x528D3F89A015C4A0LL,65529UL};
        int32_t *l_1377 = (void*)0;
        int32_t l_1410 = 0x7A889703L;
        int32_t l_1412[2][3];
        uint8_t l_1426 = 248UL;
        int i, j;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 3; j++)
                l_1412[i][j] = (-1L);
        }
        (*g_686) = (*g_686);
        for (g_1196.f4 = (-8); (g_1196.f4 == 21); g_1196.f4++)
        { 
            uint64_t l_1361 = 0x4C5F73687BC98C2FLL;
            union U1 l_1391 = {0xE77C66F3L};
            int32_t *l_1407 = &g_1013;
            int32_t l_1409 = 7L;
            int32_t l_1411 = 0x0C5E5130L;
            int32_t l_1415 = 6L;
            int32_t l_1416 = 0L;
            int32_t l_1418 = 0x41FB235AL;
            int32_t l_1420 = 0xCBD3E101L;
            int32_t l_1424[4];
            struct S0 l_1465 = {0L,0UL,6UL,0x1B61066AL,0L,0x28C2L};
            int8_t *l_1488 = &l_1304;
            int i;
            for (i = 0; i < 4; i++)
                l_1424[i] = 3L;
            if (((((safe_unary_minus_func_int8_t_s(((*g_278) , (((0UL | (-1L)) , (safe_mul_func_int16_t_s_s(0L, l_1345))) & (6UL != (g_256 |= (safe_lshift_func_int8_t_s_u((safe_mod_func_int8_t_s_s((safe_mod_func_uint32_t_u_u((safe_add_func_uint8_t_u_u((safe_lshift_func_int16_t_s_u(2L, l_1345)), p_22)), g_112)), 0x28L)), p_22)))))))) & p_22) | 0x18A5L) && (*g_278)))
            { 
                int32_t *l_1356 = &g_70[1];
                int32_t *l_1357 = &g_1013;
                int32_t *l_1358 = &g_1013;
                int32_t *l_1359 = &g_70[0];
                int32_t *l_1360 = &g_1013;
                --l_1361;
            }
            else
            { 
                return g_1365;
            }
        }
        for (l_1372.f1 = 0; (l_1372.f1 >= 9); ++l_1372.f1)
        { 
            const int32_t *l_1492 = &l_1412[1][2];
            const int32_t **l_1493 = (void*)0;
            const int32_t **l_1494 = (void*)0;
            const int32_t **l_1495 = &g_561;
            int32_t *l_1505 = &l_1410;
            g_561 = &g_2[6];
            (*l_1294) = (-9L);
            (*l_1495) = l_1492;
            (*l_1505) = (safe_add_func_int64_t_s_s((!p_22), ((*p_23) &= (((**g_699) != ((*l_1492) , ((((((*l_1294) = (safe_mod_func_uint64_t_u_u((0xF6EBL > (((safe_add_func_int64_t_s_s(((((*g_557) = l_1294) != l_1294) | (*l_1294)), p_22)) || g_433) != p_22)), p_22))) ^ (*g_561)) , (*l_1294)) , (void*)0) == l_1503))) < g_19[4][4][1]))));
            (*l_1495) = &l_1417;
        }
        for (g_52.f2 = 0; (g_52.f2 <= 2); g_52.f2 += 1)
        { 
            int i;
            g_70[g_52.f2] &= 0xC6739D05L;
        }
    }
    for (l_1307.f1 = 0; (l_1307.f1 < 35); l_1307.f1 = safe_add_func_uint8_t_u_u(l_1307.f1, 4))
    { 
        union U1 l_1514 = {0x8905A923L};
        int32_t l_1527 = (-1L);
        int32_t l_1529[1];
        int32_t *l_1536 = &l_1414;
        const struct S0 *l_1543 = (void*)0;
        union U1 *l_1553 = &g_121;
        uint64_t *** const *l_1568 = &g_609;
        uint64_t *** const **l_1567[3][4][7] = {{{&l_1568,(void*)0,&l_1568,&l_1568,(void*)0,&l_1568,(void*)0},{&l_1568,&l_1568,&l_1568,&l_1568,(void*)0,(void*)0,&l_1568},{&l_1568,(void*)0,&l_1568,&l_1568,(void*)0,(void*)0,&l_1568},{&l_1568,&l_1568,&l_1568,&l_1568,(void*)0,&l_1568,(void*)0}},{{&l_1568,(void*)0,(void*)0,&l_1568,&l_1568,&l_1568,(void*)0},{&l_1568,&l_1568,&l_1568,&l_1568,(void*)0,&l_1568,&l_1568},{&l_1568,&l_1568,(void*)0,&l_1568,&l_1568,&l_1568,&l_1568},{&l_1568,&l_1568,&l_1568,(void*)0,(void*)0,&l_1568,(void*)0}},{{&l_1568,&l_1568,&l_1568,(void*)0,&l_1568,&l_1568,&l_1568},{(void*)0,&l_1568,&l_1568,&l_1568,(void*)0,(void*)0,&l_1568},{&l_1568,&l_1568,&l_1568,&l_1568,(void*)0,&l_1568,&l_1568},{(void*)0,&l_1568,(void*)0,&l_1568,(void*)0,&l_1568,&l_1568}}};
        const uint32_t ****l_1572[3];
        uint32_t ***l_1574[7];
        int8_t *l_1605 = &g_61;
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_1529[i] = 0xCAF6A446L;
        for (i = 0; i < 3; i++)
            l_1572[i] = &l_1571;
        for (i = 0; i < 7; i++)
            l_1574[i] = &g_557;
        for (g_1013 = 2; (g_1013 >= 0); g_1013 -= 1)
        { 
            int8_t *l_1518 = &g_61;
            struct S0 l_1520 = {0x4AF8B2F0L,4294967295UL,0x045EL,0UL,0L,0xEA51L};
            int32_t l_1528 = 0x95783B02L;
            int32_t l_1530[1];
            int32_t *l_1534 = (void*)0;
            int16_t l_1544 = (-1L);
            uint8_t *l_1565 = &g_1451[1][2][5];
            int i;
            for (i = 0; i < 1; i++)
                l_1530[i] = 3L;
        }
        (*l_1294) = ((l_1571 = l_1571) != (l_1574[4] = l_1573));
        for (p_22 = 0; p_22 < 2; p_22 += 1)
        {
            for (l_1307.f3 = 0; l_1307.f3 < 3; l_1307.f3 += 1)
            {
                for (g_112 = 0; g_112 < 1; g_112 += 1)
                {
                    l_1310[p_22][l_1307.f3][g_112] = &g_48[5];
                }
            }
        }
        if ((*l_1536))
            continue;
        if (((((safe_div_func_int64_t_s_s((safe_rshift_func_int16_t_s_s(p_22, ((safe_rshift_func_int16_t_s_u((safe_div_func_uint16_t_u_u(0x5111L, ((*g_278) & 0xAD25C92CL))), (p_22 >= 0x685CL))) != ((**g_699) = (*l_1294))))), (*l_1294))) <= (*g_278)) , (*l_1536)) > (*l_1294)))
        { 
            const uint64_t l_1596[1][5] = {{0xED4704F383253C89LL,0xED4704F383253C89LL,0xED4704F383253C89LL,0xED4704F383253C89LL,0xED4704F383253C89LL}};
            int8_t *l_1604[2][7][3] = {{{&g_19[0][0][1],&g_19[0][0][1],&g_19[0][0][1]},{&g_61,&g_19[2][2][5],&g_61},{&g_19[0][0][1],&g_19[0][0][1],&g_19[0][0][1]},{&g_61,&g_19[2][2][5],&g_61},{&g_19[0][0][1],&g_19[0][0][1],&g_19[0][0][1]},{&g_61,&g_19[2][2][5],&g_61},{&g_19[0][0][1],&g_19[0][0][1],&l_1304}},{{&g_61,&g_61,&g_61},{&l_1304,&g_19[0][0][1],&l_1304},{&g_61,&g_61,&g_61},{&l_1304,&g_19[0][0][1],&l_1304},{&g_61,&g_61,&g_61},{&l_1304,&g_19[0][0][1],&l_1304},{&g_61,&g_61,&g_61}}};
            int i, j, k;
            for (g_61 = 0; (g_61 >= 0); g_61 -= 1)
            { 
                uint32_t *l_1595 = &g_1515;
                int32_t **l_1597 = &l_1536;
                int i;
                l_1529[g_61] ^= (safe_sub_func_int8_t_s_s(((((((*l_1595) |= (safe_div_func_uint16_t_u_u((safe_sub_func_int8_t_s_s(((1L >= ((safe_lshift_func_uint8_t_u_s(p_22, (((**g_686) = (*g_687)) , ((safe_lshift_func_int16_t_s_u(((g_1196.f4 || (*l_1294)) ^ (((safe_mul_func_int16_t_s_s((*l_1536), 1UL)) || (*p_23)) == p_22)), 12)) , (*l_1536))))) == 0L)) <= p_22), p_22)), p_22))) ^ p_22) > (*p_23)) != (*g_18)) && 0x006F74B2L), l_1596[0][2]));
                (*l_1597) = &g_2[6];
                for (l_1307.f5 = 1; (l_1307.f5 <= 4); l_1307.f5 += 1)
                { 
                    int32_t l_1598 = 0x927F9367L;
                    int8_t **l_1600 = (void*)0;
                    int8_t ***l_1599 = &l_1600;
                    int32_t * const l_1603 = (void*)0;
                    int i;
                    (*l_1294) &= p_22;
                    (*l_1294) ^= (l_1598 && ((((*l_1599) = (g_1062[g_61] = g_1062[(g_61 + 2)])) != (void*)0) & ((g_1515 == g_19[0][0][4]) > ((safe_add_func_int32_t_s_s(((((void*)0 == l_1603) && 1UL) && p_22), 0x87D9A600L)) > l_1596[0][2]))));
                    return l_1605;
                }
            }
            if ((((**g_699) = (p_22 || (*g_278))) ^ p_22))
            { 
                if (l_1596[0][2])
                    break;
            }
            else
            { 
                (*l_1294) = (-9L);
            }
        }
        else
        { 
            uint32_t l_1606 = 1UL;
            ++l_1606;
            if (p_22)
                continue;
        }
    }
    l_1614++;
    return l_1617;
}



static int8_t * func_24(int8_t * p_25)
{ 
    uint64_t l_706 = 18446744073709551606UL;
    int32_t l_707[2][6] = {{0x81845445L,0x27D66554L,0x27D66554L,0x81845445L,0x9A1DABBBL,0x81845445L},{0x81845445L,0x9A1DABBBL,0x81845445L,0x27D66554L,0x27D66554L,0x81845445L}};
    uint32_t *l_710 = (void*)0;
    int32_t l_711 = (-9L);
    uint16_t *l_718 = &g_647;
    uint64_t **l_742 = &g_611;
    int32_t *l_762[4][1];
    uint16_t ****l_773 = (void*)0;
    uint64_t l_806 = 4UL;
    uint16_t * const *l_814 = &g_311[0][1];
    uint16_t * const **l_813[4][5][6] = {{{&l_814,&l_814,(void*)0,&l_814,&l_814,(void*)0},{&l_814,&l_814,(void*)0,&l_814,&l_814,&l_814},{&l_814,&l_814,&l_814,(void*)0,&l_814,(void*)0},{&l_814,&l_814,&l_814,(void*)0,&l_814,&l_814},{&l_814,(void*)0,(void*)0,&l_814,(void*)0,(void*)0}},{{&l_814,(void*)0,(void*)0,&l_814,&l_814,&l_814},{(void*)0,&l_814,&l_814,&l_814,(void*)0,&l_814},{(void*)0,&l_814,&l_814,&l_814,&l_814,&l_814},{&l_814,(void*)0,&l_814,&l_814,(void*)0,&l_814},{&l_814,(void*)0,&l_814,&l_814,&l_814,&l_814}},{{&l_814,&l_814,&l_814,&l_814,&l_814,&l_814},{&l_814,&l_814,&l_814,&l_814,&l_814,&l_814},{&l_814,&l_814,(void*)0,&l_814,&l_814,&l_814},{&l_814,&l_814,&l_814,&l_814,&l_814,(void*)0},{(void*)0,&l_814,&l_814,&l_814,&l_814,(void*)0}},{{(void*)0,&l_814,&l_814,&l_814,&l_814,&l_814},{&l_814,(void*)0,(void*)0,&l_814,(void*)0,&l_814},{&l_814,&l_814,&l_814,(void*)0,&l_814,&l_814},{&l_814,&l_814,&l_814,(void*)0,&l_814,&l_814},{&l_814,&l_814,&l_814,&l_814,(void*)0,&l_814}}};
    struct S0 l_845[7] = {{0x84426683L,8UL,65529UL,2UL,-1L,65535UL},{0x84426683L,8UL,65529UL,2UL,-1L,65535UL},{0x84426683L,8UL,65529UL,2UL,-1L,65535UL},{0x84426683L,8UL,65529UL,2UL,-1L,65535UL},{0x84426683L,8UL,65529UL,2UL,-1L,65535UL},{0x84426683L,8UL,65529UL,2UL,-1L,65535UL},{0x84426683L,8UL,65529UL,2UL,-1L,65535UL}};
    uint64_t ****l_875[3];
    int64_t *l_908 = &g_694;
    uint16_t l_1032 = 0x8D45L;
    uint32_t l_1038 = 0x828A645CL;
    union U1 l_1060 = {-7L};
    int64_t l_1085 = 0xBC278441BC5BF682LL;
    int8_t *l_1131 = &g_61;
    int8_t l_1160 = 0xD2L;
    uint8_t l_1288[3];
    int8_t *l_1291 = (void*)0;
    int i, j, k;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 1; j++)
            l_762[i][j] = &l_711;
    }
    for (i = 0; i < 3; i++)
        l_875[i] = &g_609;
    for (i = 0; i < 3; i++)
        l_1288[i] = 0x16L;
    if ((((safe_mod_func_uint32_t_u_u(g_256, (((*g_611) = ((safe_div_func_uint32_t_u_u((((((((l_707[0][4] = l_706) , (safe_div_func_uint8_t_u_u(g_312, (*g_18)))) || (g_121.f2 = 6UL)) > ((l_711 = ((**g_699) &= l_706)) ^ ((*l_718) = ((((safe_lshift_func_int8_t_s_u((safe_lshift_func_uint8_t_u_s(((safe_div_func_int8_t_s_s(0x75L, (*g_18))) == l_706), 7)), 4)) >= (*g_278)) <= (-1L)) ^ g_52.f4)))) == l_706) ^ 0xD1L) , g_2[6]), 0xCFB405DCL)) < g_16[1])) && l_711))) & 0x55A83D3622710D1ELL) && 0x83C1L))
    { 
        int32_t *l_719 = &g_70[0];
        (*l_719) = l_711;
    }
    else
    { 
        uint32_t l_737 = 3UL;
        uint32_t * const *l_744 = &g_558;
        int32_t l_749 = 0x0C1536A3L;
        int64_t *l_751 = &g_694;
        int64_t **l_750 = &l_751;
        const int64_t *l_754[5][5] = {{&g_694,&g_694,&g_52.f4,&g_694,&g_694},{&g_694,&g_694,&g_52.f4,&g_694,&g_694},{&g_694,&g_694,&g_52.f4,&g_694,&g_694},{&g_694,&g_694,&g_52.f4,&g_694,&g_694},{&g_694,&g_694,&g_52.f4,&g_694,&g_694}};
        const int64_t **l_753 = &l_754[2][0];
        int32_t l_789 = (-1L);
        int32_t l_791 = 2L;
        int32_t l_793[6] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
        uint64_t ***l_858 = &g_610[2];
        uint16_t l_881[6] = {1UL,65531UL,65531UL,1UL,65531UL,65531UL};
        union U1 *l_909 = &g_874;
        uint64_t l_925[2];
        struct S0 l_928 = {-1L,0xC6111204L,1UL,18446744073709551615UL,6L,9UL};
        uint32_t ***l_947 = &g_557;
        struct S0 l_964 = {1L,0UL,65535UL,0xC811DC18L,-1L,0x9164L};
        const union U1 *l_988 = &g_874;
        const union U1 ** const l_987 = &l_988;
        struct S0 l_1029[1] = {{0x749D1480L,0xD911630AL,0UL,0x518B4806L,1L,0x4870L}};
        int8_t ** const l_1059 = &g_18;
        int8_t ** const *l_1058 = &l_1059;
        uint8_t l_1087 = 1UL;
        struct S0 *l_1177 = (void*)0;
        struct S0 **l_1176 = &l_1177;
        uint32_t l_1183[3];
        int32_t l_1197 = 0xE0D152A6L;
        uint64_t ** const *l_1233 = &g_610[4];
        uint64_t ** const **l_1232[2][2];
        uint16_t **l_1261[5] = {&l_718,&l_718,&l_718,&l_718,&l_718};
        const uint64_t l_1272 = 0xCC515CD15C52485ELL;
        uint16_t l_1277 = 0UL;
        int16_t l_1287 = 0xB456L;
        int i, j;
        for (i = 0; i < 2; i++)
            l_925[i] = 0UL;
        for (i = 0; i < 3; i++)
            l_1183[i] = 0UL;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 2; j++)
                l_1232[i][j] = &l_1233;
        }
lbl_860:
        for (g_433 = 13; (g_433 > 30); g_433 = safe_add_func_uint16_t_u_u(g_433, 2))
        { 
            uint16_t l_730 = 65532UL;
            uint32_t **l_743 = &g_558;
            int32_t l_745[6] = {0xD12F1490L,0xD12F1490L,0xD12F1490L,0xD12F1490L,0xD12F1490L,0xD12F1490L};
            int32_t l_746 = 0x6B901076L;
            int16_t *l_747 = &g_48[1];
            int32_t *l_748[4];
            int64_t ***l_752 = &l_750;
            struct S0 l_765 = {0xB05D79D8L,0UL,0UL,0x093FE108L,0x212803B1A783C31ALL,65532UL};
            uint64_t l_794 = 9UL;
            uint32_t l_800 = 0UL;
            int8_t l_835 = (-1L);
            uint16_t ***l_855 = (void*)0;
            int32_t **l_857 = &l_762[2][0];
            int i;
            for (i = 0; i < 4; i++)
                l_748[i] = &l_707[0][4];
            g_70[0] ^= (l_749 = (safe_mod_func_uint32_t_u_u(((((((*l_747) = ((((safe_lshift_func_uint8_t_u_s((((safe_div_func_uint64_t_u_u((l_745[3] = (safe_div_func_uint8_t_u_u(((l_730 = 0x26202FF6L) , ((((safe_lshift_func_uint16_t_u_s((safe_mul_func_uint8_t_u_u(g_52.f5, (safe_sub_func_int32_t_s_s(((l_737 , (((safe_add_func_int8_t_s_s((*p_25), ((safe_lshift_func_int8_t_s_u((((l_742 == (void*)0) | (l_743 == l_744)) >= l_730), l_737)) , 0x85L))) && l_730) >= l_707[0][4])) >= l_706), l_730)))), l_707[0][5])) >= l_730) <= (*p_25)) <= l_730)), l_737))), l_737)) > (*p_25)) ^ 0UL), (*p_25))) & l_737) && (*g_18)) ^ l_746)) >= l_737) && 1L) <= (**g_699)) >= 0x9C67AD92L), l_737)));
        }
        if (((l_845[5] , &g_70[2]) == (void*)0))
        { 
lbl_930:
            l_762[3][0] = &l_711;
        }
        else
        { 
            uint64_t ***l_859 = &g_610[4];
            int32_t l_877 = 0x6CD0D218L;
            int32_t l_878 = 0x20814919L;
            struct S0 l_914[4][5][2] = {{{{-10L,0x837FE564L,0x05AAL,0xB9523B84L,0xB347C3DB30B72673LL,0x149BL},{0xA6D6611BL,0x2B6A277FL,3UL,0x71885C4DL,1L,1UL}},{{0x2E2AA4D6L,0x76C7BB1FL,65528UL,0x12FA94B0L,0x60F567CC45965949LL,65530UL},{-1L,0x9CED8709L,65535UL,1UL,-1L,0x36C8L}},{{-2L,7UL,0x3D0DL,0x86396E17L,0xCC5BCCD53AEC9758LL,65529UL},{0x2E2AA4D6L,0x76C7BB1FL,65528UL,0x12FA94B0L,0x60F567CC45965949LL,65530UL}},{{-1L,0x9CED8709L,65535UL,1UL,-1L,0x36C8L},{0xA6D6611BL,0x2B6A277FL,3UL,0x71885C4DL,1L,1UL}},{{-1L,0x9CED8709L,65535UL,1UL,-1L,0x36C8L},{0x2E2AA4D6L,0x76C7BB1FL,65528UL,0x12FA94B0L,0x60F567CC45965949LL,65530UL}}},{{{-2L,7UL,0x3D0DL,0x86396E17L,0xCC5BCCD53AEC9758LL,65529UL},{-1L,0x9CED8709L,65535UL,1UL,-1L,0x36C8L}},{{0x2E2AA4D6L,0x76C7BB1FL,65528UL,0x12FA94B0L,0x60F567CC45965949LL,65530UL},{0xA6D6611BL,0x2B6A277FL,3UL,0x71885C4DL,1L,1UL}},{{-10L,0x837FE564L,0x05AAL,0xB9523B84L,0xB347C3DB30B72673LL,0x149BL},{-10L,0x837FE564L,0x05AAL,0xB9523B84L,0xB347C3DB30B72673LL,0x149BL}},{{-2L,7UL,0x3D0DL,0x86396E17L,0xCC5BCCD53AEC9758LL,65529UL},{-10L,0x837FE564L,0x05AAL,0xB9523B84L,0xB347C3DB30B72673LL,0x149BL}},{{-10L,0x837FE564L,0x05AAL,0xB9523B84L,0xB347C3DB30B72673LL,0x149BL},{0xA6D6611BL,0x2B6A277FL,3UL,0x71885C4DL,1L,1UL}}},{{{0x2E2AA4D6L,0x76C7BB1FL,65528UL,0x12FA94B0L,0x60F567CC45965949LL,65530UL},{-1L,0x9CED8709L,65535UL,1UL,-1L,0x36C8L}},{{-2L,7UL,0x3D0DL,0x86396E17L,0xCC5BCCD53AEC9758LL,65529UL},{0x2E2AA4D6L,0x76C7BB1FL,65528UL,0x12FA94B0L,0x60F567CC45965949LL,65530UL}},{{-1L,0x9CED8709L,65535UL,1UL,-1L,0x36C8L},{0xA6D6611BL,0x2B6A277FL,3UL,0x71885C4DL,1L,1UL}},{{-1L,0x9CED8709L,65535UL,1UL,-1L,0x36C8L},{0x2E2AA4D6L,0x76C7BB1FL,65528UL,0x12FA94B0L,0x60F567CC45965949LL,65530UL}},{{-2L,7UL,0x3D0DL,0x86396E17L,0xCC5BCCD53AEC9758LL,65529UL},{-1L,0x9CED8709L,65535UL,1UL,-1L,0x36C8L}}},{{{0x2E2AA4D6L,0x76C7BB1FL,65528UL,0x12FA94B0L,0x60F567CC45965949LL,65530UL},{0xA6D6611BL,0x2B6A277FL,3UL,0x71885C4DL,1L,1UL}},{{-10L,0x837FE564L,0x05AAL,0xB9523B84L,0xB347C3DB30B72673LL,0x149BL},{-10L,0x837FE564L,0x05AAL,0xB9523B84L,0xB347C3DB30B72673LL,0x149BL}},{{-2L,7UL,0x3D0DL,0x86396E17L,0xCC5BCCD53AEC9758LL,65529UL},{-10L,0x837FE564L,0x05AAL,0xB9523B84L,0xB347C3DB30B72673LL,0x149BL}},{{-10L,0x837FE564L,0x05AAL,0xB9523B84L,0xB347C3DB30B72673LL,0x149BL},{0xA6D6611BL,0x2B6A277FL,3UL,0x71885C4DL,1L,1UL}},{{0x2E2AA4D6L,0x76C7BB1FL,65528UL,0x12FA94B0L,0x60F567CC45965949LL,65530UL},{-1L,0x9CED8709L,65535UL,1UL,-1L,0x36C8L}}}};
            int32_t *l_921 = (void*)0;
            int i, j, k;
            if ((0xEA75L ^ ((l_859 = l_858) != (*g_608))))
            { 
                struct S0 l_861 = {-9L,0UL,0xA147L,18446744073709551615UL,-8L,0UL};
                struct S0 *l_862 = &g_52;
                uint16_t **l_889 = &g_311[1][0];
                int32_t l_903[2][3] = {{8L,8L,8L},{0x8DCD28C9L,0x8DCD28C9L,0x8DCD28C9L}};
                uint64_t *l_919 = &l_706;
                int32_t l_924[4] = {0xD465E425L,0xD465E425L,0xD465E425L,0xD465E425L};
                int i, j;
                for (g_52.f4 = 5; (g_52.f4 >= 0); g_52.f4 -= 1)
                { 
                    int i;
                    if (l_737)
                        goto lbl_860;
                    l_845[(g_52.f4 + 1)] = l_845[g_52.f4];
                }
                (*l_862) = l_861;
                for (l_791 = (-10); (l_791 == 3); l_791 = safe_add_func_int32_t_s_s(l_791, 5))
                { 
                    union U1 *l_873 = &g_874;
                    int32_t l_876 = 0xCDCF941DL;
                    if ((*g_278))
                        break;
                    l_878 |= (((++(*l_718)) , ((safe_div_func_uint64_t_u_u((&g_609 == ((safe_rshift_func_int8_t_s_s((safe_add_func_uint8_t_u_u(0xB3L, (*p_25))), (((*l_873) = (**g_686)) , (*g_18)))) , l_875[1])), (l_876 && (*p_25)))) ^ 1UL)) & l_877);
                }
                for (g_52.f4 = 27; (g_52.f4 <= (-21)); --g_52.f4)
                { 
                    int32_t l_882 = 0L;
                    uint16_t *l_892[7][5] = {{(void*)0,&g_52.f5,(void*)0,(void*)0,&l_881[1]},{&l_845[5].f2,&l_881[1],&l_881[1],&l_881[1],&l_845[5].f2},{(void*)0,&l_881[1],&g_52.f5,&l_845[5].f2,&g_52.f5},{&g_52.f5,&g_52.f5,&l_881[1],&l_845[5].f2,&g_647},{&l_881[1],(void*)0,(void*)0,&l_881[1],&g_52.f5},{&l_881[1],&l_845[5].f2,(void*)0,(void*)0,&l_845[5].f2},{&g_52.f5,(void*)0,(void*)0,&l_881[1],&l_881[1]}};
                    int16_t *l_893[3];
                    int i, j;
                    for (i = 0; i < 3; i++)
                        l_893[i] = &g_48[1];
                    l_882 |= l_881[1];
                    g_70[0] = ((((safe_add_func_uint16_t_u_u(3UL, l_882)) ^ l_882) < (safe_div_func_uint64_t_u_u(((((l_749 = ((safe_mod_func_int32_t_s_s(((void*)0 == l_889), (safe_lshift_func_uint16_t_u_u((&l_881[1] != l_892[0][3]), 8)))) <= l_878)) == l_878) , 0x596FL) < 0x49A5L), 18446744073709551615UL))) ^ g_2[0]);
                    if ((*g_278))
                        continue;
                    g_70[0] = ((*g_18) && ((safe_rshift_func_int16_t_s_u(g_48[1], 5)) & 0x1E70L));
                    if (l_882)
                        continue;
                }
                if ((((l_861.f2 ^ l_877) && l_861.f3) , (safe_add_func_int16_t_s_s((((safe_sub_func_int8_t_s_s((!l_878), (safe_rshift_func_int8_t_s_u(l_903[0][1], 4)))) , (((safe_mod_func_uint8_t_u_u((safe_mod_func_uint8_t_u_u((((*l_750) == l_908) <= (-1L)), 0x75L)), l_861.f3)) && l_881[1]) ^ l_877)) , g_52.f1), 0x8096L))))
                { 
                    l_909 = (*g_686);
                }
                else
                { 
                    uint32_t *l_920 = &l_861.f1;
                    int8_t **l_923 = &g_18;
                    int8_t ***l_922 = &l_923;
                    l_921 = (((safe_mod_func_int32_t_s_s(l_877, (safe_div_func_uint16_t_u_u(((l_914[1][4][1] , ((0L || ((safe_sub_func_int32_t_s_s(((((safe_mul_func_uint16_t_u_u(65531UL, l_861.f5)) ^ ((*l_920) = (l_749 = ((((**l_859) = l_919) == l_919) & l_749)))) , (void*)0) == l_920), 0xFC0B6C1FL)) != l_903[0][2])) | 0xCA62L)) | 4L), g_356)))) >= (*g_18)) , &g_70[0]);
                    (*l_862) = l_845[5];
                    (*l_922) = &p_25;
                    l_925[0]++;
                }
            }
            else
            { 
                struct S0 *l_929 = &l_914[0][2][1];
                (*l_929) = l_928;
                for (l_749 = 0; l_749 < 2; l_749 += 1)
                {
                    for (g_52.f0 = 0; g_52.f0 < 6; g_52.f0 += 1)
                    {
                        l_707[l_749][g_52.f0] = 1L;
                    }
                }
                l_877 |= 0L;
                if (l_928.f2)
                    goto lbl_930;
            }
        }
        for (l_791 = 0; (l_791 >= (-15)); --l_791)
        { 
            int32_t *l_943 = &l_793[0];
            union U1 l_944 = {-1L};
            uint32_t ****l_948 = (void*)0;
            uint32_t ****l_949 = &l_947;
            int16_t *l_950[3][5][4] = {{{&g_48[5],&g_48[5],&g_48[5],&g_256},{&g_48[5],&g_256,&g_48[5],&g_48[5]},{&g_48[5],&g_48[5],&g_48[5],&g_256},{&g_48[5],&g_256,&g_48[5],&g_48[5]},{&g_48[5],&g_48[5],&g_48[5],&g_256}},{{&g_48[5],&g_256,&g_48[5],&g_48[5]},{&g_48[5],&g_48[5],&g_48[5],&g_256},{&g_48[5],&g_256,&g_48[5],&g_48[5]},{&g_48[5],&g_48[5],&g_48[5],&g_256},{&g_48[5],&g_256,&g_48[5],&g_48[5]}},{{&g_48[5],&g_48[5],&g_48[5],&g_256},{&g_48[5],&g_256,&g_48[5],&g_48[5]},{&g_48[5],&g_48[5],&g_48[5],&g_256},{&g_48[5],&g_256,&g_48[5],&g_48[5]},{&g_48[5],&g_48[5],&g_48[5],&g_256}}};
            const int16_t l_951 = 0x40D1L;
            int32_t l_952[4];
            uint32_t l_953 = 0UL;
            uint64_t *l_962 = (void*)0;
            struct S0 l_966 = {0x11B27151L,4294967288UL,1UL,0xFFD90B01L,0L,0x0311L};
            union U1 **l_986 = &l_909;
            uint64_t l_1064 = 0x8FFB35927EACF68DLL;
            int8_t *l_1090[6][1];
            uint32_t **l_1103 = &l_710;
            int8_t l_1182[2][2][6] = {{{0xC4L,0x9CL,0xD4L,0xD4L,0x9CL,0xC4L},{0xC4L,0xDCL,(-5L),0xD4L,0xDCL,0xD4L}},{{0xC4L,(-1L),0xC4L,0xD4L,(-1L),(-5L)},{0xC4L,0x9CL,0xD4L,0xD4L,0x9CL,0xC4L}}};
            int8_t l_1214 = 0L;
            uint32_t l_1222 = 4294967292UL;
            int i, j, k;
            for (i = 0; i < 4; i++)
                l_952[i] = 0x2C9F8179L;
            for (i = 0; i < 6; i++)
            {
                for (j = 0; j < 1; j++)
                    l_1090[i][j] = &g_61;
            }
        }
        for (l_928.f0 = 0; (l_928.f0 < 9); ++l_928.f0)
        { 
            uint64_t ** const ***l_1234 = (void*)0;
            uint64_t ** const ***l_1235 = &l_1232[0][0];
            int32_t l_1247 = 0x609F7AF2L;
            const uint32_t * const *l_1256 = (void*)0;
            const uint32_t * const **l_1255 = &l_1256;
            const uint32_t * const ***l_1254 = &l_1255;
            int32_t l_1280 = 0L;
            int32_t l_1281 = 0x021EEC1CL;
            int32_t l_1282 = 0L;
            int32_t l_1283 = 0xA486FFD8L;
            int32_t l_1284 = 7L;
            int32_t l_1285 = 0xC8395287L;
            int32_t l_1286[6];
            int i;
            for (i = 0; i < 6; i++)
                l_1286[i] = 0x7E1B165FL;
            if (((*l_988) , (safe_sub_func_uint32_t_u_u(((+((safe_mul_func_uint16_t_u_u((((*l_1235) = l_1232[1][0]) == &g_609), (safe_mul_func_uint16_t_u_u(((((safe_div_func_uint64_t_u_u(((safe_lshift_func_int8_t_s_u((~(((--(****g_608)) == (safe_add_func_uint16_t_u_u(l_1247, (safe_mul_func_int32_t_s_s(6L, ((safe_lshift_func_uint16_t_u_u(0xD702L, 4)) < ((safe_lshift_func_int8_t_s_s(((**l_1059) &= (l_1254 != (void*)0)), (*p_25))) != 250UL))))))) > l_928.f0)), g_356)) && (-6L)), 0xDF291728E555F8A4LL)) | 0xF309L) ^ (*g_278)) < l_1247), l_1029[0].f3)))) , (**g_699))) , 2UL), 0UL))))
            { 
                int8_t *l_1257 = (void*)0;
                return l_1257;
            }
            else
            { 
                uint16_t **l_1262 = &l_718;
                uint32_t *l_1273 = &l_845[5].f1;
                uint32_t *l_1274 = (void*)0;
                uint32_t *l_1275 = &g_1196.f1;
                int16_t *l_1276 = &g_48[0];
                int32_t l_1278 = 0x2D838FB2L;
                int32_t l_1279[1][7][4] = {{{0L,(-1L),0L,1L},{0L,0L,(-1L),0L},{0L,1L,1L,0L},{1L,0L,1L,1L},{0L,0L,(-1L),0L},{0L,1L,1L,0L},{1L,0L,1L,1L}}};
                int i, j, k;
                g_70[2] = (!((l_925[1] || (g_112 < ((l_1261[2] == l_1262) ^ (((safe_div_func_int64_t_s_s(((safe_unary_minus_func_uint8_t_u(255UL)) < ((+(l_1277 = (safe_unary_minus_func_uint32_t_u((safe_div_func_int64_t_s_s((l_749 |= ((((*l_1276) ^= (safe_rshift_func_int8_t_s_s(l_964.f1, ((((*l_1275) = ((*l_1273) = (l_928.f2 && l_1272))) | l_791) && l_1247)))) , l_1247) , g_2[6])), 6UL)))))) > l_1278)), l_928.f2)) | 0x0391F934A6E4F341LL) ^ g_16[1])))) || (*p_25)));
                --l_1288[1];
                return l_1291;
            }
        }
    }
    return p_25;
}



static int8_t * func_26(uint64_t  p_27, uint64_t * p_28, int8_t * p_29, int8_t  p_30)
{ 
    int32_t *l_664 = &g_70[0];
    int32_t **l_665 = &l_664;
    int64_t *l_666 = &g_52.f4;
    uint8_t *l_667 = &g_121.f3;
    int32_t l_668 = 0x0A026128L;
    const uint32_t l_673 = 0UL;
    union U1 **l_688[5][3] = {{(void*)0,(void*)0,&g_687},{&g_687,&g_687,&g_687},{(void*)0,(void*)0,&g_687},{&g_687,&g_687,&g_687},{(void*)0,(void*)0,&g_687}};
    int i, j;
    (*l_665) = l_664;
    l_668 ^= ((((void*)0 != l_666) | (**l_665)) <= (((((void*)0 != &g_278) ^ p_30) , l_667) != p_29));
    for (g_52.f5 = 0; (g_52.f5 <= 4); g_52.f5 += 1)
    { 
        int64_t **l_675 = &l_666;
        int32_t l_676 = 0xF9E6270DL;
        int32_t l_693 = (-10L);
        uint16_t **l_697 = &g_311[0][1];
        uint16_t ***l_696 = &l_697;
        uint16_t ****l_695[1];
        int i;
        for (i = 0; i < 1; i++)
            l_695[i] = &l_696;
        l_676 = ((safe_mul_func_int8_t_s_s((((void*)0 == &g_48[g_52.f5]) || g_48[(g_52.f5 + 2)]), 0L)) < ((g_16[g_52.f5] ^ (**l_665)) != ((((safe_mul_func_int8_t_s_s((((g_48[(g_52.f5 + 2)] == l_673) , p_27) && 0L), g_52.f2)) , g_52.f4) , g_674) != l_675)));
        g_694 ^= (+(p_30 & (safe_add_func_int64_t_s_s((-1L), (safe_rshift_func_int16_t_s_u((safe_mul_func_int16_t_s_s((safe_rshift_func_uint16_t_u_u((g_686 == l_688[1][1]), 11)), (safe_mul_func_int8_t_s_s(((((*l_667) = (p_27 , (((((safe_div_func_int16_t_s_s(p_27, (**l_665))) <= p_27) != (*p_28)) ^ 0x1B4490905C3133A6LL) == 0x672D443360743232LL))) ^ 0UL) , (*p_29)), (*l_664))))), l_693))))));
        g_698 = (void*)0;
    }
    return l_667;
}



static int8_t  func_32(uint64_t * p_33, int8_t * p_34, uint64_t * p_35, int8_t  p_36, const int32_t  p_37)
{ 
    int32_t *l_113[7][1];
    int8_t *l_120 = &g_61;
    struct S0 l_422 = {0xD1094943L,2UL,0x715FL,0xF05929FFL,0L,0x94C9L};
    int8_t l_546 = 1L;
    int32_t l_571 = (-1L);
    const int64_t **l_607 = (void*)0;
    uint8_t l_656 = 0x8FL;
    uint32_t *l_662 = &g_52.f1;
    uint32_t **l_661 = &l_662;
    uint32_t l_663 = 18446744073709551608UL;
    int i, j;
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 1; j++)
            l_113[i][j] = &g_70[0];
    }
    g_70[0] &= 0x5DF3ABA3L;
    if (((g_2[5] , ((1L || ((safe_rshift_func_int16_t_s_s((func_116(g_16[1], ((l_120 != ((*p_34) , &g_61)) && (g_121 , 0x1BD54BCFL)), g_112) , (-1L)), p_36)) < 0x0CACFB8CL)) , p_36)) <= p_37))
    { 
        uint32_t l_424 = 4294967295UL;
        int32_t l_425 = (-6L);
        for (g_52.f2 = (-17); (g_52.f2 == 6); g_52.f2 = safe_add_func_uint32_t_u_u(g_52.f2, 4))
        { 
            for (g_61 = 0; (g_61 <= 2); g_61 += 1)
            { 
                struct S0 *l_423 = &l_422;
                (*l_423) = l_422;
            }
            if ((*g_278))
                continue;
        }
        l_425 |= l_424;
    }
    else
    { 
        uint8_t l_429[1];
        int32_t l_436 = 0L;
        uint16_t *l_446[5] = {&g_52.f2,&g_52.f2,&g_52.f2,&g_52.f2,&g_52.f2};
        struct S0 l_459 = {2L,0x14F7B553L,0x99F8L,18446744073709551615UL,0xC9BD051C94A1E0FDLL,0xBF56L};
        uint64_t *l_488 = &g_312;
        uint64_t *l_489 = &g_112;
        uint64_t *l_490 = &g_112;
        uint64_t *l_491[4];
        uint64_t *l_492 = &g_16[0];
        uint64_t *l_493 = &g_312;
        uint64_t *l_494 = &g_16[1];
        uint64_t *l_495 = &g_312;
        uint64_t *l_496 = (void*)0;
        uint64_t *l_497[3];
        uint64_t *l_498 = &g_112;
        uint64_t *l_499 = &g_16[3];
        uint64_t *l_500 = (void*)0;
        uint64_t *l_501 = &g_312;
        uint64_t *l_502[5][4] = {{&g_312,&g_16[1],&g_312,&g_16[1]},{&g_312,&g_16[1],&g_312,&g_16[1]},{&g_312,&g_16[1],&g_312,&g_16[1]},{&g_312,&g_16[1],&g_312,&g_16[1]},{&g_312,&g_16[1],&g_312,&g_16[1]}};
        uint64_t *l_503[4][3][4] = {{{&g_312,&g_112,&g_112,&g_312},{&g_16[3],&g_112,&g_16[1],&g_112},{&g_112,&g_312,&g_16[1],&g_16[1]}},{{&g_16[3],&g_16[3],&g_112,&g_16[1]},{&g_312,&g_312,&g_312,&g_112},{&g_312,&g_112,&g_112,&g_312}},{{&g_16[3],&g_112,&g_16[1],&g_112},{&g_112,&g_312,&g_16[1],&g_16[1]},{&g_16[3],&g_16[3],&g_112,&g_16[1]}},{{&g_312,&g_312,&g_312,&g_112},{&g_312,&g_112,&g_112,&g_312},{&g_16[3],&g_112,&g_16[1],&g_112}}};
        uint64_t *l_504 = &g_16[4];
        uint64_t *l_505 = &g_16[3];
        uint64_t *l_506 = &g_112;
        uint64_t *l_507 = (void*)0;
        uint64_t *l_508[5];
        uint64_t *l_509 = &g_16[0];
        uint64_t *l_510 = &g_312;
        uint64_t *l_511[2][2][1];
        uint64_t *l_512 = &g_16[1];
        uint64_t *l_513 = &g_312;
        uint64_t *l_514 = (void*)0;
        uint64_t *l_515 = &g_16[1];
        uint64_t *l_516[7][1] = {{&g_312},{&g_312},{&g_312},{&g_312},{&g_312},{&g_312},{&g_312}};
        uint64_t *l_517 = &g_16[2];
        uint64_t *l_518 = &g_112;
        uint64_t *l_519 = &g_312;
        uint64_t *l_520 = &g_312;
        uint64_t *l_521 = (void*)0;
        uint64_t *l_522 = &g_16[0];
        uint64_t *l_523 = &g_16[1];
        uint64_t *l_524 = &g_312;
        uint64_t *l_525 = &g_312;
        uint64_t *l_526 = &g_112;
        uint64_t *l_527 = &g_16[1];
        uint64_t *l_528 = &g_112;
        uint64_t *l_529 = &g_312;
        uint64_t *l_530 = &g_312;
        uint64_t *l_531 = &g_112;
        uint64_t *l_532[1][6] = {{&g_112,&g_16[1],&g_112,&g_112,&g_16[1],&g_112}};
        uint64_t *l_533 = &g_16[0];
        uint64_t *l_534 = &g_312;
        uint64_t *l_535 = &g_112;
        uint64_t *l_536 = &g_312;
        uint64_t *l_537 = &g_16[1];
        uint64_t *l_538 = &g_16[1];
        uint64_t ** const l_487[4][6][7] = {{{(void*)0,&l_517,&l_516[1][0],&l_516[1][0],&l_517,(void*)0,&l_522},{&l_527,&l_530,&l_535,&l_490,&l_498,&l_508[4],&l_518},{&l_526,&l_536,&l_496,&l_508[4],(void*)0,&l_535,&l_502[3][0]},{(void*)0,&l_530,&l_497[2],(void*)0,&l_532[0][4],&l_504,&l_523},{&l_497[2],&l_517,&l_538,&l_512,&l_535,&l_513,(void*)0},{&l_517,&l_491[3],&l_519,(void*)0,&l_526,&l_511[1][0][0],&l_493}},{{&l_524,&l_508[4],&l_489,&l_522,&l_512,&l_498,&l_538},{&l_524,&l_515,&l_502[3][0],&l_491[3],&l_533,&l_525,&l_521},{&l_517,&l_510,&l_504,&l_499,&l_497[2],&l_496,&l_497[2]},{&l_497[2],&l_497[2],&l_497[2],&l_498,&l_502[3][0],&l_507,&l_515},{&l_519,(void*)0,&l_527,&l_536,&l_495,&l_506,&l_518},{&l_528,(void*)0,&l_501,(void*)0,&l_527,&l_495,&l_515}},{{&l_529,&l_496,&l_515,&l_531,&l_503[3][1][1],&l_522,&l_498},{&l_520,&l_492,(void*)0,&l_489,&l_517,&l_494,(void*)0},{&l_503[3][1][1],&l_528,&l_509,&l_488,(void*)0,&l_505,(void*)0},{(void*)0,&l_507,&l_490,&l_525,&l_516[1][0],&l_505,&l_495},{&l_535,(void*)0,(void*)0,&l_506,&l_499,&l_494,&l_490},{&l_537,&l_530,&l_525,&l_522,(void*)0,&l_522,&l_525}},{{&l_527,&l_527,&l_529,&l_533,&l_488,&l_495,&l_504},{&l_512,&l_517,(void*)0,&l_532[0][4],&l_493,&l_506,(void*)0},{&l_532[0][4],&l_494,&l_508[4],&l_521,&l_488,&l_507,&l_524},{&l_495,&l_514,&l_530,&l_502[3][0],(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&l_495,&l_520,&l_499,&l_527,&l_511[1][0][0]},{&l_489,&l_519,&l_499,&l_530,&l_516[1][0],&l_500,&l_537}}};
        uint64_t ** const *l_486 = &l_487[2][4][3];
        uint32_t **l_560 = &g_558;
        int32_t l_565 = 0xCB6B0A30L;
        int32_t l_568 = 0x4AC07009L;
        int32_t l_569 = 0x67DBAE74L;
        int32_t l_572 = 0x5282ADF5L;
        int32_t l_573 = (-1L);
        int32_t l_574 = 0x6FE10FCAL;
        int32_t l_577 = 0xB09EB745L;
        int32_t l_578[4][3][6] = {{{0L,0x09437A94L,0xA8BB9782L,1L,0xA15EC678L,0L},{0x36ABF259L,0x09437A94L,1L,0x36ABF259L,0xCAADF67AL,0x36ABF259L},{0x36ABF259L,0xCAADF67AL,0x36ABF259L,1L,0x09437A94L,0x36ABF259L}},{{0L,0xA15EC678L,1L,0xA8BB9782L,0x09437A94L,0L},{1L,0xCAADF67AL,0xA8BB9782L,0xA8BB9782L,0xCAADF67AL,1L},{0L,0x09437A94L,0xA8BB9782L,1L,0xA15EC678L,0L}},{{0x36ABF259L,0x09437A94L,1L,0x36ABF259L,0xCAADF67AL,0x36ABF259L},{0x36ABF259L,0xCAADF67AL,0x36ABF259L,1L,0x09437A94L,0x36ABF259L},{0L,0xA15EC678L,1L,0xA8BB9782L,0x09437A94L,0L}},{{1L,0xCAADF67AL,0xA8BB9782L,0xA8BB9782L,0xCAADF67AL,1L},{0L,0x09437A94L,0xA8BB9782L,1L,0xA15EC678L,0L},{0x36ABF259L,0x09437A94L,1L,0x36ABF259L,0xCAADF67AL,0x36ABF259L}}};
        uint64_t l_586 = 4UL;
        int64_t *l_597 = &l_459.f4;
        int64_t **l_596 = &l_597;
        struct S0 l_599[1][7] = {{{5L,1UL,0xC07DL,18446744073709551615UL,0x039A908082DE5E30LL,9UL},{5L,1UL,0xC07DL,18446744073709551615UL,0x039A908082DE5E30LL,9UL},{5L,1UL,0xC07DL,18446744073709551615UL,0x039A908082DE5E30LL,9UL},{5L,1UL,0xC07DL,18446744073709551615UL,0x039A908082DE5E30LL,9UL},{5L,1UL,0xC07DL,18446744073709551615UL,0x039A908082DE5E30LL,9UL},{5L,1UL,0xC07DL,18446744073709551615UL,0x039A908082DE5E30LL,9UL},{5L,1UL,0xC07DL,18446744073709551615UL,0x039A908082DE5E30LL,9UL}}};
        uint64_t ****l_612 = (void*)0;
        struct S0 l_615 = {0L,0x12D7614DL,0x6E05L,0xD8C10942L,0xA97FD727097B0A34LL,0UL};
        int32_t l_617 = 0x457F49E8L;
        uint32_t l_637 = 1UL;
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_429[i] = 0xECL;
        for (i = 0; i < 4; i++)
            l_491[i] = &g_312;
        for (i = 0; i < 3; i++)
            l_497[i] = &g_16[4];
        for (i = 0; i < 5; i++)
            l_508[i] = &g_16[4];
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 2; j++)
            {
                for (k = 0; k < 1; k++)
                    l_511[i][j][k] = &g_112;
            }
        }
lbl_614:
        if ((*g_278))
        { 
            uint16_t l_432 = 0x72DBL;
            int32_t l_448 = 0xFFEDF12BL;
            uint8_t *l_460 = (void*)0;
            if ((l_429[0] = (safe_mul_func_int16_t_s_s(3L, (safe_unary_minus_func_uint8_t_u((&p_35 != (void*)0)))))))
            { 
                uint8_t l_437 = 255UL;
                uint16_t * const l_447 = &l_422.f2;
                for (l_422.f1 = 0; (l_422.f1 <= 6); l_422.f1 += 1)
                { 
                    int i;
                    l_432 = (safe_mul_func_uint16_t_u_u(0xC730L, g_48[l_422.f1]));
                    g_433++;
                }
                l_437++;
                l_448 = ((safe_lshift_func_int8_t_s_s(((0UL == (*p_34)) < (safe_lshift_func_int16_t_s_s(((safe_sub_func_uint32_t_u_u((l_446[2] != l_447), ((g_48[3] , p_36) < (((((*g_18) , l_432) , 0x04L) == (*g_18)) ^ 0L)))) | g_2[6]), 9))), 4)) != p_36);
                g_70[0] ^= (-1L);
                g_70[1] |= ((safe_sub_func_int8_t_s_s((*g_18), (safe_mul_func_int16_t_s_s((safe_lshift_func_int16_t_s_u((((safe_lshift_func_int8_t_s_s((l_429[0] <= (((((p_37 < (safe_lshift_func_int8_t_s_s((l_459 , ((*l_120) = 0x14L)), 0))) && ((0x7DL && (&l_437 == l_460)) || p_37)) < p_36) & l_459.f3) && l_448)), (*p_34))) == l_432) != p_37), l_448)), 1L)))) != p_36);
            }
            else
            { 
                return (*p_34);
            }
            for (l_422.f0 = 0; (l_422.f0 == (-29)); l_422.f0 = safe_sub_func_int8_t_s_s(l_422.f0, 3))
            { 
                if (l_436)
                    break;
            }
        }
        else
        { 
            int32_t l_467 = 0x400F4E07L;
            const int32_t *l_544 = (void*)0;
            const int32_t **l_543 = &l_544;
            int32_t l_551[1];
            int i;
            for (i = 0; i < 1; i++)
                l_551[i] = (-1L);
lbl_545:
            for (g_52.f3 = 0; (g_52.f3 != 56); ++g_52.f3)
            { 
                uint32_t *l_477 = &g_433;
                int32_t l_478 = 6L;
                uint64_t *l_483 = &g_312;
                uint64_t ** const l_482[7][3] = {{&l_483,&l_483,&l_483},{&l_483,&l_483,&l_483},{&l_483,&l_483,&l_483},{&l_483,&l_483,&l_483},{&l_483,&l_483,&l_483},{&l_483,&l_483,&l_483},{&l_483,&l_483,&l_483}};
                uint64_t ** const *l_481 = &l_482[0][1];
                uint64_t ** const **l_484 = (void*)0;
                uint64_t ** const **l_485[4][3] = {{&l_481,&l_481,&l_481},{(void*)0,(void*)0,(void*)0},{&l_481,&l_481,&l_481},{(void*)0,(void*)0,(void*)0}};
                uint32_t *l_539 = &l_422.f3;
                struct S0 l_540 = {0x3C98EF9AL,0x62ED7162L,0x90B2L,1UL,0x3D08544918D01A2FLL,0x5D5BL};
                struct S0 *l_541[6] = {&l_540,&l_540,&l_540,&l_540,&l_540,&l_540};
                struct S0 l_542 = {0L,4294967295UL,4UL,18446744073709551615UL,-7L,0x8619L};
                int i, j;
                l_478 |= ((safe_lshift_func_uint16_t_u_s((l_467 &= 0x6C1AL), 9)) || ((*l_477) = ((safe_add_func_uint16_t_u_u(p_36, ((*g_278) ^ (safe_lshift_func_uint16_t_u_s(p_37, ((((&g_2[6] != ((safe_lshift_func_uint8_t_u_u(((safe_mod_func_int64_t_s_s(((l_436 = (g_70[0] | ((!2UL) | p_36))) > p_37), g_19[0][0][4])) > p_36), l_429[0])) , &g_70[0])) >= p_36) ^ l_459.f5) & p_36)))))) && p_37)));
                for (l_422.f0 = 0; (l_422.f0 > 8); ++l_422.f0)
                { 
                    return (*p_34);
                }
                if ((*g_278))
                    continue;
                l_542 = (((l_486 = l_481) != (p_37 , (((*l_539) |= g_52.f5) , &l_487[2][4][3]))) , l_540);
            }
            (*l_543) = &p_37;
            if (g_121.f3)
                goto lbl_545;
            l_546 &= p_36;
            if ((p_37 & (*g_18)))
            { 
                int16_t l_549 = 0x973CL;
                int32_t l_550 = (-1L);
                uint64_t l_554 = 1UL;
                for (l_422.f1 = (-2); (l_422.f1 == 3); ++l_422.f1)
                { 
                    int16_t l_552[7][1][6] = {{{1L,1L,0L,0x25C1L,0L,1L}},{{0L,0xC63DL,0x25C1L,0x25C1L,0xC63DL,0L}},{{1L,0L,0x25C1L,0L,1L,1L}},{{0L,0L,0L,0L,0xC63DL,0L}},{{0L,0xC63DL,0L,0L,0L,0L}},{{1L,1L,0L,0x25C1L,0L,1L}},{{0L,0xC63DL,0x25C1L,0x25C1L,0xC63DL,0L}}};
                    int32_t l_553 = 0xE5A0414CL;
                    int i, j, k;
                    l_554--;
                    return (*g_18);
                }
            }
            else
            { 
                uint32_t ***l_559[5] = {&g_557,&g_557,&g_557,&g_557,&g_557};
                int i;
                l_560 = g_557;
                return (*p_34);
            }
        }
        g_561 = &p_37;
        if ((*g_278))
        { 
            int64_t l_562 = 0x62857A60D1D82194LL;
            int32_t l_563 = 0xF29A4294L;
            int32_t l_564 = 0xE691D259L;
            int32_t l_566 = 0xCF454E1AL;
            int32_t l_567 = 0xBCD03DFAL;
            int32_t l_570 = 6L;
            int32_t l_575 = 0x71E56672L;
            int32_t l_576 = 1L;
            int32_t l_579 = (-1L);
            int32_t l_580 = 0xF9B07530L;
            int32_t l_581 = 0xE3320AA7L;
            int32_t l_582 = 0xF357D529L;
            int32_t l_583 = 0x0C1FCFB8L;
            int32_t l_584 = 0xAA12F3E7L;
            int64_t l_585 = 5L;
            int64_t *l_594[6];
            int64_t **l_593[7] = {&l_594[2],&l_594[2],&l_594[2],&l_594[2],&l_594[2],&l_594[2],&l_594[2]};
            int i;
            for (i = 0; i < 6; i++)
                l_594[i] = (void*)0;
            l_586--;
            if ((safe_rshift_func_int16_t_s_u((safe_div_func_uint64_t_u_u(l_580, g_48[5])), l_582)))
            { 
                int64_t ***l_595[1][3];
                struct S0 *l_598[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                uint64_t *****l_613 = &l_612;
                int i, j;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 3; j++)
                        l_595[i][j] = (void*)0;
                }
lbl_600:
                l_596 = l_593[0];
                l_599[0][5] = l_459;
                g_52 = l_422;
                if (g_52.f2)
                    goto lbl_600;
                l_565 ^= (0xCC18D8CEBBF51CEFLL && (safe_div_func_int8_t_s_s(((*l_120) |= 0L), (safe_mod_func_uint16_t_u_u((safe_mod_func_uint32_t_u_u((((((void*)0 == l_607) , (g_608 != ((*l_613) = l_612))) || (l_459 , (*g_278))) ^ 0xFCL), (*g_278))), p_37)))));
            }
            else
            { 
                uint64_t l_618[2][5] = {{0xCD911223DDD5D525LL,0xF5562936A80EEA9DLL,0xCD911223DDD5D525LL,0xCD911223DDD5D525LL,0xF5562936A80EEA9DLL},{0xF5562936A80EEA9DLL,0xCD911223DDD5D525LL,0xCD911223DDD5D525LL,0xF5562936A80EEA9DLL,0xCD911223DDD5D525LL}};
                int32_t l_627 = 2L;
                int32_t l_633 = (-3L);
                int32_t l_634 = 0xF57C290AL;
                int32_t l_635 = 8L;
                int32_t l_636 = (-1L);
                int i, j;
                if (g_52.f5)
                    goto lbl_614;
                for (l_572 = 0; (l_572 >= 0); l_572 -= 1)
                { 
                    struct S0 *l_616 = (void*)0;
                    g_52 = l_615;
                    g_561 = &p_37;
                    if (p_37)
                        break;
                    ++l_618[1][4];
                    g_70[0] |= ((safe_sub_func_int32_t_s_s((safe_mod_func_int8_t_s_s((*p_34), (0x0AA78F88L | 4294967295UL))), ((p_37 || (*p_34)) , 0x4E2E5021L))) & (g_256 &= (((l_618[1][4] , (*g_561)) , g_356) == g_121.f3)));
                }
                for (l_459.f4 = 0; (l_459.f4 <= 2); l_459.f4 += 1)
                { 
                    l_627 ^= (safe_add_func_int64_t_s_s(p_36, (*g_611)));
                    return (*p_34);
                }
                for (l_584 = 0; (l_584 >= 0); l_584 -= 1)
                { 
                    int32_t **l_628[4] = {&g_278,&g_278,&g_278,&g_278};
                    int i;
                    g_278 = &g_2[6];
                    l_582 ^= g_48[l_584];
                    l_580 = (l_579 & g_52.f5);
                    return (*p_34);
                }
                for (l_569 = 0; (l_569 != (-3)); --l_569)
                { 
                    int64_t l_631[3];
                    int32_t l_632[4] = {1L,1L,1L,1L};
                    int i;
                    for (i = 0; i < 3; i++)
                        l_631[i] = 0L;
                    l_637--;
                }
            }
        }
        else
        { 
            struct S0 *l_640 = (void*)0;
            struct S0 *l_641[1];
            uint8_t *l_646 = &g_121.f3;
            int32_t l_657 = 0x6CB0A9C6L;
            uint32_t *l_660 = &l_599[0][5].f1;
            uint32_t **l_659 = &l_660;
            uint32_t ***l_658[1];
            int i;
            for (i = 0; i < 1; i++)
                l_641[i] = &l_599[0][5];
            for (i = 0; i < 1; i++)
                l_658[i] = &l_659;
            l_422 = g_52;
            l_661 = ((((safe_lshift_func_int16_t_s_u((safe_mul_func_uint8_t_u_u((g_647 &= ((*l_646) = 0xD0L)), ((0xC94CL > (p_36 > (-1L))) || ((safe_mul_func_int16_t_s_s((((safe_mul_func_int16_t_s_s(g_112, (safe_rshift_func_uint16_t_u_s(p_37, ((((safe_div_func_int32_t_s_s((((((l_656 = p_36) | p_37) ^ p_36) || p_36) ^ (*p_34)), 0xA59FC546L)) , (void*)0) != (void*)0) & l_657))))) && p_37) , p_36), 0UL)) | g_52.f0)))), p_37)) && g_356) , g_52.f3) , (void*)0);
        }
    }
    return l_663;
}



static uint64_t * func_38(const struct S0  p_39, int16_t  p_40, int16_t  p_41, struct S0  p_42, union U1  p_43)
{ 
    struct S0 l_51 = {-1L,0x67AAC3BCL,0xF263L,18446744073709551615UL,-1L,0x0295L};
    uint64_t *l_56 = &g_16[1];
    uint64_t **l_55 = &l_56;
    uint32_t l_62 = 18446744073709551611UL;
    int32_t l_71 = 0xCEC10C1AL;
    int32_t *l_72 = &l_71;
    int32_t *l_73 = &g_70[2];
    int32_t *l_74 = &g_70[1];
    int32_t l_75 = 0xDF81C58CL;
    int32_t *l_76 = &l_75;
    int32_t *l_77 = &g_70[0];
    int32_t *l_78 = &g_70[0];
    int32_t *l_79 = (void*)0;
    int32_t *l_80 = (void*)0;
    int32_t *l_81 = &l_75;
    int32_t *l_82 = &l_71;
    int32_t l_83[3][6] = {{2L,2L,2L,2L,2L,2L},{2L,2L,2L,2L,2L,2L},{2L,2L,2L,2L,2L,2L}};
    int32_t *l_84 = (void*)0;
    int32_t *l_85 = &g_70[0];
    int32_t *l_86 = &g_70[1];
    int32_t *l_87 = &g_70[2];
    int32_t *l_88 = &l_71;
    int32_t *l_89 = &l_75;
    int32_t *l_90 = &l_83[2][3];
    int32_t *l_91 = &l_75;
    int32_t *l_92 = &g_70[2];
    int32_t *l_93 = &l_83[2][1];
    int32_t *l_94 = &l_75;
    int32_t *l_95 = (void*)0;
    int32_t *l_96 = (void*)0;
    int32_t *l_97 = &l_75;
    int32_t *l_98 = &l_83[0][5];
    int32_t *l_99 = (void*)0;
    int32_t *l_100 = &l_83[0][3];
    int32_t *l_101 = &g_70[0];
    int32_t *l_102 = &l_83[0][5];
    int32_t *l_103 = (void*)0;
    int32_t *l_104 = (void*)0;
    int32_t *l_105 = &g_70[0];
    int32_t *l_106 = &l_75;
    int32_t *l_107[7][2][5] = {{{&g_70[0],(void*)0,&g_70[1],&l_75,&g_2[3]},{&g_2[6],&l_71,&l_71,&l_71,&l_71}},{{&g_2[3],(void*)0,&g_70[1],&g_70[0],&l_83[0][5]},{&g_70[0],(void*)0,&g_70[0],&l_71,(void*)0}},{{&l_83[2][2],&l_75,&l_83[0][5],&l_75,&l_83[2][2]},{&g_70[0],&g_2[6],(void*)0,&l_71,(void*)0}},{{&g_2[3],&g_70[2],&l_83[0][5],(void*)0,(void*)0},{&g_2[6],&g_70[0],&g_70[0],&g_2[6],(void*)0}},{{&g_70[0],(void*)0,&g_70[1],&l_75,&l_83[2][2]},{(void*)0,&g_70[0],&l_71,(void*)0,(void*)0}},{{&g_70[1],&g_70[2],&g_70[1],&l_75,&l_83[0][5]},{&l_71,&g_2[6],(void*)0,&g_2[6],&l_71}},{{&g_70[1],&l_75,&g_2[3],(void*)0,&g_2[3]},{&g_70[1],&g_70[1],(void*)0,&l_71,&g_2[6]}}};
    uint32_t l_108 = 0xF03A57AAL;
    int i, j, k;
    g_52 = l_51;
    for (p_42.f4 = 0; (p_42.f4 < (-28)); p_42.f4 = safe_sub_func_uint32_t_u_u(p_42.f4, 1))
    { 
        uint64_t ***l_57 = &l_55;
        int32_t l_60 = 0x70A65522L;
        int32_t *l_69 = &g_70[0];
        (*l_57) = l_55;
        g_61 = (p_43.f2 <= (safe_lshift_func_uint16_t_u_u(l_60, 9)));
        (*l_69) ^= (((l_62 ^ ((safe_div_func_int64_t_s_s(l_60, 18446744073709551610UL)) | (safe_mod_func_int32_t_s_s(((safe_lshift_func_int8_t_s_s(p_40, ((((***l_57) &= 1UL) , &l_56) != (void*)0))) <= p_42.f3), g_48[2])))) ^ 0xAF0CL) , g_2[5]);
    }
    l_108--;
    return &g_16[0];
}



static uint32_t  func_116(uint32_t  p_117, int32_t  p_118, uint32_t  p_119)
{ 
    int32_t l_130 = (-7L);
    int8_t *l_131[3];
    union U1 l_132[6][2][7] = {{{{7L},{1L},{7L},{-7L},{-9L},{7L},{0xA3AA3B8CL}},{{0x158884C6L},{0xA3C86066L},{0xAAAF263CL},{1L},{-7L},{8L},{3L}}},{{{1L},{0xAAAF263CL},{0xA3C86066L},{0x158884C6L},{1L},{7L},{7L}},{{-7L},{7L},{1L},{7L},{-7L},{-9L},{7L}}},{{{0x13429A00L},{0xAB698699L},{-1L},{6L},{7L},{0xA3C86066L},{3L}},{{-1L},{-9L},{0x158884C6L},{0xB9A5162BL},{0x5B4449FBL},{-7L},{0xA3AA3B8CL}}},{{{0x13429A00L},{6L},{8L},{0xA3AA3B8CL},{8L},{6L},{0x13429A00L}},{{-7L},{6L},{0x7EC08A34L},{7L},{7L},{0x13429A00L},{1L}}},{{{1L},{-9L},{0xB80262EEL},{0x7EC08A34L},{0xA3AA3B8CL},{3L},{0xAB698699L}},{{0x158884C6L},{0xAB698699L},{0x7EC08A34L},{-4L},{6L},{-4L},{0x7EC08A34L}}},{{{7L},{7L},{8L},{-4L},{0xAAAF263CL},{-1L},{0x5B4449FBL}},{{6L},{0xAAAF263CL},{0x158884C6L},{0x7EC08A34L},{1L},{0xAB698699L},{-9L}}}};
    int32_t *l_133 = (void*)0;
    const uint32_t l_134 = 2UL;
    uint16_t *l_135 = &g_52.f5;
    int32_t l_205[3];
    int16_t l_238[3];
    int32_t l_247[1];
    uint32_t l_276 = 4294967295UL;
    struct S0 *l_307 = &g_52;
    struct S0 **l_306 = &l_307;
    uint16_t *l_309[4] = {&g_52.f2,&g_52.f2,&g_52.f2,&g_52.f2};
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_131[i] = &g_61;
    for (i = 0; i < 3; i++)
        l_205[i] = (-6L);
    for (i = 0; i < 3; i++)
        l_238[i] = 1L;
    for (i = 0; i < 1; i++)
        l_247[i] = 0x6057AC41L;
    if (((((g_121.f3 = (safe_rshift_func_uint8_t_u_s(g_48[2], p_118))) != (safe_rshift_func_uint16_t_u_u(((*l_135) = (((l_130 = (safe_add_func_uint32_t_u_u((((0x8CL > (g_61 = ((*g_18) = l_130))) <= ((((9UL < (l_132[3][1][4] , l_132[3][1][4].f2)) < p_117) & g_52.f4) < l_132[3][1][4].f3)) || (-5L)), 0x79434882L))) & l_132[3][1][4].f3) && l_134)), g_70[1]))) <= g_52.f3) , g_52.f1))
    { 
        int32_t *l_138 = &g_70[0];
        int32_t l_160 = 1L;
        int32_t l_203 = (-1L);
        int32_t l_207 = (-1L);
        int32_t l_208 = 8L;
        int32_t l_210 = 0xB138D89CL;
        int32_t l_211 = (-1L);
        int32_t l_212 = 0x5F7C6AF0L;
        int32_t l_214 = 0x166E7C3DL;
        int32_t l_215 = (-3L);
        int32_t l_217 = 0L;
        int32_t l_248[3];
        struct S0 l_288 = {0x66D8ECD1L,0UL,1UL,4UL,-5L,65529UL};
        int32_t l_314 = 0xAB4327BCL;
        union U1 l_317 = {1L};
        uint32_t l_325 = 1UL;
        int16_t l_326 = 0L;
        int8_t l_336 = (-5L);
        uint8_t l_349 = 246UL;
        int8_t l_360 = 0L;
        uint64_t **l_377 = (void*)0;
        int32_t *l_404 = &l_205[0];
        int32_t *l_405 = &l_314;
        int32_t *l_406 = (void*)0;
        int32_t *l_407 = &g_70[2];
        int32_t *l_408[5][2][6] = {{{(void*)0,&l_205[0],&g_2[6],&l_314,&g_2[6],&l_205[0]},{&g_2[6],(void*)0,(void*)0,&l_207,&l_207,(void*)0}},{{&g_2[6],&g_2[6],&l_207,&l_314,&l_314,&l_314},{(void*)0,&g_2[6],(void*)0,(void*)0,&l_207,&l_207}},{{&l_205[0],(void*)0,(void*)0,&l_205[0],&g_2[6],&l_314},{&l_314,&l_205[0],&l_207,&l_205[0],&l_314,(void*)0}},{{&l_205[0],&l_314,(void*)0,(void*)0,&l_314,&l_205[0]},{(void*)0,&l_205[0],&g_2[6],&l_314,&g_2[6],&l_205[0]}},{{&g_2[6],(void*)0,(void*)0,&l_207,&l_207,(void*)0},{&g_2[6],&g_2[6],&l_207,&l_314,&l_314,&l_314}}};
        int64_t l_409 = 0L;
        int32_t l_410[4];
        uint16_t l_411[1][3];
        uint32_t l_417 = 0x00DA3F5DL;
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_248[i] = 0xDECFFE95L;
        for (i = 0; i < 4; i++)
            l_410[i] = 1L;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 3; j++)
                l_411[i][j] = 5UL;
        }
        if (g_48[2])
        { 
            int32_t **l_136 = (void*)0;
            int32_t **l_137[4];
            int i;
            for (i = 0; i < 4; i++)
                l_137[i] = (void*)0;
            l_138 = &g_70[0];
            l_133 = &p_118;
            for (g_52.f2 = 0; (g_52.f2 > 27); g_52.f2 = safe_add_func_int32_t_s_s(g_52.f2, 7))
            { 
                uint32_t *l_159[6][3] = {{&l_132[3][1][4].f2,&l_132[3][1][4].f2,&l_132[3][1][4].f2},{&l_132[3][1][4].f2,&g_52.f1,&g_52.f1},{&l_132[3][1][4].f2,&l_132[3][1][4].f2,&l_132[3][1][4].f2},{&l_132[3][1][4].f2,&g_52.f1,&g_52.f1},{&l_132[3][1][4].f2,&l_132[3][1][4].f2,&l_132[3][1][4].f2},{&l_132[3][1][4].f2,&g_52.f1,&g_52.f1}};
                int i, j;
                p_118 = (g_70[0] = ((safe_add_func_int32_t_s_s((safe_mod_func_uint64_t_u_u(((safe_sub_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u((safe_rshift_func_int8_t_s_u((safe_add_func_uint64_t_u_u((((((l_160 ^= ((safe_mul_func_uint8_t_u_u(g_52.f1, ((((*g_18) | (safe_rshift_func_uint16_t_u_s(p_117, 9))) | ((p_119 || (((safe_sub_func_uint32_t_u_u(g_52.f2, (p_118 , g_70[0]))) != p_119) <= (-1L))) && g_2[6])) & g_52.f0))) | p_119)) , p_118) != (-4L)) , p_117) <= p_118), g_52.f0)), g_48[3])), p_118)), p_118)) >= p_117), p_117)), g_112)) | g_70[0]));
                return g_52.f1;
            }
        }
        else
        { 
            struct S0 l_161[3][4] = {{{1L,0xE6B6787CL,0xB110L,0xD9094550L,0x6410FA4C8627F26CLL,0xC176L},{1L,0xE6B6787CL,0xB110L,0xD9094550L,0x6410FA4C8627F26CLL,0xC176L},{1L,0xE6B6787CL,0xB110L,0xD9094550L,0x6410FA4C8627F26CLL,0xC176L},{1L,0xE6B6787CL,0xB110L,0xD9094550L,0x6410FA4C8627F26CLL,0xC176L}},{{1L,0xE6B6787CL,0xB110L,0xD9094550L,0x6410FA4C8627F26CLL,0xC176L},{1L,0xE6B6787CL,0xB110L,0xD9094550L,0x6410FA4C8627F26CLL,0xC176L},{1L,0xE6B6787CL,0xB110L,0xD9094550L,0x6410FA4C8627F26CLL,0xC176L},{1L,0xE6B6787CL,0xB110L,0xD9094550L,0x6410FA4C8627F26CLL,0xC176L}},{{1L,0xE6B6787CL,0xB110L,0xD9094550L,0x6410FA4C8627F26CLL,0xC176L},{1L,0xE6B6787CL,0xB110L,0xD9094550L,0x6410FA4C8627F26CLL,0xC176L},{1L,0xE6B6787CL,0xB110L,0xD9094550L,0x6410FA4C8627F26CLL,0xC176L},{1L,0xE6B6787CL,0xB110L,0xD9094550L,0x6410FA4C8627F26CLL,0xC176L}}};
            uint32_t *l_166[3];
            int32_t l_177 = 0x0F2E99C7L;
            int32_t l_195 = (-1L);
            int32_t l_204 = (-3L);
            int32_t l_206 = 3L;
            int32_t l_209 = 0xA59DDDC5L;
            int32_t l_213 = 0xE931A32EL;
            int32_t l_216 = 0xFFD04AB9L;
            int32_t l_218 = 0x9EC28806L;
            int32_t l_219 = 0xB94E06C7L;
            uint64_t l_220[7][6][2] = {{{0x05C3149682236D5ALL,7UL},{18446744073709551609UL,0x4E193FF47733F460LL},{18446744073709551609UL,7UL},{0x05C3149682236D5ALL,18446744073709551613UL},{0x6A2E21811C08D247LL,7UL},{0x255AA24B6D029A79LL,7UL}},{{0x6A2E21811C08D247LL,18446744073709551613UL},{0xDC5839176EC82406LL,0x4E193FF47733F460LL},{0x1743C508AB74A17DLL,0UL},{0x1743C508AB74A17DLL,0x4E193FF47733F460LL},{0xDC5839176EC82406LL,18446744073709551613UL},{0x6A2E21811C08D247LL,7UL}},{{0x255AA24B6D029A79LL,7UL},{0x6A2E21811C08D247LL,18446744073709551613UL},{0xDC5839176EC82406LL,0x4E193FF47733F460LL},{0x1743C508AB74A17DLL,0UL},{0x1743C508AB74A17DLL,0x4E193FF47733F460LL},{0xDC5839176EC82406LL,18446744073709551613UL}},{{0x6A2E21811C08D247LL,7UL},{0x255AA24B6D029A79LL,7UL},{0x6A2E21811C08D247LL,18446744073709551613UL},{0xDC5839176EC82406LL,0x4E193FF47733F460LL},{0x1743C508AB74A17DLL,0UL},{0x1743C508AB74A17DLL,0x4E193FF47733F460LL}},{{0xDC5839176EC82406LL,18446744073709551613UL},{0x6A2E21811C08D247LL,7UL},{0x255AA24B6D029A79LL,7UL},{0x6A2E21811C08D247LL,18446744073709551613UL},{0xDC5839176EC82406LL,0x4E193FF47733F460LL},{0x1743C508AB74A17DLL,0UL}},{{0x1743C508AB74A17DLL,0x4E193FF47733F460LL},{0xDC5839176EC82406LL,18446744073709551613UL},{0x6A2E21811C08D247LL,7UL},{0x255AA24B6D029A79LL,7UL},{0x6A2E21811C08D247LL,18446744073709551613UL},{0xDC5839176EC82406LL,0x4E193FF47733F460LL}},{{0x1743C508AB74A17DLL,0UL},{0x1743C508AB74A17DLL,0x4E193FF47733F460LL},{0xDC5839176EC82406LL,18446744073709551613UL},{0x6A2E21811C08D247LL,7UL},{0x255AA24B6D029A79LL,7UL},{0x6A2E21811C08D247LL,18446744073709551613UL}}};
            int16_t l_254[6];
            int16_t *l_255[5];
            union U1 l_302 = {0x3BF47646L};
            uint32_t l_313 = 4294967295UL;
            uint8_t *l_320[5][4] = {{&g_121.f3,&g_121.f3,&g_121.f3,&g_121.f3},{&g_121.f3,(void*)0,&g_121.f3,&g_121.f3},{&g_121.f3,&g_121.f3,&g_121.f3,&g_121.f3},{&l_302.f3,(void*)0,&l_302.f3,&g_121.f3},{&l_302.f3,&g_121.f3,&g_121.f3,&l_302.f3}};
            uint64_t ***l_364 = (void*)0;
            int32_t *l_395 = &l_216;
            int i, j, k;
            for (i = 0; i < 3; i++)
                l_166[i] = &l_132[3][1][4].f2;
            for (i = 0; i < 6; i++)
                l_254[i] = 0L;
            for (i = 0; i < 5; i++)
                l_255[i] = &l_254[4];
lbl_282:
            if (((*l_138) = ((l_161[0][2] , (*l_138)) || 0UL)))
            { 
                int64_t *l_171 = &l_161[0][2].f4;
                int32_t * const *l_193 = &l_133;
                int32_t *l_196 = &g_70[2];
                int32_t *l_197 = &l_160;
                int32_t *l_198 = &l_160;
                int32_t *l_199 = &l_177;
                int32_t *l_200 = &g_70[1];
                int32_t *l_201 = &g_70[0];
                int32_t *l_202[7][3][3] = {{{(void*)0,(void*)0,&l_160},{&g_2[3],&g_2[3],&l_130},{(void*)0,(void*)0,&l_130}},{{(void*)0,&g_2[3],&l_160},{&g_2[3],(void*)0,&l_130},{(void*)0,(void*)0,&l_130}},{{&g_2[3],&g_2[3],&l_160},{(void*)0,(void*)0,&l_160},{&g_2[3],&g_2[3],&l_130}},{{(void*)0,(void*)0,&l_130},{(void*)0,&g_2[3],&l_160},{&g_2[3],(void*)0,&l_130}},{{(void*)0,(void*)0,&l_130},{&g_2[3],&g_2[3],&l_160},{(void*)0,(void*)0,&l_160}},{{&g_2[3],&g_2[3],&l_130},{(void*)0,(void*)0,&l_130},{(void*)0,&g_2[3],&l_160}},{{&g_2[3],(void*)0,&l_130},{(void*)0,(void*)0,&l_130},{&g_2[3],&g_2[3],&l_160}}};
                int i, j, k;
                (*l_138) = (((safe_rshift_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u((l_166[1] != &p_117), 246UL)), 3)) == (safe_lshift_func_uint16_t_u_s(((*l_135)++), (*l_138)))) | ((*l_171) = (0x3B790C2EL <= (-6L))));
                for (l_160 = 18; (l_160 <= 25); l_160++)
                { 
                    uint8_t *l_186 = &l_132[3][1][4].f3;
                    int32_t l_190 = 0x61388AF4L;
                    int16_t *l_191 = (void*)0;
                    int16_t *l_192 = &g_48[5];
                    int32_t **l_194[4][6][1] = {{{&l_138},{(void*)0},{&l_138},{(void*)0},{&l_138},{(void*)0}},{{&l_138},{(void*)0},{&l_138},{(void*)0},{&l_138},{(void*)0}},{{&l_138},{(void*)0},{&l_138},{(void*)0},{&l_138},{(void*)0}},{{&l_138},{(void*)0},{&l_138},{(void*)0},{&l_138},{(void*)0}}};
                    int i, j, k;
                    (*l_138) |= ((((~(safe_add_func_uint32_t_u_u((l_177 = 0x1E08C4F1L), ((safe_mul_func_int16_t_s_s((safe_sub_func_uint64_t_u_u(g_121.f3, (safe_add_func_int16_t_s_s(((*l_192) = ((safe_lshift_func_uint8_t_u_s(((*l_186) = g_52.f0), 0)) == (((safe_add_func_int16_t_s_s((safe_unary_minus_func_uint32_t_u((((l_190 || 8UL) != g_52.f2) , g_61))), p_117)) || l_161[0][2].f4) ^ 0x39L))), g_61)))), l_161[0][2].f5)) == p_117)))) , l_193) == l_194[0][0][0]) ^ 1UL);
                    if (l_161[0][2].f5)
                        continue;
                    if ((*l_138))
                        break;
                }
                ++l_220[6][1][0];
            }
            else
            { 
                int16_t l_239 = 5L;
                int32_t l_240[3];
                uint8_t l_244 = 255UL;
                const struct S0 *l_259 = (void*)0;
                int i;
                for (i = 0; i < 3; i++)
                    l_240[i] = 0x042BDC2AL;
                for (l_195 = 0; (l_195 != (-24)); l_195 = safe_sub_func_int64_t_s_s(l_195, 1))
                { 
                    int32_t *l_225 = &l_205[0];
                    int32_t *l_226 = &l_213;
                    int32_t *l_227 = &l_206;
                    int32_t *l_228 = (void*)0;
                    int32_t *l_229 = &g_70[2];
                    int32_t *l_230 = &l_205[0];
                    int32_t *l_231 = &l_205[0];
                    int32_t *l_232 = (void*)0;
                    int32_t *l_233 = &l_216;
                    int32_t *l_234 = (void*)0;
                    int32_t *l_235 = (void*)0;
                    int32_t *l_236 = (void*)0;
                    int32_t *l_237[1][7][5] = {{{&l_211,&l_206,&l_211,&g_2[5],&g_2[5]},{&l_214,&g_2[1],&g_70[0],&l_214,&l_214},{&l_212,&l_217,&l_212,&l_211,&l_211},{&g_70[0],(void*)0,&g_70[0],&l_214,&l_214},{&l_212,&l_217,&l_212,&l_211,&l_211},{&g_70[0],(void*)0,&g_70[0],&l_214,&l_214},{&l_212,&l_217,&l_212,&l_211,&l_211}}};
                    uint32_t l_241 = 4294967295UL;
                    uint32_t l_249 = 0UL;
                    const struct S0 *l_258 = (void*)0;
                    const struct S0 **l_257[5] = {&l_258,&l_258,&l_258,&l_258,&l_258};
                    int i, j, k;
                    ++l_241;
                    l_244--;
                    l_249++;
                    g_256 &= ((g_48[2] = g_52.f4) < (&l_238[0] != ((0x33L >= ((p_119 ^ (safe_sub_func_uint64_t_u_u(p_117, g_52.f2))) > (((((((*l_225) = ((*l_229) = (((l_254[0] >= g_70[0]) , 0xAC0FL) && 0x6C3FL))) >= 0x566ACA7AL) && (*l_138)) & p_118) , g_19[1][3][5]) , 0x2204L))) , l_255[4])));
                    g_260 = (l_259 = &l_161[0][2]);
                }
                for (g_52.f2 = 0; (g_52.f2 <= 1); g_52.f2 += 1)
                { 
                    int8_t l_265 = 1L;
                    uint8_t *l_274 = &l_244;
                    uint8_t *l_275[1][6] = {{&l_132[3][1][4].f3,&l_132[3][1][4].f3,&l_132[3][1][4].f3,&l_132[3][1][4].f3,&l_132[3][1][4].f3,&l_132[3][1][4].f3}};
                    uint64_t *l_277 = &g_16[0];
                    int i, j;
                    g_278 = (((((safe_sub_func_uint8_t_u_u((safe_lshift_func_int16_t_s_u(l_265, ((safe_lshift_func_int8_t_s_u((safe_lshift_func_uint16_t_u_u((((*l_277) = ((g_52.f1 & (safe_mul_func_int16_t_s_s(((void*)0 == &g_52), (safe_rshift_func_uint8_t_u_s((g_121.f3 &= ((*l_274) = ((0x53AF24F6860CB6A6LL <= ((void*)0 != &g_52)) & p_117))), l_276))))) >= g_70[2])) & g_19[2][3][3]), 11)), g_70[0])) , g_2[6]))), 0x52L)) | g_52.f1) & g_112) | l_240[2]) , &g_2[6]);
                }
            }
            if ((safe_mul_func_uint16_t_u_u(((*l_135) ^= 8UL), (~0x2605AA8DD26E86E7LL))))
            { 
                int32_t *l_285[7] = {&l_219,&l_211,&l_211,&l_219,&l_211,&l_211,&l_219};
                union U1 *l_294 = (void*)0;
                union U1 l_295[5][1] = {{{0x633E4746L}},{{0L}},{{0x633E4746L}},{{0L}},{{0x633E4746L}}};
                uint8_t *l_308[3];
                uint16_t **l_310[2];
                int i, j;
                for (i = 0; i < 3; i++)
                    l_308[i] = &l_132[3][1][4].f3;
                for (i = 0; i < 2; i++)
                    l_310[i] = &l_309[1];
                (*l_138) = 1L;
                if (l_134)
                    goto lbl_282;
                for (g_52.f0 = 14; (g_52.f0 != (-16)); g_52.f0 = safe_sub_func_int8_t_s_s(g_52.f0, 6))
                { 
                    int32_t **l_286 = (void*)0;
                    int32_t **l_287 = &g_278;
                    struct S0 *l_289 = &l_161[1][0];
                    (*l_287) = l_285[2];
                    (*l_287) = &g_70[0];
                    (*l_289) = l_288;
                }
                g_278 = &g_2[6];
                g_312 |= (safe_rshift_func_int16_t_s_s((safe_lshift_func_int16_t_s_u((((l_295[2][0] = g_121) , l_135) == (g_311[0][1] = ((g_52.f3 <= (safe_rshift_func_uint8_t_u_s((l_177 |= ((safe_lshift_func_int16_t_s_u(p_119, (safe_mul_func_int16_t_s_s(((((l_302 , ((safe_lshift_func_int8_t_s_u((+(*l_138)), 7)) , l_306)) != (void*)0) , &g_70[2]) == (void*)0), (-2L))))) || 0UL)), 2))) , l_309[1]))), p_119)), 6));
            }
            else
            { 
                l_313 = (*g_278);
                g_278 = &g_2[6];
                return l_314;
            }
            (*l_138) = (safe_sub_func_uint8_t_u_u(((l_317 , (safe_rshift_func_uint8_t_u_s((l_317 , (l_206 &= g_52.f5)), 0))) ^ (((p_117 != (safe_lshift_func_uint16_t_u_s(l_209, 6))) | (l_216 = ((((safe_rshift_func_int8_t_s_u((l_219 = ((l_131[1] != l_320[1][1]) & p_118)), p_118)) != 1UL) >= l_325) & 5UL))) ^ l_326)), 0xC8L));
            if ((~0x25L))
            { 
                (*l_138) &= ((safe_mul_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u((((0x930A54DC80864ED8LL < ((safe_sub_func_uint8_t_u_u(0UL, (&g_48[5] != (void*)0))) || 0x367DL)) != (-9L)) < (g_256 = (g_48[1] = (safe_lshift_func_uint16_t_u_u(l_336, 14))))), l_161[0][2].f5)), p_118)) && 0x31F9L);
                return p_119;
            }
            else
            { 
                struct S0 *l_346 = &l_288;
                int32_t l_357[5][1][4] = {{{1L,0x4E7C8D37L,0x4D41D19AL,0x4E7C8D37L}},{{0x4E7C8D37L,0x1C1ADFDEL,0x4D41D19AL,0x4D41D19AL}},{{1L,1L,0x4E7C8D37L,0x4D41D19AL}},{{0x9B1A158EL,0x1C1ADFDEL,0x9B1A158EL,0x4E7C8D37L}},{{0x9B1A158EL,0x4E7C8D37L,0x4E7C8D37L,0x9B1A158EL}}};
                int i, j, k;
                (*l_138) = (safe_rshift_func_int16_t_s_u((0xADL > (p_118 , 0x54L)), (safe_add_func_uint32_t_u_u((safe_sub_func_int64_t_s_s((safe_rshift_func_int16_t_s_u(2L, 14)), ((~(p_118 >= 18446744073709551611UL)) >= (l_346 == l_346)))), (-8L)))));
                for (l_210 = 0; (l_210 <= 5); l_210 += 1)
                { 
                    int32_t **l_347 = &l_133;
                    int32_t *l_348 = &g_70[0];
                    int i;
                    (*l_347) = &g_2[3];
                    ++l_349;
                    g_70[0] ^= ((safe_div_func_uint16_t_u_u(((--g_121.f3) & l_254[l_210]), p_117)) != (g_356 = g_16[1]));
                    if ((*g_278))
                        break;
                    if (l_357[3][0][1])
                        break;
                }
            }
            for (l_203 = 0; (l_203 != (-30)); l_203--)
            { 
                uint64_t *l_363[3][3][4] = {{{&g_16[1],&g_16[1],&g_16[1],&g_16[1]},{&g_16[1],&g_16[1],&g_16[1],&g_16[1]},{&g_16[1],&g_16[1],&g_16[1],&g_16[1]}},{{&g_16[1],&g_16[1],&g_16[1],&g_16[1]},{&g_16[1],&g_16[1],&g_16[1],&g_16[1]},{&g_16[1],&g_16[1],&g_16[1],&g_16[1]}},{{&g_16[1],&g_16[1],&g_16[1],&g_16[1]},{&g_16[1],&g_16[1],&g_16[1],&g_16[1]},{&g_16[1],&g_16[1],&g_16[1],&g_16[1]}}};
                uint64_t **l_362[2];
                uint64_t *** const l_361 = &l_362[1];
                struct S0 *l_369 = &l_161[1][1];
                struct S0 **l_368 = &l_369;
                struct S0 *l_371 = &l_161[0][2];
                struct S0 **l_370 = &l_371;
                union U1 *l_373 = &l_132[4][0][0];
                union U1 **l_372 = &l_373;
                int32_t l_393 = (-10L);
                int32_t l_394 = (-5L);
                int i, j, k;
                for (i = 0; i < 2; i++)
                    l_362[i] = &l_363[2][2][0];
            }
        }
        l_411[0][0]++;
        p_118 = (*g_278);
        for (l_360 = (-27); (l_360 == 27); l_360 = safe_add_func_int32_t_s_s(l_360, 5))
        { 
            int32_t l_416 = 1L;
            if ((*g_278))
                break;
            l_417++;
        }
        return p_118;
    }
    else
    { 
        return p_118;
    }
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_2[i], "g_2[i]", print_hash_value);

    }
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_16[i], "g_16[i]", print_hash_value);

    }
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(g_19[i][j][k], "g_19[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_48[i], "g_48[i]", print_hash_value);

    }
    transparent_crc(g_52.f0, "g_52.f0", print_hash_value);
    transparent_crc(g_52.f1, "g_52.f1", print_hash_value);
    transparent_crc(g_52.f2, "g_52.f2", print_hash_value);
    transparent_crc(g_52.f3, "g_52.f3", print_hash_value);
    transparent_crc(g_52.f4, "g_52.f4", print_hash_value);
    transparent_crc(g_52.f5, "g_52.f5", print_hash_value);
    transparent_crc(g_61, "g_61", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_70[i], "g_70[i]", print_hash_value);

    }
    transparent_crc(g_112, "g_112", print_hash_value);
    transparent_crc(g_121.f0, "g_121.f0", print_hash_value);
    transparent_crc(g_121.f2, "g_121.f2", print_hash_value);
    transparent_crc(g_121.f3, "g_121.f3", print_hash_value);
    transparent_crc(g_256, "g_256", print_hash_value);
    transparent_crc(g_312, "g_312", print_hash_value);
    transparent_crc(g_356, "g_356", print_hash_value);
    transparent_crc(g_433, "g_433", print_hash_value);
    transparent_crc(g_647, "g_647", print_hash_value);
    transparent_crc(g_694, "g_694", print_hash_value);
    transparent_crc(g_874.f0, "g_874.f0", print_hash_value);
    transparent_crc(g_874.f2, "g_874.f2", print_hash_value);
    transparent_crc(g_874.f3, "g_874.f3", print_hash_value);
    transparent_crc(g_1013, "g_1013", print_hash_value);
    transparent_crc(g_1086, "g_1086", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(g_1155[i][j][k], "g_1155[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_1196.f0, "g_1196.f0", print_hash_value);
    transparent_crc(g_1196.f1, "g_1196.f1", print_hash_value);
    transparent_crc(g_1196.f2, "g_1196.f2", print_hash_value);
    transparent_crc(g_1196.f3, "g_1196.f3", print_hash_value);
    transparent_crc(g_1196.f4, "g_1196.f4", print_hash_value);
    transparent_crc(g_1196.f5, "g_1196.f5", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 7; k++)
            {
                transparent_crc(g_1451[i][j][k], "g_1451[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_1515, "g_1515", print_hash_value);
    transparent_crc(g_1519, "g_1519", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(g_1566[i][j], "g_1566[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_1618.f0, "g_1618.f0", print_hash_value);
    transparent_crc(g_1618.f1, "g_1618.f1", print_hash_value);
    transparent_crc(g_1618.f2, "g_1618.f2", print_hash_value);
    transparent_crc(g_1618.f3, "g_1618.f3", print_hash_value);
    transparent_crc(g_1618.f4, "g_1618.f4", print_hash_value);
    transparent_crc(g_1618.f5, "g_1618.f5", print_hash_value);
    transparent_crc(g_1724, "g_1724", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_1901[i][j], "g_1901[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_2013, "g_2013", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_2052[i][j][k], "g_2052[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_2081, "g_2081", print_hash_value);
    transparent_crc(g_2107, "g_2107", print_hash_value);
    transparent_crc(g_2214, "g_2214", print_hash_value);
    transparent_crc(g_2266, "g_2266", print_hash_value);
    transparent_crc(g_2318, "g_2318", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(g_2377[i][j], "g_2377[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_2428, "g_2428", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_2429[i], "g_2429[i]", print_hash_value);

    }
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
