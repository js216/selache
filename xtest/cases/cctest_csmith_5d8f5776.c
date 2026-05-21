// SPDX-License-Identifier: MIT
// cctest_csmith_5d8f5776.c --- cctest case csmith_5d8f5776 (csmith seed 1569675126)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x821b5a68 */

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

// Options:   -s 1569675126 -o /tmp/csmith_gen_hots77rl/csmith.c --concise --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


struct S0 {
   int64_t  f0;
   int8_t  f1;
   int32_t  f2;
   uint64_t  f3;
};

union U1 {
   int8_t * f0;
   const int32_t  f1;
   int64_t  f2;
   int32_t  f3;
   int32_t  f4;
};


static int8_t g_12 = 1L;
static uint16_t g_25 = 0x8EC3L;
static int32_t g_34 = 0x3EE67684L;
static int32_t g_39 = 0x56E623B2L;
static int32_t g_72 = 0xD44351D5L;
static struct S0 g_78 = {-10L,0xD8L,-1L,0x9FAA33FE686B7DE7LL};
static uint8_t g_101 = 0xA5L;
static struct S0 g_105 = {-1L,-1L,0xFE8548DCL,0x916D66C253094EEELL};
static int16_t g_113[4][7] = {{(-6L),0xF01EL,0xF01EL,(-6L),0x0913L,0x01E3L,0x0913L},{0x6021L,9L,9L,0x6021L,0x059AL,(-1L),0x059AL},{(-6L),0xF01EL,0xF01EL,(-6L),0x0913L,0x01E3L,0x0913L},{0x6021L,9L,9L,0x6021L,0x059AL,(-1L),0x059AL}};
static int32_t g_114 = 0xC9C88BE1L;
static struct S0 g_125 = {0xEB9145EC307D3DBFLL,-1L,1L,0x677FA2621F7AE596LL};
static int32_t *g_155[2][3][5] = {{{&g_105.f2,&g_105.f2,&g_105.f2,&g_105.f2,&g_105.f2},{&g_105.f2,&g_105.f2,&g_105.f2,&g_105.f2,&g_105.f2},{&g_105.f2,&g_105.f2,&g_105.f2,&g_105.f2,&g_105.f2}},{{&g_105.f2,&g_105.f2,&g_105.f2,&g_105.f2,&g_105.f2},{&g_105.f2,&g_105.f2,&g_105.f2,&g_105.f2,&g_105.f2},{&g_105.f2,&g_105.f2,&g_105.f2,&g_105.f2,&g_105.f2}}};
static int32_t **g_154 = &g_155[0][2][0];
static int16_t *g_170 = &g_113[1][6];
static int16_t *g_171[3] = {&g_113[1][3],&g_113[1][3],&g_113[1][3]};
static uint64_t g_177 = 1UL;
static uint32_t g_188[3][5] = {{0x07395427L,0xA4600C22L,0x07395427L,0xA4600C22L,0x07395427L},{0xDDA55863L,0xDDA55863L,0xDDA55863L,0xDDA55863L,0xDDA55863L},{0x07395427L,0xA4600C22L,0x07395427L,0xA4600C22L,0x07395427L}};
static int16_t g_254 = 1L;
static uint16_t *g_256 = &g_25;
static const int64_t *g_267 = &g_78.f0;
static uint8_t *g_304 = &g_101;
static uint8_t **g_303[7] = {&g_304,&g_304,&g_304,&g_304,&g_304,&g_304,&g_304};
static int32_t g_320 = 0x30E06A7DL;
static int16_t **g_359 = &g_171[1];
static int16_t ***g_358[6] = {&g_359,&g_359,&g_359,&g_359,&g_359,&g_359};
static const struct S0 *g_411 = (void*)0;
static const struct S0 **g_410 = &g_411;
static int16_t g_444 = 0x9A2AL;
static union U1 g_519 = {0};
static uint8_t g_608[6][6] = {{9UL,9UL,255UL,7UL,255UL,9UL},{255UL,0xBFL,7UL,7UL,0xBFL,255UL},{9UL,255UL,7UL,255UL,9UL,9UL},{0x27L,255UL,255UL,0x27L,0xBFL,0x27L},{0x27L,0xBFL,0x27L,255UL,255UL,0x27L},{9UL,9UL,255UL,7UL,255UL,9UL}};
static uint8_t g_641 = 1UL;
static uint16_t g_706 = 0UL;
static const int32_t g_722 = 0xF1517C17L;
static const int32_t *g_721 = &g_722;
static uint32_t g_750 = 18446744073709551615UL;
static uint16_t **g_816 = &g_256;
static uint16_t ***g_815[3] = {&g_816,&g_816,&g_816};
static struct S0 g_955[4][6][7] = {{{{0x4C5B123AC58CB1DDLL,0xBFL,0xE6C52293L,4UL},{0xB6D5D739A6082469LL,0x56L,0L,0x9F770A60C488B035LL},{0xB6D5D739A6082469LL,0x56L,0L,0x9F770A60C488B035LL},{0x4C5B123AC58CB1DDLL,0xBFL,0xE6C52293L,4UL},{0xB6D5D739A6082469LL,0x56L,0L,0x9F770A60C488B035LL},{0xB6D5D739A6082469LL,0x56L,0L,0x9F770A60C488B035LL},{0x4C5B123AC58CB1DDLL,0xBFL,0xE6C52293L,4UL}},{{0xB6D5D739A6082469LL,0x56L,0L,0x9F770A60C488B035LL},{0x4C5B123AC58CB1DDLL,0xBFL,0xE6C52293L,4UL},{0xB6D5D739A6082469LL,0x56L,0L,0x9F770A60C488B035LL},{0xB6D5D739A6082469LL,0x56L,0L,0x9F770A60C488B035LL},{0x4C5B123AC58CB1DDLL,0xBFL,0xE6C52293L,4UL},{0xB6D5D739A6082469LL,0x56L,0L,0x9F770A60C488B035LL},{0xB6D5D739A6082469LL,0x56L,0L,0x9F770A60C488B035LL}},{{0x4C5B123AC58CB1DDLL,0xBFL,0xE6C52293L,4UL},{0x4C5B123AC58CB1DDLL,0xBFL,0xE6C52293L,4UL},{0xFAC39AB8A3539478LL,0xC0L,0x38FE1AA8L,18446744073709551615UL},{0x4C5B123AC58CB1DDLL,0xBFL,0xE6C52293L,4UL},{0x4C5B123AC58CB1DDLL,0xBFL,0xE6C52293L,4UL},{0xFAC39AB8A3539478LL,0xC0L,0x38FE1AA8L,18446744073709551615UL},{0x4C5B123AC58CB1DDLL,0xBFL,0xE6C52293L,4UL}},{{0x4C5B123AC58CB1DDLL,0xBFL,0xE6C52293L,4UL},{0xB6D5D739A6082469LL,0x56L,0L,0x9F770A60C488B035LL},{0xB6D5D739A6082469LL,0x56L,0L,0x9F770A60C488B035LL},{0x4C5B123AC58CB1DDLL,0xBFL,0xE6C52293L,4UL},{0xB6D5D739A6082469LL,0x56L,0L,0x9F770A60C488B035LL},{0xB6D5D739A6082469LL,0x56L,0L,0x9F770A60C488B035LL},{0x4C5B123AC58CB1DDLL,0xBFL,0xE6C52293L,4UL}},{{0xB6D5D739A6082469LL,0x56L,0L,0x9F770A60C488B035LL},{0x4C5B123AC58CB1DDLL,0xBFL,0xE6C52293L,4UL},{0xB6D5D739A6082469LL,0x56L,0L,0x9F770A60C488B035LL},{0xB6D5D739A6082469LL,0x56L,0L,0x9F770A60C488B035LL},{0x4C5B123AC58CB1DDLL,0xBFL,0xE6C52293L,4UL},{0xB6D5D739A6082469LL,0x56L,0L,0x9F770A60C488B035LL},{0xB6D5D739A6082469LL,0x56L,0L,0x9F770A60C488B035LL}},{{0x4C5B123AC58CB1DDLL,0xBFL,0xE6C52293L,4UL},{0x4C5B123AC58CB1DDLL,0xBFL,0xE6C52293L,4UL},{0xFAC39AB8A3539478LL,0xC0L,0x38FE1AA8L,18446744073709551615UL},{0x4C5B123AC58CB1DDLL,0xBFL,0xE6C52293L,4UL},{0x4C5B123AC58CB1DDLL,0xBFL,0xE6C52293L,4UL},{0xFAC39AB8A3539478LL,0xC0L,0x38FE1AA8L,18446744073709551615UL},{0x4C5B123AC58CB1DDLL,0xBFL,0xE6C52293L,4UL}}},{{{0x4C5B123AC58CB1DDLL,0xBFL,0xE6C52293L,4UL},{0xB6D5D739A6082469LL,0x56L,0L,0x9F770A60C488B035LL},{0xB6D5D739A6082469LL,0x56L,0L,0x9F770A60C488B035LL},{0x4C5B123AC58CB1DDLL,0xBFL,0xE6C52293L,4UL},{0xB6D5D739A6082469LL,0x56L,0L,0x9F770A60C488B035LL},{0xB6D5D739A6082469LL,0x56L,0L,0x9F770A60C488B035LL},{0x4C5B123AC58CB1DDLL,0xBFL,0xE6C52293L,4UL}},{{0xB6D5D739A6082469LL,0x56L,0L,0x9F770A60C488B035LL},{0x4C5B123AC58CB1DDLL,0xBFL,0xE6C52293L,4UL},{0xB6D5D739A6082469LL,0x56L,0L,0x9F770A60C488B035LL},{0xB6D5D739A6082469LL,0x56L,0L,0x9F770A60C488B035LL},{0x4C5B123AC58CB1DDLL,0xBFL,0xE6C52293L,4UL},{0xB6D5D739A6082469LL,0x56L,0L,0x9F770A60C488B035LL},{0xB6D5D739A6082469LL,0x56L,0L,0x9F770A60C488B035LL}},{{0x4C5B123AC58CB1DDLL,0xBFL,0xE6C52293L,4UL},{0x4C5B123AC58CB1DDLL,0xBFL,0xE6C52293L,4UL},{0xFAC39AB8A3539478LL,0xC0L,0x38FE1AA8L,18446744073709551615UL},{0x4C5B123AC58CB1DDLL,0xBFL,0xE6C52293L,4UL},{0x4C5B123AC58CB1DDLL,0xBFL,0xE6C52293L,4UL},{0xFAC39AB8A3539478LL,0xC0L,0x38FE1AA8L,18446744073709551615UL},{0x4C5B123AC58CB1DDLL,0xBFL,0xE6C52293L,4UL}},{{0x4C5B123AC58CB1DDLL,0xBFL,0xE6C52293L,4UL},{0xB6D5D739A6082469LL,0x56L,0L,0x9F770A60C488B035LL},{0xB6D5D739A6082469LL,0x56L,0L,0x9F770A60C488B035LL},{0x4C5B123AC58CB1DDLL,0xBFL,0xE6C52293L,4UL},{0xB6D5D739A6082469LL,0x56L,0L,0x9F770A60C488B035LL},{0xB6D5D739A6082469LL,0x56L,0L,0x9F770A60C488B035LL},{0x4C5B123AC58CB1DDLL,0xBFL,0xE6C52293L,4UL}},{{0xB6D5D739A6082469LL,0x56L,0L,0x9F770A60C488B035LL},{0x4C5B123AC58CB1DDLL,0xBFL,0xE6C52293L,4UL},{0xB6D5D739A6082469LL,0x56L,0L,0x9F770A60C488B035LL},{0xB6D5D739A6082469LL,0x56L,0L,0x9F770A60C488B035LL},{0x4C5B123AC58CB1DDLL,0xBFL,0xE6C52293L,4UL},{0xB6D5D739A6082469LL,0x56L,0L,0x9F770A60C488B035LL},{0xB6D5D739A6082469LL,0x56L,0L,0x9F770A60C488B035LL}},{{0x4C5B123AC58CB1DDLL,0xBFL,0xE6C52293L,4UL},{0x4C5B123AC58CB1DDLL,0xBFL,0xE6C52293L,4UL},{0xFAC39AB8A3539478LL,0xC0L,0x38FE1AA8L,18446744073709551615UL},{0x4C5B123AC58CB1DDLL,0xBFL,0xE6C52293L,4UL},{0x4C5B123AC58CB1DDLL,0xBFL,0xE6C52293L,4UL},{0xFAC39AB8A3539478LL,0xC0L,0x38FE1AA8L,18446744073709551615UL},{0x4C5B123AC58CB1DDLL,0xBFL,0xE6C52293L,4UL}}},{{{0x4C5B123AC58CB1DDLL,0xBFL,0xE6C52293L,4UL},{0xB6D5D739A6082469LL,0x56L,0L,0x9F770A60C488B035LL},{0xB6D5D739A6082469LL,0x56L,0L,0x9F770A60C488B035LL},{0x4C5B123AC58CB1DDLL,0xBFL,0xE6C52293L,4UL},{0xB6D5D739A6082469LL,0x56L,0L,0x9F770A60C488B035LL},{0xB6D5D739A6082469LL,0x56L,0L,0x9F770A60C488B035LL},{0x4C5B123AC58CB1DDLL,0xBFL,0xE6C52293L,4UL}},{{0xB6D5D739A6082469LL,0x56L,0L,0x9F770A60C488B035LL},{0x4C5B123AC58CB1DDLL,0xBFL,0xE6C52293L,4UL},{0xB6D5D739A6082469LL,0x56L,0L,0x9F770A60C488B035LL},{0xB6D5D739A6082469LL,0x56L,0L,0x9F770A60C488B035LL},{0x4C5B123AC58CB1DDLL,0xBFL,0xE6C52293L,4UL},{0xB6D5D739A6082469LL,0x56L,0L,0x9F770A60C488B035LL},{0xB6D5D739A6082469LL,0x56L,0L,0x9F770A60C488B035LL}},{{0x4C5B123AC58CB1DDLL,0xBFL,0xE6C52293L,4UL},{0x4C5B123AC58CB1DDLL,0xBFL,0xE6C52293L,4UL},{0xFAC39AB8A3539478LL,0xC0L,0x38FE1AA8L,18446744073709551615UL},{0x4C5B123AC58CB1DDLL,0xBFL,0xE6C52293L,4UL},{0x4C5B123AC58CB1DDLL,0xBFL,0xE6C52293L,4UL},{0xFAC39AB8A3539478LL,0xC0L,0x38FE1AA8L,18446744073709551615UL},{0x4C5B123AC58CB1DDLL,0xBFL,0xE6C52293L,4UL}},{{0x4C5B123AC58CB1DDLL,0xBFL,0xE6C52293L,4UL},{0xB6D5D739A6082469LL,0x56L,0L,0x9F770A60C488B035LL},{0xB6D5D739A6082469LL,0x56L,0L,0x9F770A60C488B035LL},{0x4C5B123AC58CB1DDLL,0xBFL,0xE6C52293L,4UL},{0xFAC39AB8A3539478LL,0xC0L,0x38FE1AA8L,18446744073709551615UL},{0xFAC39AB8A3539478LL,0xC0L,0x38FE1AA8L,18446744073709551615UL},{0xB6D5D739A6082469LL,0x56L,0L,0x9F770A60C488B035LL}},{{0xFAC39AB8A3539478LL,0xC0L,0x38FE1AA8L,18446744073709551615UL},{0xB6D5D739A6082469LL,0x56L,0L,0x9F770A60C488B035LL},{0xFAC39AB8A3539478LL,0xC0L,0x38FE1AA8L,18446744073709551615UL},{0xFAC39AB8A3539478LL,0xC0L,0x38FE1AA8L,18446744073709551615UL},{0xB6D5D739A6082469LL,0x56L,0L,0x9F770A60C488B035LL},{0xFAC39AB8A3539478LL,0xC0L,0x38FE1AA8L,18446744073709551615UL},{0xFAC39AB8A3539478LL,0xC0L,0x38FE1AA8L,18446744073709551615UL}},{{0xB6D5D739A6082469LL,0x56L,0L,0x9F770A60C488B035LL},{0xB6D5D739A6082469LL,0x56L,0L,0x9F770A60C488B035LL},{0x4C5B123AC58CB1DDLL,0xBFL,0xE6C52293L,4UL},{0xB6D5D739A6082469LL,0x56L,0L,0x9F770A60C488B035LL},{0xB6D5D739A6082469LL,0x56L,0L,0x9F770A60C488B035LL},{0x4C5B123AC58CB1DDLL,0xBFL,0xE6C52293L,4UL},{0xB6D5D739A6082469LL,0x56L,0L,0x9F770A60C488B035LL}}},{{{0xB6D5D739A6082469LL,0x56L,0L,0x9F770A60C488B035LL},{0xFAC39AB8A3539478LL,0xC0L,0x38FE1AA8L,18446744073709551615UL},{0xFAC39AB8A3539478LL,0xC0L,0x38FE1AA8L,18446744073709551615UL},{0xB6D5D739A6082469LL,0x56L,0L,0x9F770A60C488B035LL},{0xFAC39AB8A3539478LL,0xC0L,0x38FE1AA8L,18446744073709551615UL},{0xFAC39AB8A3539478LL,0xC0L,0x38FE1AA8L,18446744073709551615UL},{0xB6D5D739A6082469LL,0x56L,0L,0x9F770A60C488B035LL}},{{0xFAC39AB8A3539478LL,0xC0L,0x38FE1AA8L,18446744073709551615UL},{0xB6D5D739A6082469LL,0x56L,0L,0x9F770A60C488B035LL},{0xFAC39AB8A3539478LL,0xC0L,0x38FE1AA8L,18446744073709551615UL},{0xFAC39AB8A3539478LL,0xC0L,0x38FE1AA8L,18446744073709551615UL},{0xB6D5D739A6082469LL,0x56L,0L,0x9F770A60C488B035LL},{0xFAC39AB8A3539478LL,0xC0L,0x38FE1AA8L,18446744073709551615UL},{0xFAC39AB8A3539478LL,0xC0L,0x38FE1AA8L,18446744073709551615UL}},{{0xB6D5D739A6082469LL,0x56L,0L,0x9F770A60C488B035LL},{0xB6D5D739A6082469LL,0x56L,0L,0x9F770A60C488B035LL},{0x4C5B123AC58CB1DDLL,0xBFL,0xE6C52293L,4UL},{0xB6D5D739A6082469LL,0x56L,0L,0x9F770A60C488B035LL},{0xB6D5D739A6082469LL,0x56L,0L,0x9F770A60C488B035LL},{0x4C5B123AC58CB1DDLL,0xBFL,0xE6C52293L,4UL},{0xB6D5D739A6082469LL,0x56L,0L,0x9F770A60C488B035LL}},{{0xB6D5D739A6082469LL,0x56L,0L,0x9F770A60C488B035LL},{0xFAC39AB8A3539478LL,0xC0L,0x38FE1AA8L,18446744073709551615UL},{0xFAC39AB8A3539478LL,0xC0L,0x38FE1AA8L,18446744073709551615UL},{0xB6D5D739A6082469LL,0x56L,0L,0x9F770A60C488B035LL},{0xFAC39AB8A3539478LL,0xC0L,0x38FE1AA8L,18446744073709551615UL},{0xFAC39AB8A3539478LL,0xC0L,0x38FE1AA8L,18446744073709551615UL},{0xB6D5D739A6082469LL,0x56L,0L,0x9F770A60C488B035LL}},{{0xFAC39AB8A3539478LL,0xC0L,0x38FE1AA8L,18446744073709551615UL},{0xB6D5D739A6082469LL,0x56L,0L,0x9F770A60C488B035LL},{0xFAC39AB8A3539478LL,0xC0L,0x38FE1AA8L,18446744073709551615UL},{0xFAC39AB8A3539478LL,0xC0L,0x38FE1AA8L,18446744073709551615UL},{0xB6D5D739A6082469LL,0x56L,0L,0x9F770A60C488B035LL},{0xFAC39AB8A3539478LL,0xC0L,0x38FE1AA8L,18446744073709551615UL},{0xFAC39AB8A3539478LL,0xC0L,0x38FE1AA8L,18446744073709551615UL}},{{0xB6D5D739A6082469LL,0x56L,0L,0x9F770A60C488B035LL},{0xB6D5D739A6082469LL,0x56L,0L,0x9F770A60C488B035LL},{0x4C5B123AC58CB1DDLL,0xBFL,0xE6C52293L,4UL},{0xB6D5D739A6082469LL,0x56L,0L,0x9F770A60C488B035LL},{0xB6D5D739A6082469LL,0x56L,0L,0x9F770A60C488B035LL},{0x4C5B123AC58CB1DDLL,0xBFL,0xE6C52293L,4UL},{0xB6D5D739A6082469LL,0x56L,0L,0x9F770A60C488B035LL}}}};
static struct S0 *g_991[3] = {&g_125,&g_125,&g_125};
static struct S0 **g_990[2][4] = {{&g_991[0],&g_991[0],&g_991[0],&g_991[0]},{&g_991[0],&g_991[0],&g_991[0],&g_991[0]}};
static union U1 *g_995 = &g_519;
static union U1 **g_994 = &g_995;
static int8_t g_1023 = 0x22L;
static int64_t g_1059 = 0x3DA885141307D12FLL;
static int8_t *g_1092 = &g_1023;
static int8_t **g_1091 = &g_1092;
static int32_t *g_1119[5] = {&g_955[2][4][5].f2,&g_955[2][4][5].f2,&g_955[2][4][5].f2,&g_955[2][4][5].f2,&g_955[2][4][5].f2};



