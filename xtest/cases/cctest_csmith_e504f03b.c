// SPDX-License-Identifier: MIT
// cctest_csmith_e504f03b.c --- cctest case csmith_e504f03b (csmith seed 3842306107)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xb9502cbf */

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

// Options:   -s 3842306107 -o /tmp/csmith_gen_vu_ytedw/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   uint64_t  f0;
   uint64_t  f1;
   uint32_t  f2;
};

union U1 {
   uint32_t  f0;
   uint16_t  f1;
};

union U2 {
   int16_t  f0;
   const int8_t  f1;
   const uint16_t  f2;
};

union U3 {
   const uint16_t  f0;
   struct S0  f1;
};

union U4 {
   uint32_t  f0;
};

union U5 {
   uint8_t  f0;
   int16_t  f1;
};


static uint64_t g_6 = 18446744073709551614UL;
static int32_t g_32[2][1][1] = {{{(-2L)}},{{(-2L)}}};
static uint16_t g_44[2] = {0xC08FL,0xC08FL};
static uint16_t g_49 = 0xB57DL;
static int32_t g_66 = 7L;
static struct S0 g_77 = {18446744073709551606UL,0x7D5CE9A204B7FD3ALL,0x8FACA363L};
static union U5 g_82[2][1][4] = {{{{0x45L},{0x45L},{0x45L},{0x45L}}},{{{0x45L},{0x45L},{0x45L},{0x45L}}}};
static union U4 g_84 = {4294967289UL};
static uint8_t g_92 = 0xA4L;
static union U3 g_134 = {0xD35FL};
static int32_t g_145 = 0xD4A388CAL;
static union U2 g_161 = {2L};
static int64_t g_168 = 9L;
static uint32_t g_196 = 0xF62529DBL;
static union U1 g_199[5][4] = {{{4294967290UL},{4294967290UL},{4294967290UL},{4294967290UL}},{{4294967290UL},{4294967290UL},{4294967290UL},{4294967290UL}},{{4294967290UL},{4294967290UL},{4294967290UL},{4294967290UL}},{{4294967290UL},{4294967290UL},{4294967290UL},{4294967290UL}},{{4294967290UL},{4294967290UL},{4294967290UL},{4294967290UL}}};



static const uint32_t  func_1(void);
static uint32_t  func_7(int32_t  p_8, struct S0  p_9, const union U5  p_10, union U1  p_11, struct S0  p_12);
static struct S0  func_13(union U1  p_14);
static union U1  func_15(uint16_t  p_16, union U1  p_17, union U2  p_18, uint32_t  p_19);




static const uint32_t  func_1(void)
{ 
    const int32_t l_20 = 6L;
    union U1 l_21 = {0xD59FF446L};
    union U2 l_22[4] = {{0x3637L},{0x3637L},{0x3637L},{0x3637L}};
    const union U5 l_198 = {1UL};
    struct S0 l_200 = {0x2DB36039B1839EC2LL,18446744073709551606UL,0xB51EEAC5L};
    int32_t l_205 = 0L;
    int i;
    l_205 = ((safe_add_func_int64_t_s_s((safe_mul_func_int8_t_s_s((g_6 ^ func_7(g_6, (g_6 , func_13(func_15((l_20 == l_20), l_21, l_22[0], g_6))), l_198, g_199[1][0], l_200)), g_161.f2)), g_161.f0)) <= 0x67L);
    return g_66;
}



static uint32_t  func_7(int32_t  p_8, struct S0  p_9, const union U5  p_10, union U1  p_11, struct S0  p_12)
{ 
    uint32_t l_201 = 0x2B181F63L;
    int32_t l_204 = 0xE1B7CC4FL;
    l_201++;
    l_204 = l_201;
    return l_204;
}



