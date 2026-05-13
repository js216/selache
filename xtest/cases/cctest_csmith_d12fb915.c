// SPDX-License-Identifier: MIT
// cctest_csmith_d12fb915.c --- cctest case csmith_d12fb915 (csmith seed 3509565717)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xf7c71b5a */

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

// Options:   -s 3509565717 -o /tmp/csmith_gen_t7obt9h4/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   int32_t  f0;
   uint32_t  f1;
};
#pragma pack(pop)

#pragma pack(push)
#pragma pack(1)
struct S1 {
   int16_t  f0;
   uint32_t  f1;
   const struct S0  f2;
   uint32_t  f3;
   const uint32_t  f4;
};
#pragma pack(pop)

union U2 {
   uint32_t  f0;
};


static int32_t g_18[1] = {3L};
static int32_t g_27 = (-1L);
static uint8_t g_28[3] = {0x5DL,0x5DL,0x5DL};
static uint32_t g_63[1] = {8UL};
static struct S0 g_88 = {0x3D139687L,1UL};
static struct S1 g_90 = {-2L,0xFCC00BB0L,{0L,0x1CB09366L},0xA3FDCB73L,18446744073709551607UL};
static const struct S0 g_107 = {0xC6D32E1AL,0x327E243DL};
static int32_t g_116[5][2] = {{0x3D58A4ADL,0x3D58A4ADL},{0x3D58A4ADL,0x3D58A4ADL},{0x3D58A4ADL,0x3D58A4ADL},{0x3D58A4ADL,0x3D58A4ADL},{0x3D58A4ADL,0x3D58A4ADL}};
static int64_t g_151 = 0x8C29A95C713BC382LL;
static uint64_t g_162 = 0xA2E68B52A41E839CLL;
static uint64_t g_176 = 0xDD78B055CD90D8D9LL;
static uint8_t g_244 = 255UL;
static int16_t g_263 = 7L;
static union U2 g_293 = {0xE5CEED9EL};
static int32_t g_339 = (-5L);
static uint64_t g_387 = 0xAB72B3855EDBE9DCLL;



static uint16_t  func_1(void);
static uint8_t  func_3(int64_t  p_4);
static uint8_t  func_6(const struct S0  p_7, int16_t  p_8, uint8_t  p_9);
static uint16_t  func_12(struct S1  p_13, union U2  p_14, int16_t  p_15);




