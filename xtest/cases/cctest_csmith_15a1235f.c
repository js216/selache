// SPDX-License-Identifier: MIT
// cctest_csmith_15a1235f.c --- cctest case csmith_15a1235f (csmith seed 362881887)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xbeb1399e */
/* @exp_ticks 0x3106 */

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

// Options:   -s 362881887 -o /tmp/csmith_gen_9h9yfpu7/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   int32_t  f0;
};

#pragma pack(push)
#pragma pack(1)
struct S1 {
   int32_t  f0;
};
#pragma pack(pop)

union U2 {
   int32_t  f0;
   int32_t  f1;
};


static int32_t g_2 = 0xC90A35F3L;
static int32_t g_41[1][2] = {{1L,1L}};
static union U2 g_58 = {0x05008D6DL};
static uint16_t g_59 = 0x9BB5L;
static uint64_t g_61 = 0UL;
static uint16_t g_104 = 0xF78FL;
static uint32_t g_118 = 18446744073709551615UL;
static struct S0 g_121 = {0xF7BC9C4DL};
static struct S1 g_147 = {0L};
static int64_t g_148[3] = {0x86C8B6B2362835DFLL,0x86C8B6B2362835DFLL,0x86C8B6B2362835DFLL};



static uint64_t  func_1(void);
static const uint16_t  func_19(const struct S0  p_20, int16_t  p_21, uint64_t  p_22);
static struct S1  func_26(const struct S0  p_27, const uint32_t  p_28, uint16_t  p_29, int32_t  p_30, uint8_t  p_31);
static uint32_t  func_34(int64_t  p_35, union U2  p_36, const uint16_t  p_37, int32_t  p_38);




static uint64_t  func_1(void)
{ 
    int8_t l_24[5][2] = {{0xE2L,0x9FL},{0xE2L,0xE2L},{0x9FL,0xE2L},{0xE2L,0x9FL},{0xE2L,0xE2L}};
    int32_t l_150 = 0xB3B49DBEL;
    int32_t l_151 = 0L;
    int32_t l_152 = (-2L);
    uint32_t l_153 = 0x4E8149F6L;
    int i, j;
    for (g_2 = 0; (g_2 < (-26)); g_2 = safe_sub_func_uint64_t_u_u(g_2, 8))
    { 
        const uint32_t l_9 = 4294967294UL;
        const struct S0 l_23 = {1L};
        uint64_t l_25[3];
        int32_t l_149 = 0xB2D0C04BL;
        int i;
        for (i = 0; i < 3; i++)
            l_25[i] = 0UL;
        l_149 &= ((((g_148[2] = (safe_rshift_func_int16_t_s_s((safe_rshift_func_int16_t_s_u(l_9, 6)), ((safe_add_func_uint32_t_u_u((+(safe_mul_func_uint16_t_u_u(l_9, g_2))), (safe_rshift_func_uint8_t_u_s(((safe_lshift_func_uint16_t_u_s(func_19(l_23, l_24[4][1], l_25[1]), l_24[4][1])) < l_25[0]), g_2)))) , g_118)))) <= g_2) ^ l_25[0]) >= 1UL);
    }
    ++l_153;
    return l_24[4][1];
}



static const uint16_t  func_19(const struct S0  p_20, int16_t  p_21, uint64_t  p_22)
{ 
    const struct S0 l_32 = {0x196E86FFL};
    union U2 l_39 = {0xDC64F6B9L};
    const uint16_t l_40 = 0xF1FEL;
    uint8_t l_133 = 0x2BL;
    g_147 = func_26(l_32, (p_22 , 1UL), (((safe_unary_minus_func_uint32_t_u(func_34(l_32.f0, l_39, l_40, l_39.f0))) >= 0xFD81L) , g_104), g_2, l_133);
    g_58.f1 &= l_133;
    g_121.f0 = 0xFBB02A76L;
    return l_39.f1;
}



static struct S1  func_26(const struct S0  p_27, const uint32_t  p_28, uint16_t  p_29, int32_t  p_30, uint8_t  p_31)
{ 
    int32_t l_143 = 0L;
    struct S1 l_146 = {5L};
    for (g_118 = 16; (g_118 != 42); g_118++)
    { 
        uint8_t l_140 = 255UL;
        int32_t l_144 = 0x9C8172F0L;
        struct S1 l_145 = {0x90F8A910L};
        for (g_104 = 0; (g_104 <= 0); g_104 += 1)
        { 
            int i, j;
            if (((safe_mod_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u(0x9AL, (g_121 , (g_41[g_104][g_104] != ((((l_140++) == g_41[g_104][g_104]) != l_143) && 0xC6L))))), 0x3D34L)) & l_144))
            { 
                if (l_143)
                    break;
                if (p_29)
                    break;
                l_145 = l_145;
            }
            else
            { 
                g_121.f0 &= p_31;
            }
        }
    }
    return l_146;
}



static uint32_t  func_34(int64_t  p_35, union U2  p_36, const uint16_t  p_37, int32_t  p_38)
{ 
    uint32_t l_42[2][5];
    const uint32_t l_60[1][5] = {{18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL}};
    int32_t l_62 = 4L;
    int32_t l_79 = (-9L);
    const uint64_t l_97 = 0xB08463F95669DD8BLL;
    int i, j;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 5; j++)
            l_42[i][j] = 0x0E402095L;
    }