static struct S0  func_13(union U1  p_14)
{ 
    int32_t l_31[3][5][5] = {{{0xEBCB1743L,(-5L),0x39784725L,(-5L),0xEBCB1743L},{3L,0x62C90ACEL,0x505CE4ECL,0x62C90ACEL,3L},{(-5L),(-1L),0xF9132F4BL,(-1L),(-5L)},{(-10L),0L,0L,0L,(-10L)},{(-5L),(-1L),0xF9132F4BL,(-1L),(-5L)}},{{(-10L),0L,0L,0L,(-10L)},{(-5L),(-1L),0xF9132F4BL,(-1L),(-5L)},{(-10L),0L,0L,0L,(-10L)},{(-5L),(-1L),0xF9132F4BL,(-1L),(-5L)},{(-10L),0L,0L,0L,(-10L)}},{{(-5L),(-1L),0xF9132F4BL,(-1L),(-5L)},{(-10L),0L,0L,0L,(-10L)},{(-5L),(-1L),0xF9132F4BL,(-1L),(-5L)},{(-10L),0L,0L,0L,(-10L)},{(-5L),(-1L),0xF9132F4BL,(-1L),(-5L)}}};
    int32_t l_70 = 0xB0098421L;
    struct S0 l_79 = {0x4183CEC1DFBCBCDBLL,0x163BE35A8448041ALL,0x354A5A86L};
    union U3 l_89 = {1UL};
    int8_t l_124 = (-1L);
    int32_t l_137 = (-4L);
    int32_t l_138 = 0xF4919937L;
    int64_t l_175[2];
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_175[i] = 1L;
    for (p_14.f1 = 0; (p_14.f1 <= 2); p_14.f1 += 1)
    { 
        const uint32_t l_43[1][4][5] = {{{0xC6B9FE21L,1UL,0xC6B9FE21L,1UL,0xC6B9FE21L},{18446744073709551609UL,5UL,5UL,18446744073709551609UL,18446744073709551609UL},{18446744073709551607UL,1UL,18446744073709551607UL,1UL,18446744073709551607UL},{18446744073709551609UL,18446744073709551609UL,5UL,5UL,18446744073709551609UL}}};
        struct S0 l_76 = {1UL,1UL,0xCB588F49L};
        int32_t l_93 = 2L;
        int i, j, k;
        for (g_32[0][0][0] = 0; (g_32[0][0][0] <= 2); g_32[0][0][0] += 1)
        { 
            const int64_t l_40 = (-1L);
            int32_t l_75 = (-5L);
            struct S0 l_78 = {18446744073709551611UL,9UL,0x4BAC7944L};
            if ((!(safe_sub_func_uint64_t_u_u((safe_lshift_func_uint8_t_u_u((safe_div_func_int64_t_s_s((l_40 <= (((safe_lshift_func_int16_t_s_s(g_32[1][0][0], g_32[1][0][0])) == ((-6L) > g_6)) >= l_43[0][1][2])), 0xC0CB0A751F09958ALL)), 2)), g_6))))
            { 
                g_44[1]--;
                if (g_6)
                    goto lbl_180;
                g_66 |= (safe_mul_func_int8_t_s_s(((g_49 |= p_14.f1) , (safe_mod_func_int8_t_s_s((safe_sub_func_int8_t_s_s(((18446744073709551610UL ^ (((~(safe_rshift_func_uint8_t_u_u((!(g_44[1]++)), 6))) && ((safe_rshift_func_int16_t_s_s((((!((safe_add_func_int16_t_s_s(g_49, (~0UL))) >= g_44[1])) == g_32[0][0][0]) <= g_32[0][0][0]), g_44[0])) > p_14.f1)) & (-6L))) | p_14.f1), p_14.f1)), 255UL))), 0xADL));
            }
            else
            { 
                l_75 = ((~(l_70 &= (safe_lshift_func_int16_t_s_s(g_6, l_43[0][2][0])))) ^ ((safe_sub_func_uint64_t_u_u(((p_14.f1 , (safe_mul_func_int8_t_s_s(1L, (-10L)))) && (-8L)), g_44[1])) >= 0UL));
                l_76 = l_76;
                l_78 = g_77;
            }
            return l_78;
        }
        for (g_49 = 0; (g_49 <= 2); g_49 += 1)
        { 
            return l_79;
        }
        if (l_31[1][2][3])
        { 
            uint16_t l_83[5][1][1];
            uint32_t l_90 = 1UL;
            int32_t l_91 = 0x2BFC98A5L;
            int i, j, k;
            for (i = 0; i < 5; i++)
            {
                for (j = 0; j < 1; j++)
                {
                    for (k = 0; k < 1; k++)
                        l_83[i][j][k] = 0xC8A0L;
                }
            }
            l_70 &= ((g_44[1] & l_43[0][3][0]) & (l_76.f1 < (((g_82[1][0][3] , g_77.f1) <= g_49) , l_83[0][0][0])));
            for (l_79.f0 = 0; (l_79.f0 <= 2); l_79.f0 += 1)
            { 
                const uint64_t l_125 = 0xCB3D53BA19E5FB73LL;
                int32_t l_126[2][1][5] = {{{(-1L),0xFFF8B028L,0xFA49983FL,0xFFF8B028L,(-1L)}},{{(-1L),0xFFF8B028L,0xFA49983FL,0xFFF8B028L,(-1L)}}};
                int32_t l_127 = 0xCC63A23BL;
                int i, j, k;
                l_93 &= ((g_92 = (g_84 , (l_91 = (safe_rshift_func_int8_t_s_s((((((p_14.f1 >= ((safe_mod_func_uint64_t_u_u((l_90 = ((l_89 , (0x571DL && g_6)) > p_14.f1)), 0x49BD5B712F41F982LL)) & p_14.f1)) && 0x14L) || l_31[1][4][4]) > 0xB78CL) < g_77.f1), 2))))) >= 0xEFL);
                l_127 ^= (l_126[0][0][3] = (safe_add_func_uint8_t_u_u(((((safe_lshift_func_uint16_t_u_s((0x26F70CD436FCA15FLL ^ ((safe_add_func_uint16_t_u_u((((safe_rshift_func_int16_t_s_u(((l_76 , (safe_add_func_int16_t_s_s((safe_lshift_func_int8_t_s_s((safe_mul_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u(((safe_lshift_func_int16_t_s_s(((safe_div_func_uint8_t_u_u(((safe_rshift_func_int8_t_s_u((safe_div_func_uint32_t_u_u((l_70 |= (safe_mul_func_int16_t_s_s(((((safe_add_func_uint64_t_u_u(18446744073709551606UL, (safe_div_func_uint64_t_u_u((g_77.f1 = g_32[0][0][0]), 0xBDD196005CC3D6C7LL)))) ^ 0L) , l_124) , 0xAFF4L), 0x16CAL))), p_14.f1)), p_14.f1)) != l_125), p_14.f1)) < p_14.f1), 1)) || (-3L)), p_14.f1)), g_32[1][0][0])), 3)), 65535UL))) <= 0x83L), 2)) <= p_14.f1) >= l_89.f0), 0x619FL)) , p_14.f1)), 5)) != g_32[1][0][0]) || p_14.f1) != p_14.f1), l_125)));
            }
            if (l_83[4][0][0])
                break;
        }
        else
        { 
            return g_77;
        }
        for (l_89.f1.f2 = 0; (l_89.f1.f2 <= 2); l_89.f1.f2 += 1)
        { 
            uint16_t l_139 = 1UL;
            for (l_79.f1 = 0; (l_79.f1 <= 0); l_79.f1 += 1)
            { 
                int i, j, k;
                g_66 |= (safe_div_func_uint32_t_u_u(((g_84.f0 &= ((l_31[(l_79.f1 + 1)][(p_14.f1 + 1)][(l_79.f1 + 4)] >= (safe_div_func_uint8_t_u_u(g_32[(l_79.f1 + 1)][l_79.f1][l_79.f1], ((safe_rshift_func_int8_t_s_u(((g_134 , (((safe_mod_func_int32_t_s_s(0x3805CA1CL, 0xD6B6598BL)) > 0x442EL) < l_137)) , l_138), g_44[1])) && 0x4BBEL)))) > (-1L))) , g_32[0][0][0]), 1UL));
                l_70 = g_77.f2;
            }
            for (g_49 = 0; (g_49 <= 2); g_49 += 1)
            { 
                uint32_t l_140 = 0xD85D5641L;
                struct S0 l_146 = {0UL,0xF8CD5190A736CA90LL,8UL};
                int i, j, k;
                l_140 ^= (l_139 ^= (-7L));
                g_66 |= ((g_32[0][0][0] | ((-6L) <= (safe_mul_func_int16_t_s_s((g_82[1][0][3].f1 = (g_145 ^= ((((((g_92 | ((safe_lshift_func_uint16_t_u_s(((g_77.f2 = (((p_14.f1 , l_140) | p_14.f1) != p_14.f1)) >= p_14.f1), 2)) ^ 0x849EEB4ECF4EC59ELL)) && p_14.f1) || p_14.f1) == l_76.f0) < g_92) && 0xDD0038FFA4894131LL))), (-1L))))) , l_139);
                g_77 = l_146;
            }
        }
    }
