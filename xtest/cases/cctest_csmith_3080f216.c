// SPDX-License-Identifier: MIT
// cctest_csmith_3080f216.c --- cctest case csmith_3080f216 (csmith seed 813756950)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x57586777 */

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

// Options:   -s 813756950 -o /tmp/csmith_gen_tgzkuhuo/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


union U1 {
   const uint32_t  f0;
   int32_t  f1;
   uint8_t  f2;
   uint32_t  f3;
};

union U2 {
   const uint32_t  f0;
   uint16_t  f1;
};

#pragma pack(push)
#pragma pack(1)
struct S0 {
   uint16_t  f0;
   int8_t  f1;
   uint8_t  f2;
   const int32_t  f3;
   int16_t  f4;
   const uint8_t  f5;
};
#pragma pack(pop)

union U3 {
   struct S0  f0;
   int32_t  f1;
   struct S0  f2;
   uint32_t  f3;
};

union U4 {
   uint16_t  f0;
};

union U5 {
   uint16_t  f0;
   uint32_t  f1;
};

union U6 {
   int8_t  f0;
};


static int8_t g_2[5] = {0x26L,0x26L,0x26L,0x26L,0x26L};
static union U2 g_24 = {0x0B349387L};
static uint8_t g_41 = 247UL;
static uint64_t g_62 = 0x69E5F9C6A002B50DLL;
static uint32_t g_91 = 0xF10AA6F3L;
static uint8_t g_92[2][2] = {{0x21L,0x21L},{0x21L,0x21L}};
static uint8_t g_99 = 0xD4L;
static uint64_t g_100 = 1UL;
static uint16_t g_101 = 65527UL;
static union U5 g_103[2] = {{0x03ECL},{0x03ECL}};
static union U6 g_104 = {9L};
static uint64_t g_127 = 0x1B8E030C7048B0A9LL;
static int32_t g_144 = 0L;
static int64_t g_146[2] = {(-2L),(-2L)};
static uint8_t g_147 = 0x89L;
static union U4 g_150 = {0xEC7FL};
static int64_t g_151 = 0x145740F15219C01FLL;
static uint64_t g_161 = 0xCD1DBDECF9726115LL;
static uint32_t g_199 = 0x1E9EB336L;
static int32_t g_206 = 6L;
static int32_t g_232 = 0x6D0663B7L;
static int8_t g_233 = 8L;
static int16_t g_277 = (-6L);



static union U1  func_1(void);
static int64_t  func_3(const union U3  p_4, union U5  p_5, union U6  p_6, union U1  p_7, int32_t  p_8);
static int8_t  func_13(int16_t  p_14, int64_t  p_15, uint16_t  p_16, int32_t  p_17);
static int16_t  func_18(const union U2  p_19, int64_t  p_20, union U2  p_21, int32_t  p_22);




static union U1  func_1(void)
{ 
    const union U2 l_23 = {1UL};
    uint64_t l_98 = 7UL;
    const union U3 l_102 = {{0x4C64L,7L,0x42L,0xED38BC6AL,1L,5UL}};
    union U1 l_105 = {0x5B561D8FL};
    g_2[1] = (-1L);
    g_277 = (((func_3((((safe_sub_func_int16_t_s_s((safe_mul_func_int8_t_s_s(func_13(func_18(l_23, g_2[2], g_24, (safe_div_func_uint32_t_u_u(g_24.f1, 0xCE6FC2E6L))), l_98, g_99, g_99), l_23.f1)), 0x7125L)) >= g_100) , l_102), g_103[0], g_104, l_105, l_105.f2) | (-2L)) | g_99) , l_102.f0.f0);
    l_105.f1 = l_102.f3;
    return l_105;
}