static uint16_t  func_1(void)
{ 
    const uint32_t l_2 = 1UL;
    struct S1 l_16[3][4][1] = {{{{0x29CBL,0x21B07FB0L,{-1L,7UL},4294967295UL,8UL}},{{0xDB97L,0xCD329B3AL,{0L,0xE75D5F8DL},8UL,0UL}},{{0x29CBL,0x21B07FB0L,{-1L,7UL},4294967295UL,8UL}},{{0xDB97L,0xCD329B3AL,{0L,0xE75D5F8DL},8UL,0UL}}},{{{0x29CBL,0x21B07FB0L,{-1L,7UL},4294967295UL,8UL}},{{0xDB97L,0xCD329B3AL,{0L,0xE75D5F8DL},8UL,0UL}},{{0x29CBL,0x21B07FB0L,{-1L,7UL},4294967295UL,8UL}},{{0xDB97L,0xCD329B3AL,{0L,0xE75D5F8DL},8UL,0UL}}},{{{0x29CBL,0x21B07FB0L,{-1L,7UL},4294967295UL,8UL}},{{0xDB97L,0xCD329B3AL,{0L,0xE75D5F8DL},8UL,0UL}},{{0x29CBL,0x21B07FB0L,{-1L,7UL},4294967295UL,8UL}},{{0xDB97L,0xCD329B3AL,{0L,0xE75D5F8DL},8UL,0UL}}}};
    union U2 l_17 = {0xE5232406L};
    int32_t l_373 = 0x1E52DC8AL;
    int i, j, k;
    if (((l_2 ^ func_3((g_176 &= ((safe_unary_minus_func_uint8_t_u(func_6(((safe_sub_func_uint16_t_u_u(func_12(l_16[0][2][0], l_17, (((l_16[2][2][0] , g_18[0]) & 3UL) != g_18[0])), g_88.f1)) , g_107), l_16[0][2][0].f1, l_16[0][2][0].f4))) < 0xD3L)))) ^ 65532UL))
    { 
        int64_t l_342 = 0xBB74E24A5D5FD77ELL;
        struct S1 l_344 = {0x708FL,0xABEF9D2DL,{-7L,0UL},5UL,7UL};
        int32_t l_347 = 0x39ED68EBL;
        int32_t l_348 = 0x36E81D26L;
        for (g_90.f0 = 2; (g_90.f0 >= 0); g_90.f0 -= 1)
        { 
            uint32_t l_346 = 18446744073709551615UL;
            int64_t l_363 = 0xC07342370A5FE254LL;
            g_27 = g_18[0];
            for (g_88.f0 = 0; (g_88.f0 <= 2); g_88.f0 += 1)
            { 
                uint32_t l_345 = 0x7873C4A6L;
                l_348 &= ((((((g_116[1][0] ^= (l_342 & ((safe_unary_minus_func_uint16_t_u(((l_344 , (l_347 ^= (((((l_16[0][2][0].f3 & (l_345 > g_90.f2.f0)) <= l_344.f1) == l_346) ^ 0xC10FD1BAL) , 0x566BL))) != l_16[0][2][0].f0))) >= l_345))) ^ l_345) , l_345) , l_346) < g_63[0]) | g_107.f0);
                l_373 = ((safe_add_func_uint16_t_u_u((+(~(safe_div_func_uint8_t_u_u(((safe_mul_func_uint8_t_u_u(((safe_add_func_uint16_t_u_u(g_116[1][0], (safe_add_func_uint32_t_u_u((safe_mul_func_int8_t_s_s(l_363, (safe_rshift_func_int8_t_s_u((safe_sub_func_uint8_t_u_u((safe_unary_minus_func_uint16_t_u((safe_sub_func_uint32_t_u_u(((safe_mul_func_int16_t_s_s(l_345, l_346)) > g_28[1]), g_107.f0)))), 0x47L)), 4)))), l_345)))) > 1UL), 0xFAL)) || g_63[0]), 0x57L)))), 0x25DFL)) < l_345);
            }
        }
    }
    else
    { 
        uint32_t l_374 = 18446744073709551615UL;
        int32_t l_388 = (-9L);
        g_116[1][0] = (g_18[0] = (l_16[0][2][0].f3 | l_16[0][2][0].f4));
        if (l_374)
        { 
            return l_374;
        }
        else
        { 
            struct S0 l_386 = {0x5A8A2CC0L,18446744073709551615UL};
            for (g_90.f0 = (-22); (g_90.f0 != (-18)); ++g_90.f0)
            { 
                g_88.f0 &= (((g_387 = (((safe_mul_func_int8_t_s_s(0x93L, ((safe_add_func_int64_t_s_s((g_151 = (safe_add_func_uint32_t_u_u((~(safe_mul_func_int16_t_s_s((l_386 , (1L != l_16[0][2][0].f2.f0)), l_374))), l_386.f1))), g_107.f0)) ^ l_374))) , 4294967291UL) == l_16[0][2][0].f3)) == l_373) && g_63[0]);
            }
            l_388 &= l_386.f1;
        }
    }
    return l_17.f0;
}



