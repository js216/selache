// SPDX-License-Identifier: MIT
// cctest_csmith_57897c63.c --- cctest case csmith_57897c63 (csmith seed 1468628067)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x2f57ce68 */
/* @exp_ticks 0x4bf9 */

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

// Options:   -s 1468628067 -o /tmp/csmith_gen_qnspfeax/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   uint64_t  f0;
};

union U2 {
   const int64_t  f0;
   const int32_t  f1;
};


static struct S0 g_21 = {0xEAB1D6A56C37FC05LL};
static uint32_t g_24 = 1UL;
static struct S0 g_25 = {9UL};
static uint32_t g_43 = 0x93911E74L;
static uint8_t g_58 = 0UL;
static int32_t g_75 = 0L;
static int16_t g_81[5] = {(-2L),(-2L),(-2L),(-2L),(-2L)};
static int8_t g_82[3][1][2] = {{{7L,0x37L}},{{7L,7L}},{{0x37L,7L}}};
static int32_t g_112[2] = {0x4103A873L,0x4103A873L};
static const union U2 g_194 = {7L};



static uint64_t  func_1(void);
static struct S0  func_2(const union U2  p_3, union U2  p_4);
static const union U2  func_5(uint32_t  p_6, union U2  p_7, int64_t  p_8, union U2  p_9, uint16_t  p_10);
static uint16_t  func_16(int32_t  p_17, struct S0  p_18);




