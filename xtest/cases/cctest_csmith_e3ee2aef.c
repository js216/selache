// SPDX-License-Identifier: MIT
// cctest_csmith_e3ee2aef.c --- cctest case csmith_e3ee2aef (csmith seed 3824036591)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x7c84db48 */

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

// Options:   -s 3824036591 -o /tmp/csmith_gen_5xv2yw5h/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   uint32_t  f0;
};

union U1 {
   const uint16_t  f0;
   int32_t  f1;
   const uint32_t  f2;
   const int16_t  f3;
};

union U2 {
   int8_t  f0;
   struct S0  f1;
};


static int32_t g_7 = 0xF2C36544L;
static uint64_t g_14 = 0x6695998AB5457D67LL;
static union U1 g_15 = {1UL};
static const struct S0 g_54[2] = {{0x42D225D8L},{0x42D225D8L}};
static uint32_t g_91 = 18446744073709551615UL;
static struct S0 g_93 = {0x66BFFE0AL};
static uint64_t g_118 = 0xE595DB7A7163A7FALL;
static struct S0 g_121[2][1][2] = {{{{1UL},{1UL}}},{{{1UL},{1UL}}}};
static int8_t g_142 = 0x71L;
static int64_t g_146 = 0L;
static uint32_t g_147 = 1UL;
static int32_t g_150 = (-9L);
static uint16_t g_152 = 7UL;
static uint16_t g_165 = 0xC089L;
static int64_t g_178 = 1L;
static uint32_t g_220 = 0x66FCE70BL;
static uint64_t g_221 = 18446744073709551610UL;
static uint32_t g_234 = 1UL;
static uint64_t g_242 = 1UL;
static int8_t g_247[2] = {4L,4L};
static uint64_t g_264 = 7UL;
static int32_t g_293 = 3L;
static uint64_t g_298 = 4UL;
static uint32_t g_320 = 0x4B65698CL;
static int64_t g_333 = 0xA09BF90A0D85813ELL;
static uint64_t g_334 = 0xAD45AEAADFABC0FDLL;
static union U2 g_365 = {-6L};



static union U2  func_1(void);
static union U2  func_4(int64_t  p_5, int32_t  p_6);
static uint8_t  func_10(int32_t  p_11, union U1  p_12, struct S0  p_13);
static struct S0  func_17(uint8_t  p_18, const struct S0  p_19, int32_t  p_20);