static uint8_t  func_3(int64_t  p_4)
{ 
    int32_t l_181 = 0x444E1961L;
    int32_t l_185[2][5] = {{0xB81AA9FBL,3L,0xB81AA9FBL,3L,0xB81AA9FBL},{0x12535F52L,0x12535F52L,0x12535F52L,0x12535F52L,0x12535F52L}};
    int32_t l_186[2][4][2] = {{{(-1L),0x3F5B9120L},{0xDD20EC94L,0x3F5B9120L},{(-1L),0x3F5B9120L},{0xDD20EC94L,0x3F5B9120L}},{{(-1L),0x3F5B9120L},{0xDD20EC94L,0x3F5B9120L},{(-1L),0x3F5B9120L},{0xDD20EC94L,0x3F5B9120L}}};
    int32_t l_258 = (-8L);
    uint16_t l_270 = 0xCE7EL;
    struct S0 l_278 = {0x7D1C9BA8L,18446744073709551614UL};
    uint16_t l_284 = 0UL;
    int i, j, k;
    if ((((l_186[0][0][1] ^= (safe_add_func_uint16_t_u_u(g_90.f4, (safe_rshift_func_uint8_t_u_s((l_181 = 255UL), (safe_mul_func_int8_t_s_s((0x12EB8F5FL == (+((((((l_185[0][2] ^ g_27) || l_185[0][2]) & 0xF0C42BA089590904LL) > l_185[0][2]) >= p_4) || 1L))), l_185[1][2]))))))) , p_4) == p_4))
    { 
        uint32_t l_187[2][4] = {{0x4183E401L,4294967293UL,0x4183E401L,4294967293UL},{0x4183E401L,4294967293UL,0x4183E401L,4294967293UL}};
        int32_t l_197 = 0x031B6475L;
        int32_t l_198[4][2] = {{0L,0L},{0L,0L},{0L,0L},{0L,0L}};
        uint8_t l_199 = 0xF4L;
        int i, j;
        ++l_187[0][3];
        g_116[4][1] ^= (safe_unary_minus_func_uint16_t_u((safe_lshift_func_uint16_t_u_s((p_4 | (safe_div_func_uint32_t_u_u(((g_151 = (safe_sub_func_uint64_t_u_u(((-1L) == g_28[2]), 0x9AFA6B09CDEF6544LL))) < g_18[0]), 0xB423AEECL))), 15))));
        l_199++;
    }
    else
    { 
        uint8_t l_210[1];
        int32_t l_266 = 0x988DB1DBL;
        int32_t l_267 = 0xE1589643L;
        int32_t l_268[3];
        struct S0 l_277 = {0x7F5D7FD6L,0x6BBC8EBBL};
        struct S1 l_294[4][1] = {{{1L,0x8EA5FBDFL,{-7L,18446744073709551615UL},0xEBAF2F5AL,0xC4564BAAL}},{{0L,0x66B3BE21L,{-1L,0x2F7A96EAL},8UL,18446744073709551611UL}},{{1L,0x8EA5FBDFL,{-7L,18446744073709551615UL},0xEBAF2F5AL,0xC4564BAAL}},{{0L,0x66B3BE21L,{-1L,0x2F7A96EAL},8UL,18446744073709551611UL}}};
        int i, j;
        for (i = 0; i < 1; i++)
            l_210[i] = 0x27L;
        for (i = 0; i < 3; i++)
            l_268[i] = (-9L);
        if (((((l_186[1][2][1] ^= (+(safe_mul_func_int8_t_s_s(0x45L, ((0x4614B01E4F83CC13LL >= ((safe_mul_func_int16_t_s_s(((safe_rshift_func_int16_t_s_s(0x1A0BL, 9)) , ((0xB0L != p_4) & g_18[0])), p_4)) == g_28[2])) == (-10L)))))) , g_88.f1) , l_186[1][0][0]) > 0x7EL))
        { 
            const uint64_t l_234 = 0x0AF5BE0A869F2773LL;
            for (g_151 = 0; g_151 < 3; g_151 += 1)
            {
                g_28[g_151] = 2UL;
            }
lbl_235:
            for (g_88.f0 = 0; (g_88.f0 <= 0); g_88.f0 += 1)
            { 
                int32_t l_209 = (-7L);
                union U2 l_215 = {0x30A53C3CL};
                int i;
                l_210[0]--;
                if (g_90.f4)
                    goto lbl_235;
                l_186[0][0][1] |= (safe_rshift_func_uint8_t_u_s(((l_215 , (safe_mul_func_uint16_t_u_u(g_63[g_88.f0], (safe_mul_func_uint8_t_u_u(((safe_div_func_int16_t_s_s((safe_sub_func_int8_t_s_s(((+g_63[g_88.f0]) && (safe_rshift_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u((safe_rshift_func_int8_t_s_s((~(safe_lshift_func_uint8_t_u_s(((g_90.f3 & p_4) , g_28[2]), 0))), 2)), 4)), g_18[g_88.f0]))), l_210[0])), p_4)) < 6L), 0xB8L))))) | l_210[0]), l_234));
            }
            for (l_181 = (-10); (l_181 > 15); l_181++)
            { 
                if (g_90.f2.f0)
                    break;
                l_186[0][0][1] ^= (((safe_sub_func_int8_t_s_s((((safe_rshift_func_int16_t_s_u(g_18[0], 15)) , (-3L)) && ((g_88.f1 ^ ((g_107.f0 & (-1L)) < l_185[0][2])) <= l_181)), 0x11L)) & p_4) != p_4);
            }
        }
        else
        { 
            int64_t l_250 = 0xA765B63824C50FFCLL;
            int32_t l_265[5][4] = {{8L,0x105BBAC0L,8L,(-1L)},{8L,(-1L),(-1L),8L},{1L,(-1L),(-1L),(-1L)},{(-1L),0x105BBAC0L,(-1L),(-1L)},{1L,1L,(-1L),(-1L)}};
            int64_t l_269 = 0xFE24F2C05DE9894FLL;
            int i, j;
            for (g_88.f0 = 0; (g_88.f0 <= 0); g_88.f0 += 1)
            { 
                int32_t l_251[4][1][1];
                int16_t l_264 = (-1L);
                int i, j, k;
                for (i = 0; i < 4; i++)
                {
                    for (j = 0; j < 1; j++)
                    {
                        for (k = 0; k < 1; k++)
                            l_251[i][j][k] = 0x4D16431FL;
                    }
                }
                l_251[2][0][0] = (((((safe_add_func_uint8_t_u_u(5UL, ((g_244 = g_28[g_88.f0]) || g_88.f1))) || (safe_unary_minus_func_int8_t_s(((safe_sub_func_uint16_t_u_u((safe_mod_func_int32_t_s_s(g_28[g_88.f0], 0x0B9AC869L)), l_250)) && g_63[0])))) <= p_4) == l_250) , l_250);
                l_186[0][0][1] |= (safe_sub_func_int64_t_s_s((safe_lshift_func_uint16_t_u_u((safe_mod_func_uint16_t_u_u((((l_251[0][0][0] , (l_258 ^ (p_4 , ((safe_mul_func_int8_t_s_s((safe_div_func_int8_t_s_s((g_263 = g_90.f3), 0xACL)), l_250)) & 0x02B8FD3DL)))) != l_185[0][0]) && g_63[0]), p_4)), g_90.f1)), l_258));
                l_265[3][1] |= l_264;
            }
            ++l_270;
        }
        if ((((9L >= (safe_sub_func_uint32_t_u_u(1UL, (safe_mod_func_int64_t_s_s((g_88.f1 > (((l_210[0] ^ 0x2A59A297C5370198LL) & 0UL) != l_210[0])), g_116[2][1]))))) | l_266) && 65535UL))
        { 
            int16_t l_279 = 0x2985L;
            int32_t l_281 = 0x7FF979C3L;
            int32_t l_282 = 1L;
            g_88 = g_88;
            for (g_151 = 0; (g_151 <= 2); g_151 += 1)
            { 
                int32_t l_280 = 2L;
                int32_t l_283 = 0L;
                int i;
                l_278 = l_277;
                if (l_268[g_151])
                    break;
                l_284++;
            }
        }
        else
        { 
            int16_t l_295 = (-9L);
            int32_t l_296[4][3][3] = {{{0x84898BB3L,(-5L),0x84898BB3L},{(-1L),0xE12B70E8L,(-1L)},{0x84898BB3L,(-5L),0x84898BB3L}},{{(-1L),0xE12B70E8L,(-1L)},{0x84898BB3L,(-5L),0x84898BB3L},{(-1L),0xE12B70E8L,(-1L)}},{{0x84898BB3L,(-5L),0x84898BB3L},{(-1L),0xE12B70E8L,(-1L)},{0x84898BB3L,(-5L),0x84898BB3L}},{{(-1L),0xE12B70E8L,(-1L)},{0x84898BB3L,(-5L),0x84898BB3L},{(-1L),0xE12B70E8L,(-1L)}}};
            int64_t l_317[1];
            int i, j, k;
            for (i = 0; i < 1; i++)
                l_317[i] = (-9L);
            l_186[1][2][1] = (safe_add_func_uint64_t_u_u(g_90.f1, 18446744073709551614UL));
            if ((safe_sub_func_uint64_t_u_u((safe_mod_func_uint32_t_u_u(((g_293 , (g_88.f0 != (l_294[0][0] , g_176))) != (-2L)), p_4)), l_295)))
            { 
                int64_t l_303 = 0x910E48E3788C7B8CLL;
                l_296[1][0][0] = (-1L);
                l_267 = (safe_mod_func_int32_t_s_s(p_4, (safe_sub_func_uint32_t_u_u((g_176 <= ((safe_div_func_int64_t_s_s((((l_303 ^= g_90.f2.f0) != l_186[1][0][1]) >= 18446744073709551615UL), g_90.f3)) >= l_186[0][0][1])), l_185[0][2]))));
            }
            else
            { 
                const uint8_t l_316[4][2][1] = {{{255UL},{255UL}},{{255UL},{255UL}},{{255UL},{255UL}},{{255UL},{255UL}}};
                int32_t l_323 = 0xE2656E11L;
                int32_t l_324 = 0x474CA7CAL;
                int i, j, k;
                l_277.f0 ^= (safe_sub_func_int8_t_s_s(((((safe_mul_func_uint8_t_u_u((safe_mod_func_uint8_t_u_u((l_186[0][0][1] = ((!(l_295 , l_284)) != ((((safe_mod_func_uint64_t_u_u((0x99DDE4B021662E38LL && (safe_div_func_uint8_t_u_u(((~0L) <= p_4), g_90.f2.f0))), g_151)) && l_294[0][0].f3) > l_296[1][0][0]) || l_316[2][0][0]))), l_316[2][0][0])), 247UL)) | 0x2DD66434L) | l_317[0]) & 0xBFL), p_4));
                l_324 = ((safe_mul_func_int8_t_s_s((safe_sub_func_int32_t_s_s(g_90.f2.f1, ((l_323 = (!0L)) & g_244))), (++g_28[2]))) && g_28[1]);
                l_185[0][2] = (g_88.f0 = (l_323 &= ((safe_lshift_func_uint8_t_u_s((safe_rshift_func_uint16_t_u_u(((g_151 &= (p_4 || (((g_107.f1 < ((g_339 = (safe_sub_func_int16_t_s_s((-3L), (safe_lshift_func_int16_t_s_u((safe_sub_func_int32_t_s_s((safe_sub_func_uint16_t_u_u((l_270 && 4294967287UL), g_90.f2.f1)), 4294967286UL)), l_267))))) | g_90.f0)) > p_4) & 0x55C09B09L))) && p_4), 11)), g_107.f1)) | 1UL)));
            }
        }
    }
    return l_278.f1;
}