static int64_t  func_3(const union U3  p_4, union U5  p_5, union U6  p_6, union U1  p_7, int32_t  p_8)
{ 
    uint32_t l_108 = 2UL;
    int32_t l_115 = (-1L);
    int32_t l_116 = 0L;
    uint8_t l_122 = 253UL;
    int32_t l_170 = 0x1F0273B9L;
    for (g_104.f0 = 11; (g_104.f0 > (-23)); --g_104.f0)
    { 
        int64_t l_117 = 1L;
        int32_t l_142 = 0xD1A43B2DL;
        l_115 = (((l_108 = 0UL) ^ (safe_mod_func_int32_t_s_s((l_117 &= (safe_add_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u(((0x16L || (l_116 &= (g_2[1] ^ l_115))) && g_24.f1), 0)), g_2[3]))), g_104.f0))) < p_4.f1);
        for (p_7.f3 = 0; (p_7.f3 <= 38); p_7.f3 = safe_add_func_int32_t_s_s(p_7.f3, 9))
        { 
            uint16_t l_143[5][5] = {{0xF01EL,0xF01EL,65527UL,0xF01EL,0xF01EL},{5UL,0xF01EL,5UL,5UL,0xF01EL},{0xF01EL,5UL,5UL,0xF01EL,5UL},{0xF01EL,0xF01EL,65527UL,0xF01EL,0xF01EL},{5UL,0xF01EL,5UL,5UL,0xF01EL}};
            int32_t l_145 = (-1L);
            int i, j;
            for (p_5.f0 = (-5); (p_5.f0 == 34); p_5.f0++)
            { 
                int32_t l_128 = 0L;
                l_128 = ((l_122 & (safe_mul_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_s(l_117, (g_127 = (-1L)))), 0L))) >= (-1L));
                l_145 &= (p_8 = (g_144 ^= (safe_rshift_func_uint8_t_u_u((safe_add_func_uint32_t_u_u(g_41, (safe_sub_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u((((l_143[4][1] = ((safe_sub_func_uint64_t_u_u(((!(safe_rshift_func_uint8_t_u_u((l_142 |= 0x47L), (1UL <= ((p_4.f1 & g_99) < 0xA1598D83L))))) && 0xA3785E6FL), 0x4E1783C2309139E9LL)) <= 1UL)) == 0x399A0490L) , l_128), g_91)), l_108)))), l_128))));
                l_145 = g_2[1];
            }
        }
        g_147--;
    }
    for (p_7.f1 = 1; (p_7.f1 >= 0); p_7.f1 -= 1)
    { 
        int8_t l_158 = 5L;
        for (g_41 = 0; (g_41 <= 1); g_41 += 1)
        { 
            uint16_t l_152 = 0xB914L;
            int32_t l_157 = 0x986BD2DAL;
            int i;
            g_151 = (g_150 , p_4.f2.f3);
            if (l_152)
                break;
            l_158 = (p_8 ^ (l_157 &= (g_146[g_41] = (safe_rshift_func_int16_t_s_u((safe_mul_func_uint8_t_u_u((g_99 == g_127), (((g_24 , g_104) , g_2[3]) || p_7.f0))), p_7.f2)))));
        }
    }
    for (g_150.f0 = 23; (g_150.f0 == 59); g_150.f0 = safe_add_func_uint32_t_u_u(g_150.f0, 1))
    { 
        const uint16_t l_164[3][5][2] = {{{0xB252L,65535UL},{0xB252L,0xB252L},{65535UL,0xB252L},{0xB252L,65535UL},{65535UL,65535UL}},{{4UL,65535UL},{65535UL,4UL},{65535UL,65535UL},{4UL,65535UL},{65535UL,4UL}},{{65535UL,65535UL},{4UL,65535UL},{65535UL,4UL},{65535UL,65535UL},{4UL,65535UL}}};
        uint8_t l_205 = 0x71L;
        uint32_t l_217 = 0xF1BF41CAL;
        union U3 l_257[5][4][5] = {{{{{0x555BL,0x47L,255UL,1L,0x9AA7L,6UL}},{{0xA9E0L,0L,255UL,-1L,0x6BE8L,1UL}},{{0xA9E0L,0L,255UL,-1L,0x6BE8L,1UL}},{{0x555BL,0x47L,255UL,1L,0x9AA7L,6UL}},{{2UL,1L,2UL,-5L,0x27DCL,0xE7L}}},{{{0x044AL,-2L,0UL,0x19FA1823L,-5L,0x66L}},{{0x989CL,1L,249UL,0x693F87E3L,0L,255UL}},{{0x7B99L,0x51L,4UL,-2L,1L,0UL}},{{0xBDE1L,-5L,8UL,0xD053127AL,1L,0UL}},{{0UL,-6L,1UL,4L,0x1004L,248UL}}},{{{0xA9E0L,0L,255UL,-1L,0x6BE8L,1UL}},{{0x044AL,-2L,0UL,0x19FA1823L,-5L,0x66L}},{{65535UL,1L,9UL,0x8FCA7E3DL,4L,0xE5L}},{{0x8692L,0x30L,0x07L,-1L,0xAB25L,1UL}},{{0xFF1DL,0x4AL,0xDAL,-5L,0x1991L,0UL}}},{{{0x3D07L,0xE6L,250UL,0L,1L,0x15L}},{{0x8692L,0x30L,0x07L,-1L,0xAB25L,1UL}},{{2UL,1L,2UL,-5L,0x27DCL,0xE7L}},{{0xBDE1L,-5L,8UL,0xD053127AL,1L,0UL}},{{0x70A4L,0L,0x6DL,0L,0x7AF7L,255UL}}}},{{{{0x0553L,0xB2L,0x0EL,0x491D3E57L,5L,8UL}},{{2UL,0x92L,255UL,0x5C4E4F83L,8L,0x08L}},{{0x7B5EL,0x51L,0xC8L,-1L,0x08FCL,0xC5L}},{{0x555BL,0x47L,255UL,1L,0x9AA7L,6UL}},{{0xED7BL,1L,250UL,0x54941C1BL,-1L,0x94L}}},{{{65535UL,0L,0xC1L,0x26E526A4L,0xAB57L,0UL}},{{0UL,-6L,1UL,4L,0x1004L,248UL}},{{65535UL,1L,9UL,0x8FCA7E3DL,4L,0xE5L}},{{2UL,1L,2UL,-5L,0x27DCL,0xE7L}},{{5UL,0x7AL,0x17L,0x4238F0D6L,-8L,254UL}}},{{{0xBDE1L,-5L,8UL,0xD053127AL,1L,0UL}},{{0xAA10L,1L,250UL,0xE4385C5DL,-1L,0x08L}},{{0x70A4L,0L,0x6DL,0L,0x7AF7L,255UL}},{{5UL,0x7AL,0x17L,0x4238F0D6L,-8L,254UL}},{{0x8692L,0x30L,0x07L,-1L,0xAB25L,1UL}}},{{{0xBDE1L,-5L,8UL,0xD053127AL,1L,0UL}},{{0x3D07L,0xE6L,250UL,0L,1L,0x15L}},{{0xB194L,3L,0x5DL,0L,7L,0xE6L}},{{0x989CL,1L,249UL,0x693F87E3L,0L,255UL}},{{0x989CL,1L,249UL,0x693F87E3L,0L,255UL}}}},{{{{65535UL,0L,0xC1L,0x26E526A4L,0xAB57L,0UL}},{{0x044AL,-2L,0UL,0x19FA1823L,-5L,0x66L}},{{65535UL,0L,0xC1L,0x26E526A4L,0xAB57L,0UL}},{{0xAA10L,1L,250UL,0xE4385C5DL,-1L,0x08L}},{{0x3D07L,0xE6L,250UL,0L,1L,0x15L}}},{{{0x0553L,0xB2L,0x0EL,0x491D3E57L,5L,8UL}},{{0x319FL,-2L,0UL,1L,1L,0x5FL}},{{0x8692L,0x30L,0x07L,-1L,0xAB25L,1UL}},{{2UL,0x92L,255UL,0x5C4E4F83L,8L,0x08L}},{{65535UL,0L,0xC1L,0x26E526A4L,0xAB57L,0UL}}},{{{0x3D07L,0xE6L,250UL,0L,1L,0x15L}},{{0xED7BL,1L,250UL,0x54941C1BL,-1L,0x94L}},{{0xA3EDL,0x0EL,0x94L,0xC72F990AL,5L,0xFAL}},{{0x989CL,1L,249UL,0x693F87E3L,0L,255UL}},{{0xED7BL,1L,250UL,0x54941C1BL,-1L,0x94L}}},{{{0xA9E0L,0L,255UL,-1L,0x6BE8L,1UL}},{{1UL,0x8DL,0x60L,-9L,0x6829L,0x73L}},{{0x8692L,0x30L,0x07L,-1L,0xAB25L,1UL}},{{65535UL,0L,0xC1L,0x26E526A4L,0xAB57L,0UL}},{{0UL,7L,1UL,8L,5L,255UL}}}},{{{{0x044AL,-2L,0UL,0x19FA1823L,-5L,0x66L}},{{0UL,0x47L,3UL,-1L,-3L,8UL}},{{65535UL,0L,0xC1L,0x26E526A4L,0xAB57L,0UL}},{{0UL,-6L,1UL,4L,0x1004L,248UL}},{{65535UL,1L,9UL,0x8FCA7E3DL,4L,0xE5L}}},{{{0x555BL,0x47L,255UL,1L,0x9AA7L,6UL}},{{0xED7BL,1L,250UL,0x54941C1BL,-1L,0x94L}},{{0xB194L,3L,0x5DL,0L,7L,0xE6L}},{{0x555BL,0x47L,255UL,1L,0x9AA7L,6UL}},{{0UL,-6L,1UL,4L,0x1004L,248UL}}},{{{0xE6A6L,7L,0x60L,1L,0x11EDL,0UL}},{{0x989CL,1L,249UL,0x693F87E3L,0L,255UL}},{{0x70A4L,0L,0x6DL,0L,0x7AF7L,255UL}},{{0x4E02L,-7L,0xE9L,0L,-2L,0UL}},{{0UL,-6L,1UL,4L,0x1004L,248UL}}},{{{0xED7BL,1L,250UL,0x54941C1BL,-1L,0x94L}},{{0xE6A6L,7L,0x60L,1L,0x11EDL,0UL}},{{65535UL,1L,9UL,0x8FCA7E3DL,4L,0xE5L}},{{0x3D07L,0xE6L,250UL,0L,1L,0x15L}},{{65535UL,1L,9UL,0x8FCA7E3DL,4L,0xE5L}}}},{{{{0x3D07L,0xE6L,250UL,0L,1L,0x15L}},{{0x3D07L,0xE6L,250UL,0L,1L,0x15L}},{{0x7B5EL,0x51L,0xC8L,-1L,0x08FCL,0xC5L}},{{0xBDE1L,-5L,8UL,0xD053127AL,1L,0UL}},{{0UL,7L,1UL,8L,5L,255UL}}},{{{6UL,-3L,0x3BL,1L,0x4F4EL,253UL}},{{2UL,0x92L,255UL,0x5C4E4F83L,8L,0x08L}},{{2UL,1L,2UL,-5L,0x27DCL,0xE7L}},{{0x4D9BL,2L,254UL,0x2EA9840AL,0x4B79L,254UL}},{{0xED7BL,1L,250UL,0x54941C1BL,-1L,0x94L}}},{{{5UL,0x7AL,0x17L,0x4238F0D6L,-8L,254UL}},{{2UL,1L,2UL,-5L,0x27DCL,0xE7L}},{{65535UL,1L,9UL,0x8FCA7E3DL,4L,0xE5L}},{{0UL,-6L,1UL,4L,0x1004L,248UL}},{{65535UL,0L,0xC1L,0x26E526A4L,0xAB57L,0UL}}},{{{0xBDE1L,-5L,8UL,0xD053127AL,1L,0UL}},{{2UL,0x92L,255UL,0x5C4E4F83L,8L,0x08L}},{{0x7B99L,0x51L,4UL,-2L,1L,0UL}},{{5UL,0x7AL,0x17L,0x4238F0D6L,-8L,254UL}},{{0x3D07L,0xE6L,250UL,0L,1L,0x15L}}}}};
        int32_t l_260 = 0x41B8BEBAL;
        int i, j, k;
        if (g_103[0].f0)
        { 
            int8_t l_169 = (-10L);
            ++g_161;
            l_169 |= (l_164[0][1][0] < (((safe_add_func_int64_t_s_s((l_164[0][2][1] && ((p_4.f2.f0 & (safe_div_func_int64_t_s_s(p_4.f2.f2, g_62))) < 1UL)), 0xA2B020459850BAFFLL)) ^ p_4.f2.f2) != 0xA04BA90EL));
        }
        else
        { 
            uint8_t l_177 = 0x5EL;
            uint32_t l_185 = 5UL;
            l_170 = 0xEB84F5D4L;
            if ((safe_div_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u((0UL && ((g_62 , (p_7.f1 ^= 0xC2B98898L)) , ((safe_rshift_func_uint16_t_u_u((l_177 != l_164[1][2][1]), 3)) , p_4.f2.f2))), 11)), l_164[1][2][0])))
            { 
                int32_t l_190 = 0x04F9BF6FL;
                g_199 = (((safe_div_func_int32_t_s_s((!(safe_sub_func_uint64_t_u_u(((safe_rshift_func_int16_t_s_s((l_185 || (l_190 = (safe_mul_func_uint16_t_u_u((safe_add_func_int8_t_s_s((l_190 , (safe_div_func_uint16_t_u_u((safe_div_func_int64_t_s_s((safe_add_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u((g_91 != l_116), l_190)), l_116)), l_164[0][1][0])), l_170))), g_99)), 0x7F4DL)))), 2)) < l_185), 0L))), l_116)) == l_170) != p_7.f3);
            }
            else
            { 
                uint64_t l_207[5] = {0x0D5BDE6C51A86194LL,0x0D5BDE6C51A86194LL,0x0D5BDE6C51A86194LL,0x0D5BDE6C51A86194LL,0x0D5BDE6C51A86194LL};
                int i;
                g_206 = (safe_add_func_int16_t_s_s((+(l_170 < ((p_7.f1 = p_4.f2.f4) ^ (0UL == (safe_add_func_int8_t_s_s(((g_147 >= g_2[1]) >= 0L), 0x2FL)))))), l_205));
                return l_207[3];
            }
        }
        for (p_5.f1 = 0; (p_5.f1 <= 1); p_5.f1 += 1)
        { 
            const int8_t l_208 = 0x91L;
            int32_t l_223 = (-3L);
            for (g_206 = 1; (g_206 >= 0); g_206 -= 1)
            { 
                int16_t l_222 = 0x225CL;
                l_116 = p_4.f0.f1;
                p_7.f1 = (((((l_208 | (safe_add_func_int16_t_s_s((l_223 = (((((safe_lshift_func_int8_t_s_u((safe_mul_func_int16_t_s_s((safe_mod_func_uint64_t_u_u(l_217, g_92[1][1])), (((safe_lshift_func_int8_t_s_s((safe_mul_func_int8_t_s_s(0xB3L, l_208)), 2)) || l_222) && 1L))), 4)) <= p_7.f2) >= p_4.f2.f4) > g_103[0].f0) != 0x04A518F3L)), g_127))) == g_104.f0) <= 0x57D6C4115E00D4B9LL) || g_146[1]) == g_91);
                g_233 = (((safe_rshift_func_int8_t_s_u(((safe_div_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_s(((g_104 , (safe_lshift_func_int16_t_s_u((g_232 |= g_99), 10))) != (0x29L | 6UL)), 3)), 0x70L)) != 0x6236L), g_144)) < l_205) <= l_223);
            }
        }
        l_116 ^= (((~l_115) | g_103[0].f0) , l_257[0][3][1].f1);
    }
    return g_144;
}