static uint64_t  func_1(void);
static int32_t  func_2(int8_t * p_3, int64_t  p_4);
static int8_t * func_5(uint8_t  p_6);
static uint8_t  func_7(uint64_t  p_8, uint64_t  p_9, union U1  p_10, int8_t * const  p_11);
static union U1  func_14(uint16_t  p_15, uint16_t  p_16, const uint64_t  p_17, int32_t  p_18, union U1  p_19);
static int16_t  func_22(const int32_t  p_23);
static int32_t  func_55(uint16_t * p_56, const int32_t  p_57, union U1  p_58, uint16_t * p_59, const int16_t  p_60);
static uint16_t * func_61(int8_t * p_62, uint32_t  p_63, const uint16_t * p_64, uint16_t * const  p_65, uint16_t * p_66);




static uint64_t  func_1(void)
{ 
    const int8_t * const l_13 = &g_12;
    uint16_t *l_24 = &g_25;
    union U1 l_26 = {0};
    uint64_t *l_515 = &g_78.f3;
    int8_t * const l_516 = &g_12;
    int32_t l_1117 = 0xE14D8591L;
    int32_t *l_1121[1];
    uint16_t l_1122 = 9UL;
    int i;
    for (i = 0; i < 1; i++)
        l_1121[i] = &g_955[2][4][5].f2;
    l_1122 = func_2(func_5(func_7(g_12, ((*l_515) = ((((void*)0 == l_13) , func_14(((*l_24) = (safe_mod_func_uint16_t_u_u((g_12 , g_12), (func_22(g_12) && g_12)))), g_12, g_12, g_12, l_26)) , 1UL)), l_26, l_516)), l_1117);
    return g_125.f1;
}



static int32_t  func_2(int8_t * p_3, int64_t  p_4)
{ 
    struct S0 *l_1118[6][7] = {{&g_78,&g_955[2][0][0],&g_955[2][0][0],&g_78,&g_125,&g_78,&g_955[2][0][0]},{&g_955[2][4][5],&g_955[2][4][5],(void*)0,&g_125,(void*)0,&g_955[2][4][5],&g_955[2][4][5]},{&g_78,&g_955[2][0][0],&g_955[2][4][5],&g_955[2][0][0],&g_78,&g_78,&g_955[2][0][0]},{&g_955[3][0][2],&g_955[1][0][1],&g_955[3][0][2],(void*)0,(void*)0,&g_955[3][0][2],&g_955[1][0][1]},{&g_955[2][0][0],&g_125,&g_955[2][4][5],&g_955[2][4][5],&g_125,&g_955[2][0][0],&g_125},{&g_955[3][0][2],(void*)0,(void*)0,&g_955[3][0][2],&g_955[1][0][1],&g_955[3][0][2],(void*)0}};
    int32_t **l_1120 = &g_155[0][2][0];
    int i, j;
    (*g_410) = l_1118[0][0];
    (*l_1120) = g_1119[4];
    return p_4;
}