static uint8_t  func_6(const struct S0  p_7, int16_t  p_8, uint8_t  p_9)
{ 
    const int8_t l_110 = (-1L);
    int32_t l_115 = 0x0F89DE1BL;
    uint32_t l_126 = 0x9FFC3C19L;
    int32_t l_168 = 0xD5D44740L;
    int32_t l_169 = 1L;
    int32_t l_170[4] = {0xC9D84B15L,0xC9D84B15L,0xC9D84B15L,0xC9D84B15L};
    int i;
    if ((((safe_add_func_int32_t_s_s((l_115 = (p_7.f0 && ((l_110 , (g_27 <= ((((safe_mod_func_int8_t_s_s(((((safe_div_func_int32_t_s_s((((p_7 , p_7) , 0x6A020803FA2AEE08LL) || l_110), g_107.f1)) , 1L) <= l_110) >= g_88.f1), g_90.f2.f0)) > g_18[0]) & g_107.f0) != l_110))) >= 8L))), p_7.f0)) < g_116[1][0]) < (-9L)))
    { 
        uint32_t l_125[3];
        int i;
        for (i = 0; i < 3; i++)
            l_125[i] = 4UL;
        g_27 = (((((safe_sub_func_int32_t_s_s(g_116[1][0], ((l_110 , (safe_mul_func_int16_t_s_s((((((safe_mod_func_int16_t_s_s(g_116[4][1], (((l_115 ^= (((((((safe_mul_func_uint8_t_u_u(255UL, l_125[0])) | p_7.f0) || 8UL) , 0x2E08AAF6L) , l_125[0]) & l_110) > 1UL)) & l_110) , l_126))) && g_90.f1) || 65527UL) == p_7.f0) ^ 0xA1L), g_116[1][0]))) >= (-8L)))) | 0xD993L) & g_18[0]) ^ 4294967290UL) && g_88.f1);
        g_88.f0 = l_110;
    }
    else
    { 
        uint32_t l_147 = 4294967293UL;
        int32_t l_150 = 0xC03ACE25L;
        int32_t l_167 = (-4L);
        for (g_27 = 15; (g_27 > (-9)); g_27 = safe_sub_func_int16_t_s_s(g_27, 2))
        { 
            int8_t l_152 = 0x03L;
            int32_t l_159[3];
            uint8_t l_171 = 0x9EL;
            int i;
            for (i = 0; i < 3; i++)
                l_159[i] = 1L;
            for (p_8 = (-10); (p_8 < 4); p_8 = safe_add_func_uint8_t_u_u(p_8, 3))
            { 
                uint32_t l_148 = 0x26CA6B16L;
                const int32_t l_149 = 0x51E1822EL;
                int32_t l_160 = 0L;
                int32_t l_161[1];
                int i;
                for (i = 0; i < 1; i++)
                    l_161[i] = 0x73C79940L;
                l_152 = (safe_lshift_func_int8_t_s_s((((g_151 = (safe_sub_func_uint64_t_u_u(((((safe_mul_func_uint8_t_u_u((g_28[1] = (safe_sub_func_int64_t_s_s(p_9, ((((0x5C84563440EEEA59LL < ((l_110 , (safe_sub_func_int64_t_s_s((((l_148 = (safe_lshift_func_int8_t_s_u((((safe_rshift_func_int8_t_s_u(((g_90.f3 = (safe_add_func_int32_t_s_s((l_147 |= (((g_28[2] , p_9) < g_18[0]) , p_7.f0)), p_7.f1))) ^ g_116[4][1]), g_88.f1)) && (-2L)) == p_9), p_7.f0))) & l_149) , (-6L)), p_7.f0))) > 0x4AF8784DF7A928B0LL)) , g_90.f0) == g_63[0]) == l_150)))), p_7.f0)) , p_8) < 255UL) , p_9), g_90.f2.f1))) , 0x1B0D58D1L) > l_150), p_8));
                g_116[4][0] = (safe_add_func_uint32_t_u_u((((safe_mod_func_uint32_t_u_u(l_148, ((safe_add_func_uint32_t_u_u(((g_162--) >= (safe_add_func_uint8_t_u_u(p_8, (l_150 &= (((0x10L == (((3UL | 0x47L) >= l_159[1]) < p_7.f0)) != l_159[0]) && 65534UL))))), g_151)) | l_149))) | 65532UL) && g_116[4][0]), 0x93700861L));
                l_171++;
            }
        }
        g_116[4][0] &= ((g_90.f4 == g_18[0]) == (safe_sub_func_int8_t_s_s((g_107.f0 , l_150), p_7.f1)));
    }
    return p_9;
}