static uint64_t  func_1(void)
{ 
    uint32_t l_13 = 0x79B38951L;
    union U2 l_132 = {-1L};
    struct S0 l_257 = {3UL};
    uint16_t l_289 = 65528UL;
    int32_t l_292[3];
    int i;
    for (i = 0; i < 3; i++)
        l_292[i] = 0L;
    l_257 = func_2(func_5(((safe_div_func_int32_t_s_s(l_13, (safe_add_func_uint16_t_u_u(func_16(((safe_lshift_func_int16_t_s_s((((((((l_13 <= (((g_21 = g_21) , (safe_sub_func_int32_t_s_s(l_13, l_13))) , l_13)) , g_21.f0) || l_13) | g_24) < l_13) || l_13) , 1L), g_24)) , (-10L)), g_25), l_13)))) == (-4L)), l_132, l_132.f1, l_132, l_132.f0), l_132);
    if ((((safe_rshift_func_uint8_t_u_s((safe_mul_func_uint64_t_u_u(g_194.f1, (g_82[0][0][1] <= (l_132.f0 >= (l_132.f0 >= l_13))))), l_132.f1)) <= g_82[1][0][0]) | 0x1AL))
    { 
        uint32_t l_266 = 1UL;
        int32_t l_277 = (-1L);
        uint32_t l_278 = 0xCD069B10L;
        uint32_t l_308[5] = {0x001837DDL,0x001837DDL,0x001837DDL,0x001837DDL,0x001837DDL};
        int64_t l_317 = 0x0251807CDF269038LL;
        int i;
        if (((safe_sub_func_uint64_t_u_u(((l_266 ^ ((g_58 || (l_266 && (safe_lshift_func_uint8_t_u_s((safe_mod_func_uint32_t_u_u((safe_mod_func_int32_t_s_s(((l_277 = (safe_mul_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u(65532UL, l_13)), 0x38L))) == g_81[0]), g_25.f0)), 0x6ED154E9L)), 3)))) > 1L)) < l_266), g_75)) , 0L))
        { 
            int8_t l_279 = 9L;
            int32_t l_280 = 0x718573F5L;
            int32_t l_288[5] = {0L,0L,0L,0L,0L};
            struct S0 l_315[3][5][4] = {{{{0x9312C6D952F84763LL},{0x29CAD3B19451B64BLL},{0x9312C6D952F84763LL},{0x20B687CD043710CCLL}},{{0x9312C6D952F84763LL},{0x20B687CD043710CCLL},{0x20B687CD043710CCLL},{0x9312C6D952F84763LL}},{{0x2FD1FDE41450234CLL},{0x20B687CD043710CCLL},{1UL},{0x20B687CD043710CCLL}},{{0x20B687CD043710CCLL},{0x29CAD3B19451B64BLL},{1UL},{1UL}},{{0x2FD1FDE41450234CLL},{0x2FD1FDE41450234CLL},{0x20B687CD043710CCLL},{1UL}}},{{{0x9312C6D952F84763LL},{0x29CAD3B19451B64BLL},{0x9312C6D952F84763LL},{0x9312C6D952F84763LL}},{{1UL},{0x9312C6D952F84763LL},{0x9312C6D952F84763LL},{1UL}},{{0x20B687CD043710CCLL},{0x9312C6D952F84763LL},{0x29CAD3B19451B64BLL},{0x9312C6D952F84763LL}},{{0x9312C6D952F84763LL},{0x2FD1FDE41450234CLL},{0x29CAD3B19451B64BLL},{0x29CAD3B19451B64BLL}},{{0x20B687CD043710CCLL},{0x20B687CD043710CCLL},{0x9312C6D952F84763LL},{0x29CAD3B19451B64BLL}}},{{{1UL},{0x2FD1FDE41450234CLL},{1UL},{0x9312C6D952F84763LL}},{{1UL},{0x9312C6D952F84763LL},{0x9312C6D952F84763LL},{1UL}},{{0x20B687CD043710CCLL},{0x9312C6D952F84763LL},{0x29CAD3B19451B64BLL},{0x9312C6D952F84763LL}},{{0x9312C6D952F84763LL},{0x2FD1FDE41450234CLL},{0x29CAD3B19451B64BLL},{0x29CAD3B19451B64BLL}},{{0x20B687CD043710CCLL},{0x20B687CD043710CCLL},{0x9312C6D952F84763LL},{0x29CAD3B19451B64BLL}}}};
            int i, j, k;
            if ((((((l_279 = l_278) > l_132.f0) & (l_280 ^ (((((g_25.f0 &= g_24) || 0L) || l_280) >= l_13) , 4294967295UL))) ^ l_280) >= 9L))
            { 
                int16_t l_281 = (-9L);
                l_280 |= l_281;
                l_277 ^= ((safe_sub_func_uint64_t_u_u(g_58, g_112[1])) <= (g_81[1] | (safe_rshift_func_int16_t_s_s(l_132.f0, 11))));
                l_288[3] |= ((l_278 , (((((safe_lshift_func_uint16_t_u_s((l_266 , (0UL <= (65528UL < l_257.f0))), l_281)) == l_280) >= g_81[1]) != 3L) , l_13)) , 0xDC65A50DL);
            }
            else
            { 
                uint32_t l_293 = 0xB3A3B66FL;
                struct S0 l_296 = {2UL};
                l_289++;
                l_293--;
                l_296 = g_25;
            }
            for (l_279 = 0; (l_279 > (-1)); --l_279)
            { 
                uint32_t l_304 = 0xA1156754L;
                int32_t l_313[2];
                int32_t l_314 = 0xEF523E0AL;
                int i;
                for (i = 0; i < 2; i++)
                    l_313[i] = 0x040352F1L;
                g_112[1] = (l_288[3] > (l_280 = ((+(((safe_div_func_int16_t_s_s((g_112[1] && (l_304 < (safe_div_func_uint64_t_u_u((safe_unary_minus_func_int8_t_s((g_194.f0 , l_308[2]))), g_21.f0)))), l_304)) >= 0x765C340BFBFA90F9LL) || l_257.f0)) | (-1L))));
                l_314 = (l_313[1] |= ((safe_div_func_int8_t_s_s(0x7FL, l_292[1])) && ((((l_288[3] ^= (((safe_div_func_int32_t_s_s(l_304, 5UL)) , l_308[2]) , 1UL)) != g_25.f0) >= l_304) >= g_24)));
                l_257 = l_315[2][0][2];
            }
            l_317 |= ((l_315[2][0][2].f0 | l_292[1]) <= (safe_unary_minus_func_uint32_t_u(0x29FB0218L)));
        }
        else
        { 
            g_75 = (l_277 = 0x4CFB21B0L);
            g_112[1] ^= 1L;
            for (l_289 = 0; (l_289 == 28); l_289 = safe_add_func_int16_t_s_s(l_289, 7))
            { 
                uint16_t l_320 = 0UL;
                l_320 |= (1UL && g_194.f1);
            }
        }
    }
    else
    { 
        uint32_t l_333 = 18446744073709551615UL;
        int32_t l_334[2];
        int i;
        for (i = 0; i < 2; i++)
            l_334[i] = (-6L);
        for (l_13 = 0; (l_13 < 1); l_13++)
        { 
            uint8_t l_331 = 1UL;
            struct S0 l_339 = {18446744073709551610UL};
            int8_t l_349 = 0x7FL;
            const int16_t l_358 = 0x8DAFL;
            int32_t l_360[3];
            int i;
            for (i = 0; i < 3; i++)
                l_360[i] = 3L;
            for (g_24 = 0; (g_24 <= 1); g_24 += 1)
            { 
                union U2 l_332 = {1L};
                int i;
                g_75 |= (g_112[g_24] ^ (safe_sub_func_uint16_t_u_u(((safe_mod_func_int8_t_s_s((-8L), (safe_div_func_uint64_t_u_u((l_334[0] = (safe_sub_func_uint16_t_u_u(l_331, (((l_332 , (-1L)) && l_333) & g_194.f1)))), l_332.f1)))) == l_333), 0x3682L)));
                g_112[1] = 1L;
            }
            for (g_25.f0 = 0; (g_25.f0 < 55); g_25.f0 = safe_add_func_uint32_t_u_u(g_25.f0, 3))
            { 
                if (l_132.f0)
                    break;
                if (l_331)
                    continue;
            }
            for (g_43 = (-2); (g_43 < 47); g_43 = safe_add_func_uint16_t_u_u(g_43, 1))
            { 
                struct S0 l_340[4] = {{2UL},{2UL},{2UL},{2UL}};
                int32_t l_359 = (-6L);
                int i;
                l_340[2] = l_339;
                g_112[1] = (!((0x2C76L <= (safe_mod_func_uint16_t_u_u(((l_360[0] = (safe_lshift_func_uint16_t_u_s(((((((safe_div_func_int16_t_s_s((~(65535UL > (l_359 ^= (((g_58++) | (safe_div_func_uint64_t_u_u((safe_sub_func_int8_t_s_s(((((l_349 >= (((safe_div_func_uint64_t_u_u(g_81[4], g_82[0][0][0])) | g_112[1]) , l_358)) & 18446744073709551609UL) > g_75) || g_25.f0), l_333)), l_339.f0))) != g_112[1])))), 65531UL)) == 0x9C42L) | g_75) < 0x185C183433B3293DLL) <= 0xD6L) & 0x56AAC1A3L), g_112[1]))) & g_43), g_81[1]))) == l_349));
            }
        }
    }
    return l_13;
}