lbl_132:
    --l_42[1][3];
    if ((+(((l_62 = (safe_mul_func_uint16_t_u_u(p_36.f1, ((g_61 ^= (safe_add_func_int16_t_s_s((((safe_rshift_func_uint8_t_u_s(3UL, 3)) > (safe_add_func_uint8_t_u_u((g_59 |= ((safe_add_func_uint64_t_u_u((safe_add_func_uint64_t_u_u(0x42F34C933337672ALL, (g_58 , 0L))), 0L)) ^ l_42[1][3])), l_60[0][1]))) != 255UL), 0x7F2AL))) , 0xCEC8L)))) | 0x7FL) != l_60[0][1])))
    { 
        uint32_t l_78 = 8UL;
        for (g_58.f1 = (-13); (g_58.f1 > (-12)); g_58.f1 = safe_add_func_int16_t_s_s(g_58.f1, 9))
        { 
            uint64_t l_65 = 8UL;
            l_62 ^= l_65;
        }
        l_79 = ((+(safe_rshift_func_uint8_t_u_u((l_78 = (safe_add_func_uint32_t_u_u(0x64E38B13L, ((+(g_2 , (l_62 |= (g_2 && (safe_rshift_func_uint8_t_u_u((safe_sub_func_int8_t_s_s(((safe_lshift_func_int16_t_s_u((-3L), 2)) >= g_61), l_42[0][3])), 1)))))) && p_36.f0)))), p_36.f1))) == p_36.f1);
    }
    else
    { 
        int32_t l_85 = 0L;
        int32_t l_109 = 0xBF82AF62L;
        int32_t l_128 = 0x2E6CEB5FL;
        if ((0x88D5L == 0x1665L))
        { 
            int32_t l_82 = 9L;
            l_82 = (((l_60[0][1] || (p_38 >= p_36.f0)) , g_61) , g_61);
        }
        else
        { 
            int32_t l_96 = (-1L);
            int32_t l_106[3];
            int i;
            for (i = 0; i < 3; i++)
                l_106[i] = 1L;
            if ((safe_add_func_int8_t_s_s(l_85, (safe_mod_func_int32_t_s_s(l_85, ((((safe_add_func_uint16_t_u_u(g_59, (!((~((safe_lshift_func_uint16_t_u_u(((safe_sub_func_int8_t_s_s((l_96 & p_38), l_96)) <= l_97), 13)) , 0x967819277EF9B05DLL)) < p_36.f0)))) | g_2) || l_85) | p_35))))))
            { 
                g_41[0][1] = (safe_div_func_int8_t_s_s((safe_sub_func_uint32_t_u_u((g_104 = (safe_add_func_int16_t_s_s(0x2DE5L, g_41[0][1]))), (-5L))), (g_2 && g_41[0][1])));
            }
            else
            { 
                l_106[1] = ((g_2 ^ (safe_unary_minus_func_int64_t_s(l_96))) < (l_79 = l_42[1][2]));
            }
        }
        for (l_62 = 0; (l_62 <= 1); l_62 += 1)
        { 
            int8_t l_110[5] = {3L,3L,3L,3L,3L};
            int32_t l_111 = 0x768238A5L;
            struct S0 l_122[4] = {{0xCDE8027EL},{0xCDE8027EL},{0xCDE8027EL},{0xCDE8027EL}};
            int32_t l_127 = 0xA05350A1L;
            int i;
            if ((p_36.f0 && (g_118 ^= ((safe_lshift_func_uint16_t_u_u((g_59--), (((((safe_sub_func_uint64_t_u_u(((safe_lshift_func_int8_t_s_s((g_2 , p_38), ((p_38 , l_110[4]) != (-7L)))) | l_79), l_97)) ^ 1L) & 0x5AL) || 7L) <= p_37))) || g_2))))
            { 
                p_36.f1 &= (l_79 = (((((safe_mod_func_int8_t_s_s(0xDEL, 0x55L)) | 0L) >= g_104) <= p_38) , l_109));
                l_122[3] = g_121;
            }
            else
            { 
                uint32_t l_123[4];
                int32_t l_126 = 0x3F171379L;
                uint16_t l_129 = 0x9B24L;
                int i;
                for (i = 0; i < 4; i++)
                    l_123[i] = 0x104D70CCL;
                l_123[2]--;
                l_129++;
            }
            for (p_35 = 0; (p_35 <= 4); p_35 += 1)
            { 
                int i, j;
                if (l_62)
                    goto lbl_132;
                if (l_42[l_62][p_35])
                    break;
            }
            for (l_79 = 1; (l_79 >= 0); l_79 -= 1)
            { 
                int i, j;
                if (l_42[l_79][(l_62 + 3)])
                    break;
            }
        }
    }
    return g_2;
}





int test_main(void)
{
    int i, j;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_41[i][j], "g_41[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_58.f0, "g_58.f0", print_hash_value);
    transparent_crc(g_58.f1, "g_58.f1", print_hash_value);
    transparent_crc(g_59, "g_59", print_hash_value);
    transparent_crc(g_61, "g_61", print_hash_value);
    transparent_crc(g_104, "g_104", print_hash_value);
    transparent_crc(g_118, "g_118", print_hash_value);
    transparent_crc(g_121.f0, "g_121.f0", print_hash_value);
    transparent_crc(g_147.f0, "g_147.f0", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_148[i], "g_148[i]", print_hash_value);

    }
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
