// SPDX-License-Identifier: MIT
// cctest_csmith_e0c24a7f.c --- cctest case csmith_e0c24a7f (csmith seed 3770829439)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x6a1ad204 */

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

// Options:   -s 3770829439 -o /tmp/csmith_gen_00cczteg/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   uint32_t  f0;
};
#pragma pack(pop)

union U2 {
   const int64_t  f0;
   int64_t  f1;
   uint64_t  f2;
   struct S0  f3;
};

union U3 {
   const int32_t  f0;
};


static const uint8_t g_2[3][5][2] = {{{1UL,0UL},{0UL,1UL},{0UL,0UL},{1UL,0UL},{0UL,1UL}},{{0UL,0UL},{1UL,0UL},{0UL,1UL},{0UL,0UL},{1UL,0UL}},{{0UL,1UL},{0UL,0UL},{1UL,0UL},{0UL,1UL},{0UL,0UL}}};
static int64_t g_3 = 0xF023498E64E6DC66LL;
static uint64_t g_4[2][2] = {{2UL,2UL},{2UL,2UL}};
static uint64_t g_5 = 18446744073709551615UL;
static int32_t g_8 = 0xA278C007L;
static uint32_t g_9 = 0xA8CF1D65L;
static struct S0 g_22 = {8UL};
static uint64_t g_40[1] = {1UL};
static const union U3 g_65 = {0L};
static uint32_t g_66 = 7UL;
static uint64_t g_73 = 0x1E181F3B01A63326LL;
static int8_t g_96 = 0L;
static uint32_t g_124 = 0UL;
static int16_t g_138[1] = {0L};
static uint32_t g_154 = 4294967295UL;
static int32_t g_167 = (-1L);
static int16_t g_168 = 0L;
static int32_t g_169[4] = {0xC7C79251L,0xC7C79251L,0xC7C79251L,0xC7C79251L};
static int64_t g_171 = 0L;
static int16_t g_179 = (-1L);
static uint32_t g_190[2] = {0xC32144EDL,0xC32144EDL};
static int32_t g_208 = 0xCC9C74A2L;
static int64_t g_209 = (-7L);
static int32_t g_210 = 0x2578D85DL;
static int32_t g_211 = 1L;
static uint16_t g_212 = 65535UL;



static uint32_t  func_1(void);
static struct S0  func_12(uint16_t  p_13, uint64_t  p_14);
static union U2  func_44(struct S0  p_45, uint32_t  p_46);
static int32_t  func_53(union U3  p_54, int16_t  p_55, int16_t  p_56);