static union U2  func_1(void)
{ 
    struct S0 l_16 = {1UL};
    union U2 l_303 = {-1L};
    int32_t l_321 = (-1L);
    if ((((18446744073709551612UL ^ (safe_sub_func_int64_t_s_s(((l_303 = func_4(g_7, (safe_mod_func_uint8_t_u_u(func_10((g_14 = 0x6F377CC4L), g_15, l_16), l_16.f0)))) , l_16.f0), l_16.f0))) , 247UL) < l_16.f0))
    { 
        uint32_t l_310[4] = {0x51341D71L,0x51341D71L,0x51341D71L,0x51341D71L};
        uint32_t l_319 = 0x22D10796L;
        int i;
        for (g_298 = 0; (g_298 != 6); g_298 = safe_add_func_uint32_t_u_u(g_298, 3))
        { 
            int32_t l_315[2];
            int32_t l_316 = 0xAA5684FDL;
            int i;
            for (i = 0; i < 2; i++)
                l_315[i] = 0L;
            for (g_146 = 0; (g_146 <= (-25)); g_146 = safe_sub_func_uint8_t_u_u(g_146, 4))
            { 
                uint32_t l_317 = 0xE05A2BDCL;
                int32_t l_318[4];
                int i;
                for (i = 0; i < 4; i++)
                    l_318[i] = 0xEDA3D84FL;
                g_293 = (safe_div_func_uint32_t_u_u(l_310[1], (safe_rshift_func_int16_t_s_u(((l_318[1] &= ((g_178 >= (((l_316 = (l_303.f0 != (safe_add_func_uint16_t_u_u(l_315[0], 0x5B42L)))) != g_15.f0) , 0x9A46E83DC2285DE3LL)) && l_317)) == l_319), l_303.f0))));
                if (g_298)
                    break;
            }
            for (g_147 = 0; (g_147 <= 1); g_147 += 1)
            { 
                g_320 ^= (-1L);
            }
        }
        l_321 |= 0x2247DC22L;
    }
    else
    { 
        union U2 l_332 = {-1L};
        const struct S0 l_375 = {0x819D66F2L};
        for (g_320 = 28; (g_320 > 52); g_320 = safe_add_func_int32_t_s_s(g_320, 6))
        { 
            int16_t l_330 = 0x901CL;
            int32_t l_370 = 0x0612BCC6L;
            struct S0 l_376 = {0x82A17632L};
            for (g_220 = 0; (g_220 <= 0); g_220 += 1)
            { 
                int8_t l_329 = 0x8EL;
                int32_t l_331 = 5L;
                l_331 = (safe_lshift_func_int8_t_s_u((((((g_146 = (~((safe_mul_func_uint16_t_u_u(1UL, 0x8FB6L)) != (l_321 |= 0L)))) || (((l_329 == 0x388180E3602B0B88LL) || 0x11ECL) >= l_329)) > l_330) ^ g_147) , l_329), g_247[1]));
                return l_332;
            }
            if (g_333)
            { 
                const int32_t l_339[3][2] = {{(-1L),(-10L)},{(-10L),(-1L)},{(-10L),(-10L)}};
                struct S0 l_344 = {0xCAB78EE6L};
                int32_t l_357 = (-1L);
                int32_t l_358 = 0x4082F01FL;
                int i, j;
                g_334--;
                l_358 |= (g_7 = (255UL <= (safe_mul_func_int8_t_s_s(l_339[2][1], (((safe_rshift_func_int8_t_s_s((safe_div_func_uint32_t_u_u(((l_344 = g_93) , (!(l_357 ^= (g_118 = (safe_div_func_uint16_t_u_u(((safe_mul_func_uint8_t_u_u(((safe_rshift_func_uint8_t_u_s((((+(safe_div_func_int16_t_s_s((~(!(l_330 < l_16.f0))), l_339[2][1]))) > g_220) == l_344.f0), 6)) < g_264), l_16.f0)) & 0x589F06A350F10772LL), 65529UL)))))), l_303.f0)), l_330)) | g_7) , g_242)))));
            }
            else
            { 
                g_7 = ((((((0xFB18FC98EEF7C797LL ^ ((safe_div_func_int64_t_s_s(((safe_mod_func_int8_t_s_s((safe_mod_func_uint64_t_u_u((0xD56DC0C42D20FE93LL & ((0xC6F9L >= ((g_365 , 1L) > 0x7429L)) < l_332.f0)), l_16.f0)), l_330)) , l_330), l_330)) & 0x0F00L)) , 8L) >= g_150) ^ (-1L)) | l_321) >= l_330);
            }
            l_376 = func_17((safe_add_func_uint8_t_u_u(((safe_mul_func_int16_t_s_s((((l_370 = g_91) != ((safe_mod_func_int16_t_s_s(g_146, (safe_add_func_uint32_t_u_u((l_330 | (l_330 , g_298)), g_293)))) >= l_332.f0)) && l_321), 0x0B54L)) , g_247[0]), l_332.f0)), l_375, g_91);
        }
    }
    for (g_93.f0 = 21; (g_93.f0 != 11); --g_93.f0)
    { 
        int64_t l_381 = (-1L);
        g_7 &= (((l_321 = ((l_16.f0 >= (safe_sub_func_int16_t_s_s(l_381, l_381))) && (safe_add_func_uint64_t_u_u((safe_sub_func_int64_t_s_s((g_91 & 0x4B4FL), 9UL)), 0x4BE8A0454B443598LL)))) >= l_381) != 0xEAL);
    }
    return g_365;
}



static union U2  func_4(int64_t  p_5, int32_t  p_6)
{ 
    union U2 l_302 = {0x74L};
    for (p_5 = 19; (p_5 > 26); ++p_5)
    { 
        union U2 l_301 = {0xD5L};
        return l_301;
    }
    return l_302;
}