static int8_t * func_5(uint8_t  p_6)
{ 
    uint8_t l_699 = 0x15L;
    uint32_t *l_702[4][5] = {{&g_188[0][3],&g_188[0][3],&g_188[0][3],&g_188[0][3],&g_188[0][3]},{&g_188[2][1],&g_188[2][1],&g_188[2][1],&g_188[2][1],&g_188[2][1]},{&g_188[0][3],&g_188[0][3],&g_188[0][3],&g_188[0][3],&g_188[0][3]},{&g_188[2][1],&g_188[2][1],&g_188[2][1],&g_188[2][1],&g_188[2][1]}};
    int32_t l_703[5] = {0xBFEC5FD4L,0xBFEC5FD4L,0xBFEC5FD4L,0xBFEC5FD4L,0xBFEC5FD4L};
    int64_t **l_704 = (void*)0;
    uint16_t *l_705[4][3][7] = {{{&g_706,&g_706,&g_706,&g_706,&g_706,&g_706,&g_706},{&g_706,&g_706,&g_706,&g_706,&g_706,&g_706,&g_706},{&g_706,(void*)0,&g_706,(void*)0,&g_706,&g_706,(void*)0}},{{&g_706,&g_706,&g_706,(void*)0,&g_706,&g_706,&g_706},{&g_706,(void*)0,(void*)0,&g_706,(void*)0,&g_706,&g_706},{&g_706,&g_706,&g_706,&g_706,&g_706,&g_706,&g_706}},{{&g_706,&g_706,&g_706,&g_706,&g_706,&g_706,&g_706},{&g_706,&g_706,&g_706,(void*)0,(void*)0,&g_706,&g_706},{&g_706,(void*)0,&g_706,&g_706,(void*)0,&g_706,&g_706}},{{&g_706,(void*)0,(void*)0,&g_706,&g_706,(void*)0,(void*)0},{(void*)0,&g_706,&g_706,(void*)0,&g_706,&g_706,(void*)0},{&g_706,(void*)0,(void*)0,(void*)0,&g_706,&g_706,(void*)0}}};
    const struct S0 ***l_731 = (void*)0;
    int32_t l_776 = 0x9140F105L;
    int16_t ****l_812 = &g_358[1];
    uint32_t l_856 = 4294967290UL;
    uint32_t l_865[4][3];
    int32_t *l_869[1][7][4] = {{{&l_703[3],&g_39,&g_78.f2,&g_78.f2},{&g_114,&g_114,&g_78.f2,&g_114},{&l_703[3],&l_703[0],&l_703[0],&g_39},{(void*)0,&l_703[0],&g_114,&l_703[0]},{&g_114,&l_703[0],(void*)0,&g_39},{&l_703[0],&l_703[0],&l_703[3],&g_114},{&g_78.f2,&g_114,&g_114,&g_78.f2}}};
    int32_t l_870[6];
    int32_t ***l_875 = &g_154;
    int64_t l_879 = 0x804A507AE2A14451LL;
    uint64_t l_882 = 0x0B0AEC572423B78BLL;
    int32_t l_885 = 0x5C2ED61DL;
    int8_t *l_892[6][7][5] = {{{&g_125.f1,(void*)0,&g_125.f1,&g_78.f1,&g_78.f1},{(void*)0,&g_125.f1,&g_125.f1,&g_125.f1,(void*)0},{&g_78.f1,(void*)0,&g_78.f1,(void*)0,&g_105.f1},{&g_78.f1,&g_105.f1,&g_78.f1,&g_125.f1,&g_125.f1},{(void*)0,(void*)0,(void*)0,(void*)0,&g_105.f1},{&g_125.f1,&g_125.f1,&g_105.f1,(void*)0,(void*)0},{&g_105.f1,&g_78.f1,&g_125.f1,&g_125.f1,&g_78.f1}},{{&g_78.f1,&g_105.f1,&g_105.f1,(void*)0,&g_78.f1},{(void*)0,&g_105.f1,(void*)0,&g_125.f1,&g_125.f1},{&g_78.f1,&g_78.f1,&g_78.f1,&g_78.f1,&g_125.f1},{(void*)0,&g_125.f1,&g_78.f1,&g_78.f1,&g_125.f1},{&g_78.f1,(void*)0,&g_125.f1,&g_105.f1,&g_125.f1},{&g_105.f1,&g_105.f1,&g_125.f1,&g_78.f1,&g_78.f1},{&g_125.f1,(void*)0,&g_125.f1,&g_78.f1,&g_78.f1}},{{(void*)0,&g_125.f1,&g_125.f1,&g_125.f1,(void*)0},{&g_78.f1,(void*)0,&g_78.f1,(void*)0,&g_105.f1},{&g_78.f1,&g_105.f1,&g_78.f1,&g_125.f1,&g_125.f1},{(void*)0,(void*)0,(void*)0,(void*)0,&g_105.f1},{&g_125.f1,&g_125.f1,&g_105.f1,(void*)0,(void*)0},{&g_105.f1,&g_78.f1,&g_125.f1,&g_125.f1,&g_78.f1},{&g_78.f1,&g_105.f1,&g_105.f1,(void*)0,&g_78.f1}},{{(void*)0,&g_105.f1,(void*)0,&g_125.f1,&g_125.f1},{&g_78.f1,&g_78.f1,&g_78.f1,&g_78.f1,&g_125.f1},{(void*)0,&g_125.f1,&g_78.f1,&g_78.f1,&g_125.f1},{&g_78.f1,(void*)0,&g_125.f1,&g_105.f1,&g_125.f1},{&g_105.f1,&g_105.f1,(void*)0,(void*)0,&g_125.f1},{(void*)0,&g_105.f1,(void*)0,&g_105.f1,&g_78.f1},{&g_125.f1,(void*)0,&g_125.f1,(void*)0,&g_125.f1}},{{(void*)0,&g_105.f1,&g_125.f1,&g_125.f1,&g_125.f1},{(void*)0,&g_125.f1,&g_78.f1,&g_78.f1,&g_78.f1},{&g_125.f1,&g_78.f1,&g_125.f1,&g_105.f1,&g_125.f1},{(void*)0,&g_78.f1,&g_125.f1,&g_105.f1,&g_125.f1},{&g_125.f1,&g_78.f1,&g_78.f1,&g_78.f1,&g_78.f1},{&g_78.f1,&g_78.f1,&g_125.f1,&g_125.f1,&g_125.f1},{&g_78.f1,&g_78.f1,&g_125.f1,(void*)0,&g_125.f1}},{{&g_105.f1,&g_78.f1,&g_78.f1,&g_105.f1,(void*)0},{&g_78.f1,&g_78.f1,&g_125.f1,(void*)0,(void*)0},{&g_78.f1,&g_78.f1,&g_125.f1,&g_125.f1,&g_125.f1},{&g_125.f1,&g_125.f1,(void*)0,(void*)0,&g_125.f1},{(void*)0,&g_105.f1,(void*)0,&g_105.f1,&g_78.f1},{&g_125.f1,(void*)0,&g_125.f1,(void*)0,&g_125.f1},{(void*)0,&g_105.f1,&g_125.f1,&g_125.f1,&g_125.f1}}};
    uint32_t l_893 = 1UL;
    uint8_t **l_898[6] = {&g_304,&g_304,&g_304,&g_304,&g_304,&g_304};
    uint8_t l_946 = 0UL;
    int8_t **l_960 = &l_892[3][3][0];
    uint8_t l_967 = 9UL;
    int32_t l_973 = 0x035F011CL;
    uint32_t l_1082[3];
    uint16_t l_1084 = 0x6664L;
    struct S0 l_1104 = {9L,1L,0x6ABB6407L,5UL};
    int32_t l_1114 = 7L;
    union U1 l_1115 = {0};
    uint32_t l_1116 = 4294967290UL;
    int i, j, k;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
            l_865[i][j] = 18446744073709551615UL;
    }
    for (i = 0; i < 6; i++)
        l_870[i] = 0x808D6099L;
    for (i = 0; i < 3; i++)
        l_1082[i] = 0xB3FC9558L;
    if ((safe_mul_func_int8_t_s_s(((*g_256) || ((*g_256)++)), (p_6 & ((l_699 < ((safe_lshift_func_int16_t_s_u(0x171DL, (((g_706 ^= ((((l_703[0] = 0xDEDB037FL) != (((l_699 , ((void*)0 != &g_304)) == l_699) >= g_608[4][0])) , l_704) == l_704)) && l_703[2]) != l_699))) != (-5L))) > 7UL)))))
    { 
        int32_t * const l_712[1] = {&g_78.f2};
        int32_t **l_713 = (void*)0;
        int32_t *l_714 = &l_703[0];
        int i;
        for (g_105.f0 = 0; (g_105.f0 < 16); g_105.f0++)
        { 
            int32_t *l_709 = &l_703[0];
            int32_t **l_710 = &g_155[0][1][2];
            int32_t **l_711 = &l_709;
            (*l_711) = ((*l_710) = l_709);
        }
        l_714 = l_712[0];
    }
    else
    { 
        int32_t l_732 = 0x589C1F95L;
        struct S0 **l_739 = (void*)0;
        struct S0 ***l_738 = &l_739;
        struct S0 ****l_737 = &l_738;
        int8_t *l_742 = (void*)0;
        int32_t l_755 = 1L;
        int32_t l_761 = 6L;
        union U1 *l_808[2][5] = {{&g_519,&g_519,&g_519,&g_519,&g_519},{&g_519,&g_519,&g_519,&g_519,&g_519}};
        union U1 ** const l_807 = &l_808[1][0];
        union U1 ** const *l_806 = &l_807;
        int8_t l_837 = (-1L);
        int64_t l_862 = (-1L);
        int32_t l_863 = 0x6700B4A8L;
        int i, j;
        for (g_78.f0 = 0; (g_78.f0 >= (-19)); g_78.f0 = safe_sub_func_uint64_t_u_u(g_78.f0, 9))
        { 
            int32_t l_728 = 0L;
            const int16_t *l_730 = (void*)0;
            const int16_t ** const l_729 = &l_730;
            int32_t l_760[7] = {8L,8L,8L,8L,8L,8L,8L};
            int32_t l_788 = (-1L);
            union U1 *l_805 = (void*)0;
            union U1 **l_804[6] = {&l_805,&l_805,&l_805,&l_805,&l_805,&l_805};
            union U1 ***l_803[7] = {&l_804[1],&l_804[0],&l_804[0],&l_804[1],&l_804[0],&l_804[0],&l_804[1]};
            union U1 ****l_802 = &l_803[4];
            struct S0 *l_845[3];
            struct S0 **l_844[2][5] = {{&l_845[1],&l_845[1],&l_845[1],&l_845[1],&l_845[1]},{(void*)0,&l_845[1],(void*)0,&l_845[1],(void*)0}};
            int16_t l_864 = (-5L);
            int i, j;
            for (i = 0; i < 3; i++)
                l_845[i] = &g_125;
            for (g_125.f0 = 3; (g_125.f0 >= 0); g_125.f0 -= 1)
            { 
                int8_t l_717[4];
                const int32_t *l_720 = &g_320;
                int32_t *l_733 = &g_105.f2;
                int32_t *l_734 = (void*)0;
                int32_t *l_735 = &g_519.f3;
                struct S0 l_740 = {0x58A32CA740393301LL,1L,9L,18446744073709551615UL};
                int8_t *l_741 = &l_717[1];
                int i;
                for (i = 0; i < 4; i++)
                    l_717[i] = (-1L);
                for (g_78.f2 = 0; (g_78.f2 <= 5); g_78.f2 += 1)
                { 
                    int i, j;
                    if (g_113[g_125.f0][(g_78.f2 + 1)])
                        break;
                }
                if (l_717[0])
                    break;
                (*l_735) = ((*l_733) &= (safe_mul_func_int8_t_s_s((((g_721 = l_720) != (void*)0) == ((safe_rshift_func_uint16_t_u_u(((safe_div_func_uint8_t_u_u((&g_410 != (((p_6 || l_717[0]) || (((((((l_703[0] == (+(((*g_256) = ((*g_256) > p_6)) & g_105.f0))) > p_6) | l_703[0]) ^ l_728) && (-1L)) , (void*)0) == l_729)) , l_731)), g_72)) >= g_706), l_717[2])) ^ l_732)), 0x57L)));
                (*l_733) |= ((l_703[0] < ((*l_735) ^= (((safe_unary_minus_func_uint32_t_u(0xB97D1043L)) , &l_731) == l_737))) == ((((l_732 >= 255UL) < ((*l_741) = ((((&g_359 == &g_359) , l_740) , l_699) <= 0x6287DF6FL))) ^ 0L) <= l_728));
                for (g_105.f1 = 4; (g_105.f1 >= 0); g_105.f1 -= 1)
                { 
                    if (p_6)
                        break;
                    return l_742;
                }
            }
            if (p_6)
                break;
            for (p_6 = 0; (p_6 <= 2); p_6 += 1)
            { 
                uint32_t *l_749 = &g_750;
                int32_t l_754 = 0L;
                int32_t *l_756 = &g_519.f3;
                int32_t *l_757 = &g_39;
                int32_t *l_758 = (void*)0;
                int32_t *l_759[4][1] = {{&g_125.f2},{&g_39},{&g_125.f2},{&g_39}};
                uint64_t l_762 = 0x71654CB62CB00D47LL;
                struct S0 *l_777 = &g_125;
                int32_t ***l_784 = &g_154;
                int32_t l_787 = 0L;
                int16_t *l_795[6] = {&g_254,&g_254,&g_254,&g_254,&g_254,&g_254};
                int i, j;
                for (l_728 = 0; (l_728 <= 1); l_728 += 1)
                { 
                    uint32_t *l_752[7] = {&g_750,&g_750,&g_750,&g_750,&g_750,&g_750,&g_750};
                    uint32_t **l_751 = &l_752[2];
                    int32_t *l_753 = &g_39;
                    int i, j, k;
                    g_155[l_728][p_6][(p_6 + 2)] = &l_703[(p_6 + 1)];
                    (*l_753) = (l_703[(p_6 + 1)] = (safe_sub_func_uint32_t_u_u((l_703[p_6] >= (safe_add_func_int8_t_s_s((safe_add_func_int16_t_s_s(((**g_359) = 9L), p_6)), p_6))), (l_728 >= ((l_749 = l_702[2][4]) != ((*l_751) = (void*)0))))));
                }
                if (l_754)
                    break;
                l_762--;
                l_755 &= ((safe_mul_func_int8_t_s_s((safe_div_func_uint64_t_u_u((((0UL > l_760[4]) ^ 0x87L) || (safe_rshift_func_uint8_t_u_s(((*l_757) & ((1L == p_6) & ((((((((safe_mod_func_int64_t_s_s((safe_rshift_func_uint8_t_u_u((((~((l_776 , (-4L)) | p_6)) | 0x83FAL) > (*l_757)), p_6)), l_703[0])) , (void*)0) != (void*)0) != 0xA9L) & 0xD6B23966F9DE9E4CLL) < 0x58CF4827L) , 1UL) == l_776))), p_6))), 1UL)), (*l_757))) , 0xE2B45F76L);
                (*l_777) = g_105;
                for (g_34 = 2; (g_34 >= 0); g_34 -= 1)
                { 
                    uint16_t **l_790 = (void*)0;
                    uint16_t ***l_789 = &l_790;
                    const uint32_t l_791 = 0x6FA37D90L;
                    int32_t **l_792 = &l_758;
                    uint8_t *l_796 = &g_641;
                    int i, j, k;
                    (*l_757) = ((safe_mul_func_int8_t_s_s((((*g_304) = ((l_760[1] &= (safe_mod_func_int64_t_s_s(4L, (*g_267)))) ^ (&g_154 == l_784))) | ((safe_add_func_uint16_t_u_u(((l_788 = l_787) != (((*l_789) = &g_256) == &l_705[p_6][g_34][g_34])), l_791)) == 0x0BEFDDA9L)), l_791)) != p_6);
                    (*l_792) = &l_776;
                    (**l_792) |= ((++(*g_304)) >= (((*l_796) = ((l_795[0] = (void*)0) == (void*)0)) ^ 0xA2L));
                }
            }
            if (((((((((safe_sub_func_uint8_t_u_u((++(*g_304)), (!l_761))) , ((*l_802) = (void*)0)) != l_806) , (~(safe_lshift_func_uint8_t_u_s(((*g_304) = (0xFA346E56L != (l_703[0] | ((void*)0 != l_812)))), l_732)))) && 0xC4L) != l_776) ^ p_6) | 0x243EFEE599359B6DLL))
            { 
                uint8_t l_817 = 1UL;
                int32_t l_828 = 0xAC73DCDFL;
                struct S0 *l_835[6][2][4] = {{{&g_105,&g_105,&g_125,&g_125},{&g_125,&g_125,&g_105,&g_125}},{{&g_105,&g_105,&g_105,&g_105},{&g_105,&g_105,&g_105,&g_105}},{{&g_125,&g_105,&g_125,&g_105},{&g_105,&g_105,&g_125,&g_125}},{{&g_125,&g_125,&g_105,&g_125},{&g_105,&g_105,&g_105,&g_105}},{{&g_105,&g_105,&g_105,&g_105},{&g_125,&g_105,&g_125,&g_105}},{{&g_105,&g_105,&g_125,&g_125},{&g_105,&g_105,&g_105,&g_105}}};
                struct S0 * const *l_834 = &l_835[0][0][3];
                int8_t *l_838[5][4] = {{(void*)0,(void*)0,(void*)0,&g_78.f1},{(void*)0,&g_78.f1,&g_78.f1,(void*)0},{&g_125.f1,&g_78.f1,&g_125.f1,&g_78.f1},{&g_78.f1,(void*)0,&g_125.f1,&g_125.f1},{&g_125.f1,&g_125.f1,&g_78.f1,&g_125.f1}};
                int32_t *l_839 = &l_755;
                int i, j, k;
                if ((l_760[1] & (safe_lshift_func_int8_t_s_s(p_6, 7))))
                { 
                    int32_t *l_826 = &l_761;
                    int32_t *l_827[4][1] = {{&l_755},{&g_519.f3},{&l_755},{&g_519.f3}};
                    uint64_t *l_829 = &g_78.f3;
                    struct S0 *l_833 = &g_105;
                    struct S0 **l_832 = &l_833;
                    int32_t *l_836 = &g_519.f4;
                    int i, j;
                    l_817 = ((void*)0 == g_815[2]);
                    l_828 = ((*l_826) ^= ((safe_add_func_int8_t_s_s(l_755, (((safe_mul_func_uint8_t_u_u((&g_411 == (void*)0), (safe_lshift_func_uint8_t_u_s(p_6, (safe_mod_func_int32_t_s_s((g_608[1][2] < (*g_304)), l_728)))))) != (-10L)) , p_6))) & 0xB3L));
                    (*l_826) = (l_755 >= ((l_732 , ((((*l_836) = (((*l_829) = 0x8ABF4CADDDF7648BLL) < (((l_788 ^= (*g_304)) >= ((l_760[1] = l_817) , (safe_add_func_uint8_t_u_u(248UL, ((l_832 != l_834) > 18446744073709551615UL))))) & 0x0186C9B75A5C6A23LL))) , p_6) ^ 4294967288UL)) <= 0xB9L));
                }
                else
                { 
                    return &g_12;
                }
                l_839 = ((18446744073709551615UL <= (*g_267)) , ((p_6 , ((*g_256) &= (0x3867C8059DA734B4LL ^ (((4UL < ((*g_410) != (((g_12 = l_837) | l_703[0]) , (*l_834)))) == 1L) | p_6)))) , &l_828));
                if (l_788)
                    break;
            }
            else
            { 
                int32_t *l_846 = &l_761;
                int64_t *l_855[4];
                int32_t l_857 = 1L;
                int i;
                for (i = 0; i < 4; i++)
                    l_855[i] = &g_125.f0;
                (*l_846) &= ((safe_add_func_int8_t_s_s(l_776, (--(*g_304)))) == (l_844[0][3] != &l_845[1]));
                if ((((safe_sub_func_uint64_t_u_u(l_755, ((((((*g_267) , (((p_6 | (&l_742 == &l_742)) == (safe_lshift_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_u(((*g_304)++), 2)), ((l_776 = (*g_267)) || p_6)))) != p_6)) , &l_730) == (void*)0) <= l_856) == 0xCC56L))) >= l_857) , l_699))
                { 
                    return &g_12;
                }
                else
                { 
                    int32_t *l_858 = &l_761;
                    int32_t *l_859 = &g_72;
                    int32_t *l_860 = &g_105.f2;
                    int32_t *l_861[6][4][6] = {{{(void*)0,(void*)0,&g_39,&g_39,(void*)0,(void*)0},{&g_39,(void*)0,(void*)0,&l_703[1],&l_761,&g_125.f2},{&g_125.f2,&l_703[0],&g_125.f2,&l_703[0],&g_125.f2,(void*)0},{&g_125.f2,&g_39,&l_703[0],&l_703[1],&g_114,&g_114}},{{&g_39,&l_761,&l_761,&g_39,&g_125.f2,&g_114},{(void*)0,&g_114,&l_703[0],(void*)0,&l_703[1],(void*)0},{&g_125.f2,&g_78.f2,&g_125.f2,&g_72,&l_703[1],&g_125.f2},{&l_703[0],&g_114,(void*)0,&g_125.f2,&g_125.f2,(void*)0}},{{&l_761,&l_761,&g_39,&g_125.f2,&g_114,&g_72},{&l_703[0],&g_39,&g_125.f2,&g_72,&g_125.f2,&g_39},{&g_125.f2,&l_703[0],&g_125.f2,(void*)0,&l_761,&g_72},{(void*)0,(void*)0,&g_39,&g_39,(void*)0,(void*)0}},{{&g_39,(void*)0,(void*)0,&l_703[1],&l_761,&g_125.f2},{&g_125.f2,&l_703[0],&g_125.f2,&l_703[0],&g_125.f2,(void*)0},{&g_125.f2,&g_39,&l_703[0],&l_703[1],&g_114,&g_114},{&g_39,&l_761,&l_761,&g_39,&g_125.f2,&g_114}},{{(void*)0,&g_114,&l_703[0],(void*)0,&l_703[1],(void*)0},{&g_125.f2,&g_78.f2,&g_125.f2,&g_72,&l_703[1],&g_125.f2},{&l_703[0],&g_114,(void*)0,&g_125.f2,&g_125.f2,(void*)0},{&l_761,&l_761,&g_39,&g_125.f2,&g_114,&g_72}},{{&l_703[0],&g_39,&g_125.f2,&g_72,&g_125.f2,&g_39},{&g_125.f2,&l_703[0],&g_125.f2,(void*)0,&l_761,&g_72},{(void*)0,(void*)0,&g_39,&g_39,(void*)0,(void*)0},{&g_39,(void*)0,(void*)0,&l_703[1],&l_761,&g_125.f2}}};
                    int32_t **l_868 = &l_861[1][3][5];
                    int i, j, k;
                    l_846 = &g_114;
                    l_865[1][1]++;
                    l_703[0] = ((*g_267) != (*l_858));
                    (*l_868) = &l_863;
                }
            }
        }
    }
    l_870[0] = (1L || p_6);
    if (((safe_sub_func_int8_t_s_s(((p_6 != ((l_875 != l_875) , (safe_mul_func_uint16_t_u_u((((((**g_816) = (+l_879)) != (safe_div_func_uint16_t_u_u((l_885 = (l_882--)), (safe_add_func_int8_t_s_s((g_12 = (((**g_359) = (safe_rshift_func_int8_t_s_u(p_6, (safe_add_func_uint64_t_u_u(g_105.f2, p_6))))) & p_6)), l_893))))) < 0UL) , 3UL), p_6)))) & 0L), p_6)) != p_6))
    { 
        struct S0 l_910 = {0xAAD14FE1520708B4LL,-1L,0x5B730321L,9UL};
        int64_t *l_915[2];
        int32_t l_916 = (-5L);
        int16_t *l_917 = (void*)0;
        int16_t *l_918 = (void*)0;
        int16_t *l_919 = &g_254;
        int16_t *l_920 = &g_444;
        uint8_t l_921 = 0UL;
        int32_t l_936 = 0x7E06C369L;
        int32_t l_943 = (-1L);
        int32_t l_944 = 0x2DEBF89FL;
        int8_t **l_956 = &l_892[1][4][4];
        int32_t **l_968 = &g_155[1][2][4];
        int32_t l_969 = (-1L);
        int32_t l_970 = 0xAFB7796DL;
        int32_t l_971 = 1L;
        int32_t l_972[5][5] = {{0L,0xB7B6B7FEL,0x0680CA6CL,0xB7B6B7FEL,0L},{0L,0xB7B6B7FEL,0x0680CA6CL,0xB7B6B7FEL,0L},{0L,0xB7B6B7FEL,0x0680CA6CL,0xB7B6B7FEL,0L},{0L,0xB7B6B7FEL,0x0680CA6CL,0xB7B6B7FEL,0xB7B6B7FEL},{0xB7B6B7FEL,0xF719AF0AL,1L,0xF719AF0AL,0xB7B6B7FEL}};
        int16_t l_974 = 0x2E66L;
        uint8_t l_975 = 6UL;
        int i, j;
        for (i = 0; i < 2; i++)
            l_915[i] = &l_879;
        if ((safe_sub_func_int32_t_s_s((safe_add_func_uint32_t_u_u(g_125.f3, (l_898[5] == (void*)0))), (~(g_188[1][3] = (((g_78.f0 = (safe_rshift_func_int16_t_s_u(((*l_920) ^= ((*l_919) |= (safe_rshift_func_int16_t_s_u(((safe_sub_func_uint64_t_u_u((((l_916 |= ((safe_lshift_func_uint16_t_u_s(0x6E3FL, 14)) , ((safe_lshift_func_int16_t_s_s(((**g_359) = (l_910 , (((safe_rshift_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u(0xF83CL, (l_910.f2 = (((*g_256) ^= (9UL & p_6)) & l_910.f3)))), p_6)) , l_910) , l_910.f0))), l_910.f1)) , p_6))) ^ 0x69C0E36516DB5740LL) < 0x32D1L), (-4L))) > p_6), p_6)))), 5))) | p_6) <= 18446744073709551615UL))))))
        { 
            const int32_t *l_926 = &g_105.f2;
            int32_t l_938 = (-4L);
            int32_t l_939 = 1L;
            int32_t l_940[3];
            int i;
            for (i = 0; i < 3; i++)
                l_940[i] = 5L;
            l_910.f2 = (l_910.f1 != (*g_267));
            l_921 = p_6;
            for (g_125.f2 = 0; (g_125.f2 == (-20)); g_125.f2 = safe_sub_func_uint16_t_u_u(g_125.f2, 4))
            { 
                const uint16_t l_934 = 0x4475L;
                int32_t l_937 = 0x3E68E5B6L;
                int64_t l_941 = 0x42791F0CEDA1FE08LL;
                int32_t l_945 = (-8L);
                for (g_78.f1 = 0; (g_78.f1 != 15); ++g_78.f1)
                { 
                    const int32_t **l_927 = &l_926;
                    int32_t l_935 = 0x65FE130EL;
                    int32_t l_942 = (-1L);
                    (*l_927) = l_926;
                    l_935 ^= (safe_lshift_func_uint8_t_u_s((p_6 = (safe_add_func_int16_t_s_s(((*l_920) = (**g_359)), (**l_927)))), (safe_div_func_int32_t_s_s((l_916 | (((((g_519 , 0xB76FAF5AL) & (**l_927)) != ((((0UL && (**l_927)) && 0UL) , (void*)0) == l_705[1][1][6])) , l_934) != 0x99L)), (*l_926)))));
                    l_936 = 0x0B2514BBL;
                    l_946--;
                }
                l_945 ^= p_6;
            }
        }
        else
        { 
            int32_t **l_951 = &g_155[1][2][0];
            int8_t **l_958 = &l_892[1][4][4];
            int8_t **l_959 = (void*)0;
            struct S0 *l_966 = (void*)0;
            g_155[0][2][0] = (void*)0;
            for (g_34 = 0; (g_34 <= 3); g_34++)
            { 
                if (p_6)
                    break;
                return &g_12;
            }
            (*l_951) = &g_72;
            for (g_105.f1 = 0; (g_105.f1 <= 4); g_105.f1 += 1)
            { 
                int8_t ***l_957[6][2][3] = {{{&l_956,&l_956,&l_956},{&l_956,&l_956,&l_956}},{{&l_956,&l_956,&l_956},{&l_956,&l_956,&l_956}},{{&l_956,&l_956,&l_956},{&l_956,&l_956,&l_956}},{{&l_956,&l_956,&l_956},{&l_956,&l_956,&l_956}},{{&l_956,&l_956,&l_956},{&l_956,&l_956,&l_956}},{{&l_956,&l_956,&l_956},{&l_956,&l_956,&l_956}}};
                struct S0 l_963 = {0xA8D80A3C947FC749LL,-5L,0xAD926821L,0x1AABC60925CA9827LL};
                int i, j, k;
                l_910.f2 &= (~(6UL & (safe_mod_func_int32_t_s_s((l_943 = ((g_955[2][4][5] , ((l_958 = l_956) != (l_960 = l_959))) == (((safe_mod_func_uint32_t_u_u((l_963 , (safe_div_func_int32_t_s_s((l_703[g_105.f1] , (((void*)0 != l_966) || p_6)), p_6))), l_943)) , (**g_816)) >= 65535UL))), p_6))));
                if (l_967)
                    break;
            }
        }
        (*l_968) = &l_776;
        l_975--;
        if (((safe_unary_minus_func_uint32_t_u(((-7L) ^ (((!p_6) > (p_6 | ((((((!(safe_mod_func_int8_t_s_s((((((safe_div_func_uint8_t_u_u(255UL, 0x47L)) != 0xC3L) >= (safe_sub_func_int8_t_s_s(((safe_rshift_func_int16_t_s_s(7L, 4)) >= 65535UL), p_6))) ^ 0L) , g_188[2][1]), p_6))) | g_125.f2) < 4294967295UL) , g_125.f2) , g_267) != (void*)0))) , 0x364160BCL)))) | 6UL))
        { 
            uint64_t *l_989[5];
            struct S0 ***l_992 = &g_990[1][3];
            struct S0 * const *l_993 = &g_991[0];
            int32_t l_996[1][1][4];
            int i, j, k;
            for (i = 0; i < 5; i++)
                l_989[i] = &l_882;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 1; j++)
                {
                    for (k = 0; k < 4; k++)
                        l_996[i][j][k] = 7L;
                }
            }
            if ((((((((*l_992) = ((g_955[2][4][5].f3 = 0x5C6C42548362E252LL) , g_990[0][1])) == l_993) , g_994) == &g_995) != p_6) , ((g_105.f1 ^= 1L) == l_996[0][0][2])))
            { 
                return &g_12;
            }
            else
            { 
                const struct S0 l_1000 = {0xBB43D8D2401E6A87LL,0xC7L,0x641F92D4L,0x132510FD2A4EED18LL};
                for (l_967 = 0; (l_967 <= 2); l_967 += 1)
                { 
                    int8_t *l_997 = &g_125.f1;
                    if (p_6)
                        break;
                    (**l_993) = l_910;
                    return l_997;
                }
                for (l_699 = (-25); (l_699 != 17); l_699 = safe_add_func_uint64_t_u_u(l_699, 7))
                { 
                    (**l_993) = l_1000;
                }
            }
        }
        else
        { 
            int8_t *l_1001 = &g_12;
            return l_1001;
        }
    }
    else
    { 
        uint16_t l_1008[4];
        uint8_t * const *l_1013[3][6] = {{&g_304,&g_304,&g_304,&g_304,&g_304,&g_304},{&g_304,&g_304,&g_304,&g_304,&g_304,&g_304},{&g_304,&g_304,&g_304,&g_304,&g_304,&g_304}};
        int32_t l_1017 = 0xCC83EF4DL;
        int32_t l_1018 = 0L;
        int32_t l_1019[7][7] = {{0x83C0FACFL,4L,(-1L),0x77BBDC3AL,1L,0L,0xC00BFBE0L},{1L,0xC00BFBE0L,0x7D919E8DL,0x7D919E8DL,0xC00BFBE0L,1L,0x83C0FACFL},{(-2L),0x7D919E8DL,(-1L),0x83C0FACFL,2L,1L,1L},{0x77BBDC3AL,2L,0x1DD78C87L,2L,0x77BBDC3AL,0L,(-2L)},{0xE6FE6708L,0x7D919E8DL,1L,4L,0x77BBDC3AL,(-2L),0x77BBDC3AL},{1L,0xC00BFBE0L,0xC00BFBE0L,1L,2L,4L,0xE6FE6708L},{0xE6FE6708L,4L,2L,1L,0xC00BFBE0L,0xC00BFBE0L,1L}};
        uint8_t *l_1042 = &g_608[4][5];
        union U1 l_1057 = {0};
        const uint16_t *l_1063 = (void*)0;
        const uint16_t **l_1062[5] = {&l_1063,&l_1063,&l_1063,&l_1063,&l_1063};
        struct S0 l_1065 = {0L,0L,0L,0x2A9FE85D69FCF483LL};
        int i, j;
        for (i = 0; i < 4; i++)
            l_1008[i] = 65535UL;
        if (p_6)
        { 
            int16_t ****l_1011 = &g_358[4];
            int16_t *****l_1012 = &l_812;
            int32_t l_1016 = 8L;
            int32_t l_1022[5][1] = {{1L},{0xA80C6DD9L},{1L},{0xA80C6DD9L},{1L}};
            int8_t l_1041 = 0x8BL;
            uint8_t *l_1044 = &g_608[2][4];
            union U1 l_1083 = {0};
            int32_t *l_1088 = &l_1017;
            int i, j;
            l_1017 |= (safe_sub_func_uint8_t_u_u(((safe_sub_func_uint32_t_u_u((safe_div_func_uint8_t_u_u((l_1008[1] ^ (safe_lshift_func_uint16_t_u_u((((*l_1012) = l_1011) != &g_358[1]), 2))), g_444)), (((((void*)0 != l_1013[2][0]) != (safe_rshift_func_int8_t_s_u(((((((p_6 != p_6) , l_1016) , (*g_359)) == l_705[1][1][6]) > l_1008[1]) ^ 4294967295UL), l_1008[0]))) ^ l_1016) || p_6))) , 0x89L), 1L));
            l_1016 = (&p_6 == &p_6);
            if ((0x9EL < p_6))
            { 
                int32_t l_1020 = 0x6F72AEC0L;
                int32_t l_1021[2][3][5] = {{{0x60C5620EL,(-3L),0x60C5620EL,(-3L),0x60C5620EL},{0xFD3F8FFFL,0x36B346AFL,0x36B346AFL,0xFD3F8FFFL,0xFD3F8FFFL},{4L,(-3L),4L,(-3L),4L}},{{0xFD3F8FFFL,0xFD3F8FFFL,0x36B346AFL,0x36B346AFL,0xFD3F8FFFL},{0x60C5620EL,(-3L),0x60C5620EL,(-3L),0x60C5620EL},{0xFD3F8FFFL,0x36B346AFL,0x36B346AFL,0xFD3F8FFFL,0xFD3F8FFFL}}};
                uint32_t l_1024[6] = {0xB539424DL,0xB539424DL,0xB539424DL,0xB539424DL,0xB539424DL,0xB539424DL};
                struct S0 l_1039 = {0L,1L,0L,0x594711A54580F71DLL};
                struct S0 *l_1040 = &g_105;
                uint8_t *l_1043[1];
                int32_t l_1045[3];
                const union U1 l_1058 = {0};
                int i, j, k;
                for (i = 0; i < 1; i++)
                    l_1043[i] = &g_608[0][5];
                for (i = 0; i < 3; i++)
                    l_1045[i] = (-1L);
                l_1024[4]++;
                l_1016 &= (l_1022[1][0] = 0xF0B49DFDL);
                l_1045[2] |= (safe_add_func_uint64_t_u_u((safe_sub_func_uint8_t_u_u(((1L < (safe_mul_func_uint16_t_u_u((safe_add_func_int64_t_s_s((l_1016 = ((((l_1022[3][0] = (((((safe_add_func_uint64_t_u_u((safe_mul_func_int16_t_s_s((l_1024[1] && (((((*l_1040) = l_1039) , l_1041) , 0xE0L) == (((((l_1043[0] = l_1042) == l_1044) > l_1022[1][0]) , l_1039.f2) != l_1039.f3))), l_1018)), p_6)) | 0x10C2413CL) <= l_1017) >= p_6) && p_6)) <= 2UL) & 0x30585D06L) == l_1021[0][0][3])), 0xB05D7E6696FE2CA9LL)), p_6))) >= p_6), 253UL)), (*g_267)));
                l_1039.f2 ^= (l_1022[1][0] = (+(safe_rshift_func_int8_t_s_u((safe_lshift_func_uint8_t_u_s(((safe_lshift_func_uint8_t_u_s((l_1058 , p_6), g_25)) || 4UL), p_6)), 5))));
                for (g_254 = 1; (g_254 >= 0); g_254 -= 1)
                { 
                    uint32_t l_1064 = 0x8E3A083CL;
                    l_1064 ^= ((p_6 == ((g_1059 == p_6) , ((safe_mul_func_uint16_t_u_u(((void*)0 == l_1062[2]), 65531UL)) && 0UL))) <= g_955[2][4][5].f2);
                    (*l_1040) = l_1065;
                }
            }
            else
            { 
                struct S0 *l_1066 = &g_105;
                int32_t l_1080 = 0xBAFCFF58L;
                int32_t l_1081 = (-6L);
                int32_t **l_1087[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_1087[i] = (void*)0;
                (*g_410) = l_1066;
                for (l_1065.f0 = 0; (l_1065.f0 > (-9)); l_1065.f0 = safe_sub_func_uint64_t_u_u(l_1065.f0, 2))
                { 
                    uint8_t l_1069 = 0x81L;
                    if (l_1065.f0)
                        break;
                    l_1069 |= ((void*)0 != &g_267);
                    l_1080 = (l_1022[1][0] = ((safe_mod_func_uint8_t_u_u(((((((*g_995) , (-1L)) && 0x07B600259477B88ALL) >= 0x3F43L) != l_1016) , 0xD3L), 3UL)) && l_1069));
                    if (p_6)
                        continue;
                    if (l_1065.f0)
                        continue;
                }
                l_1084++;
                l_1088 = &l_1018;
            }
        }
        else
        { 
            int8_t l_1103 = 0x2DL;
            struct S0 *l_1105 = &l_1104;
            l_1018 = (safe_add_func_int16_t_s_s((g_1091 == (void*)0), (0xBD1D53A13990E292LL != ((l_1103 &= (safe_mul_func_uint8_t_u_u((p_6 = (((safe_div_func_int8_t_s_s((6L < 1UL), p_6)) ^ ((safe_sub_func_int64_t_s_s(((safe_div_func_uint32_t_u_u((g_188[1][0] = (safe_rshift_func_uint16_t_u_u(p_6, p_6))), p_6)) & p_6), g_1059)) == 1L)) == (*g_304))), l_1065.f1))) ^ 0x92C86BA5L))));
            (*l_1105) = l_1104;
        }
    }
    l_1116 = ((((((**g_994) , 0x5D24L) | p_6) && 0x64C5L) && p_6) , (-7L));
    return (*g_1091);
}