lbl_180:
    for (g_134.f1.f0 = 12; (g_134.f1.f0 <= 31); ++g_134.f1.f0)
    { 
        uint64_t l_149[5];
        int32_t l_174[3];
        int32_t l_179 = (-7L);
        int i;
        for (i = 0; i < 5; i++)
            l_149[i] = 3UL;
        for (i = 0; i < 3; i++)
            l_174[i] = 0x0074567EL;
        if ((l_149[2] == (safe_lshift_func_int16_t_s_s(1L, (safe_mul_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s(((g_82[1][0][3].f0 ^ (((safe_rshift_func_int16_t_s_s((((l_149[4] & 8UL) < 0xB5E94B15D7F04335LL) & 1UL), 6)) | g_6) | g_134.f0)) & 1L), 13)), (-1L)))))))
        { 
            int32_t l_158 = 0xF7CF63E8L;
            for (g_66 = 0; g_66 < 2; g_66 += 1)
            {
                g_44[g_66] = 65529UL;
            }
            if (l_158)
                break;
        }
        else
        { 
            int64_t l_165 = 0xD49091EDA5D48A30LL;
            int32_t l_170 = 1L;
            uint8_t l_171 = 255UL;
            for (p_14.f0 = 0; (p_14.f0 <= 33); p_14.f0 = safe_add_func_int32_t_s_s(p_14.f0, 1))
            { 
                l_170 = (((((g_161 , (g_168 = ((!(l_70 ^= (l_124 && (++g_84.f0)))) < (--g_77.f1)))) > (((((~(g_161 , p_14.f0)) , l_165) & p_14.f1) , 1UL) > l_165)) <= p_14.f0) == l_165) != p_14.f0);
                if (p_14.f0)
                    break;
                g_32[1][0][0] &= l_171;
            }
            if (g_145)
                continue;
        }
        for (g_84.f0 = 29; (g_84.f0 < 9); g_84.f0--)
        { 
            uint32_t l_176 = 0x49760B95L;
            l_176++;
            l_179 &= (l_174[0] && 0L);
        }
    }
    for (l_137 = 0; (l_137 > (-22)); l_137 = safe_sub_func_int16_t_s_s(l_137, 9))
    { 
        struct S0 l_186 = {0x5B96D19C86EBFBDCLL,0UL,0UL};
        int32_t l_197 = 7L;
        for (g_49 = 0; (g_49 >= 48); ++g_49)
        { 
            struct S0 l_185 = {6UL,0xF64C53B9DD4B5B4CLL,0x38900E08L};
            g_196 |= (((l_186 = (g_77 = l_185)) , (safe_lshift_func_int16_t_s_s((safe_mul_func_int8_t_s_s(((((safe_mul_func_int16_t_s_s((safe_sub_func_uint8_t_u_u(g_66, 255UL)), (~(g_84.f0 = (((18446744073709551607UL ^ (-1L)) <= g_32[1][0][0]) || 0xA9453C72E5D604C1LL))))) & 0x1E4EL) == g_82[1][0][3].f0) >= p_14.f1), (-1L))), 12))) != p_14.f1);
            l_197 = (-7L);
        }
    }
    return g_77;
}