static uint8_t  func_10(int32_t  p_11, union U1  p_12, struct S0  p_13)
{ 
    const struct S0 l_21 = {0x63A74ADFL};
    int32_t l_204 = 0x3DD3D9F1L;
    int32_t l_289 = (-4L);
    int32_t l_290 = (-6L);
    int32_t l_292 = 0x95F62D81L;
    if (g_14)
    { 
        int8_t l_22 = 0xE7L;
        int32_t l_217[4];
        int32_t l_241[4][5] = {{0x383596EEL,0x383596EEL,0x383596EEL,0x383596EEL,0x383596EEL},{0x6B477E36L,0xCE875DABL,0x6B477E36L,0xCE875DABL,0x6B477E36L},{0x383596EEL,0x383596EEL,0x383596EEL,0x383596EEL,0x383596EEL},{0x6B477E36L,0xCE875DABL,0x6B477E36L,0xCE875DABL,0x6B477E36L}};
        int32_t l_250 = 1L;
        int i, j;
        for (i = 0; i < 4; i++)
            l_217[i] = 0L;
        if (p_11)
        { 
            g_121[0][0][1] = func_17(g_7, l_21, (g_14 >= (p_13 , l_22)));
        }
        else
        { 
            uint8_t l_219 = 255UL;
            if ((safe_sub_func_int32_t_s_s((safe_div_func_uint8_t_u_u((l_204 = p_13.f0), (safe_lshift_func_int16_t_s_s((safe_mul_func_int16_t_s_s(1L, g_150)), (safe_sub_func_int16_t_s_s((-1L), 0x0A2AL)))))), g_142)))
            { 
                int32_t l_218 = 0x1FD3FFD6L;
                g_221 = (g_220 = (safe_add_func_uint64_t_u_u(g_146, (g_15 , ((safe_mod_func_uint16_t_u_u((safe_add_func_uint32_t_u_u(g_165, ((l_217[3] = (g_15.f3 != 0x0515F605A33BAAAFLL)) <= 8UL))), l_218)) >= l_219)))));
            }
            else
            { 
                uint64_t l_226 = 0xFAB62559B54C1369LL;
                int32_t l_233[4][5] = {{4L,(-7L),4L,0x92DACD49L,0x92DACD49L},{(-1L),(-1L),(-1L),(-1L),(-1L)},{1L,0L,1L,4L,4L},{8L,4L,8L,(-1L),(-1L)}};
                int8_t l_240 = 2L;
                int i, j;
                l_226 = (safe_lshift_func_int8_t_s_u((safe_rshift_func_uint8_t_u_u(1UL, 3)), 6));
                l_233[3][0] = (g_146 & (l_241[3][2] = (safe_add_func_uint32_t_u_u(((((g_142 |= (safe_div_func_uint32_t_u_u(((safe_mul_func_uint8_t_u_u(((l_217[2] ^= g_152) && ((--g_234) | l_204)), ((safe_lshift_func_uint16_t_u_u((safe_unary_minus_func_int16_t_s(g_7)), p_11)) >= l_226))) <= g_178), p_13.f0))) & 0xADL) && p_13.f0) && l_240), (-1L)))));
                g_242 &= p_12.f3;
            }
        }
        for (g_93.f0 = 0; (g_93.f0 <= 3); g_93.f0 += 1)
        { 
            g_247[0] = (l_204 = (safe_lshift_func_int16_t_s_u((safe_lshift_func_int16_t_s_u(l_21.f0, 6)), 6)));
            for (g_118 = 0; (g_118 <= 0); g_118 += 1)
            { 
                int i, j;
                l_241[(g_118 + 2)][g_93.f0] = l_241[g_118][(g_118 + 1)];
                return p_11;
            }
        }
        if ((safe_rshift_func_uint16_t_u_u(g_242, 10)))
        { 
            int8_t l_261 = 0L;
            int32_t l_263 = 0x210CA2A5L;
            l_250 = (((0x232DC8EBC3BCD21ELL > 0xB61DA00390C6CAFFLL) >= (p_12.f0 , 0x10L)) > 0xD747L);
            for (g_234 = 0; (g_234 < 13); g_234 = safe_add_func_uint64_t_u_u(g_234, 1))
            { 
                int16_t l_253 = 9L;
                int32_t l_262 = 0xC7DF3491L;
                g_264 ^= (l_263 = ((((g_221++) & ((((safe_rshift_func_int16_t_s_u((!(-6L)), 0)) <= (safe_mod_func_uint64_t_u_u((((l_262 = (g_242 >= l_261)) && p_11) && 0xDAF0L), g_247[0]))) , p_13.f0) < 0xF413L)) | 0xCB05L) || (-8L)));
                if (g_91)
                    break;
                if (l_262)
                    break;
            }
        }
        else
        { 
            int16_t l_265[3];
            int32_t l_274 = 0x2D8D6A7CL;
            int i;
            for (i = 0; i < 3; i++)
                l_265[i] = 7L;
            g_93 = (((((l_204 = p_13.f0) != (((0x05BE9AF0L && (l_265[1] <= (safe_div_func_int8_t_s_s(((l_21 , 0L) > p_12.f0), g_165)))) >= 0xEE31348666C92315LL) & 1UL)) & 0xEDB85034L) > 255UL) , p_13);
            for (p_13.f0 = 0; p_13.f0 < 4; p_13.f0 += 1)
            {
                l_217[p_13.f0] = (-10L);
            }
            for (g_14 = 13; (g_14 >= 39); g_14 = safe_add_func_int16_t_s_s(g_14, 9))
            { 
                l_274 ^= ((p_11 || (safe_mul_func_uint8_t_u_u(0UL, ((safe_div_func_uint64_t_u_u(g_121[0][0][0].f0, p_13.f0)) , p_12.f3)))) || 9UL);
            }
        }
    }
    else
    { 
        int8_t l_281[5];
        int32_t l_282 = 1L;
        int32_t l_288 = 1L;
        int32_t l_291 = 0xE28ABA95L;
        int i;
        for (i = 0; i < 5; i++)
            l_281[i] = 0L;
        g_293 ^= (((((safe_rshift_func_int16_t_s_s((safe_lshift_func_uint16_t_u_u((l_292 = (((safe_sub_func_uint16_t_u_u(((((l_282 = l_281[2]) ^ ((safe_unary_minus_func_uint8_t_u(((l_289 = ((g_220 && (safe_mul_func_uint16_t_u_u(((l_204 = (((((safe_mod_func_int8_t_s_s((g_15 , (l_288 = ((l_281[1] | 0xE9D70C35L) , 0x68L))), l_204)) < p_12.f0) > 0x6998L) && 1UL) , 0L)) , p_12.f0), 0L))) && p_13.f0)) || l_204))) , l_290)) , l_291) && g_264), g_15.f0)) && 0x914FC0F7L) || g_242)), 5)), 3)) == p_13.f0) >= l_281[0]) ^ 9L) && 0x93L);
        g_293 = (safe_mod_func_uint16_t_u_u((p_11 & (safe_rshift_func_uint16_t_u_s(l_21.f0, (g_298 = (l_291 = g_234))))), g_142));
    }
    return p_11;
}