static uint8_t  func_7(uint64_t  p_8, uint64_t  p_9, union U1  p_10, int8_t * const  p_11)
{ 
    uint64_t l_534[5];
    int64_t l_537 = 0xFDC3B72A5DAC56B6LL;
    int32_t ***l_538 = &g_154;
    int16_t * const l_541 = &g_254;
    int32_t l_556 = 0xEF783AC1L;
    int32_t l_558 = 0L;
    int32_t l_562 = 0x8DBDD4F2L;
    int8_t *l_581 = (void*)0;
    union U1 l_584 = {0};
    struct S0 l_586 = {0L,-1L,0x7C6B65CEL,0xCA67FE2CCA3CC55DLL};
    uint16_t l_590 = 0xE25FL;
    uint16_t l_625 = 0x1C3BL;
    int32_t l_649 = 0xB5AC7C86L;
    uint32_t l_686[1][6][3] = {{{0x23CEC5DBL,0x23CEC5DBL,0x23CEC5DBL},{0x7E054D1CL,0x7E054D1CL,0x7E054D1CL},{0x23CEC5DBL,0x23CEC5DBL,0x23CEC5DBL},{0x7E054D1CL,0x7E054D1CL,0x7E054D1CL},{0x23CEC5DBL,0x23CEC5DBL,0x23CEC5DBL},{0x7E054D1CL,0x7E054D1CL,0x7E054D1CL}}};
    uint32_t l_689 = 0x3912907EL;
    uint16_t l_692 = 65534UL;
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_534[i] = 0UL;
    for (g_101 = 0; (g_101 <= 5); g_101 += 1)
    { 
        union U1 *l_518 = &g_519;
        int64_t *l_526 = &g_78.f0;
        int32_t l_560 = 0xFBF440C3L;
        int8_t *l_583 = &g_78.f1;
        int32_t *l_585[4] = {&l_562,&l_562,&l_562,&l_562};
        int64_t l_609 = 0xC4BE9801AE7FF2DFLL;
        int i;
        if ((!0x45L))
        { 
            union U1 **l_520 = &l_518;
            (*l_520) = l_518;
            if (p_9)
                break;
            return p_8;
        }
        else
        { 
            uint64_t l_525 = 0x76BAD92136907684LL;
            struct S0 *l_549 = &g_105;
            int32_t l_559 = 0L;
            int32_t l_561 = 0x22643D3DL;
            int64_t *l_570[3];
            int32_t l_591[1][6][3] = {{{0x90C5AA15L,0xC48B3981L,0x90C5AA15L},{0x095996ADL,0xDF6D6762L,0xDF6D6762L},{0L,0xC48B3981L,0L},{0x095996ADL,0x095996ADL,0xDF6D6762L},{0x90C5AA15L,0xC48B3981L,0x90C5AA15L},{0x095996ADL,0xDF6D6762L,0xDF6D6762L}}};
            uint8_t *l_607 = &g_608[4][5];
            int32_t l_610 = (-7L);
            int32_t l_624 = (-8L);
            uint64_t l_642 = 18446744073709551615UL;
            uint64_t l_646 = 18446744073709551615UL;
            int i, j, k;
            for (i = 0; i < 3; i++)
                l_570[i] = &g_78.f0;
            if (((p_10 , 0xDF9AL) | p_9))
            { 
                int32_t *l_550 = &g_114;
                int32_t l_557 = 0x71036160L;
                (*l_550) &= ((safe_rshift_func_uint8_t_u_u((l_541 == l_541), 4)) && (safe_mul_func_uint8_t_u_u((*g_304), (safe_mul_func_uint8_t_u_u(248UL, (+((*g_267) >= (safe_sub_func_uint64_t_u_u(0xC7F76A6972BDD62CLL, ((void*)0 == l_549))))))))));
                for (g_105.f1 = 0; (g_105.f1 <= 6); g_105.f1 += 1)
                { 
                    int32_t *l_551 = (void*)0;
                    int32_t *l_552 = &g_72;
                    int32_t *l_553 = &g_78.f2;
                    int32_t *l_554 = &g_39;
                    int32_t *l_555[4] = {&g_125.f2,&g_125.f2,&g_125.f2,&g_125.f2};
                    uint32_t l_563[7] = {4294967295UL,1UL,1UL,4294967295UL,1UL,1UL,4294967295UL};
                    int i;
                    l_563[2]--;
                }
            }
            else
            { 
                const int8_t l_568 = 0xDCL;
                int64_t **l_569 = &l_526;
                int8_t **l_582 = &l_581;
                if ((0UL & (((safe_sub_func_uint8_t_u_u(l_568, (((((((((*l_569) = &l_537) != l_570[0]) <= (safe_rshift_func_int8_t_s_u((((p_10 , (void*)0) == (void*)0) <= 0x88L), l_568))) <= p_9) | 0x886BL) >= p_9) <= p_9) <= 0x412FL))) == (-5L)) <= p_9)))
                { 
                    int16_t l_589 = 0xA298L;
                    l_585[1] = (*g_154);
                    (*l_549) = l_586;
                    l_589 |= (safe_rshift_func_int16_t_s_s(0L, p_9));
                    return (*g_304);
                }
                else
                { 
                    l_590 ^= 1L;
                    return l_591[0][4][2];
                }
            }
            if ((((void*)0 != &g_154) , (((safe_div_func_uint8_t_u_u((safe_div_func_uint16_t_u_u((((((((*l_526) = 0x5DC7144C31AAA114LL) | ((safe_sub_func_uint8_t_u_u(((((((safe_sub_func_int32_t_s_s((~((((safe_unary_minus_func_int16_t_s((safe_mod_func_uint8_t_u_u(((*l_607) = ((safe_div_func_uint32_t_u_u((p_8 < g_78.f3), g_12)) == (((*l_541) = (+((*g_256) = 0x0318L))) || p_9))), g_114)))) ^ l_559) , p_8) < 4294967295UL)), g_105.f0)) == g_188[2][1]) > l_609) || l_562) <= l_610) ^ p_8), g_39)) , p_9)) >= p_9) || l_591[0][3][0]) & 1L) , (*g_256)), g_78.f3)), (*g_304))) >= p_9) && 0x5B9E6F28B2AD4C22LL)))
            { 
                int8_t l_615 = 0x01L;
                int32_t l_618 = 0L;
                int32_t l_622 = 0xD89B9B75L;
                int32_t l_623[1][5] = {{0L,0L,0L,0L,0L}};
                int i, j;
                for (g_34 = 2; (g_34 >= 0); g_34 -= 1)
                { 
                    int8_t *l_613 = &g_125.f1;
                    int32_t l_614 = 0L;
                    int32_t l_616 = 0x283973C1L;
                    int32_t l_617 = (-6L);
                    int32_t l_619 = 0x25938FD5L;
                    int32_t l_620 = 0xC001F345L;
                    int32_t l_621 = 0x86F9D174L;
                    int i;
                    l_561 = (((safe_lshift_func_uint8_t_u_s((((l_613 = l_581) != (void*)0) == 255UL), 4)) , &l_584) != (void*)0);
                    --l_625;
                }
            }
            else
            { 
                union U1 l_636 = {0};
                uint32_t l_640 = 1UL;
                int32_t l_645 = 0x0EB22E4EL;
                for (g_254 = 3; (g_254 >= 0); g_254 -= 1)
                { 
                    p_10.f3 = ((*g_304) && (safe_mod_func_uint8_t_u_u((safe_rshift_func_int16_t_s_s(p_8, (((*l_526) = (*g_267)) , (safe_lshift_func_uint16_t_u_s(((safe_mod_func_uint64_t_u_u((l_636 , ((safe_sub_func_uint32_t_u_u(((+(((void*)0 == &g_267) != l_640)) != 0x8FD0FAD6L), g_254)) >= p_9)), (*g_267))) , (*g_256)), p_8))))), g_641)));
                }
                for (g_39 = 2; (g_39 <= 6); g_39 += 1)
                { 
                    l_642++;
                    --l_646;
                    p_10.f3 = l_645;
                }
            }
            if (l_649)
                continue;
        }
        l_584.f3 = p_8;
        p_10.f3 = ((((*l_526) = 1L) || 0UL) || 0x2EAF5968L);
        for (l_586.f1 = 3; (l_586.f1 >= 0); l_586.f1 -= 1)
        { 
            int32_t *l_650 = &g_39;
            struct S0 l_660[6] = {{-8L,1L,6L,2UL},{-8L,1L,6L,2UL},{-8L,1L,6L,2UL},{-8L,1L,6L,2UL},{-8L,1L,6L,2UL},{-8L,1L,6L,2UL}};
            int32_t l_666 = (-7L);
            int16_t l_680 = 0L;
            int32_t l_683[3][4][1] = {{{(-1L)},{(-6L)},{(-1L)},{(-6L)}},{{(-1L)},{(-6L)},{(-1L)},{(-6L)}},{{(-1L)},{(-6L)},{(-1L)},{(-6L)}}};
            int i, j, k;
            l_650 = &l_560;
            if (p_9)
            { 
                return p_8;
            }
            else
            { 
                int16_t **l_661 = &g_171[1];
                for (p_9 = 0; (p_9 <= 6); p_9 += 1)
                { 
                    int32_t **l_651 = &l_650;
                    int16_t ***l_662 = &g_359;
                    int16_t ***l_663 = (void*)0;
                    int16_t ***l_664 = &l_661;
                    int16_t l_665 = (-2L);
                    l_666 ^= (((*g_154) != ((*l_651) = &l_560)) > (safe_add_func_uint32_t_u_u(((safe_lshift_func_uint16_t_u_s((((safe_mod_func_uint8_t_u_u((((*l_526) = (safe_add_func_int8_t_s_s((l_660[3] , ((void*)0 != &g_519)), (((*l_664) = ((*l_662) = l_661)) != (void*)0)))) > p_10.f1), l_660[3].f3)) , (*p_11)) ^ p_10.f3), 13)) , l_665), 0x771A71C8L)));
                }
            }
            for (g_34 = 0; (g_34 <= 6); g_34 += 1)
            { 
                int32_t l_681 = 0x068A43E9L;
                int32_t l_682 = 0xBE718E84L;
                int32_t l_684 = 0xB2388AE5L;
                int32_t l_685 = 1L;
                for (g_25 = 0; (g_25 <= 6); g_25 += 1)
                { 
                    struct S0 *l_667 = &g_105;
                    struct S0 *l_668 = &g_125;
                    union U1 **l_669 = &l_518;
                    union U1 ***l_670 = &l_669;
                    struct S0 ***l_674 = (void*)0;
                    struct S0 **** const l_673[1] = {&l_674};
                    int32_t l_675[2];
                    uint8_t *l_676 = (void*)0;
                    uint8_t *l_677 = &g_641;
                    int i;
                    for (i = 0; i < 2; i++)
                        l_675[i] = 9L;
                    (*l_668) = ((*l_667) = l_660[3]);
                    (*l_538) = &l_650;
                    (*l_670) = l_669;
                    (***l_538) = (((safe_sub_func_uint16_t_u_u(((((*l_677) = (l_675[1] ^= (l_673[0] == (void*)0))) & (safe_add_func_uint16_t_u_u((&p_11 != (void*)0), (((((-1L) || 0x79720FE2AAFE0D8BLL) | (((*l_526) |= p_10.f1) | p_8)) ^ l_680) <= (*l_650))))) < (*p_11)), 0x27EEL)) > (***l_538)) ^ 0x3E17ED84F6CA239DLL);
                }
                (**l_538) = (*g_154);
                ++l_686[0][0][1];
                return p_10.f3;
            }
            l_689++;
        }
    }
    ++l_692;
    return p_8;
}