static uint16_t  func_12(struct S1  p_13, union U2  p_14, int16_t  p_15)
{ 
    int8_t l_19 = 5L;
    int32_t l_29 = 0x736FA7ABL;
    int32_t l_30[2][5];
    struct S0 l_56[3] = {{0x247AD075L,0x43C6BD66L},{0x247AD075L,0x43C6BD66L},{0x247AD075L,0x43C6BD66L}};
    struct S1 l_77 = {0L,8UL,{-7L,0x872A0FD7L},1UL,18446744073709551612UL};
    int i, j;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 5; j++)
            l_30[i][j] = 0x9F00F3BCL;
    }
    if (p_13.f1)
    { 
        uint64_t l_26[4];
        int32_t l_45 = 0xF7BD129AL;
        int32_t l_54 = (-1L);
        int i;
        for (i = 0; i < 4; i++)
            l_26[i] = 3UL;
        if ((l_30[0][2] = (l_19 > (0x50L ^ ((safe_div_func_uint64_t_u_u(g_18[0], (safe_sub_func_uint64_t_u_u((l_29 = ((g_28[2] = ((((g_27 = (safe_sub_func_uint64_t_u_u((l_26[1] , g_18[0]), p_13.f4))) | l_19) && g_27) || g_27)) < 1UL)), p_13.f3)))) | p_13.f1)))))
        { 
            uint16_t l_42 = 0x6E91L;
            uint16_t l_43[2][2] = {{0x996BL,0x996BL},{0x996BL,0x996BL}};
            uint32_t l_46 = 0xD9541138L;
            int32_t l_47[5][5] = {{0x652A1FB9L,0x652A1FB9L,1L,0x652A1FB9L,0x652A1FB9L},{0x8BA45C3CL,0x652A1FB9L,0x8BA45C3CL,0x8BA45C3CL,0x652A1FB9L},{0x652A1FB9L,0x8BA45C3CL,0x8BA45C3CL,0x652A1FB9L,0x8BA45C3CL},{0x652A1FB9L,0x652A1FB9L,1L,0x652A1FB9L,0x652A1FB9L},{0x8BA45C3CL,0x652A1FB9L,0x8BA45C3CL,0x8BA45C3CL,0x652A1FB9L}};
            int i, j;
            for (p_14.f0 = 8; (p_14.f0 >= 8); --p_14.f0)
            { 
                if (g_18[0])
                    break;
                if (g_18[0])
                    break;
            }
            for (p_13.f0 = (-26); (p_13.f0 >= (-7)); ++p_13.f0)
            { 
                int16_t l_39 = 0x792FL;
                int32_t l_44 = 0x45DDB3F0L;
                l_45 = ((safe_rshift_func_uint8_t_u_u((((l_44 = (p_13.f1 ^= (l_39 | ((g_28[0] , (1L == (safe_mul_func_uint16_t_u_u(((l_42 = (g_28[2] = (((((p_14.f0 , l_26[1]) , l_19) ^ g_18[0]) == 3UL) <= l_26[1]))) || p_13.f2.f0), l_43[0][1])))) != l_43[0][1])))) & p_13.f4) != p_14.f0), 5)) ^ l_26[2]);
                l_46 ^= l_44;
                l_47[0][2] &= (-3L);
            }
            l_30[1][4] = ((l_26[1] <= ((((safe_rshift_func_int16_t_s_s((safe_mul_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s(((l_29 = g_18[0]) || (l_30[1][3] , (((g_18[0] &= (l_45 ^= ((g_27 || l_54) ^ (-9L)))) < 0x123672E3L) <= p_13.f0))), l_54)), p_13.f1)), 14)) < 4294967292UL) > g_27) | p_13.f2.f1)) , 0x1C21D012L);
        }
        else
        { 
            uint32_t l_55 = 1UL;
            uint64_t l_67 = 18446744073709551614UL;
            int32_t l_70 = 0L;
            if ((l_55 < l_26[1]))
            { 
                l_54 = 0L;
            }
            else
            { 
                uint32_t l_66 = 0x4363893DL;
                l_56[2] = p_13.f2;
                l_67 = ((p_13.f4 , ((safe_mod_func_uint64_t_u_u((safe_lshift_func_uint16_t_u_u((((p_13.f2.f1 || (safe_div_func_uint64_t_u_u((g_63[0] = l_55), (((safe_mod_func_int32_t_s_s((g_27 ^= 1L), 4294967288UL)) , 8L) , g_28[2])))) , l_66) | l_55), 1)), g_18[0])) && p_13.f4)) , l_55);
            }
            for (l_54 = 0; (l_54 != 6); l_54++)
            { 
                l_70 ^= g_63[0];
            }
        }
    }
    else
    { 
        uint32_t l_80 = 8UL;
        l_80 |= (0L <= ((safe_add_func_int64_t_s_s((safe_sub_func_int16_t_s_s((safe_div_func_int16_t_s_s((l_77 , (g_28[2] < (safe_mul_func_uint8_t_u_u((0x555C44EF753FA0D0LL <= g_27), g_27)))), l_30[1][2])), p_13.f2.f1)), p_13.f3)) != p_13.f0));
    }
    for (l_29 = 21; (l_29 != (-6)); --l_29)
    { 
        uint32_t l_85 = 18446744073709551610UL;
        int32_t l_106[4][4] = {{0xD6AA3471L,0x061077F7L,0x36C4C452L,0x36C4C452L},{0x2EB4CE56L,0x2EB4CE56L,(-8L),0x061077F7L},{0x061077F7L,0xD6AA3471L,(-8L),0xD6AA3471L},{0x2EB4CE56L,0x9EE1F001L,0x36C4C452L,(-8L)}};
        int i, j;
        for (p_14.f0 = 0; (p_14.f0 >= 50); p_14.f0++)
        { 
            struct S0 l_89 = {0L,7UL};
            l_85--;
            l_89 = g_88;
        }
        l_106[3][3] = (g_90 , (safe_mod_func_uint64_t_u_u(((safe_sub_func_uint8_t_u_u((g_28[2] = (safe_mul_func_uint8_t_u_u(255UL, (safe_mul_func_int16_t_s_s((!(safe_lshift_func_int8_t_s_s(((((~g_90.f0) > (((!(safe_sub_func_int8_t_s_s((((p_13.f2.f1 != g_88.f0) || 0xE7D9L) <= 0x9C27L), g_18[0]))) != 0xB9L) ^ 18446744073709551613UL)) , g_90.f3) , g_90.f3), 1))), 0xABD7L))))), g_18[0])) < 1UL), p_13.f3)));
    }
    return p_13.f4;
}