static struct S0  func_2(const union U2  p_3, union U2  p_4)
{ 
    int16_t l_208 = 0x18A1L;
    int32_t l_209 = (-1L);
    int16_t l_254 = 1L;
    int32_t l_255 = (-7L);
    struct S0 l_256 = {0x4F8DD1E84AB6B2F1LL};
    l_209 |= (safe_add_func_uint32_t_u_u((g_43 = ((((safe_sub_func_int16_t_s_s(((-9L) == (safe_mod_func_uint32_t_u_u(((g_21.f0 | g_24) >= (safe_sub_func_int16_t_s_s((safe_lshift_func_int8_t_s_u((((safe_add_func_int64_t_s_s((((!g_112[1]) ^ 0x2780L) <= l_208), p_4.f1)) ^ p_4.f1) > g_21.f0), l_208)), 0x21D8L))), g_24))), l_208)) , p_3.f1) == 0x7CD4424CL) , g_194.f0)), g_75));
    for (g_43 = 0; (g_43 <= 17); g_43++)
    { 
        uint32_t l_223 = 0xE80119DAL;
        int32_t l_224 = 0xD395282EL;
        struct S0 l_241 = {1UL};
        g_112[1] |= 0L;
        l_209 &= (l_224 |= (safe_lshift_func_uint8_t_u_s((safe_div_func_int8_t_s_s((-3L), (g_82[0][0][1] = (safe_div_func_uint8_t_u_u((safe_mul_func_int16_t_s_s((+((0x3AL != (safe_lshift_func_uint8_t_u_u(255UL, ((((l_223 , p_4.f1) | g_25.f0) & g_81[1]) > 0xB726L)))) == l_223)), g_82[2][0][0])), (-5L)))))), l_208)));
        g_75 = (((((safe_div_func_int16_t_s_s((safe_add_func_uint8_t_u_u((safe_mod_func_int8_t_s_s((safe_add_func_uint16_t_u_u((safe_unary_minus_func_int8_t_s((~(safe_mul_func_uint16_t_u_u(((g_112[1] = ((safe_div_func_uint16_t_u_u((safe_mod_func_int8_t_s_s((l_241 , (l_224 = (safe_rshift_func_uint8_t_u_u(((((safe_div_func_int8_t_s_s((safe_mul_func_uint8_t_u_u((((safe_mod_func_uint64_t_u_u((((0L <= (((safe_lshift_func_int16_t_s_s(((safe_lshift_func_int8_t_s_s(g_75, 5)) >= (-1L)), 2)) && l_209) == l_241.f0)) , g_82[0][0][0]) | p_3.f0), l_224)) | g_112[1]) == 2UL), l_254)), 249UL)) < g_82[1][0][1]) == 0xE946L) ^ p_3.f0), g_21.f0)))), l_208)), 0xF416L)) >= g_112[1])) & l_255), p_4.f1))))), 0xD655L)), 0x5AL)), g_82[0][0][1])), 0x86C9L)) > l_223) , g_194.f1) <= g_24) , l_223);
    }
    return l_256;
}