static struct S0  func_17(uint8_t  p_18, const struct S0  p_19, int32_t  p_20)
{ 
    int64_t l_42[3];
    union U2 l_43 = {0x44L};
    int32_t l_45 = 0xA1F7977FL;
    int32_t l_64 = 0x17B1AB37L;
    int32_t l_67 = (-4L);
    int32_t l_69[3];
    struct S0 l_92[3][1][1] = {{{{0x26721253L}}},{{{0x26721253L}}},{{{0x26721253L}}}};
    uint16_t l_199 = 0xF3C4L;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_42[i] = 0xC259DBA5C124380DLL;
    for (i = 0; i < 3; i++)
        l_69[i] = 0x466B01FEL;
    if ((safe_mod_func_uint8_t_u_u((((safe_lshift_func_int8_t_s_s(p_18, 6)) ^ (safe_lshift_func_int8_t_s_s(((safe_add_func_uint16_t_u_u((safe_add_func_int16_t_s_s((-2L), (~(p_19.f0 || (safe_sub_func_int16_t_s_s(p_19.f0, 7L)))))), g_15.f0)) , p_20), 6))) != g_15.f0), g_14)))
    { 
        uint32_t l_44[4][4] = {{0xD8805E53L,0UL,0xD8805E53L,0UL},{0xD8805E53L,0UL,0xD8805E53L,0UL},{0xD8805E53L,0UL,0xD8805E53L,0UL},{0xD8805E53L,0UL,0xD8805E53L,0UL}};
        union U2 l_63[4] = {{0x13L},{0x13L},{0x13L},{0x13L}};
        int32_t l_66 = (-1L);
        int8_t l_104[3];
        int32_t l_116 = 0x75099C32L;
        int32_t l_117 = 0x2FEEDE60L;
        int i, j;
        for (i = 0; i < 3; i++)
            l_104[i] = 0L;
        l_45 = (safe_mod_func_int64_t_s_s((safe_add_func_int64_t_s_s((safe_rshift_func_int8_t_s_u(((l_42[1] || ((1UL | 0UL) <= (l_43 , g_15.f3))) == 0UL), g_15.f0)), l_44[3][2])), g_14));
        for (p_18 = 0; (p_18 <= 2); p_18 += 1)
        { 
            int32_t l_65 = 0xED168620L;
            int32_t l_68[4][4][5] = {{{(-2L),0x3F861273L,(-2L),(-2L),0x3F861273L},{0x3F861273L,(-2L),(-2L),0x3F861273L,(-2L)},{0x3F861273L,0x3F861273L,0x11162BCAL,0x3F861273L,0x3F861273L},{(-2L),0x3F861273L,(-2L),(-2L),0x3F861273L}},{{0x3F861273L,(-2L),(-2L),0x3F861273L,(-2L)},{0x3F861273L,0x3F861273L,0x11162BCAL,0x3F861273L,0x3F861273L},{(-2L),0x3F861273L,(-2L),(-2L),0x3F861273L},{0x3F861273L,(-2L),(-2L),0x3F861273L,(-2L)}},{{0x3F861273L,0x3F861273L,0x11162BCAL,0x3F861273L,0x3F861273L},{(-2L),0x3F861273L,(-2L),(-2L),0x3F861273L},{0x3F861273L,(-2L),(-2L),0x3F861273L,(-2L)},{0x3F861273L,0x3F861273L,0x11162BCAL,0x3F861273L,0x3F861273L}},{{(-2L),0x3F861273L,(-2L),(-2L),0x3F861273L},{0x3F861273L,(-2L),(-2L),0x3F861273L,(-2L)},{0x3F861273L,0x3F861273L,0x11162BCAL,0x3F861273L,0x3F861273L},{(-2L),0x3F861273L,(-2L),(-2L),0x3F861273L}}};
            int i, j, k;
            if (((safe_mul_func_int16_t_s_s((safe_div_func_int16_t_s_s((l_69[1] = ((safe_add_func_int32_t_s_s((l_45 |= l_42[p_18]), (l_68[0][0][3] = (l_67 = (l_66 = ((l_65 = (((((l_64 = (safe_rshift_func_int8_t_s_u(((g_54[1] , (safe_lshift_func_int16_t_s_s((safe_add_func_uint64_t_u_u((safe_sub_func_int16_t_s_s(0xC392L, ((safe_mod_func_int8_t_s_s((l_63[0] , 1L), 0x02L)) & p_18))), 1L)), l_63[0].f0))) | l_42[p_18]), l_44[1][2]))) ^ g_15.f3) < 0x6066L) && 0L) , l_44[0][1])) && 5UL)))))) ^ 1UL)), (-2L))), p_18)) != 0xFDL))
            { 
                uint16_t l_76 = 0xEF09L;
                const int32_t l_77 = 0L;
                int32_t l_78 = (-9L);
                l_78 &= ((l_76 = ((safe_mod_func_uint8_t_u_u(((safe_lshift_func_int8_t_s_u((l_66 = (((p_18 >= 0xE5592ED994868B20LL) & (safe_add_func_int8_t_s_s(l_64, 0xC1L))) > p_20)), 7)) >= g_54[1].f0), l_44[1][0])) < p_19.f0)) ^ l_77);
                if (g_54[1].f0)
                    continue;
                l_45 = (((safe_mod_func_int16_t_s_s(((safe_mod_func_int16_t_s_s(1L, (safe_lshift_func_int8_t_s_s((+(l_68[0][0][3] >= (safe_mul_func_uint8_t_u_u(((safe_div_func_int8_t_s_s((l_66 = l_42[p_18]), (safe_unary_minus_func_int32_t_s((g_15.f0 >= g_91))))) , p_19.f0), p_18)))), l_42[p_18])))) || p_19.f0), 0x7603L)) == p_20) & p_19.f0);
            }
            else
            { 
                g_93 = l_92[2][0][0];
                if (p_19.f0)
                    continue;
            }
        }
        if (((safe_add_func_int32_t_s_s((safe_div_func_int64_t_s_s((((p_19.f0 > (((safe_lshift_func_uint16_t_u_u(((safe_div_func_uint32_t_u_u(((l_69[1] <= ((g_15.f0 <= ((safe_lshift_func_uint8_t_u_s(((((g_15.f3 <= p_20) && g_54[1].f0) >= 0xEDD1L) > l_43.f0), p_18)) > p_20)) || l_67)) != l_66), l_44[0][3])) && g_15.f3), 15)) >= 0xBD828712L) <= l_43.f0)) & l_104[1]) & l_92[2][0][0].f0), 0x9244252728FC8EE3LL)), p_19.f0)) ^ l_44[2][2]))
        { 
            int8_t l_114 = 0xA2L;
            int32_t l_115 = 0x8604516BL;
            l_66 = ((safe_sub_func_uint16_t_u_u(((safe_sub_func_int64_t_s_s(l_69[1], (~l_66))) , (p_18 , (safe_mul_func_int8_t_s_s(((safe_rshift_func_int16_t_s_s(7L, 4)) , 1L), l_114)))), g_93.f0)) == l_114);
            l_115 = 0L;
            ++g_118;
        }
        else
        { 
            for (g_93.f0 = 0; (g_93.f0 <= 0); g_93.f0 += 1)
            { 
                g_121[0][0][0] = g_54[0];
            }
            l_66 ^= 0L;
        }
    }
    else
    { 
        int8_t l_138 = (-6L);
        struct S0 l_143 = {0xAA76CBE3L};
        int32_t l_151[5];
        int i;
        for (i = 0; i < 5; i++)
            l_151[i] = 0L;
        for (l_64 = 2; (l_64 >= 0); l_64 -= 1)
        { 
            uint32_t l_129 = 0xE1A8ADBCL;
            int i;
            l_69[l_64] = (safe_div_func_uint8_t_u_u(l_69[l_64], (((l_42[l_64] || 0x3856L) | l_42[l_64]) , p_18)));
            if (((l_69[1] ^ (((g_54[0] , (~((safe_lshift_func_uint16_t_u_u(((g_91 != ((safe_mul_func_int16_t_s_s((g_54[1].f0 >= 0UL), l_64)) >= g_91)) ^ g_93.f0), 7)) && p_19.f0))) && p_19.f0) <= g_91)) || 0x6BB7C98EL))
            { 
                uint8_t l_130 = 0UL;
                int32_t l_139 = 0x3D154C37L;
                l_69[l_64] = l_129;
                l_69[0] |= l_130;
                l_139 = ((safe_add_func_int16_t_s_s(l_69[1], (safe_lshift_func_uint16_t_u_s(p_18, (((safe_mul_func_uint16_t_u_u(p_20, (((safe_unary_minus_func_uint32_t_u((p_20 > 0UL))) <= l_138) ^ g_91))) < g_7) < 0x6CL))))) == g_14);
            }
            else
            { 
                if (p_19.f0)
                    break;
            }
            if ((g_142 = ((~l_42[l_64]) ^ (+0x6FD79060L))))
            { 
                l_143 = p_19;
                return g_121[0][0][0];
            }
            else
            { 
                int8_t l_144 = 4L;
                int32_t l_145 = 4L;
                ++g_147;
                ++g_152;
            }
        }
        for (g_93.f0 = 0; (g_93.f0 <= 0); g_93.f0 += 1)
        { 
            int32_t l_177 = (-2L);
            int32_t l_179 = 0xF1B34679L;
            int i;
            if (l_151[g_93.f0])
                break;
            g_121[0][0][0] = g_93;
            for (g_15.f1 = 4; (g_15.f1 >= 1); g_15.f1 -= 1)
            { 
                uint8_t l_176[4][5] = {{0x42L,5UL,0UL,5UL,0x42L},{0x42L,5UL,0UL,5UL,0x42L},{0x42L,5UL,0UL,5UL,0x42L},{0x42L,5UL,0UL,5UL,0x42L}};
                int i, j;
                l_151[(g_93.f0 + 2)] = (safe_mul_func_uint16_t_u_u(l_151[g_15.f1], ((((safe_mod_func_int64_t_s_s((g_152 | ((((((((safe_lshift_func_int8_t_s_u((g_142 = (safe_rshift_func_int8_t_s_s(g_7, (safe_mod_func_uint8_t_u_u(250UL, l_151[0]))))), p_20)) == 1L) < 0xEB80L) || p_19.f0) >= l_138) <= p_18) ^ (-8L)) <= 1UL)), g_15.f2)) , 18446744073709551611UL) , g_15.f2) || l_143.f0)));
                g_165++;
                l_45 = (l_179 = (l_69[1] &= ((2L || (safe_mul_func_uint16_t_u_u(0x171FL, ((g_178 = (((safe_sub_func_int64_t_s_s((((safe_sub_func_uint16_t_u_u(((l_177 |= (((((safe_sub_func_int64_t_s_s((l_151[(g_93.f0 + 2)] = 0x39F823E191EB41D5LL), (l_176[2][3] >= l_176[2][3]))) && 0xF2B12C03L) != l_176[2][3]) >= g_7) | 0xB779L)) , l_151[g_93.f0]), g_152)) == p_20) && 0x73L), g_121[0][0][0].f0)) & l_42[1]) , p_18)) | 0x6DDA51A4L)))) != g_121[0][0][0].f0)));
            }
        }
        for (l_43.f0 = (-25); (l_43.f0 <= (-30)); l_43.f0 = safe_sub_func_int64_t_s_s(l_43.f0, 4))
        { 
            union U1 l_195 = {0xA72AL};
            for (g_93.f0 = 12; (g_93.f0 <= 60); g_93.f0++)
            { 
                uint32_t l_198 = 0UL;
                l_151[0] = (safe_div_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u((safe_mod_func_uint32_t_u_u(((((safe_div_func_int32_t_s_s((+((g_15 , (safe_lshift_func_uint8_t_u_s((l_195 , l_195.f0), (safe_div_func_uint64_t_u_u((g_146 <= (-1L)), g_178))))) & l_198)), l_199)) == l_198) > p_20) > 5L), (-8L))), p_18)), p_20));
            }
        }
    }
    return g_54[0];
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_7, "g_7", print_hash_value);
    transparent_crc(g_14, "g_14", print_hash_value);
    transparent_crc(g_15.f0, "g_15.f0", print_hash_value);
    transparent_crc(g_15.f3, "g_15.f3", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_54[i].f0, "g_54[i].f0", print_hash_value);

    }
    transparent_crc(g_91, "g_91", print_hash_value);
    transparent_crc(g_93.f0, "g_93.f0", print_hash_value);
    transparent_crc(g_118, "g_118", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_121[i][j][k].f0, "g_121[i][j][k].f0", print_hash_value);

            }
        }
    }
    transparent_crc(g_142, "g_142", print_hash_value);
    transparent_crc(g_146, "g_146", print_hash_value);
    transparent_crc(g_147, "g_147", print_hash_value);
    transparent_crc(g_150, "g_150", print_hash_value);
    transparent_crc(g_152, "g_152", print_hash_value);
    transparent_crc(g_165, "g_165", print_hash_value);
    transparent_crc(g_178, "g_178", print_hash_value);
    transparent_crc(g_220, "g_220", print_hash_value);
    transparent_crc(g_221, "g_221", print_hash_value);
    transparent_crc(g_234, "g_234", print_hash_value);
    transparent_crc(g_242, "g_242", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_247[i], "g_247[i]", print_hash_value);

    }
    transparent_crc(g_264, "g_264", print_hash_value);
    transparent_crc(g_293, "g_293", print_hash_value);
    transparent_crc(g_298, "g_298", print_hash_value);
    transparent_crc(g_320, "g_320", print_hash_value);
    transparent_crc(g_333, "g_333", print_hash_value);
    transparent_crc(g_334, "g_334", print_hash_value);
    transparent_crc(g_365.f0, "g_365.f0", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