static union U1  func_15(uint16_t  p_16, union U1  p_17, union U2  p_18, uint32_t  p_19)
{ 
    int32_t l_23[5][4] = {{0x586FA66FL,0xBF844BA9L,0xD7D41305L,0xD7D41305L},{0L,0L,0x4433AC25L,1L},{0L,(-3L),0xD7D41305L,0L},{0x586FA66FL,1L,0x586FA66FL,0xD7D41305L},{0xBF844BA9L,1L,0x4433AC25L,0L}};
    int32_t l_29 = 0L;
    int i, j;
    for (p_17.f0 = 0; (p_17.f0 <= 3); p_17.f0 += 1)
    { 
        if (l_23[1][2])
            break;
        for (p_16 = 0; (p_16 <= 3); p_16 += 1)
        { 
            int32_t l_28[3][2][4] = {{{0x0F8278B7L,0x0F8278B7L,0x0F8278B7L,0x0F8278B7L},{0x0F8278B7L,0x0F8278B7L,0x0F8278B7L,0x0F8278B7L}},{{0x0F8278B7L,0x0F8278B7L,0x0F8278B7L,0x0F8278B7L},{0x0F8278B7L,0x0F8278B7L,0x0F8278B7L,0x0F8278B7L}},{{0x0F8278B7L,0x0F8278B7L,0x0F8278B7L,0x0F8278B7L},{0x0F8278B7L,0x0F8278B7L,0x0F8278B7L,0x0F8278B7L}}};
            int32_t l_30 = 0xCD58F28DL;
            int i, j, k;
            l_30 = (0xBB5AL ^ (l_29 = (safe_mul_func_int16_t_s_s(((safe_add_func_int16_t_s_s(l_23[p_17.f0][p_17.f0], p_16)) , ((l_28[1][1][2] = l_23[4][3]) != l_23[2][1])), g_6))));
        }
    }
    return p_17;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_6, "g_6", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_32[i][j][k], "g_32[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_44[i], "g_44[i]", print_hash_value);

    }
    transparent_crc(g_49, "g_49", print_hash_value);
    transparent_crc(g_66, "g_66", print_hash_value);
    transparent_crc(g_77.f0, "g_77.f0", print_hash_value);
    transparent_crc(g_77.f1, "g_77.f1", print_hash_value);
    transparent_crc(g_77.f2, "g_77.f2", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_82[i][j][k].f0, "g_82[i][j][k].f0", print_hash_value);

            }
        }
    }
    transparent_crc(g_84.f0, "g_84.f0", print_hash_value);
    transparent_crc(g_92, "g_92", print_hash_value);
    transparent_crc(g_134.f0, "g_134.f0", print_hash_value);
    transparent_crc(g_145, "g_145", print_hash_value);
    transparent_crc(g_161.f0, "g_161.f0", print_hash_value);
    transparent_crc(g_161.f1, "g_161.f1", print_hash_value);
    transparent_crc(g_161.f2, "g_161.f2", print_hash_value);
    transparent_crc(g_168, "g_168", print_hash_value);
    transparent_crc(g_196, "g_196", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_199[i][j].f0, "g_199[i][j].f0", print_hash_value);
            transparent_crc(g_199[i][j].f1, "g_199[i][j].f1", print_hash_value);

        }
    }
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