static const union U2  func_5(uint32_t  p_6, union U2  p_7, int64_t  p_8, union U2  p_9, uint16_t  p_10)
{ 
    int32_t l_135 = 0x3CF46C25L;
    int32_t l_136 = 0xC735B24DL;
    int32_t l_150[4] = {0x64496017L,0x64496017L,0x64496017L,0x64496017L};
    int64_t l_179 = 0x3CA36A7B885A6906LL;
    int32_t l_193[2][3];
    int i, j;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
            l_193[i][j] = 0xF3831CB3L;
    }
    if ((l_135 = (safe_mul_func_int16_t_s_s(g_81[2], p_8))))
    { 
        uint8_t l_143[2];
        int32_t l_146 = 1L;
        int i;
        for (i = 0; i < 2; i++)
            l_143[i] = 0xEDL;
        l_136 |= 1L;
        l_146 = (safe_rshift_func_int8_t_s_u(0x8DL, (safe_add_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u(0xB73FL, 65534UL)), (--l_143[0])))));
    }
    else
    { 
        int64_t l_153 = (-1L);
        int32_t l_156 = 0x0061E2E1L;
        int32_t l_157[4] = {0x1929AE18L,0x1929AE18L,0x1929AE18L,0x1929AE18L};
        struct S0 l_173 = {0x18E7CC0E31BEAA37LL};
        int i;
        for (p_6 = 0; (p_6 == 5); p_6 = safe_add_func_uint64_t_u_u(p_6, 3))
        { 
            int32_t l_149 = 3L;
            int32_t l_151 = (-10L);
            int32_t l_152 = (-7L);
            int32_t l_154 = 5L;
            int32_t l_155[4] = {0xDCCE3023L,0xDCCE3023L,0xDCCE3023L,0xDCCE3023L};
            uint16_t l_158 = 0xCEFEL;
            uint32_t l_180 = 0xAC07EA97L;
            int i;
            l_158--;
            g_112[1] |= (safe_rshift_func_int8_t_s_s(((safe_add_func_int64_t_s_s((p_8 = ((g_21.f0 = (((((((safe_rshift_func_int8_t_s_s((safe_div_func_int64_t_s_s((safe_mul_func_uint8_t_u_u(((safe_add_func_uint32_t_u_u((((l_152 && (((l_173 , (l_157[1] = (l_149 |= (--p_10)))) != ((g_58++) >= (+(-1L)))) ^ ((l_180 = (l_179 || 0x0B3DL)) , l_180))) == p_9.f0) != l_156), 3UL)) == 255UL), l_135)), g_81[1])), p_8)) <= l_135) & l_158) ^ l_173.f0) , p_9.f0) > l_173.f0) >= p_9.f1)) && 18446744073709551615UL)), p_7.f1)) & 0UL), l_151));
            for (l_136 = 0; (l_136 <= 3); l_136 += 1)
            { 
                int i;
                l_151 = l_155[l_136];
                l_193[0][1] |= (safe_lshift_func_int16_t_s_u((safe_rshift_func_int16_t_s_s(g_81[l_136], 4)), (g_112[1] & ((safe_mul_func_uint8_t_u_u(p_6, ((safe_mod_func_int8_t_s_s((((l_150[1] &= (safe_sub_func_int16_t_s_s(((l_157[0] , l_155[l_136]) || l_156), p_9.f0))) , 0L) ^ 0x1FEEA04F0C4F71C1LL), (-4L))) , p_9.f1))) == g_25.f0))));
            }
        }
        return g_194;
    }
    return p_7;
}