static uint32_t  func_1(void)
{ 
    int64_t l_26 = (-7L);
    int32_t l_34 = 0x24E8160AL;
    int32_t l_107 = 0xAE2BFF8CL;
    int16_t l_151 = (-1L);
    int8_t l_162 = 1L;
    int16_t l_165 = (-3L);
    int32_t l_170 = 0xC5F837D8L;
    uint8_t l_174 = 0xB6L;
    int32_t l_207 = 0x657793BCL;
    g_3 = g_2[2][4][0];
    for (g_3 = 0; (g_3 <= 1); g_3 += 1)
    { 
        int8_t l_15 = 0xB2L;
        uint8_t l_25[2];
        int i;
        for (i = 0; i < 2; i++)
            l_25[i] = 252UL;
        ++g_5;
        for (g_5 = 0; (g_5 <= 1); g_5 += 1)
        { 
            uint8_t l_39 = 0xA5L;
            for (g_8 = 1; (g_8 >= 0); g_8 -= 1)
            { 
                int i, j;
                g_9++;
                g_22 = func_12(g_4[g_5][g_3], l_15);
            }
            for (g_22.f0 = 0; (g_22.f0 <= 1); g_22.f0 += 1)
            { 
                l_26 = (safe_sub_func_uint32_t_u_u(l_25[0], 0UL));
                return g_5;
            }
            for (l_26 = 1; (l_26 >= 0); l_26 -= 1)
            { 
                uint32_t l_27 = 5UL;
                int32_t l_41[4][1] = {{1L},{0x01EED764L},{1L},{0x01EED764L}};
                int i, j;
                if (g_5)
                    break;
                l_27--;
                l_41[2][0] &= (safe_add_func_int16_t_s_s(((((((safe_div_func_uint64_t_u_u(0xE3F50E16FFA942F3LL, l_27)) <= ((g_40[0] = ((l_34 = 0x9EL) < (((safe_lshift_func_int16_t_s_s(((safe_mod_func_uint16_t_u_u(((l_39 | g_2[2][4][0]) & l_25[0]), l_26)) >= g_4[1][1]), l_26)) != l_39) ^ 0xD1AFC438L))) >= 0x88C924DFL)) && 0x103B8AF7L) ^ l_26) >= 0xA5AAL) <= 0x06L), (-10L)));
            }
        }
    }
    if (g_2[2][4][0])
    { 
        uint8_t l_49[1][5];
        struct S0 l_114 = {0x50A10410L};
        uint64_t l_115 = 0x9F0F192DB62A355CLL;
        int8_t l_161 = 0x96L;
        int32_t l_172 = 0x70C76364L;
        int32_t l_173 = (-1L);
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 5; j++)
                l_49[i][j] = 0UL;
        }