static int8_t  func_13(int16_t  p_14, int64_t  p_15, uint16_t  p_16, int32_t  p_17)
{ 
    g_101 = g_100;
    return g_91;
}



static int16_t  func_18(const union U2  p_19, int64_t  p_20, union U2  p_21, int32_t  p_22)
{ 
    int32_t l_39 = (-1L);
    for (p_22 = 0; (p_22 != 19); p_22++)
    { 
        uint8_t l_40 = 9UL;
        int32_t l_42 = (-1L);
        g_41 ^= ((0x8376FBFCL ^ ((4294967295UL ^ ((safe_lshift_func_int8_t_s_u(((safe_mod_func_uint8_t_u_u(((p_21.f1 >= (safe_mod_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u(((g_24.f1 >= l_39) != g_24.f1), 4294967295UL)), p_20))) , l_39), l_39)) > 0x4A2CL), p_20)) != g_2[1])) >= l_40)) <= l_40);
        l_42 = g_41;
    }
    for (g_24.f1 = 0; (g_24.f1 >= 41); g_24.f1++)
    { 
        uint32_t l_66 = 4294967295UL;
        int64_t l_90 = 0x2D060950C43CAE23LL;
        for (l_39 = 0; (l_39 > 6); ++l_39)
        { 
            uint16_t l_47 = 0xD0E1L;
            --l_47;
        }
        l_39 = g_24.f1;
        if (g_41)
        { 
            if (p_21.f0)
                break;
        }
        else
        { 
            uint64_t l_50 = 0x4C6E12CDFD7F7FFFLL;
            int32_t l_63 = (-9L);
            int32_t l_64 = 0xE49ED226L;
            if (((l_50 == g_24.f1) , (safe_rshift_func_int8_t_s_u((g_2[1] = (safe_sub_func_uint8_t_u_u((g_41 = (safe_sub_func_uint16_t_u_u((safe_sub_func_int16_t_s_s(((safe_unary_minus_func_uint16_t_u((g_62 = ((((safe_lshift_func_int8_t_s_u((((g_2[0] != ((p_21.f1 | p_21.f0) ^ 7UL)) && (-7L)) != 0UL), 5)) ^ 0L) == g_24.f1) & 65528UL)))) <= l_39), l_50)), g_41))), 247UL))), 4))))
            { 
                int8_t l_65[1][1];
                int i, j;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_65[i][j] = (-1L);
                }
                --l_66;
            }
            else
            { 
                uint8_t l_89 = 253UL;
                g_91 = (safe_mul_func_int16_t_s_s(((safe_mod_func_int16_t_s_s(0x4A47L, (safe_lshift_func_uint16_t_u_s(1UL, 0)))) && ((safe_div_func_int32_t_s_s((safe_lshift_func_uint8_t_u_s(((safe_mul_func_int16_t_s_s((((-8L) >= ((safe_div_func_uint64_t_u_u((safe_mul_func_int8_t_s_s((((l_89 = (((p_21.f1 , l_39) , g_2[1]) , p_21.f0)) && 9L) || l_39), 9L)), 0x1A6866C5D8998D42LL)) == g_24.f1)) <= p_19.f0), g_41)) > g_24.f1), l_90)), l_90)) != p_22)), (-1L)));
                g_92[1][1] = l_64;
            }
            if (g_41)
                break;
            for (l_64 = (-12); (l_64 >= 21); l_64 = safe_add_func_int32_t_s_s(l_64, 3))
            { 
                uint8_t l_95 = 0UL;
                l_95++;
            }
        }
    }
    return g_2[1];
}