int test_main(void)
{
    int i, j;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_18[i], "g_18[i]", print_hash_value);

    }
    transparent_crc(g_27, "g_27", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_28[i], "g_28[i]", print_hash_value);

    }
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_63[i], "g_63[i]", print_hash_value);

    }
    transparent_crc(g_88.f0, "g_88.f0", print_hash_value);
    transparent_crc(g_88.f1, "g_88.f1", print_hash_value);
    transparent_crc(g_90.f0, "g_90.f0", print_hash_value);
    transparent_crc(g_90.f1, "g_90.f1", print_hash_value);
    transparent_crc(g_90.f2.f0, "g_90.f2.f0", print_hash_value);
    transparent_crc(g_90.f2.f1, "g_90.f2.f1", print_hash_value);
    transparent_crc(g_90.f3, "g_90.f3", print_hash_value);
    transparent_crc(g_90.f4, "g_90.f4", print_hash_value);
    transparent_crc(g_107.f0, "g_107.f0", print_hash_value);
    transparent_crc(g_107.f1, "g_107.f1", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_116[i][j], "g_116[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_151, "g_151", print_hash_value);
    transparent_crc(g_162, "g_162", print_hash_value);
    transparent_crc(g_176, "g_176", print_hash_value);
    transparent_crc(g_244, "g_244", print_hash_value);
    transparent_crc(g_263, "g_263", print_hash_value);
    transparent_crc(g_293.f0, "g_293.f0", print_hash_value);
    transparent_crc(g_339, "g_339", print_hash_value);
    transparent_crc(g_387, "g_387", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