lbl_195:
        if (((((l_26 , (safe_add_func_uint64_t_u_u(((func_44(func_12(((l_26 < (safe_lshift_func_uint16_t_u_u((g_40[0] < ((l_34 != l_34) < l_49[0][4])), g_4[1][0]))) && 0L), l_49[0][4]), l_49[0][4]) , g_96) | 0x8BL), l_26))) & g_2[2][4][0]) & g_8) , g_9))
        { 
            int16_t l_105 = (-10L);
            union U3 l_106[4] = {{0x6A42263FL},{0x6A42263FL},{0x6A42263FL},{0x6A42263FL}};
            int32_t l_112 = 0L;
            int32_t l_113 = 0x7B61520CL;
            int i;
            for (g_9 = 29; (g_9 == 34); ++g_9)
            { 
                return g_8;
            }
            for (g_3 = (-16); (g_3 > (-3)); g_3 = safe_add_func_int32_t_s_s(g_3, 8))
            { 
                return l_105;
            }
            g_8 = (l_106[3] , ((l_107 , ((safe_mul_func_int8_t_s_s(0L, (func_44((l_114 = ((safe_mod_func_int32_t_s_s(((l_113 ^= ((l_112 &= 0xD70CC316L) >= g_2[2][4][0])) ^ l_49[0][4]), g_96)) , g_22)), l_49[0][4]) , l_115))) >= g_4[0][1])) , 0xD0E8CD9EL));
        }
        else
        { 
            int32_t l_152 = 1L;
            int32_t l_153[2];
            uint32_t l_163[5] = {0xBDB59DC4L,0xBDB59DC4L,0xBDB59DC4L,0xBDB59DC4L,0xBDB59DC4L};
            const int8_t l_164[5][1] = {{0xE7L},{0x18L},{0xE7L},{0x18L},{0xE7L}};
            struct S0 l_166 = {6UL};
            int i, j;
            for (i = 0; i < 2; i++)
                l_153[i] = 0x149F6EF7L;
            g_8 ^= (safe_add_func_int64_t_s_s((func_12((safe_rshift_func_uint8_t_u_s((safe_add_func_uint32_t_u_u(l_115, (safe_lshift_func_int16_t_s_s(((g_124 > (safe_lshift_func_uint8_t_u_s((safe_rshift_func_int16_t_s_u(0xE43FL, 11)), (safe_add_func_int64_t_s_s((safe_sub_func_int32_t_s_s((safe_add_func_uint16_t_u_u((g_138[0] |= (safe_div_func_int32_t_s_s((!g_96), g_65.f0))), g_66)), g_66)), 0xFD10EC6483D34BCDLL))))) > 0x9C8172F04658BA9BLL), g_66)))), g_22.f0)), g_66) , g_5), g_2[2][4][0]));
            g_154 = (safe_mul_func_uint8_t_u_u(9UL, (l_153[0] = ((safe_mod_func_int32_t_s_s((g_8 = (((safe_mod_func_uint8_t_u_u((((safe_div_func_int32_t_s_s(g_66, g_138[0])) || ((safe_rshift_func_int16_t_s_u((safe_mod_func_uint32_t_u_u(1UL, 1UL)), l_151)) != 0x89B2D0C04BEFBA41LL)) & g_40[0]), l_152)) && 0x9DBEB4C7L) | 0x25340061L)), g_5)) > l_34))));
            if ((((((safe_mod_func_int32_t_s_s((safe_add_func_uint32_t_u_u(g_5, (safe_sub_func_uint64_t_u_u(g_96, (l_162 ^= (l_26 , (g_5 , l_161))))))), (-9L))) || g_40[0]) ^ 0x36B57048L) && l_163[4]) , l_164[4][0]))
            { 
                return l_165;
            }
            else
            { 
                l_166 = func_12(((1UL > (g_3 |= g_124)) <= g_5), l_153[0]);
                ++l_174;
            }
        }
        if (((safe_mod_func_uint8_t_u_u((g_179 ^= 0UL), (func_44(func_12(((g_171 || 2UL) <= (safe_rshift_func_uint16_t_u_u((((safe_unary_minus_func_int64_t_s(((0xF6D2L > 0L) >= l_49[0][1]))) == 0x3FL) == 0xE6CEL), 11))), g_138[0]), l_162) , 255UL))) < g_138[0]))
        { 
            int64_t l_188 = (-10L);
            int32_t l_189[1];
            int i;
            for (i = 0; i < 1; i++)
                l_189[i] = 4L;
            for (l_165 = 3; (l_165 >= 0); l_165 -= 1)
            { 
                int i;
                return g_169[l_165];
            }
            for (g_154 = 10; (g_154 < 51); g_154++)
            { 
                uint32_t l_185 = 18446744073709551611UL;
                g_8 = 0x5DF624FEL;
                ++l_185;
                --g_190[1];
            }
            for (l_162 = 23; (l_162 != 14); l_162 = safe_sub_func_int16_t_s_s(l_162, 9))
            { 
                if (l_165)
                    goto lbl_195;
            }
        }
        else
        { 
            g_167 = (safe_div_func_int16_t_s_s((!(0xA654L >= 0x5A9FL)), l_107));
        }
        l_34 ^= g_138[0];
    }
    else
    { 
        int64_t l_203 = 1L;
        int32_t l_204 = (-1L);
        int64_t l_205[1];
        int32_t l_206[1][2];
        int i, j;
        for (i = 0; i < 1; i++)
            l_205[i] = 5L;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 2; j++)
                l_206[i][j] = (-1L);
        }
        g_167 &= (((l_151 , (g_190[1] && (((safe_rshift_func_uint16_t_u_s(l_165, 7)) | (l_204 &= ((safe_rshift_func_uint16_t_u_s(l_203, 13)) > 0x07L))) != 255UL))) >= g_190[1]) == g_8);
        --g_212;
    }
    return g_138[0];
}



static struct S0  func_12(uint16_t  p_13, uint64_t  p_14)
{ 
    uint64_t l_19[3];
    int i;
    for (i = 0; i < 3; i++)
        l_19[i] = 0x39E63A5BED857289LL;
    for (p_14 = 0; (p_14 == 4); p_14++)
    { 
        for (g_9 = 0; (g_9 <= 1); g_9 += 1)
        { 
            int32_t l_18 = 1L;
            int i, j;
            l_18 |= g_4[g_9][g_9];
            for (p_13 = 0; (p_13 <= 1); p_13 += 1)
            { 
                int i, j;
                if (g_4[g_9][g_9])
                    break;
            }
            if (p_14)
                break;
        }
        --l_19[1];
        if (p_13)
            break;
    }
    return g_22;
}