static uint16_t  func_16(int32_t  p_17, struct S0  p_18)
{ 
    union U2 l_30[3] = {{7L},{7L},{7L}};
    int32_t l_38 = 0x4B664FB7L;
    const uint32_t l_39 = 0xC1D66BD5L;
    int32_t l_41[3];
    int32_t l_65 = (-1L);
    int16_t l_113 = 0xBB76L;
    int32_t l_130 = (-1L);
    uint64_t l_131[1][2][4] = {{{0x7197FE5D293FB7CDLL,0x7197FE5D293FB7CDLL,0x7197FE5D293FB7CDLL,0x7197FE5D293FB7CDLL},{0x7197FE5D293FB7CDLL,0x7197FE5D293FB7CDLL,0x7197FE5D293FB7CDLL,0x7197FE5D293FB7CDLL}}};
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_41[i] = (-1L);
    if (((p_17 & (safe_rshift_func_int8_t_s_u(((safe_mod_func_uint8_t_u_u(((l_30[1] , l_30[0]) , (safe_mod_func_int32_t_s_s((safe_unary_minus_func_int16_t_s((safe_sub_func_int32_t_s_s((safe_sub_func_int64_t_s_s(((l_38 |= 65526UL) <= p_17), 0xDAAFD55BE9843C6BLL)), 0x6D4C01E0L)))), 1UL))), l_30[1].f1)) && l_39), 5))) < 1L))
    { 
        int32_t l_40[2][5] = {{0xA7A22F0FL,0xA7A22F0FL,0xA7A22F0FL,0xA7A22F0FL,0xA7A22F0FL},{(-4L),(-4L),(-4L),(-4L),(-4L)}};
        int32_t l_42[1];
        int i, j;
        for (i = 0; i < 1; i++)
            l_42[i] = 0x2820A3D5L;
        g_43--;
        for (g_25.f0 = (-2); (g_25.f0 >= 45); ++g_25.f0)
        { 
            uint8_t l_55 = 0x55L;
            int32_t l_61 = 0L;
            int32_t l_62[5];
            int i;
            for (i = 0; i < 5; i++)
                l_62[i] = 0xE4E412C2L;
            l_41[2] |= (!(safe_div_func_uint8_t_u_u(p_18.f0, g_43)));
            l_62[2] = (((((l_61 = ((safe_div_func_int8_t_s_s((g_58 = (safe_add_func_uint16_t_u_u((l_55--), l_42[0]))), 5UL)) , (safe_add_func_int8_t_s_s(l_42[0], l_55)))) <= 0x965344FFA2B87314LL) , g_25.f0) >= g_43) <= l_39);
            if (p_17)
                continue;
        }
    }
    else
    { 
        int64_t l_72 = (-9L);
        union U2 l_91 = {-1L};
        int32_t l_115[2][3] = {{1L,0xCCFC7CCEL,1L},{1L,0xCCFC7CCEL,1L}};
        uint32_t l_123 = 0xAF384784L;
        int i, j;
        for (g_21.f0 = 0; (g_21.f0 >= 59); g_21.f0++)
        { 
            l_65 = 0x5C9E2F09L;
        }
        for (g_21.f0 = 0; (g_21.f0 == 14); ++g_21.f0)
        { 
            uint64_t l_76[4] = {0UL,0UL,0UL,0UL};
            int32_t l_101 = 0x16057895L;
            int8_t l_108 = (-1L);
            int32_t l_114 = 1L;
            int32_t l_116 = 1L;
            int32_t l_117 = 3L;
            int32_t l_118 = 0xADFD65E7L;
            int32_t l_119 = (-7L);
            int32_t l_120 = 0x0F736FA5L;
            int32_t l_121 = 0xC33A15E2L;
            int16_t l_122 = 1L;
            int i;
            for (p_17 = 2; (p_17 >= 0); p_17 -= 1)
            { 
                int32_t l_83[5][2][2] = {{{0x49E1F9A5L,0x49E1F9A5L},{0x49E1F9A5L,6L}},{{0x49E1F9A5L,0x49E1F9A5L},{0x49E1F9A5L,6L}},{{0x49E1F9A5L,0x49E1F9A5L},{0x49E1F9A5L,6L}},{{0x49E1F9A5L,0x49E1F9A5L},{0x49E1F9A5L,6L}},{{0x49E1F9A5L,0x49E1F9A5L},{0x49E1F9A5L,6L}}};
                uint16_t l_84 = 0x2EC1L;
                int i, j, k;
                if (l_41[p_17])
                    break;
                l_84 = (l_83[3][0][1] ^= ((safe_lshift_func_uint16_t_u_s(((((l_41[p_17] |= (safe_mul_func_int16_t_s_s(l_72, (((safe_lshift_func_uint8_t_u_u((l_76[3]--), 4)) || ((safe_mul_func_uint16_t_u_u(((g_24 == p_18.f0) | (-10L)), g_21.f0)) || g_81[1])) <= 0xC2L)))) && l_41[p_17]) & l_72) != 2L), g_82[0][0][1])) || 0x38L));
                if (l_76[3])
                    break;
            }
            for (p_17 = 3; (p_17 >= 0); p_17 -= 1)
            { 
                int32_t l_100 = (-10L);
                int32_t l_102 = (-1L);
                int32_t l_103[5][2] = {{1L,1L},{1L,1L},{1L,1L},{1L,1L},{1L,1L}};
                int i, j;
                l_41[2] ^= ((g_81[1] & (safe_div_func_int32_t_s_s(((safe_sub_func_int32_t_s_s((l_102 |= ((safe_unary_minus_func_int8_t_s((((0L && (~(l_101 = ((l_76[p_17] = (l_91 , (safe_mul_func_int8_t_s_s((l_100 &= (safe_lshift_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u((safe_lshift_func_int8_t_s_s((p_17 | g_82[2][0][0]), 7)), p_18.f0)), 4))), l_91.f1)))) & g_21.f0)))) > 0x85L) <= p_17))) | g_75)), l_103[3][0])) <= 0xBA07L), g_81[1]))) < l_103[2][1]);
                l_100 &= (((safe_mod_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_s((l_102 &= (g_81[1] , l_108)), 6)), (safe_lshift_func_int8_t_s_u(0xC8L, (((((p_18.f0 | 0x42F02481L) || l_30[1].f1) & l_103[2][1]) ^ 0x6C7CL) >= g_81[1]))))) < l_101) , p_17);
                g_112[1] = (g_25.f0 < (~(g_75 = (((((((((g_81[1] <= 0x58CCD7FEL) & p_17) | g_24) <= g_21.f0) != 0x728A6F30L) , g_24) , p_18.f0) == g_24) == 0xC180L))));
            }
            l_123++;
        }
    }
    l_130 = (safe_sub_func_int64_t_s_s(l_41[2], ((8UL ^ g_24) , (safe_add_func_uint64_t_u_u((g_82[0][0][1] ^ g_81[1]), 9UL)))));
    return l_131[0][1][1];
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_21.f0, "g_21.f0", print_hash_value);
    transparent_crc(g_24, "g_24", print_hash_value);
    transparent_crc(g_25.f0, "g_25.f0", print_hash_value);
    transparent_crc(g_43, "g_43", print_hash_value);
    transparent_crc(g_58, "g_58", print_hash_value);
    transparent_crc(g_75, "g_75", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_81[i], "g_81[i]", print_hash_value);

    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_82[i][j][k], "g_82[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_112[i], "g_112[i]", print_hash_value);

    }
    transparent_crc(g_194.f0, "g_194.f0", print_hash_value);
    transparent_crc(g_194.f1, "g_194.f1", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