static union U1  func_14(uint16_t  p_15, uint16_t  p_16, const uint64_t  p_17, int32_t  p_18, union U1  p_19)
{ 
    int32_t l_29 = 0x5467356AL;
    int32_t l_40[4];
    uint8_t l_42 = 255UL;
    int16_t l_50 = (-8L);
    int8_t *l_67 = &g_12;
    int8_t l_68 = (-7L);
    uint16_t * const l_76 = &g_25;
    const int16_t l_82[4] = {(-1L),(-1L),(-1L),(-1L)};
    int16_t **l_364[1];
    int8_t l_390 = 1L;
    struct S0 *l_409 = &g_105;
    struct S0 **l_408 = &l_409;
    int32_t l_413 = 0xF455B020L;
    int16_t **l_420 = &g_171[2];
    int i;
    for (i = 0; i < 4; i++)
        l_40[i] = 0x74D4B4B2L;
    for (i = 0; i < 1; i++)
        l_364[i] = &g_171[1];
    if ((safe_add_func_int32_t_s_s(0x3CC25429L, (l_29 |= g_12))))
    { 
        union U1 l_30[2][5][1] = {{{{0}},{{0}},{{0}},{{0}},{{0}}},{{{0}},{{0}},{{0}},{{0}},{{0}}}};
        uint16_t *l_81[7];
        const int32_t l_363[6][7] = {{0x579B224EL,0xAEDEE1E5L,1L,1L,0xAEDEE1E5L,0x579B224EL,0x72F7C703L},{0x579B224EL,0xAEDEE1E5L,1L,1L,0xAEDEE1E5L,0x579B224EL,0x72F7C703L},{0x579B224EL,0xAEDEE1E5L,1L,1L,0xAEDEE1E5L,0x579B224EL,0x72F7C703L},{0x579B224EL,0xAEDEE1E5L,1L,1L,0xAEDEE1E5L,0x579B224EL,0x72F7C703L},{0x579B224EL,0xAEDEE1E5L,1L,1L,0xAEDEE1E5L,0x579B224EL,0x72F7C703L},{0x579B224EL,0xAEDEE1E5L,1L,1L,0xAEDEE1E5L,0x579B224EL,0x72F7C703L}};
        struct S0 l_376 = {0x671D42D41F1FB9A1LL,0x0DL,0x8BC3AC4FL,0xE214D6CD1FB19665LL};
        int32_t l_391[7];
        const struct S0 ***l_412 = &g_410;
        int16_t ***l_419 = &l_364[0];
        int16_t ***l_421 = &g_359;
        int64_t *l_422[4] = {&l_30[1][3][0].f2,&l_30[1][3][0].f2,&l_30[1][3][0].f2,&l_30[1][3][0].f2};
        int i, j, k;
        for (i = 0; i < 7; i++)
            l_81[i] = &g_25;
        for (i = 0; i < 7; i++)
            l_391[i] = 0x7302AAAFL;
        if (p_16)
        { 
            return l_30[1][3][0];
        }
        else
        { 
            int32_t *l_35 = &l_30[1][3][0].f3;
            int32_t *l_36 = &l_30[1][3][0].f3;
            int32_t *l_37 = (void*)0;
            int32_t *l_38[4][2] = {{&g_39,&g_39},{&g_39,&g_39},{&g_39,&g_39},{&g_39,&g_39}};
            int16_t l_41 = (-1L);
            uint16_t *l_47 = &g_25;
            int i, j;
            for (l_29 = 0; (l_29 < 5); l_29 = safe_add_func_int64_t_s_s(l_29, 1))
            { 
                union U1 l_33[2] = {{0},{0}};
                int i;
                return l_33[1];
            }
            ++l_42;
            l_50 &= (safe_mul_func_uint16_t_u_u(((*l_47)++), p_16));
        }
        for (p_16 = 0; (p_16 < 10); p_16++)
        { 
            const uint16_t *l_75[1];
            union U1 l_80 = {0};
            int32_t l_373 = 0x5F885715L;
            int32_t l_392 = (-10L);
            int32_t l_397[6] = {0x8E97FD2AL,0x8E97FD2AL,0x8E97FD2AL,0x8E97FD2AL,0x8E97FD2AL,0x8E97FD2AL};
            int i;
            for (i = 0; i < 1; i++)
                l_75[i] = (void*)0;
            for (g_34 = (-17); (g_34 == (-8)); g_34++)
            { 
                int32_t l_69[2][7][6] = {{{0x572AB10EL,(-7L),4L,0x49BA5CD2L,0x37069E5FL,0L},{0x63CCF75BL,4L,0x572AB10EL,0x002B50D2L,0x002B50D2L,0x572AB10EL},{4L,4L,0L,0x63CCF75BL,0x37069E5FL,0x002B50D2L},{0L,(-7L),0x49BA5CD2L,0L,1L,0L},{0x49BA5CD2L,0L,0x49BA5CD2L,0L,4L,0x002B50D2L},{0x3506F8A1L,0L,0L,(-1L),0x572AB10EL,0x572AB10EL},{(-1L),0x572AB10EL,0x572AB10EL,(-1L),0L,0L}},{{0x3506F8A1L,0x002B50D2L,4L,0L,0x49BA5CD2L,0L},{0x49BA5CD2L,0L,1L,0L,0x49BA5CD2L,(-7L)},{0L,0x002B50D2L,0x37069E5FL,0x63CCF75BL,0L,4L},{4L,0x572AB10EL,0x002B50D2L,0x002B50D2L,0x572AB10EL,4L},{0x63CCF75BL,0L,0x37069E5FL,0x49BA5CD2L,4L,(-7L)},{0x572AB10EL,0L,1L,0L,0x3506F8A1L,0x63CCF75BL},{(-1L),0x37069E5FL,0L,0x002B50D2L,1L,(-7L)}}};
                uint32_t *l_70 = (void*)0;
                uint32_t *l_71 = (void*)0;
                int i, j, k;
            }
            if (p_17)
                break;
            (*g_154) = (p_19 , (void*)0);
            for (g_78.f1 = 0; (g_78.f1 < 23); g_78.f1++)
            { 
                int64_t *l_356 = &g_78.f0;
                int32_t *l_357 = &l_40[3];
                int16_t ***l_362 = &g_359;
                int32_t l_389[1];
                uint32_t l_393 = 18446744073709551612UL;
                uint32_t l_398 = 4294967295UL;
                int i;
                for (i = 0; i < 1; i++)
                    l_389[i] = 0x725D78AAL;
                if (((*l_357) ^= ((safe_lshift_func_int8_t_s_u(g_125.f1, 0)) & (safe_lshift_func_uint16_t_u_s(p_18, (~(safe_sub_func_int64_t_s_s((0xF4E6L <= ((*g_256) <= ((p_18 == (0x45DEBCD60B49C037LL > ((*l_356) ^= 0xB9444DDF17746F81LL))) | p_16))), 0x3549D8BB845BA051LL))))))))
                { 
                    int16_t ****l_360 = (void*)0;
                    int16_t ****l_361[7];
                    int32_t l_374[3][4][1];
                    int32_t *l_375 = &g_125.f2;
                    struct S0 *l_377 = &l_376;
                    int i, j, k;
                    for (i = 0; i < 7; i++)
                        l_361[i] = &g_358[1];
                    for (i = 0; i < 3; i++)
                    {
                        for (j = 0; j < 4; j++)
                        {
                            for (k = 0; k < 1; k++)
                                l_374[i][j][k] = 0L;
                        }
                    }
                    l_362 = g_358[1];
                    (*l_375) ^= (p_16 > (g_105 , (((l_363[2][1] && ((l_364[0] == (void*)0) ^ (((g_78.f2 , (((((((((safe_sub_func_uint8_t_u_u((safe_div_func_uint32_t_u_u((safe_mul_func_int16_t_s_s((safe_mod_func_uint16_t_u_u((l_373 , p_15), l_42)), 0xED97L)), p_16)), l_40[0])) & l_373) ^ (-9L)) , 0L) < 7UL) , 65530UL) <= p_15) > 1UL) >= p_16)) < (*g_267)) == l_374[0][3][0]))) > l_373) > g_25)));
                    (*l_377) = l_376;
                }
                else
                { 
                    int32_t *l_378 = &g_78.f2;
                    int32_t *l_379 = &g_114;
                    int32_t *l_380 = &l_80.f3;
                    int32_t *l_381 = &l_80.f3;
                    int32_t *l_382 = &g_125.f2;
                    int32_t *l_383 = &g_78.f2;
                    int32_t *l_384 = (void*)0;
                    int32_t *l_385 = (void*)0;
                    int32_t *l_386 = &l_373;
                    int32_t *l_387 = &g_125.f2;
                    int32_t *l_388[5];
                    int16_t l_396 = 3L;
                    int i;
                    for (i = 0; i < 5; i++)
                        l_388[i] = &l_376.f2;
                    if ((*l_357))
                        break;
                    --l_393;
                    (*l_380) = 0x35A56B93L;
                    l_398--;
                }
                for (g_78.f0 = 0; (g_78.f0 == (-6)); g_78.f0 = safe_sub_func_int64_t_s_s(g_78.f0, 9))
                { 
                    int64_t l_403[3];
                    int32_t l_404 = 0xE124EE91L;
                    int i;
                    for (i = 0; i < 3; i++)
                        l_403[i] = 0xAA501E6DAA1031FDLL;
                }
                return p_19;
            }
            return p_19;
        }
        (**g_154) = (~0x5BF7L);
        l_376.f2 |= ((((safe_mul_func_uint8_t_u_u(((l_408 == ((*l_412) = g_410)) == p_18), (((l_413 == (-1L)) < (g_125.f0 = ((((safe_lshift_func_uint16_t_u_s((safe_rshift_func_uint16_t_u_s((!((((*l_419) = l_364[0]) == ((*l_421) = l_420)) | l_42)), 13)), p_15)) || g_12) ^ l_363[1][3]) > p_16))) | (*g_256)))) != 0x0F0F4B2FB8938E93LL) && 0x9E68L) | (*g_256));
    }
    else
    { 
        const struct S0 l_428 = {-8L,7L,0L,0x28BA34BF643C0129LL};
        struct S0 ***l_431 = &l_408;
        int16_t * const l_443 = &g_444;
        int16_t * const *l_442 = &l_443;
        int16_t * const **l_441 = &l_442;
        int32_t l_471[6];
        uint32_t l_472 = 4294967289UL;
        int i;
        for (i = 0; i < 6; i++)
            l_471[i] = 6L;
        for (g_78.f2 = 0; (g_78.f2 > (-6)); g_78.f2 = safe_sub_func_int32_t_s_s(g_78.f2, 4))
        { 
            int32_t *l_427 = &l_40[3];
            struct S0 ****l_432 = &l_431;
            struct S0 ***l_434 = &l_408;
            struct S0 ****l_433 = &l_434;
            int32_t l_465[7][1][2] = {{{1L,1L}},{{1L,1L}},{{1L,1L}},{{1L,1L}},{{1L,1L}},{{1L,1L}},{{1L,1L}}};
            int i, j, k;
            if ((safe_sub_func_int32_t_s_s(((*l_427) ^= ((**g_154) = (**g_154))), (g_78.f1 < ((l_428 , ((p_18 > (g_78.f1 ^ (&g_410 == ((*l_433) = ((*l_432) = l_431))))) , 9UL)) && g_188[2][1])))))
            { 
                int16_t * const *l_439 = &g_171[2];
                int16_t * const **l_438 = &l_439;
                int32_t l_447[3][1][7] = {{{0x5F8604B1L,0x5F8604B1L,1L,0x812C186BL,1L,0x5F8604B1L,0x5F8604B1L}},{{0x1143485EL,0x14E1AA4AL,0L,0x14E1AA4AL,0x1143485EL,0x1143485EL,0x14E1AA4AL}},{{9L,0L,9L,1L,1L,9L,0L}}};
                int i, j, k;
                for (l_50 = 0; (l_50 <= 1); l_50 += 1)
                { 
                    struct S0 l_435 = {-5L,0L,-6L,0x63AC752FDA74A401LL};
                    int16_t * const ***l_440[2][6] = {{&l_438,&l_438,&l_438,&l_438,&l_438,&l_438},{&l_438,&l_438,&l_438,&l_438,&l_438,&l_438}};
                    int i, j;
                    (****l_432) = l_435;
                    (*l_427) = 0x0C8E79EEL;
                    (**g_154) ^= (safe_add_func_int8_t_s_s(((l_441 = l_438) != ((safe_mul_func_int8_t_s_s(l_40[(l_50 + 1)], (p_15 && (-8L)))) , &l_439)), ((*g_256) || (7UL & p_16))));
                }
                if (l_447[0][0][3])
                    continue;
            }
            else
            { 
                uint32_t l_448 = 0UL;
                int32_t *l_451 = (void*)0;
                int32_t *l_452 = (void*)0;
                int32_t *l_453 = &l_40[0];
                int32_t *l_454 = (void*)0;
                int32_t *l_455 = &g_114;
                int32_t *l_456 = &g_39;
                int32_t *l_457 = &g_39;
                int32_t *l_458 = (void*)0;
                int32_t *l_459 = (void*)0;
                int32_t *l_460 = (void*)0;
                int32_t *l_461 = (void*)0;
                int32_t *l_462 = &l_413;
                int32_t *l_463 = (void*)0;
                int32_t *l_464 = (void*)0;
                int32_t *l_466 = &g_125.f2;
                int32_t *l_467 = &g_105.f2;
                int32_t *l_468 = &l_465[4][0][1];
                int32_t *l_469 = &l_40[0];
                int32_t *l_470[7];
                uint32_t *l_485 = &g_188[2][1];
                uint32_t *l_488 = &l_448;
                int8_t *l_513 = &g_105.f1;
                uint64_t *l_514[4];
                int i;
                for (i = 0; i < 7; i++)
                    l_470[i] = &g_114;
                for (i = 0; i < 4; i++)
                    l_514[i] = &g_78.f3;
                --l_448;
                ++l_472;
                (*l_466) = ((*l_469) = ((((((safe_mod_func_int16_t_s_s((((-1L) == (&g_12 != ((((safe_sub_func_uint32_t_u_u((safe_rshift_func_uint16_t_u_s((safe_add_func_int8_t_s_s(g_25, l_428.f2)), 9)), p_16)) & ((**g_154) != (g_125.f0 == p_17))) ^ p_18) , (void*)0))) < l_428.f1), (*l_427))) > 4UL) ^ g_114) >= (*g_304)) > 1UL) != 0xC71EADB607CCF160LL));
                (*l_455) ^= (((safe_add_func_int32_t_s_s((l_413 , (((*l_488) = ((*l_485)--)) & ((*l_466) ^= (((safe_mod_func_uint32_t_u_u((safe_sub_func_int16_t_s_s(((p_15 >= l_40[3]) , ((**l_442) = (safe_lshift_func_uint16_t_u_u(((((l_472 == (g_125.f3 = ((((safe_mod_func_uint64_t_u_u(((safe_add_func_uint8_t_u_u(((safe_div_func_int64_t_s_s(0x6A17D46919615D34LL, ((safe_rshift_func_int8_t_s_s((((l_471[5] = (((*l_513) = (((safe_add_func_int8_t_s_s((safe_mul_func_uint8_t_u_u(p_18, (safe_sub_func_uint8_t_u_u((safe_sub_func_int32_t_s_s(((safe_div_func_int16_t_s_s(p_18, 0x1327L)) > g_105.f3), 1UL)), (*g_304))))), (*g_304))) , 1L) != g_72)) != (*l_427))) , g_113[1][0]) , 0x7CL), l_29)) , (*g_267)))) >= g_78.f0), 0UL)) != l_428.f3), (*l_427))) , &g_155[0][0][3]) != (void*)0) | (*l_457)))) != (*l_427)) ^ (*g_267)) >= (**g_154)), p_16)))), (*l_427))), 0x18D838CAL)) >= p_15) > g_320)))), (*l_427))) , (***l_431)) , p_18);
            }
        }
    }
    return p_19;
}