static union U2  func_44(struct S0  p_45, uint32_t  p_46)
{ 
    union U3 l_57 = {-6L};
    int32_t l_78 = 0x4C7F453AL;
    int32_t l_98 = 5L;
    int32_t l_99[2];
    union U2 l_100 = {1L};
    int i;
    for (i = 0; i < 2; i++)
        l_99[i] = 0xADE8EBF9L;
    l_78 = (!((safe_mul_func_int8_t_s_s(g_8, (func_53(l_57, (0x3CL || (p_46 , 0x18L)), p_46) & l_57.f0))) & l_57.f0));
    l_78 = (safe_add_func_uint32_t_u_u(((safe_sub_func_int8_t_s_s((l_99[0] |= (safe_mod_func_int16_t_s_s((+(safe_sub_func_uint32_t_u_u((l_78 != 0xFFE8L), (safe_mul_func_int16_t_s_s((safe_unary_minus_func_uint64_t_u((safe_add_func_uint8_t_u_u(((l_98 = ((!(safe_rshift_func_int16_t_s_s((g_96 = p_46), ((!g_65.f0) <= 0xC2DF4B1D3DE27ED8LL)))) != 8UL)) < l_57.f0), (-1L))))), p_45.f0))))), g_66))), 0xB8L)) ^ 0x6BC85F6474A04015LL), p_45.f0));
    return l_100;
}



static int32_t  func_53(union U3  p_54, int16_t  p_55, int16_t  p_56)
{ 
    int32_t l_60 = 0x93BBC761L;
    if (((g_40[0] && (l_60 <= l_60)) == (safe_sub_func_int8_t_s_s((safe_div_func_uint8_t_u_u(((g_65 , g_8) >= g_5), l_60)), p_55))))
    { 
        --g_66;
    }
    else
    { 
        uint64_t l_69 = 0x5D12CBED49F2EA6DLL;
        int32_t l_72 = 1L;
        --l_69;
        --g_73;
        l_60 |= (safe_rshift_func_uint16_t_u_s(0xC2FCL, 8));
    }
    return p_55;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_2[i][j][k], "g_2[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_3, "g_3", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_4[i][j], "g_4[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_5, "g_5", print_hash_value);
    transparent_crc(g_8, "g_8", print_hash_value);
    transparent_crc(g_9, "g_9", print_hash_value);
    transparent_crc(g_22.f0, "g_22.f0", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_40[i], "g_40[i]", print_hash_value);

    }
    transparent_crc(g_65.f0, "g_65.f0", print_hash_value);
    transparent_crc(g_66, "g_66", print_hash_value);
    transparent_crc(g_73, "g_73", print_hash_value);
    transparent_crc(g_96, "g_96", print_hash_value);
    transparent_crc(g_124, "g_124", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_138[i], "g_138[i]", print_hash_value);

    }
    transparent_crc(g_154, "g_154", print_hash_value);
    transparent_crc(g_167, "g_167", print_hash_value);
    transparent_crc(g_168, "g_168", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_169[i], "g_169[i]", print_hash_value);

    }
    transparent_crc(g_171, "g_171", print_hash_value);
    transparent_crc(g_179, "g_179", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_190[i], "g_190[i]", print_hash_value);

    }
    transparent_crc(g_208, "g_208", print_hash_value);
    transparent_crc(g_209, "g_209", print_hash_value);
    transparent_crc(g_210, "g_210", print_hash_value);
    transparent_crc(g_211, "g_211", print_hash_value);
    transparent_crc(g_212, "g_212", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