int test_main(void)
{
    int i, j;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_2[i], "g_2[i]", print_hash_value);

    }
    transparent_crc(g_24.f1, "g_24.f1", print_hash_value);
    transparent_crc(g_41, "g_41", print_hash_value);
    transparent_crc(g_62, "g_62", print_hash_value);
    transparent_crc(g_91, "g_91", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_92[i][j], "g_92[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_99, "g_99", print_hash_value);
    transparent_crc(g_100, "g_100", print_hash_value);
    transparent_crc(g_101, "g_101", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_103[i].f0, "g_103[i].f0", print_hash_value);

    }
    transparent_crc(g_104.f0, "g_104.f0", print_hash_value);
    transparent_crc(g_127, "g_127", print_hash_value);
    transparent_crc(g_144, "g_144", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_146[i], "g_146[i]", print_hash_value);

    }
    transparent_crc(g_147, "g_147", print_hash_value);
    transparent_crc(g_150.f0, "g_150.f0", print_hash_value);
    transparent_crc(g_151, "g_151", print_hash_value);
    transparent_crc(g_161, "g_161", print_hash_value);
    transparent_crc(g_199, "g_199", print_hash_value);
    transparent_crc(g_206, "g_206", print_hash_value);
    transparent_crc(g_232, "g_232", print_hash_value);
    transparent_crc(g_233, "g_233", print_hash_value);
    transparent_crc(g_277, "g_277", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