static int16_t  func_22(const int32_t  p_23)
{ 
    return p_23;
}



static int32_t  func_55(uint16_t * p_56, const int32_t  p_57, union U1  p_58, uint16_t * p_59, const int16_t  p_60)
{ 
    const int64_t l_89 = 0xF5532CF2D060950CLL;
    uint8_t *l_100 = &g_101;
    int32_t *l_102 = &g_78.f2;
    uint32_t l_103[7] = {0x9747A004L,0x7303F68CL,0x9747A004L,0x9747A004L,0x7303F68CL,0x9747A004L,0x9747A004L};
    int32_t l_109 = 1L;
    int32_t l_112 = 0xC769F55DL;
    uint8_t **l_133 = &l_100;
    int64_t l_219 = 1L;
    int32_t l_225 = 0L;
    int16_t *l_262 = &g_113[1][0];
    uint8_t ** const l_305 = (void*)0;
    uint16_t **l_317[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int32_t ***l_322 = &g_154;
    int32_t *l_324 = (void*)0;
    int32_t *l_325 = &g_72;
    int32_t *l_326 = &g_105.f2;
    int32_t *l_327 = (void*)0;
    int32_t *l_328 = &g_39;
    int32_t *l_329 = &g_105.f2;
    int32_t *l_330 = &l_225;
    int32_t *l_331 = &l_225;
    int32_t *l_332 = (void*)0;
    int32_t *l_333 = &g_72;
    int32_t *l_334 = &g_72;
    int32_t *l_335 = (void*)0;
    int32_t *l_336[2][7] = {{(void*)0,&l_112,&l_112,(void*)0,&l_112,&l_112,(void*)0},{&g_72,&g_105.f2,&g_72,&g_72,&g_105.f2,&g_72,&g_72}};
    int32_t l_337 = 2L;
    int8_t l_338 = 0xF6L;
    int8_t l_339 = 0L;
    int64_t l_340 = 0xBDB1773738394408LL;
    int32_t l_341 = 0x6015E6F5L;
    uint32_t l_342 = 0x9D57C0CCL;
    int i, j;
    (*l_102) &= (safe_sub_func_int16_t_s_s((safe_mod_func_uint64_t_u_u((safe_lshift_func_uint16_t_u_s(l_89, (((p_57 < (safe_div_func_uint8_t_u_u((safe_add_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s((g_34 <= ((g_78.f1 > 1L) & (safe_div_func_uint8_t_u_u(((*l_100) = (((((((safe_div_func_uint32_t_u_u(l_89, l_89)) > (-1L)) , g_25) , 0x2726L) || (*p_56)) > l_89) || l_89)), 5L)))), p_57)), g_12)), l_89))) , p_57) <= 0x38C1355B561D8FC8LL))), p_60)), g_78.f0));
    for (g_78.f1 = 6; (g_78.f1 >= 0); g_78.f1 -= 1)
    { 
        struct S0 *l_104 = &g_105;
        int32_t l_111 = (-1L);
        const uint16_t *l_166 = &g_25;
        int32_t l_172 = 0x54CE7603L;
        uint16_t l_212 = 1UL;
        int64_t *l_214 = &g_105.f0;
        const int32_t *l_216 = &g_72;
        const int32_t **l_215[3];
        int32_t l_220 = 0L;
        int32_t l_222 = 2L;
        int32_t l_226[1];
        uint32_t l_227 = 0x47E04553L;
        int8_t *l_252 = &g_105.f1;
        const int64_t l_257 = 1L;
        int32_t *l_306 = &l_112;
        int i;
        for (i = 0; i < 3; i++)
            l_215[i] = &l_216;
        for (i = 0; i < 1; i++)
            l_226[i] = 0xAF989AEFL;
        (*l_104) = g_78;
        p_58.f3 = ((*l_102) ^= l_103[g_78.f1]);
        for (g_105.f2 = 5; (g_105.f2 >= 0); g_105.f2 -= 1)
        { 
            uint8_t l_115 = 0x15L;
            uint8_t **l_132 = &l_100;
            int32_t *l_136[5][4][3] = {{{&g_125.f2,&g_125.f2,&g_105.f2},{&l_112,&l_112,&g_72},{&g_125.f2,&g_72,&g_125.f2},{&g_125.f2,&g_72,&g_125.f2}},{{&g_72,&l_112,&l_112},{&g_105.f2,&g_125.f2,&g_125.f2},{&l_112,&g_78.f2,&g_125.f2},{&l_112,&g_125.f2,&g_72}},{{&g_105.f2,&l_111,&g_105.f2},{&g_72,&g_125.f2,&l_112},{&g_125.f2,&g_78.f2,&l_112},{&g_125.f2,&g_125.f2,&g_105.f2}},{{&l_112,&l_112,&g_72},{&g_125.f2,&g_72,&g_125.f2},{&g_125.f2,&g_72,&g_125.f2},{&g_72,&l_112,&l_112}},{{&g_105.f2,&g_125.f2,&g_125.f2},{&l_112,&g_78.f2,&g_125.f2},{&l_112,&g_125.f2,&g_72},{&g_105.f2,&l_111,&g_105.f2}}};
            struct S0 l_143 = {0xAF5BD10381031E14LL,1L,0L,0xC77F6B34804F9BF6LL};
            int32_t *l_146 = &l_112;
            union U1 l_161 = {0};
            uint16_t *l_167[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
            uint32_t *l_184 = &l_103[g_78.f1];
            uint32_t *l_187 = &g_188[2][1];
            int i, j, k;
        }
        if ((g_267 == ((safe_rshift_func_int8_t_s_u(g_34, 4)) , g_267)))
        { 
            uint32_t l_293 = 2UL;
            for (l_219 = 0; (l_219 < 0); l_219 = safe_add_func_uint8_t_u_u(l_219, 4))
            { 
                int32_t l_272 = 0x0992C471L;
                int32_t *l_273 = &l_226[0];
                int32_t *l_274 = &l_226[0];
                int32_t *l_275 = &g_105.f2;
                int32_t *l_276 = (void*)0;
                int32_t *l_277 = &l_220;
                int32_t *l_278 = &g_39;
                int32_t *l_279 = &l_226[0];
                int32_t *l_280 = &l_111;
                int32_t *l_281 = &l_109;
                int32_t *l_282 = &l_226[0];
                int32_t *l_283 = &g_72;
                int32_t *l_284 = (void*)0;
                int32_t *l_285 = &l_225;
                int32_t *l_286 = &l_226[0];
                int32_t *l_287 = &g_114;
                int32_t *l_288 = &l_272;
                int32_t *l_289 = &l_225;
                int32_t *l_290 = &l_272;
                int32_t *l_291 = &g_125.f2;
                int32_t *l_292[6] = {(void*)0,&l_112,&l_112,(void*)0,&l_112,&l_112};
                int i;
                ++l_293;
                for (l_222 = 0; (l_222 == (-10)); l_222 = safe_sub_func_uint32_t_u_u(l_222, 6))
                { 
                    return p_58.f1;
                }
            }
        }
        else
        { 
            uint64_t l_298 = 0xBB1C78F11A6BF4DELL;
            return l_298;
        }
        (*l_306) ^= (safe_rshift_func_uint16_t_u_u((*p_59), (safe_mod_func_uint32_t_u_u(((((*l_104) , g_303[1]) == l_305) < 65535UL), ((0xA70DL >= (g_125.f0 || (*l_102))) ^ 0UL)))));
    }
    if (g_78.f1)
        goto lbl_323;
    for (g_105.f3 = 0; (g_105.f3 != 59); ++g_105.f3)
    { 
        uint64_t l_309[7][6][4] = {{{0xF761C272038A2CE4LL,0xC34E1C527838CB54LL,0x8B4E161E205DDFC6LL,0x7426CD39D242D67FLL},{1UL,18446744073709551609UL,0UL,9UL},{1UL,0xC34E1C527838CB54LL,0x4D5AF559F17BF180LL,0x83989482EB33828ELL},{1UL,0x9B3D8044210E2D0ELL,0UL,0x04023CA12ED9C82ALL},{1UL,0x83989482EB33828ELL,0x8B4E161E205DDFC6LL,0x83989482EB33828ELL},{0xF761C272038A2CE4LL,18446744073709551615UL,0x8B4E161E205DDFC6LL,9UL}},{{1UL,0UL,0UL,0x7426CD39D242D67FLL},{1UL,18446744073709551615UL,0x4D5AF559F17BF180LL,0x9B3D8044210E2D0ELL},{1UL,0x83989482EB33828ELL,0UL,18446744073709551610UL},{1UL,0x04023CA12ED9C82ALL,4UL,0x04023CA12ED9C82ALL},{1UL,0UL,4UL,0xC34E1C527838CB54LL},{0xF761C272038A2CE4LL,0x9B3D8044210E2D0ELL,0x4D5AF559F17BF180LL,18446744073709551615UL}},{{5UL,0UL,0x8B4E161E205DDFC6LL,18446744073709551610UL},{5UL,0x04023CA12ED9C82ALL,0x4D5AF559F17BF180LL,9UL},{0xF761C272038A2CE4LL,18446744073709551610UL,4UL,18446744073709551610UL},{1UL,18446744073709551609UL,4UL,18446744073709551615UL},{0xF761C272038A2CE4LL,0x83989482EB33828ELL,0x4D5AF559F17BF180LL,0xC34E1C527838CB54LL},{5UL,18446744073709551609UL,0x8B4E161E205DDFC6LL,0x04023CA12ED9C82ALL}},{{5UL,18446744073709551610UL,0x4D5AF559F17BF180LL,0x7426CD39D242D67FLL},{0xF761C272038A2CE4LL,0x04023CA12ED9C82ALL,4UL,0x04023CA12ED9C82ALL},{1UL,0UL,4UL,0xC34E1C527838CB54LL},{0xF761C272038A2CE4LL,0x9B3D8044210E2D0ELL,0x4D5AF559F17BF180LL,18446744073709551615UL},{5UL,0UL,0x8B4E161E205DDFC6LL,18446744073709551610UL},{5UL,0x04023CA12ED9C82ALL,0x4D5AF559F17BF180LL,9UL}},{{0xF761C272038A2CE4LL,18446744073709551610UL,4UL,18446744073709551610UL},{1UL,18446744073709551609UL,4UL,18446744073709551615UL},{0xF761C272038A2CE4LL,0x83989482EB33828ELL,0x4D5AF559F17BF180LL,0xC34E1C527838CB54LL},{5UL,18446744073709551609UL,0x8B4E161E205DDFC6LL,0x04023CA12ED9C82ALL},{5UL,18446744073709551610UL,0x4D5AF559F17BF180LL,0x7426CD39D242D67FLL},{0xF761C272038A2CE4LL,0x04023CA12ED9C82ALL,4UL,0x04023CA12ED9C82ALL}},{{1UL,0UL,4UL,0xC34E1C527838CB54LL},{0xF761C272038A2CE4LL,0x9B3D8044210E2D0ELL,0x4D5AF559F17BF180LL,18446744073709551615UL},{5UL,0UL,0x8B4E161E205DDFC6LL,18446744073709551610UL},{5UL,0x04023CA12ED9C82ALL,0x4D5AF559F17BF180LL,9UL},{0xF761C272038A2CE4LL,18446744073709551610UL,4UL,18446744073709551610UL},{1UL,18446744073709551609UL,4UL,18446744073709551615UL}},{{0xF761C272038A2CE4LL,0x83989482EB33828ELL,0x4D5AF559F17BF180LL,0xC34E1C527838CB54LL},{5UL,18446744073709551609UL,0x8B4E161E205DDFC6LL,0x04023CA12ED9C82ALL},{5UL,18446744073709551610UL,0x4D5AF559F17BF180LL,0x7426CD39D242D67FLL},{0xF761C272038A2CE4LL,0x04023CA12ED9C82ALL,4UL,0x04023CA12ED9C82ALL},{1UL,0UL,4UL,0xC34E1C527838CB54LL},{0xF761C272038A2CE4LL,0x9B3D8044210E2D0ELL,0x4D5AF559F17BF180LL,18446744073709551615UL}}};
        uint16_t **l_318 = &g_256;
        int32_t *l_319[1][1][6];
        int32_t *l_321 = &g_114;
        int i, j, k;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 1; j++)
            {
                for (k = 0; k < 6; k++)
                    l_319[i][j][k] = &g_320;
            }
        }
        if (l_309[3][1][0])
            break;
        (*l_321) = (safe_rshift_func_uint8_t_u_u((!(((safe_rshift_func_int8_t_s_s(5L, 7)) & 1UL) && ((*l_102) |= 0x1DCE6AB1L))), ((-1L) > (safe_sub_func_uint16_t_u_u(((*p_56) ^= ((p_58.f4 = (((((((**g_154) = (((l_317[5] != l_318) , (0L < p_60)) == p_57)) || 0x6698EB2AL) <= 0x1AL) >= (*g_304)) && 0x20187AD862C61CD7LL) <= l_309[3][1][0])) , l_309[3][1][0])), g_113[0][4])))));
    }
lbl_323:
    (*l_322) = &l_102;
    l_342--;
    return p_60;
}



static uint16_t * func_61(int8_t * p_62, uint32_t  p_63, const uint16_t * p_64, uint16_t * const  p_65, uint16_t * p_66)
{ 
    struct S0 *l_77[5][7][1] = {{{&g_78},{&g_78},{&g_78},{&g_78},{&g_78},{&g_78},{&g_78}},{{&g_78},{&g_78},{&g_78},{&g_78},{&g_78},{&g_78},{&g_78}},{{&g_78},{&g_78},{&g_78},{&g_78},{&g_78},{&g_78},{&g_78}},{{&g_78},{&g_78},{&g_78},{&g_78},{&g_78},{&g_78},{&g_78}},{{&g_78},{&g_78},{&g_78},{&g_78},{&g_78},{&g_78},{&g_78}}};
    struct S0 **l_79 = &l_77[3][0][0];
    int i, j, k;
    (*l_79) = l_77[3][3][0];
    return &g_25;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_12, "g_12", print_hash_value);
    transparent_crc(g_25, "g_25", print_hash_value);
    transparent_crc(g_34, "g_34", print_hash_value);
    transparent_crc(g_39, "g_39", print_hash_value);
    transparent_crc(g_72, "g_72", print_hash_value);
    transparent_crc(g_78.f0, "g_78.f0", print_hash_value);
    transparent_crc(g_78.f1, "g_78.f1", print_hash_value);
    transparent_crc(g_78.f2, "g_78.f2", print_hash_value);
    transparent_crc(g_78.f3, "g_78.f3", print_hash_value);
    transparent_crc(g_101, "g_101", print_hash_value);
    transparent_crc(g_105.f0, "g_105.f0", print_hash_value);
    transparent_crc(g_105.f1, "g_105.f1", print_hash_value);
    transparent_crc(g_105.f2, "g_105.f2", print_hash_value);
    transparent_crc(g_105.f3, "g_105.f3", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(g_113[i][j], "g_113[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_114, "g_114", print_hash_value);
    transparent_crc(g_125.f0, "g_125.f0", print_hash_value);
    transparent_crc(g_125.f1, "g_125.f1", print_hash_value);
    transparent_crc(g_125.f2, "g_125.f2", print_hash_value);
    transparent_crc(g_125.f3, "g_125.f3", print_hash_value);
    transparent_crc(g_177, "g_177", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_188[i][j], "g_188[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_254, "g_254", print_hash_value);
    transparent_crc(g_320, "g_320", print_hash_value);
    transparent_crc(g_444, "g_444", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(g_608[i][j], "g_608[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_641, "g_641", print_hash_value);
    transparent_crc(g_706, "g_706", print_hash_value);
    transparent_crc(g_722, "g_722", print_hash_value);
    transparent_crc(g_750, "g_750", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 7; k++)
            {
                transparent_crc(g_955[i][j][k].f0, "g_955[i][j][k].f0", print_hash_value);
                transparent_crc(g_955[i][j][k].f1, "g_955[i][j][k].f1", print_hash_value);
                transparent_crc(g_955[i][j][k].f2, "g_955[i][j][k].f2", print_hash_value);
                transparent_crc(g_955[i][j][k].f3, "g_955[i][j][k].f3", print_hash_value);

            }
        }
    }
    transparent_crc(g_1023, "g_1023", print_hash_value);
    transparent_crc(g_1059, "g_1059", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
