// SPDX-License-Identifier: MIT
// cctest_csmith_72880c37.c --- cctest case csmith_72880c37 (csmith seed 1921518647)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xd1397d07 */

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

// Options:   -s 1921518647 -o /tmp/csmith_gen_ljo70j35/csmith.c --concise --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   const int16_t  f0;
};
#pragma pack(pop)

#pragma pack(push)
#pragma pack(1)
struct S1 {
   uint32_t  f0;
   uint16_t  f1;
   int32_t  f2;
};
#pragma pack(pop)

struct S2 {
   const uint32_t  f0;
};

#pragma pack(push)
#pragma pack(1)
struct S3 {
   const int64_t  f0;
   const uint32_t  f1;
   uint64_t  f2;
   uint8_t  f3;
   const struct S0  f4;
   int32_t  f5;
};
#pragma pack(pop)

union U4 {
   uint64_t  f0;
   int32_t  f1;
   int32_t  f2;
   struct S2  f3;
};


static int32_t g_2 = 1L;
static int32_t g_12 = 6L;
static uint64_t g_15 = 0x683648BD921B0AE2LL;
static struct S2 g_25 = {0x8C458A92L};
static union U4 g_32 = {0UL};
static struct S0 g_40 = {-4L};
static int32_t g_44 = 1L;
static uint8_t g_49 = 0UL;
static int32_t g_85 = 0x61B3E233L;
static uint16_t g_96 = 65535UL;
static uint32_t g_100 = 0x0454F8DAL;
static uint8_t g_102 = 0UL;
static uint64_t g_111 = 0x0B67C402FB512259LL;
static uint64_t *g_110[2] = {&g_111,&g_111};
static uint64_t **g_109 = &g_110[1];
static uint8_t g_132 = 0xF1L;
static struct S1 g_135[3] = {{1UL,0UL,-1L},{1UL,0UL,-1L},{1UL,0UL,-1L}};
static uint64_t **g_141 = (void*)0;
static int64_t g_172 = 0xF65D561E864F27C2LL;
static int64_t g_191 = 1L;
static int64_t g_211 = 1L;
static int8_t g_212 = 0L;
static struct S2 g_224[4] = {{0x54F28CA5L},{0x54F28CA5L},{0x54F28CA5L},{0x54F28CA5L}};
static struct S2 *g_223 = &g_224[1];
static int8_t *g_234 = &g_212;
static int16_t g_269[1][7][6] = {{{(-4L),0x8579L,0x40B1L,(-8L),0xE348L,1L},{0x8DDFL,(-4L),0x40B1L,0L,0x40B1L,(-4L)},{0x9EDBL,0L,1L,7L,(-6L),0x706CL},{7L,(-6L),0x706CL,0x40B1L,0x7838L,(-1L)},{1L,(-6L),0x2525L,0x2525L,(-6L),1L},{(-6L),0L,(-4L),0x8579L,0x40B1L,(-8L)},{0x2525L,(-1L),0x438FL,0L,0x7838L,0x2525L}}};
static uint32_t g_271 = 7UL;
static uint64_t g_350 = 0xC5F3EB5371327729LL;
static int8_t g_365 = 0x74L;
static uint32_t g_374 = 0xA56F00ADL;
static int32_t g_381 = 0L;
static int64_t g_382 = 1L;
static uint32_t g_383 = 18446744073709551615UL;
static struct S0 *g_386 = &g_40;
static int32_t *g_389 = &g_381;
static struct S3 g_407 = {0x337B8D0DE64FCCB9LL,18446744073709551613UL,18446744073709551615UL,0xE6L,{0xC674L},0x49AF966FL};
static int64_t g_441 = 0x8089FA9871E9C7BFLL;
static int16_t g_442 = 1L;
static int8_t g_443 = 0L;
static int32_t g_444 = 0x56F5464CL;
static uint32_t g_447[3] = {0x0C148EE5L,0x0C148EE5L,0x0C148EE5L};
static struct S2 **g_484 = (void*)0;
static const int8_t *g_499 = &g_443;
static const int8_t **g_498 = &g_499;
static const int8_t *** const g_497 = &g_498;
static const int8_t *** const *g_496 = &g_497;
static int8_t **g_623 = &g_234;
static int8_t ***g_622 = &g_623;
static struct S2 ***g_648 = (void*)0;
static struct S2 ****g_647 = &g_648;
static const uint32_t g_667 = 9UL;
static int16_t g_718 = 1L;
static int32_t g_719 = 0L;
static int32_t g_738 = 0xE04A047FL;
static int16_t g_755 = 0x3516L;
static uint16_t *g_759 = &g_135[1].f1;
static uint16_t **g_758 = &g_759;
static struct S3 g_770 = {0xF5C01F232201C15ALL,18446744073709551611UL,0UL,0xB6L,{0x666AL},1L};
static struct S3 *g_769 = &g_770;
static int32_t g_783[4][1][2] = {{{0xC231FB0CL,0x714022B2L}},{{0x714022B2L,0xC231FB0CL}},{{0x714022B2L,0x714022B2L}},{{0xC231FB0CL,0x714022B2L}}};
static uint8_t *g_901 = &g_102;
static uint64_t ***g_963 = (void*)0;
static uint64_t ****g_962 = &g_963;
static int8_t g_1008[1] = {0x9EL};
static uint32_t g_1009[3][4] = {{4294967295UL,0x1546F4BFL,4294967295UL,0x5ACEF4BCL},{4294967295UL,0x5ACEF4BCL,0x5ACEF4BCL,4294967295UL},{0x2492F2D4L,0x5ACEF4BCL,1UL,0x5ACEF4BCL}};
static struct S2 g_1024[4][5] = {{{1UL},{0x58C40844L},{1UL},{1UL},{0x58C40844L}},{{1UL},{6UL},{6UL},{1UL},{6UL}},{{0x58C40844L},{0x58C40844L},{4294967295UL},{0x58C40844L},{0x58C40844L}},{{6UL},{1UL},{6UL},{6UL},{1UL}}};
static struct S0 **g_1048 = &g_386;
static struct S1 *g_1116 = &g_135[2];
static struct S1 **g_1115 = &g_1116;
static uint32_t *g_1122 = &g_1009[2][2];
static int32_t g_1145 = 0xBEDD576EL;
static const int8_t ***g_1195 = &g_498;
static const int8_t ****g_1194 = &g_1195;
static const int8_t *****g_1193 = &g_1194;
static uint8_t g_1291 = 250UL;
static struct S3 g_1351[1] = {{0x6F1C3EA9872DD878LL,0xA58F3D0AL,0x255F1222AB40FE2DLL,0x5BL,{0L},0xFF04557CL}};
static struct S0 g_1502[6][4][5] = {{{{-1L},{-1L},{0x2553L},{0x9E8BL},{0x9842L}},{{-1L},{7L},{0x800BL},{7L},{-1L}},{{-6L},{0xFB6CL},{0L},{0x9E8BL},{0L}},{{1L},{0xFB6CL},{0x126FL},{-1L},{2L}}},{{{0x93B8L},{7L},{0x8FF6L},{0xFB6CL},{0L}},{{-10L},{-1L},{0x8FF6L},{-1L},{-1L}},{{0L},{0xF4D7L},{0x126FL},{0xD34DL},{0x9842L}},{{-10L},{-10L},{0L},{0xD34DL},{0x93B8L}}},{{{0x93B8L},{0x6135L},{0x800BL},{-1L},{2L}},{{1L},{-10L},{0x2553L},{0xFB6CL},{2L}},{{-6L},{0xF4D7L},{0x6763L},{-1L},{0x93B8L}},{{-1L},{-1L},{0x2553L},{0x9E8BL},{0x9842L}}},{{{-1L},{7L},{0x800BL},{7L},{-1L}},{{-6L},{0xFB6CL},{0L},{0x9E8BL},{0L}},{{1L},{0xFB6CL},{0x126FL},{-1L},{2L}},{{0x93B8L},{7L},{0x8FF6L},{0xFB6CL},{0L}}},{{{-10L},{-1L},{0x8FF6L},{-1L},{-1L}},{{0L},{0xF4D7L},{0x126FL},{0xD34DL},{0x9842L}},{{-10L},{-10L},{0L},{0xD34DL},{0x93B8L}},{{0x93B8L},{0x6135L},{0x800BL},{-1L},{2L}}},{{{1L},{-10L},{0x2553L},{0xFB6CL},{2L}},{{-6L},{0xF4D7L},{0x6763L},{-1L},{0x93B8L}},{{-1L},{-1L},{0x2553L},{0x9E8BL},{0x9842L}},{{-1L},{7L},{0x800BL},{7L},{-1L}}}};
static struct S0 *g_1501 = &g_1502[2][2][2];
static struct S0 g_1504[5] = {{0x3891L},{0x3891L},{0x3891L},{0x3891L},{0x3891L}};
static int32_t ***g_1507 = (void*)0;
static uint16_t g_1546[2][1] = {{0xE217L},{0xE217L}};
static int32_t *****g_1551 = (void*)0;
static int32_t g_1581[1] = {4L};
static const uint16_t g_1623 = 0xEFA1L;
static struct S3 **g_1683 = (void*)0;
static struct S3 ***g_1682 = &g_1683;
static struct S3 **** const g_1681[2][3][2] = {{{&g_1682,(void*)0},{&g_1682,&g_1682},{(void*)0,&g_1682}},{{&g_1682,(void*)0},{&g_1682,&g_1682},{(void*)0,&g_1682}}};
static int16_t g_1793 = (-10L);
static struct S2 * const *g_1871 = (void*)0;
static struct S2 * const * const *g_1870 = &g_1871;
static const uint64_t *g_1897 = &g_350;
static const uint64_t **g_1896 = &g_1897;
static const uint64_t ***g_1895 = &g_1896;
static const uint64_t ****g_1894[4] = {&g_1895,&g_1895,&g_1895,&g_1895};
static int32_t g_1995 = 0xABC4E034L;
static union U4 g_1999[1] = {{0x2A4AEFEBDB793716LL}};
static struct S2 *****g_2005[5][7][7] = {{{(void*)0,&g_647,&g_647,&g_647,&g_647,&g_647,&g_647},{&g_647,&g_647,&g_647,(void*)0,&g_647,&g_647,&g_647},{&g_647,&g_647,(void*)0,&g_647,&g_647,(void*)0,&g_647},{&g_647,&g_647,&g_647,(void*)0,(void*)0,&g_647,&g_647},{(void*)0,&g_647,(void*)0,&g_647,&g_647,(void*)0,&g_647},{&g_647,&g_647,&g_647,&g_647,(void*)0,&g_647,&g_647},{(void*)0,&g_647,&g_647,&g_647,&g_647,&g_647,&g_647}},{{&g_647,&g_647,&g_647,(void*)0,&g_647,&g_647,&g_647},{&g_647,&g_647,(void*)0,&g_647,&g_647,(void*)0,&g_647},{&g_647,&g_647,&g_647,(void*)0,(void*)0,&g_647,&g_647},{(void*)0,&g_647,(void*)0,&g_647,&g_647,(void*)0,&g_647},{&g_647,&g_647,&g_647,&g_647,(void*)0,&g_647,&g_647},{(void*)0,&g_647,&g_647,&g_647,&g_647,&g_647,&g_647},{&g_647,&g_647,&g_647,(void*)0,&g_647,&g_647,&g_647}},{{&g_647,&g_647,(void*)0,&g_647,&g_647,(void*)0,&g_647},{&g_647,&g_647,&g_647,(void*)0,(void*)0,&g_647,&g_647},{(void*)0,&g_647,(void*)0,&g_647,&g_647,(void*)0,&g_647},{&g_647,&g_647,&g_647,&g_647,(void*)0,&g_647,&g_647},{(void*)0,&g_647,&g_647,&g_647,&g_647,&g_647,&g_647},{&g_647,&g_647,&g_647,(void*)0,&g_647,&g_647,&g_647},{&g_647,&g_647,(void*)0,&g_647,&g_647,(void*)0,&g_647}},{{&g_647,&g_647,&g_647,(void*)0,(void*)0,&g_647,&g_647},{(void*)0,&g_647,(void*)0,&g_647,&g_647,(void*)0,&g_647},{&g_647,&g_647,&g_647,&g_647,(void*)0,&g_647,&g_647},{(void*)0,&g_647,&g_647,&g_647,&g_647,&g_647,&g_647},{&g_647,&g_647,&g_647,(void*)0,&g_647,&g_647,&g_647},{&g_647,&g_647,(void*)0,&g_647,&g_647,&g_647,&g_647},{&g_647,&g_647,(void*)0,&g_647,&g_647,(void*)0,&g_647}},{{&g_647,&g_647,&g_647,&g_647,&g_647,&g_647,&g_647},{&g_647,&g_647,(void*)0,&g_647,&g_647,(void*)0,&g_647},{&g_647,&g_647,&g_647,&g_647,&g_647,&g_647,&g_647},{&g_647,&g_647,(void*)0,&g_647,&g_647,(void*)0,&g_647},{&g_647,&g_647,&g_647,&g_647,&g_647,&g_647,&g_647},{&g_647,&g_647,(void*)0,&g_647,&g_647,(void*)0,&g_647},{&g_647,&g_647,&g_647,&g_647,&g_647,&g_647,&g_647}}};
static struct S3 g_2069 = {0xBB2C49D043EAC45ELL,0x5FBF0111L,0x00FC0BCF6CA8C15BLL,255UL,{0xB806L},0xFC5A8DF5L};
static int32_t *g_2089 = &g_1351[0].f5;
static int64_t ****g_2098[1] = {(void*)0};
static int64_t *g_2103 = &g_172;
static int64_t **g_2102 = &g_2103;
static int64_t ***g_2101 = &g_2102;
static int64_t ****g_2100 = &g_2101;
static const union U4 *g_2226 = &g_1999[0];
static const union U4 **g_2225[7][7][1] = {{{&g_2226},{&g_2226},{(void*)0},{(void*)0},{&g_2226},{&g_2226},{&g_2226}},{{&g_2226},{&g_2226},{&g_2226},{(void*)0},{(void*)0},{&g_2226},{&g_2226}},{{&g_2226},{&g_2226},{&g_2226},{&g_2226},{&g_2226},{&g_2226},{&g_2226}},{{&g_2226},{&g_2226},{&g_2226},{&g_2226},{(void*)0},{(void*)0},{&g_2226}},{{&g_2226},{&g_2226},{&g_2226},{&g_2226},{&g_2226},{(void*)0},{(void*)0}},{{&g_2226},{&g_2226},{&g_2226},{&g_2226},{&g_2226},{&g_2226},{&g_2226}},{{&g_2226},{&g_2226},{&g_2226},{&g_2226},{&g_2226},{&g_2226},{(void*)0}}};
static const union U4 ***g_2224[5][2] = {{(void*)0,&g_2225[3][2][0]},{(void*)0,(void*)0},{&g_2225[3][2][0],(void*)0},{(void*)0,&g_2225[3][2][0]},{(void*)0,(void*)0}};
static uint64_t g_2326 = 6UL;
static const uint16_t *g_2338 = &g_1546[1][0];
static const uint16_t **g_2337[6] = {&g_2338,&g_2338,&g_2338,&g_2338,&g_2338,&g_2338};
static int32_t g_2416 = (-2L);
static int64_t g_2446[6][7] = {{0xCE96B779C63C4078LL,0xCE96B779C63C4078LL,0xCE96B779C63C4078LL,0xCE96B779C63C4078LL,0xCE96B779C63C4078LL,0xCE96B779C63C4078LL,0xCE96B779C63C4078LL},{0xCE96B779C63C4078LL,0xCE96B779C63C4078LL,0xCE96B779C63C4078LL,0xCE96B779C63C4078LL,0xCE96B779C63C4078LL,0xCE96B779C63C4078LL,0xCE96B779C63C4078LL},{0xCE96B779C63C4078LL,0xCE96B779C63C4078LL,0xCE96B779C63C4078LL,0xCE96B779C63C4078LL,0xCE96B779C63C4078LL,0xCE96B779C63C4078LL,0xCE96B779C63C4078LL},{0xCE96B779C63C4078LL,0xCE96B779C63C4078LL,0xCE96B779C63C4078LL,0xCE96B779C63C4078LL,0xCE96B779C63C4078LL,0xCE96B779C63C4078LL,0xCE96B779C63C4078LL},{0xCE96B779C63C4078LL,0xCE96B779C63C4078LL,0xCE96B779C63C4078LL,0xCE96B779C63C4078LL,0xCE96B779C63C4078LL,0xCE96B779C63C4078LL,0xCE96B779C63C4078LL},{0xCE96B779C63C4078LL,0xCE96B779C63C4078LL,0xCE96B779C63C4078LL,0xCE96B779C63C4078LL,0xCE96B779C63C4078LL,0xCE96B779C63C4078LL,0xCE96B779C63C4078LL}};
static const int64_t g_2463 = 0L;
static uint16_t * const *g_2510 = (void*)0;
static uint16_t * const **g_2509 = &g_2510;
static uint16_t * const ***g_2508 = &g_2509;
static union U4 g_2569 = {0x8026D626AAE363CALL};
static int8_t *** const *g_2581 = (void*)0;
static int8_t *** const **g_2580 = &g_2581;
static int8_t *** const **g_2582 = &g_2581;
static int8_t * const g_2614 = (void*)0;
static int8_t * const *g_2613 = &g_2614;
static int8_t * const **g_2612 = &g_2613;
static int8_t * const ***g_2611 = &g_2612;
static int8_t * const ****g_2610 = &g_2611;
static int8_t *****g_2618 = (void*)0;
static union U4 *g_2655 = &g_2569;
static union U4 ** const g_2654 = &g_2655;
static union U4 ** const *g_2653[4] = {&g_2654,&g_2654,&g_2654,&g_2654};
static union U4 ** const ** const g_2652 = &g_2653[0];
static union U4 ** const ** const *g_2651[3][2] = {{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}};
static union U4 ** const **g_2657 = &g_2653[3];
static union U4 ** const ** const *g_2656 = &g_2657;
static uint64_t g_2692[2] = {0x6A342CFCF3885F11LL,0x6A342CFCF3885F11LL};



static struct S2  func_1(void);
static uint16_t  func_7(uint64_t  p_8, struct S2  p_9, int64_t  p_10, int32_t  p_11);
static uint16_t  func_21(uint64_t  p_22, struct S2  p_23, uint64_t * p_24);
static uint64_t * func_26(uint64_t * p_27, uint64_t  p_28, uint64_t * p_29, uint64_t  p_30, uint64_t * p_31);
static uint64_t * func_33(uint64_t * const  p_34, uint8_t  p_35, uint32_t  p_36);
static uint64_t * const  func_37(const uint32_t  p_38, struct S0  p_39);
static int32_t * func_55(struct S0 * p_56, uint16_t  p_57);
static struct S0 * func_58(uint8_t  p_59, struct S0  p_60, struct S0 * p_61, union U4  p_62, uint16_t  p_63);




static struct S2  func_1(void)
{ 
    uint64_t *l_1873[3];
    uint32_t l_2002 = 1UL;
    uint16_t l_2039 = 0x7DC7L;
    uint8_t l_2081 = 6UL;
    int64_t ****l_2096 = (void*)0;
    struct S3 l_2112 = {1L,0x44B096C1L,0UL,0x94L,{-2L},0xAA24507AL};
    int32_t l_2142 = (-10L);
    int32_t l_2144[4][4] = {{1L,0L,(-1L),0xCCA6FC75L},{1L,(-1L),1L,0xC35FE4B8L},{0L,0xCCA6FC75L,0xC35FE4B8L,0xC35FE4B8L},{0xBC2A6A2BL,0xBC2A6A2BL,(-1L),0xC35FE4B8L}};
    int32_t **l_2177[2][4] = {{&g_389,&g_389,&g_389,&g_389},{&g_389,&g_389,&g_389,&g_389}};
    int32_t *l_2182 = &l_2142;
    uint32_t l_2208 = 4UL;
    int16_t l_2210 = 0xA7B2L;
    union U4 l_2229 = {0xB46F29196D5CE486LL};
    const int32_t *l_2258 = &g_12;
    int16_t l_2300 = 0x70B9L;
    uint16_t l_2335 = 6UL;
    struct S2 l_2336 = {0x22B2DA22L};
    uint8_t **l_2342 = &g_901;
    struct S0 *l_2387 = &g_1504[0];
    union U4 l_2391 = {0x8F3A96992DCF73A7LL};
    int8_t *l_2403 = (void*)0;
    uint16_t **l_2425 = (void*)0;
    uint16_t **l_2427[6];
    uint64_t l_2430[5] = {0x036C9CCC711592DCLL,0x036C9CCC711592DCLL,0x036C9CCC711592DCLL,0x036C9CCC711592DCLL,0x036C9CCC711592DCLL};
    const struct S3 l_2431 = {0x62F18343B473CA6CLL,0x9D29D476L,0x9A769CB271E6F07ALL,0x7AL,{1L},0xEF5A8CD9L};
    int32_t l_2449 = (-1L);
    uint8_t l_2454 = 250UL;
    int8_t l_2480[6][4][4] = {{{(-7L),(-1L),1L,0xE5L},{0xABL,0x2DL,1L,0xDCL},{(-7L),0xE5L,(-6L),0xE5L},{(-7L),0xDCL,1L,0x2DL}},{{0xABL,0xE5L,1L,(-1L)},{(-7L),0x2DL,(-6L),0x2DL},{(-7L),(-1L),1L,0xE5L},{0xABL,0x2DL,1L,0xDCL}},{{(-7L),0xE5L,(-6L),0xE5L},{(-7L),0xDCL,1L,0x2DL},{0xABL,0xE5L,1L,(-1L)},{(-7L),0x2DL,(-6L),0x2DL}},{{(-7L),(-1L),1L,0xE5L},{0xABL,0x2DL,1L,0xDCL},{(-7L),0xE5L,(-6L),0xE5L},{(-7L),0xDCL,1L,0x2DL}},{{0xABL,0xE5L,1L,(-1L)},{(-7L),0x2DL,(-6L),0x2DL},{(-7L),(-1L),1L,0xE5L},{0xABL,0x2DL,1L,0xDCL}},{{(-7L),0xE5L,(-6L),0xE5L},{(-7L),0xDCL,1L,0x2DL},{0xABL,0xE5L,1L,(-1L)},{(-7L),0x2DL,(-6L),0x2DL}}};
    uint32_t l_2505 = 4294967292UL;
    int8_t ***l_2547 = &g_623;
    uint64_t l_2550 = 0xE662C939D4B5287ALL;
    int32_t l_2561[2][2][3] = {{{(-1L),(-1L),(-1L)},{2L,2L,2L}},{{(-1L),(-1L),(-1L)},{2L,2L,2L}}};
    struct S1 l_2565 = {1UL,0xBA33L,1L};
    uint8_t l_2576[2][4] = {{0x0CL,251UL,251UL,0x0CL},{251UL,0x0CL,251UL,251UL}};
    struct S3 ****l_2595 = &g_1682;
    uint8_t l_2641 = 255UL;
    int32_t *l_2642 = &g_783[3][0][0];
    uint64_t l_2663[3][1][4] = {{{18446744073709551611UL,18446744073709551611UL,0x85748553BB460943LL,18446744073709551611UL}},{{18446744073709551611UL,4UL,4UL,18446744073709551611UL}},{{4UL,18446744073709551611UL,4UL,4UL}}};
    int8_t l_2681 = 1L;
    uint32_t l_2683 = 1UL;
    uint32_t l_2684[1];
    uint16_t l_2748 = 65534UL;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_1873[i] = &g_111;
    for (i = 0; i < 6; i++)
        l_2427[i] = &g_759;
    for (i = 0; i < 1; i++)
        l_2684[i] = 7UL;
    for (g_2 = 0; (g_2 == 18); g_2++)
    { 
        uint64_t *l_13 = (void*)0;
        uint64_t *l_14 = &g_15;
        struct S2 l_18[5][4] = {{{8UL},{0x220C4365L},{8UL},{0x11C3FC02L}},{{8UL},{0x11C3FC02L},{0x11C3FC02L},{8UL}},{{1UL},{0x11C3FC02L},{4294967293UL},{0x11C3FC02L}},{{0x11C3FC02L},{0x220C4365L},{4294967293UL},{4294967293UL}},{{1UL},{1UL},{0x11C3FC02L},{4294967293UL}}};
        uint8_t l_1874 = 8UL;
        int i, j;
    }
    return l_2336;
}



static uint16_t  func_7(uint64_t  p_8, struct S2  p_9, int64_t  p_10, int32_t  p_11)
{ 
    struct S2 l_2000[2][2] = {{{6UL},{6UL}},{{6UL},{6UL}}};
    int32_t *l_2001 = &g_783[0][0][0];
    int i, j;
    (*l_2001) = (l_2000[0][0] , l_2000[0][0].f0);
    return (*l_2001);
}



static uint16_t  func_21(uint64_t  p_22, struct S2  p_23, uint64_t * p_24)
{ 
    int32_t *l_1877 = (void*)0;
    int32_t **l_1878 = (void*)0;
    int32_t **l_1879 = &l_1877;
    int32_t l_1880 = 0x73FA74E8L;
    int32_t *l_1881[1][6][4] = {{{&g_444,&g_444,&g_783[0][0][0],&g_444},{&g_444,&g_1145,&g_1145,&g_444},{&g_1145,&g_444,&g_1145,&g_1145},{&g_444,&g_444,&g_783[0][0][0],&g_444},{&g_444,&g_1145,&g_1145,&g_444},{&g_1145,&g_444,&g_783[0][0][0],&g_783[0][0][0]}}};
    uint64_t l_1882 = 0x00B6BB71F5B83236LL;
    struct S2 ***l_1887[1];
    struct S3 l_1888 = {0L,0UL,0xECECF07BCF07C5B5LL,0xCAL,{0x4618L},-5L};
    int8_t **l_1919 = &g_234;
    struct S1 ***l_1961 = &g_1115;
    uint32_t l_1967[1];
    struct S0 *l_1973 = &g_1502[2][1][3];
    union U4 *l_1997[1];
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_1887[i] = &g_484;
    for (i = 0; i < 1; i++)
        l_1967[i] = 0x47B9EBB8L;
    for (i = 0; i < 1; i++)
        l_1997[i] = &g_32;
    (*l_1879) = (g_389 = l_1877);
lbl_1982:
    ++l_1882;
    if ((safe_add_func_int16_t_s_s(((*g_769) , ((**g_758) , p_23.f0)), (l_1887[0] == (l_1888 , l_1887[0])))))
    { 
        struct S1 l_1900[7] = {{0xD6F144E6L,0x305DL,1L},{0xD6F144E6L,0x305DL,1L},{1UL,0UL,0x54F13C5BL},{0xD6F144E6L,0x305DL,1L},{0xD6F144E6L,0x305DL,1L},{1UL,0UL,0x54F13C5BL},{0xD6F144E6L,0x305DL,1L}};
        int32_t l_1904[1][2][5] = {{{6L,0x77C5217AL,6L,(-1L),(-1L)},{6L,0x77C5217AL,6L,(-1L),(-1L)}}};
        int16_t l_1941[3];
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_1941[i] = 0xFB38L;
        for (g_365 = 0; (g_365 <= (-30)); g_365 = safe_sub_func_uint64_t_u_u(g_365, 3))
        { 
            const uint64_t ****l_1893[1];
            struct S2 ****l_1903 = &l_1887[0];
            int32_t l_1905[6][3][2] = {{{0L,0x1C64A6AAL},{8L,0x1CC19CE4L},{8L,0x1C64A6AAL}},{{0L,8L},{0x1C64A6AAL,0x1CC19CE4L},{1L,1L}},{{0L,1L},{1L,0x1CC19CE4L},{0x1C64A6AAL,8L}},{{0L,0x1C64A6AAL},{8L,0x1CC19CE4L},{8L,0x1C64A6AAL}},{{0L,8L},{0x1C64A6AAL,0x1CC19CE4L},{1L,1L}},{{0L,1L},{1L,0x1CC19CE4L},{0x1C64A6AAL,8L}}};
            int32_t l_1920[5] = {0xB7DF5815L,0xB7DF5815L,0xB7DF5815L,0xB7DF5815L,0xB7DF5815L};
            int32_t l_1921 = 0xBF097A65L;
            uint8_t l_1925[4];
            uint64_t l_1942 = 18446744073709551606UL;
            int i, j, k;
            for (i = 0; i < 1; i++)
                l_1893[i] = (void*)0;
            for (i = 0; i < 4; i++)
                l_1925[i] = 4UL;
            for (g_100 = 0; (g_100 < 19); ++g_100)
            { 
                uint16_t l_1901 = 3UL;
                g_1894[2] = (l_1893[0] = l_1893[0]);
                for (g_770.f3 = 0; (g_770.f3 <= 41); ++g_770.f3)
                { 
                    struct S1 l_1902[4] = {{18446744073709551615UL,0UL,0x28250C84L},{18446744073709551615UL,0UL,0x28250C84L},{18446744073709551615UL,0UL,0x28250C84L},{18446744073709551615UL,0UL,0x28250C84L}};
                    int i;
                    l_1901 |= (l_1900[4] , p_22);
                    l_1904[0][1][4] = ((l_1902[1] , &l_1887[0]) == l_1903);
                }
            }
            if (l_1905[4][0][0])
                continue;
            if ((l_1921 |= (l_1920[0] = ((safe_sub_func_int8_t_s_s((***g_497), ((safe_sub_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s((*g_759), (safe_lshift_func_int8_t_s_u(1L, 4)))), ((safe_mod_func_int64_t_s_s(((((l_1905[4][0][0] , ((*g_901) = (((((l_1905[4][0][0] = 0xC82AL) > (safe_div_func_uint64_t_u_u(((!(l_1900[4].f0 ^ ((void*)0 != l_1919))) , 0UL), g_738))) ^ (*g_1122)) , g_383) >= p_22))) ^ p_22) ^ p_22) == p_22), p_23.f0)) | 0x38DBL))) || 0x35097342469F36D1LL))) != (-1L)))))
            { 
                int16_t l_1924 = (-1L);
                for (g_407.f2 = 1; (g_407.f2 == 20); ++g_407.f2)
                { 
                    ++l_1925[1];
                    if (l_1924)
                        break;
                    (*l_1879) = (void*)0;
                }
            }
            else
            { 
                uint32_t l_1935 = 1UL;
                uint8_t *l_1940 = &g_1351[0].f3;
                g_381 ^= (~(((*g_901) || ((p_22 == 0xE6L) > (safe_rshift_func_uint8_t_u_u((((safe_add_func_int64_t_s_s((((safe_rshift_func_int16_t_s_s((((*g_759) = l_1935) < (0x7216L < l_1900[4].f0)), 6)) >= (safe_sub_func_uint64_t_u_u(((safe_mul_func_int16_t_s_s(((void*)0 == l_1940), l_1904[0][0][2])) | (****g_496)), p_22))) | 0x80DCL), l_1941[2])) != l_1941[0]) & 0xC6EEL), (*g_901))))) < l_1942));
            }
        }
        (*l_1879) = (*l_1879);
    }
    else
    { 
        int32_t *l_1943 = (void*)0;
        int32_t l_1948 = 0x4AB59AAEL;
        int16_t *l_1962 = (void*)0;
        int16_t *l_1963 = (void*)0;
        int16_t *l_1964 = &g_755;
        int64_t l_1965[5][5][7] = {{{0L,0xDB32D01748A08B48LL,0L,2L,0x2F3EDE07814D3EBALL,0xA6BC5C46DD6D1A2CLL,1L},{0xC4794A2E41900A92LL,0L,1L,0x4AB04F23BBD0684ELL,0xE7C01311A8442FF7LL,1L,0xE7C01311A8442FF7LL},{0xFE4585834F1392CELL,9L,9L,0xFE4585834F1392CELL,2L,0xE5D103E3F41634A9LL,0xDB804AA7427170C2LL},{(-9L),0x4AB04F23BBD0684ELL,0xB50EA4D293688452LL,0x91861119DDCFF213LL,(-1L),0x3ABCEB28F9C27C39LL,0x91861119DDCFF213LL},{0x2F3EDE07814D3EBALL,2L,0xE1E3D9EAB4E28E1BLL,0L,0x2F332B96E4C41057LL,(-2L),0xDB804AA7427170C2LL}},{{1L,(-9L),0xBCD6943DB45351F6LL,0xC3BF50761CC1CA41LL,(-3L),0xB50EA4D293688452LL,0xE7C01311A8442FF7LL},{0x65B0F11CFE7027BFLL,0x2F332B96E4C41057LL,2L,0xFD9737959798ABE7LL,(-4L),0L,1L},{1L,0x0A28056D25B6853CLL,1L,0L,0L,1L,0x0A28056D25B6853CLL},{(-10L),0xA6BC5C46DD6D1A2CLL,0x65B0F11CFE7027BFLL,0x2F3EDE07814D3EBALL,0x05CB68ECC8B13541LL,0xE5D103E3F41634A9LL,0xA555B641AD984B97LL},{0x3ABCEB28F9C27C39LL,1L,(-3L),0xB395A1074D295E80LL,0xFE68CD6DE017A5A6LL,0L,0x3ABCEB28F9C27C39LL}},{{0xA555B641AD984B97LL,0L,0L,0x2F3EDE07814D3EBALL,0x2F332B96E4C41057LL,0xE79012C7F51A0EF7LL,(-10L)},{0x0A28056D25B6853CLL,0x3ABCEB28F9C27C39LL,1L,0L,0x3ABCEB28F9C27C39LL,0xB395A1074D295E80LL,1L},{1L,(-10L),0x05CB68ECC8B13541LL,0xFD9737959798ABE7LL,0xDB32D01748A08B48LL,0x65B0F11CFE7027BFLL,0x65B0F11CFE7027BFLL},{0xE7C01311A8442FF7LL,0xC3BF50761CC1CA41LL,0xA04D4ECA3FFA980ALL,0xC3BF50761CC1CA41LL,0xE7C01311A8442FF7LL,1L,1L},{0xDB804AA7427170C2LL,0L,0x65B0F11CFE7027BFLL,0L,0L,1L,0x2F3EDE07814D3EBALL}},{{0x91861119DDCFF213LL,(-1L),0x3ABCEB28F9C27C39LL,0x91861119DDCFF213LL,0xC3BF50761CC1CA41LL,0L,(-9L)},{0xDB804AA7427170C2LL,0L,0x15E37134CB9F5508LL,0xFE4585834F1392CELL,(-10L),0xC37EBCFC9DF3F78ELL,0xFE4585834F1392CELL},{0xE7C01311A8442FF7LL,0L,0xBCD6943DB45351F6LL,0x4AB04F23BBD0684ELL,0xB395A1074D295E80LL,1L,0xC4794A2E41900A92LL},{1L,0x05CB68ECC8B13541LL,(-2L),0xB3D8EE908FD96369LL,0xFDF48074EB357DC5LL,0xB3D8EE908FD96369LL,(-2L)},{0xB50EA4D293688452LL,0xB50EA4D293688452LL,1L,0L,(-3L),(-1L),0xCB312177902DE13CLL}},{{0xE5D103E3F41634A9LL,0x15E37134CB9F5508LL,0x2C19D9DEFE6A6B0ALL,9L,0xC37EBCFC9DF3F78ELL,0x2C19D9DEFE6A6B0ALL,2L},{9L,(-1L),0x7EF710AD74D60716LL,(-6L),(-3L),1L,0x837323B676A03C11LL},{0xEA50B42D1614CDCELL,0xFD9737959798ABE7LL,0xDB804AA7427170C2LL,2L,0xFDF48074EB357DC5LL,0xA555B641AD984B97LL,0xEA50B42D1614CDCELL},{0L,1L,0xA04D4ECA3FFA980ALL,1L,0x7EF710AD74D60716LL,0L,0x91861119DDCFF213LL},{0x15E37134CB9F5508LL,0xEA50B42D1614CDCELL,0xC37EBCFC9DF3F78ELL,0xC37EBCFC9DF3F78ELL,0xEA50B42D1614CDCELL,0x15E37134CB9F5508LL,0xEC192BA42D5C98AALL}}};
        int64_t *l_1966 = &g_382;
        int i, j, k;
        l_1943 = ((*g_223) , l_1943);
        for (g_738 = 0; (g_738 != 10); g_738 = safe_add_func_int32_t_s_s(g_738, 5))
        { 
            g_12 |= (-1L);
        }
        (*g_1116) = (((safe_mod_func_int16_t_s_s(((((*l_1966) |= (0x39L < (((*g_1122) = ((l_1948 && (safe_mul_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u((safe_add_func_int8_t_s_s((((safe_mul_func_int16_t_s_s((safe_mul_func_uint8_t_u_u((p_23.f0 == (safe_add_func_int16_t_s_s(((**g_758) == ((p_23.f0 < ((*l_1964) = (l_1961 == l_1961))) && g_770.f4.f0)), 0L))), 0xBEL)), p_23.f0)) > (**g_1896)) ^ l_1948), p_22)), l_1965[2][0][0])), p_23.f0))) != p_22)) == p_23.f0))) >= p_23.f0) | l_1967[0]), (*g_759))) || p_22) , (***l_1961));
    }
    for (g_32.f1 = (-2); (g_32.f1 >= 10); g_32.f1 = safe_add_func_uint16_t_u_u(g_32.f1, 4))
    { 
        uint64_t l_1970 = 1UL;
        int64_t ***l_1971 = (void*)0;
        int32_t *l_1981[4][7][1] = {{{&g_85},{&g_719},{&g_44},{&g_719},{&g_85},{&l_1880},{&g_85}},{{&g_719},{&g_44},{&g_719},{&g_85},{&l_1880},{&g_85},{&g_719}},{{&g_44},{&g_719},{&g_85},{&l_1880},{&g_85},{&g_719},{&g_44}},{{&g_719},{&g_85},{&l_1880},{&g_85},{&g_719},{&g_44},{&g_719}}};
        struct S0 *l_1993[6];
        int i, j, k;
        for (i = 0; i < 6; i++)
            l_1993[i] = (void*)0;
        g_1145 = p_22;
        for (g_718 = 0; g_718 < 1; g_718 += 1)
        {
            g_1581[g_718] = 1L;
        }
        if (l_1970)
            continue;
        for (g_1145 = 0; (g_1145 <= 0); g_1145 += 1)
        { 
            int64_t ****l_1972 = &l_1971;
            int32_t *l_1980 = &g_719;
            uint16_t l_1992 = 0x6B96L;
            (*l_1972) = l_1971;
            for (l_1970 = 0; (l_1970 <= 3); l_1970 += 1)
            { 
                return p_22;
            }
            if (p_22)
                continue;
            for (l_1882 = 0; (l_1882 <= 3); l_1882 += 1)
            { 
                struct S1 l_1975 = {0x5F9DEB34L,65535UL,0x3A407F44L};
                int32_t l_1983 = 0x66309722L;
                uint64_t *l_1984 = (void*)0;
                uint64_t *l_1985 = &g_770.f2;
                int64_t l_1994 = 0xBE91876A4405924CLL;
                union U4 *l_1998 = &g_1999[0];
                int i, j, k;
                l_1881[g_1145][(g_1145 + 4)][g_1145] = l_1881[g_1145][(l_1882 + 2)][g_1145];
                if (p_23.f0)
                    break;
                for (g_12 = 0; (g_12 <= 0); g_12 += 1)
                { 
                    uint32_t *l_1979 = &g_447[0];
                    int i, j, k;
                    l_1881[g_1145][(g_12 + 2)][(g_1145 + 3)] = (void*)0;
                    l_1981[3][6][0] = l_1980;
                    if (g_32.f1)
                        goto lbl_1982;
                }
                (*l_1980) = ((((*g_901) = p_23.f0) == (((*l_1985) ^= l_1983) | ((((safe_lshift_func_uint8_t_u_s((*l_1980), (0UL || (*g_1897)))) & p_23.f0) , (((((safe_add_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u((*g_759), 13)), l_1992)) <= p_23.f0) || p_23.f0) , (void*)0) == l_1993[2])) ^ l_1994))) < g_1995);
                (*l_1980) = (safe_unary_minus_func_int16_t_s((((l_1998 = l_1997[0]) == l_1997[0]) & g_770.f1)));
            }
        }
        return (*g_759);
    }
    return p_22;
}



static uint64_t * func_26(uint64_t * p_27, uint64_t  p_28, uint64_t * p_29, uint64_t  p_30, uint64_t * p_31)
{ 
    struct S3 l_1875 = {-9L,0x7D1027E5L,0x23613516B41ECE9BLL,250UL,{1L},-1L};
    uint8_t l_1876 = 0x32L;
    (*g_389) ^= (l_1875 , l_1876);
    return (*g_109);
}



static uint64_t * func_33(uint64_t * const  p_34, uint8_t  p_35, uint32_t  p_36)
{ 
    int32_t *l_1862 = (void*)0;
    int32_t **l_1863 = (void*)0;
    uint64_t *l_1867[4][7][6] = {{{(void*)0,&g_1351[0].f2,&g_770.f2,&g_111,&g_1351[0].f2,(void*)0},{&g_407.f2,(void*)0,&g_111,&g_770.f2,&g_111,(void*)0},{&g_32.f0,&g_32.f0,&g_770.f2,&g_407.f2,&g_1351[0].f2,&g_770.f2},{&g_32.f0,&g_111,&g_1351[0].f2,&g_770.f2,(void*)0,&g_1351[0].f2},{&g_407.f2,&g_111,&g_32.f0,&g_111,&g_1351[0].f2,&g_1351[0].f2},{(void*)0,&g_32.f0,&g_32.f0,(void*)0,&g_111,&g_1351[0].f2},{&g_770.f2,(void*)0,&g_1351[0].f2,(void*)0,&g_1351[0].f2,&g_770.f2}},{{(void*)0,&g_1351[0].f2,&g_770.f2,&g_111,&g_1351[0].f2,(void*)0},{&g_407.f2,(void*)0,&g_111,&g_770.f2,&g_111,(void*)0},{&g_32.f0,&g_32.f0,&g_770.f2,&g_407.f2,&g_1351[0].f2,&g_770.f2},{&g_32.f0,&g_111,&g_1351[0].f2,&g_770.f2,(void*)0,&g_1351[0].f2},{&g_407.f2,&g_111,&g_32.f0,&g_111,&g_1351[0].f2,&g_1351[0].f2},{(void*)0,&g_32.f0,&g_32.f0,(void*)0,&g_111,&g_1351[0].f2},{&g_770.f2,(void*)0,&g_1351[0].f2,(void*)0,&g_1351[0].f2,&g_770.f2}},{{(void*)0,&g_1351[0].f2,&g_770.f2,&g_111,&g_1351[0].f2,(void*)0},{&g_407.f2,(void*)0,&g_111,&g_770.f2,&g_111,(void*)0},{&g_32.f0,&g_32.f0,&g_770.f2,&g_407.f2,&g_1351[0].f2,&g_770.f2},{&g_32.f0,&g_111,&g_1351[0].f2,&g_770.f2,(void*)0,&g_1351[0].f2},{&g_407.f2,&g_111,&g_32.f0,&g_111,&g_1351[0].f2,&g_1351[0].f2},{&g_32.f0,&g_350,&g_350,&g_32.f0,&g_770.f2,(void*)0},{&g_770.f2,(void*)0,&g_1351[0].f2,&g_32.f0,(void*)0,&g_770.f2}},{{&g_32.f0,(void*)0,&g_770.f2,&g_1351[0].f2,(void*)0,(void*)0},{&g_1351[0].f2,(void*)0,&g_770.f2,&g_770.f2,&g_770.f2,(void*)0},{(void*)0,&g_350,&g_770.f2,&g_111,&g_1351[0].f2,&g_770.f2},{(void*)0,&g_770.f2,&g_1351[0].f2,&g_770.f2,&g_32.f0,(void*)0},{&g_1351[0].f2,&g_770.f2,&g_350,&g_1351[0].f2,&g_1351[0].f2,&g_1351[0].f2},{&g_32.f0,&g_350,&g_350,&g_32.f0,&g_770.f2,(void*)0},{&g_770.f2,(void*)0,&g_1351[0].f2,&g_32.f0,(void*)0,&g_770.f2}}};
    struct S1 l_1872 = {2UL,65533UL,0x9510A8C3L};
    int i, j, k;
    l_1862 = l_1862;
    for (g_770.f2 = (-18); (g_770.f2 < 6); g_770.f2 = safe_add_func_int32_t_s_s(g_770.f2, 1))
    { 
        struct S2 *l_1866 = &g_25;
        l_1866 = l_1866;
        if ((*g_389))
            continue;
        for (g_1793 = 0; g_1793 < 3; g_1793 += 1)
        {
            g_447[g_1793] = 2UL;
        }
        return l_1867[3][0][1];
    }
    (**g_1115) = (((safe_lshift_func_uint16_t_u_u(p_36, 15)) ^ (((void*)0 == g_1870) != (*g_1122))) , l_1872);
    return l_1867[3][0][1];
}



static uint64_t * const  func_37(const uint32_t  p_38, struct S0  p_39)
{ 
    uint64_t l_72 = 18446744073709551614UL;
    int8_t l_1451 = 0xEDL;
    int32_t l_1475[5];
    union U4 *l_1477 = &g_32;
    struct S3 *l_1524 = &g_1351[0];
    int32_t *l_1554 = &g_1145;
    uint8_t **l_1558 = &g_901;
    struct S1 **l_1574[7][3] = {{&g_1116,&g_1116,&g_1116},{(void*)0,&g_1116,&g_1116},{&g_1116,&g_1116,&g_1116},{&g_1116,&g_1116,&g_1116},{(void*)0,&g_1116,&g_1116},{&g_1116,&g_1116,&g_1116},{&g_1116,&g_1116,&g_1116}};
    uint64_t l_1575 = 0x2CCD7A7F9D02473CLL;
    uint8_t *l_1576 = &g_1291;
    uint16_t l_1577 = 0x0FD4L;
    uint16_t *l_1578 = &g_96;
    uint16_t *l_1579 = (void*)0;
    uint16_t *l_1580 = &g_1546[0][0];
    int32_t l_1582 = 0x3B9857B4L;
    int64_t l_1613 = (-5L);
    struct S2 *****l_1619 = &g_647;
    int8_t *l_1731 = &g_1008[0];
    uint64_t l_1747 = 0x6418BC157D91EA3DLL;
    union U4 **l_1772 = &l_1477;
    union U4 ***l_1771 = &l_1772;
    uint16_t l_1801 = 0x0816L;
    int64_t l_1834 = (-1L);
    uint32_t l_1852 = 0xD36E863FL;
    struct S0 l_1856[5][6] = {{{0xB99DL},{2L},{-2L},{9L},{-2L},{2L}},{{0x8884L},{0xB99DL},{-2L},{-1L},{1L},{9L}},{{0L},{-1L},{2L},{2L},{-1L},{0L}},{{2L},{-1L},{0L},{9L},{1L},{-2L}},{{-2L},{0xB99DL},{0x8884L},{0xB99DL},{-2L},{-1L}}};
    int32_t **l_1861 = &g_389;
    int i, j;
    for (i = 0; i < 5; i++)
        l_1475[i] = 0L;
    return (*g_109);
}



static int32_t * func_55(struct S0 * p_56, uint16_t  p_57)
{ 
    uint64_t ** const * const l_805 = (void*)0;
    int32_t l_806 = 0xB00074CAL;
    int8_t l_809 = 0xB3L;
    struct S2 *l_810[6][7][4] = {{{&g_25,&g_25,&g_25,(void*)0},{(void*)0,&g_25,&g_25,&g_224[0]},{(void*)0,(void*)0,&g_224[1],(void*)0},{(void*)0,&g_25,&g_224[1],&g_224[1]},{&g_224[3],&g_224[1],&g_224[2],&g_224[2]},{&g_224[1],&g_224[1],&g_224[1],&g_224[2]},{&g_25,&g_224[2],&g_224[1],&g_224[1]}},{{&g_224[1],&g_224[1],(void*)0,&g_224[1]},{&g_224[1],&g_224[1],&g_224[2],&g_224[1]},{&g_224[1],&g_224[2],&g_25,&g_224[2]},{(void*)0,&g_224[1],&g_224[3],&g_224[2]},{&g_224[1],&g_224[1],&g_25,&g_224[1]},{&g_224[0],&g_25,(void*)0,(void*)0},{&g_224[1],(void*)0,&g_25,&g_224[0]}},{{&g_25,&g_25,&g_224[1],(void*)0},{&g_224[2],&g_25,&g_224[2],&g_224[1]},{&g_224[1],(void*)0,&g_224[1],&g_224[1]},{&g_224[1],&g_224[1],&g_25,&g_25},{(void*)0,&g_224[3],&g_25,(void*)0},{(void*)0,&g_224[2],&g_224[1],(void*)0},{&g_224[2],&g_224[1],&g_224[2],(void*)0}},{{&g_224[1],&g_25,(void*)0,&g_224[0]},{(void*)0,&g_224[1],(void*)0,&g_224[3]},{(void*)0,&g_224[1],&g_224[2],&g_224[1]},{(void*)0,&g_224[0],&g_224[1],(void*)0},{(void*)0,&g_25,(void*)0,&g_224[2]},{&g_224[1],&g_25,&g_224[2],(void*)0},{&g_224[1],&g_25,&g_224[1],&g_25}},{{&g_224[1],&g_224[1],&g_224[1],&g_224[1]},{&g_224[1],&g_224[0],&g_224[2],&g_224[1]},{&g_224[1],&g_224[2],(void*)0,&g_224[1]},{(void*)0,&g_224[1],&g_224[1],&g_224[0]},{(void*)0,&g_224[1],&g_224[2],&g_224[2]},{(void*)0,(void*)0,(void*)0,&g_224[3]},{(void*)0,&g_25,(void*)0,&g_224[2]}},{{&g_25,&g_224[3],&g_224[1],&g_224[1]},{&g_224[3],(void*)0,(void*)0,&g_25},{&g_224[1],(void*)0,&g_25,&g_224[0]},{&g_25,&g_224[2],&g_25,&g_25},{(void*)0,&g_224[2],&g_25,&g_224[1]},{&g_224[1],(void*)0,&g_224[1],&g_224[1]},{&g_224[3],(void*)0,&g_224[2],&g_224[1]}}};
    struct S1 l_811[4][4][5] = {{{{0xA9DE1CB8L,65526UL,1L},{0x94B8D554L,65534UL,0x2260DDE4L},{0x94B8D554L,65534UL,0x2260DDE4L},{0xA9DE1CB8L,65526UL,1L},{0x94B8D554L,65534UL,0x2260DDE4L}},{{0x29C9F3EDL,0x896CL,0xFDEF0B55L},{0x29C9F3EDL,0x896CL,0xFDEF0B55L},{0x0CA28F48L,0xF1DAL,0x4CBBDCADL},{0x29C9F3EDL,0x896CL,0xFDEF0B55L},{0x29C9F3EDL,0x896CL,0xFDEF0B55L}},{{0x94B8D554L,65534UL,0x2260DDE4L},{0xA9DE1CB8L,65526UL,1L},{0x94B8D554L,65534UL,0x2260DDE4L},{0x94B8D554L,65534UL,0x2260DDE4L},{0xA9DE1CB8L,65526UL,1L}},{{0x29C9F3EDL,0x896CL,0xFDEF0B55L},{0x509388ABL,0xC61DL,-1L},{0x509388ABL,0xC61DL,-1L},{0x29C9F3EDL,0x896CL,0xFDEF0B55L},{0x509388ABL,0xC61DL,-1L}}},{{{0xA9DE1CB8L,65526UL,1L},{0xA9DE1CB8L,65526UL,1L},{0x5FE336F4L,0UL,1L},{0xA9DE1CB8L,65526UL,1L},{0xA9DE1CB8L,65526UL,1L}},{{0x509388ABL,0xC61DL,-1L},{0x29C9F3EDL,0x896CL,0xFDEF0B55L},{0x509388ABL,0xC61DL,-1L},{0x509388ABL,0xC61DL,-1L},{0x29C9F3EDL,0x896CL,0xFDEF0B55L}},{{0xA9DE1CB8L,65526UL,1L},{0x94B8D554L,65534UL,0x2260DDE4L},{0x94B8D554L,65534UL,0x2260DDE4L},{0xA9DE1CB8L,65526UL,1L},{0x94B8D554L,65534UL,0x2260DDE4L}},{{0x29C9F3EDL,0x896CL,0xFDEF0B55L},{0x29C9F3EDL,0x896CL,0xFDEF0B55L},{0x0CA28F48L,0xF1DAL,0x4CBBDCADL},{0x29C9F3EDL,0x896CL,0xFDEF0B55L},{0x29C9F3EDL,0x896CL,0xFDEF0B55L}}},{{{0x94B8D554L,65534UL,0x2260DDE4L},{0xA9DE1CB8L,65526UL,1L},{0x94B8D554L,65534UL,0x2260DDE4L},{0x94B8D554L,65534UL,0x2260DDE4L},{0xA9DE1CB8L,65526UL,1L}},{{0x29C9F3EDL,0x896CL,0xFDEF0B55L},{0x509388ABL,0xC61DL,-1L},{0x509388ABL,0xC61DL,-1L},{0x29C9F3EDL,0x896CL,0xFDEF0B55L},{0x509388ABL,0xC61DL,-1L}},{{0xA9DE1CB8L,65526UL,1L},{0xA9DE1CB8L,65526UL,1L},{0x5FE336F4L,0UL,1L},{0xA9DE1CB8L,65526UL,1L},{0xA9DE1CB8L,65526UL,1L}},{{0x509388ABL,0xC61DL,-1L},{0x29C9F3EDL,0x896CL,0xFDEF0B55L},{0x509388ABL,0xC61DL,-1L},{0x509388ABL,0xC61DL,-1L},{0x29C9F3EDL,0x896CL,0xFDEF0B55L}}},{{{0xA9DE1CB8L,65526UL,1L},{0x94B8D554L,65534UL,0x2260DDE4L},{0x94B8D554L,65534UL,0x2260DDE4L},{0xA9DE1CB8L,65526UL,1L},{0x94B8D554L,65534UL,0x2260DDE4L}},{{0x29C9F3EDL,0x896CL,0xFDEF0B55L},{0x29C9F3EDL,0x896CL,0xFDEF0B55L},{0x0CA28F48L,0xF1DAL,0x4CBBDCADL},{0x29C9F3EDL,0x896CL,0xFDEF0B55L},{0x29C9F3EDL,0x896CL,0xFDEF0B55L}},{{0x94B8D554L,65534UL,0x2260DDE4L},{0xA9DE1CB8L,65526UL,1L},{0x94B8D554L,65534UL,0x2260DDE4L},{0x94B8D554L,65534UL,0x2260DDE4L},{0xA9DE1CB8L,65526UL,1L}},{{0x29C9F3EDL,0x896CL,0xFDEF0B55L},{0x509388ABL,0xC61DL,-1L},{0x509388ABL,0xC61DL,-1L},{0x29C9F3EDL,0x896CL,0xFDEF0B55L},{0x509388ABL,0xC61DL,-1L}}}};
    int16_t l_828 = 1L;
    int32_t *l_866 = &g_444;
    int32_t l_869 = 0x3B6CE182L;
    struct S2 ** const *l_875[1];
    struct S2 ** const **l_874[7];
    uint32_t l_1036 = 0x2531D041L;
    uint32_t *l_1050 = &g_447[1];
    int32_t l_1150 = 0x4F6CB1CDL;
    int32_t l_1151 = 1L;
    int32_t l_1154 = 0x4DA6119CL;
    int32_t l_1155 = 0xEC9480B0L;
    int32_t l_1156 = 0xC78702E7L;
    int32_t l_1157 = (-4L);
    const int32_t l_1183[5][7][2] = {{{4L,(-1L)},{0x157403F0L,(-1L)},{4L,0x157403F0L},{0x7AEFC086L,0x7AEFC086L},{9L,0L},{4L,8L},{0L,(-1L)}},{{0x163BE2EEL,0L},{0x7AEFC086L,9L},{0x7AEFC086L,0L},{0x163BE2EEL,(-1L)},{0L,8L},{4L,0L},{9L,0x7AEFC086L}},{{0x7AEFC086L,0x487ED32AL},{(-6L),9L},{0x487ED32AL,9L},{(-6L),0x487ED32AL},{0x157403F0L,0x157403F0L},{0x5A17474EL,0x163BE2EEL},{(-6L),0xF6BAFCAAL}},{{0x163BE2EEL,9L},{1L,0x163BE2EEL},{0x157403F0L,0x5A17474EL},{0x157403F0L,0x163BE2EEL},{1L,9L},{0x163BE2EEL,0xF6BAFCAAL},{(-6L),0x163BE2EEL}},{{0x5A17474EL,0x157403F0L},{0x157403F0L,0x487ED32AL},{(-6L),9L},{0x487ED32AL,9L},{(-6L),0x487ED32AL},{0x157403F0L,0x157403F0L},{0x5A17474EL,0x163BE2EEL}}};
    int32_t l_1250 = 0xC45B4CE0L;
    union U4 l_1343[3][7] = {{{0xEEAAA649FDB64C34LL},{0xEEAAA649FDB64C34LL},{0xEEAAA649FDB64C34LL},{0xEEAAA649FDB64C34LL},{0xEEAAA649FDB64C34LL},{0xEEAAA649FDB64C34LL},{0xEEAAA649FDB64C34LL}},{{0xBD044070E1C73CD5LL},{0xBD044070E1C73CD5LL},{0xBD044070E1C73CD5LL},{0xBD044070E1C73CD5LL},{0xBD044070E1C73CD5LL},{0xBD044070E1C73CD5LL},{0xBD044070E1C73CD5LL}},{{0xEEAAA649FDB64C34LL},{0xEEAAA649FDB64C34LL},{0xEEAAA649FDB64C34LL},{0xEEAAA649FDB64C34LL},{0xEEAAA649FDB64C34LL},{0xEEAAA649FDB64C34LL},{0xEEAAA649FDB64C34LL}}};
    struct S2 **l_1377 = &l_810[2][6][0];
    struct S0 **l_1379 = &g_386;
    struct S3 l_1407 = {-1L,18446744073709551607UL,0xA9EAD3D7AE549C0ELL,0x9AL,{-1L},0xD0E38A30L};
    int32_t l_1421 = (-1L);
    int32_t l_1424 = 0xA69CE3D0L;
    int32_t l_1427 = (-6L);
    int32_t l_1428 = 0xCE897191L;
    int32_t l_1429[6] = {0x6B2D0C25L,0xBF9B1A64L,0xBF9B1A64L,0x6B2D0C25L,0xBF9B1A64L,0xBF9B1A64L};
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_875[i] = &g_484;
    for (i = 0; i < 7; i++)
        l_874[i] = &l_875[0];
lbl_863:
    if ((safe_div_func_uint8_t_u_u(((((void*)0 != l_805) <= 0x21L) | l_806), (safe_sub_func_uint8_t_u_u(p_57, ((((l_806 || l_809) , l_810[2][6][0]) == l_810[4][0][0]) & l_806))))))
    { 
        struct S1 *l_812 = &l_811[3][3][4];
        (*l_812) = l_811[3][3][4];
        g_135[1] = (*l_812);
    }
    else
    { 
        struct S1 *l_813[5][7] = {{&l_811[3][2][2],(void*)0,(void*)0,&l_811[3][2][2],(void*)0,(void*)0,&l_811[3][2][2]},{&l_811[1][1][0],&g_135[1],&l_811[1][1][0],&g_135[1],&g_135[1],&g_135[1],&l_811[1][1][0]},{&l_811[3][2][2],&l_811[3][2][2],&l_811[3][2][1],&l_811[3][2][2],&l_811[3][2][2],&l_811[3][2][1],&l_811[3][2][2]},{&g_135[1],&g_135[1],&l_811[1][1][0],&g_135[1],&l_811[1][1][0],&g_135[1],&g_135[1]},{(void*)0,&l_811[3][2][2],(void*)0,(void*)0,&l_811[3][2][2],(void*)0,(void*)0}};
        int i, j;
        l_811[1][0][3] = l_811[3][1][4];
    }
    for (g_212 = 4; (g_212 != 14); g_212 = safe_add_func_int8_t_s_s(g_212, 1))
    { 
        uint8_t l_870 = 0x2DL;
        int32_t l_892 = 0xBCB212DBL;
        uint8_t *l_900 = (void*)0;
        int32_t l_903[7][4][4] = {{{0xAE35AE44L,0xAE35AE44L,0x6124CD84L,0x5DA11266L},{3L,0L,(-4L),0x4A5916A0L},{(-1L),0xE5E03667L,0x540F901DL,(-4L)},{5L,0xE5E03667L,0L,0x4A5916A0L}},{{0xE5E03667L,0L,0xCD6BA936L,0x5DA11266L},{0x5F5D1174L,0xAE35AE44L,0xB1E46F9AL,0x366D3461L},{0xF49D958CL,(-4L),0xAE35AE44L,0x91411C61L},{0x412EEBB5L,3L,0x40FB0D66L,0xE5E03667L}},{{(-2L),0x82303986L,0L,0L},{0x332CE63FL,0x112C2423L,0x332CE63FL,(-2L)},{0xD075C2BCL,0x332CE63FL,0x3738B962L,0L},{0L,0x412EEBB5L,0x4A5916A0L,0x332CE63FL}},{{(-8L),0x5DA11266L,0x4A5916A0L,0xFEAF4958L},{0L,(-1L),0x3738B962L,0x5F5D1174L},{0xD075C2BCL,0x366D3461L,0x332CE63FL,(-1L)},{0x332CE63FL,(-1L),0L,0x40FB0D66L}},{{(-2L),0x6124CD84L,0x40FB0D66L,0xDF5E7335L},{0x412EEBB5L,0L,0xAE35AE44L,0x3738B962L},{0xF49D958CL,0xB1E46F9AL,0xB1E46F9AL,0xF49D958CL},{0x5F5D1174L,0x4A5916A0L,0xCD6BA936L,0x112C2423L}},{{0xE5E03667L,(-8L),0L,0xC57FC15BL},{5L,0xF49D958CL,0x540F901DL,0x91411C61L},{(-2L),0x412EEBB5L,0xE5E03667L,0x82303986L},{(-1L),0xFEAF4958L,0x5F5D1174L,0x6124CD84L}},{{1L,0xAE35AE44L,0xF49D958CL,0xC57FC15BL},{0x332CE63FL,0x4A5916A0L,0x412EEBB5L,0L},{0xF49D958CL,0x5F5D1174L,(-2L),0x366D3461L},{0xFEAF4958L,0x40FB0D66L,0x332CE63FL,0x40FB0D66L}}};
        uint32_t * const l_912 = (void*)0;
        struct S2 ***l_927 = &g_484;
        const int32_t l_1038[4] = {0xA446B1D2L,0xA446B1D2L,0xA446B1D2L,0xA446B1D2L};
        uint64_t **l_1040 = (void*)0;
        const struct S2 **l_1061 = (void*)0;
        const struct S2 ** const *l_1060[7][4] = {{&l_1061,&l_1061,&l_1061,&l_1061},{&l_1061,(void*)0,&l_1061,&l_1061},{&l_1061,&l_1061,&l_1061,&l_1061},{&l_1061,(void*)0,&l_1061,&l_1061},{&l_1061,&l_1061,&l_1061,&l_1061},{&l_1061,&l_1061,&l_1061,&l_1061},{&l_1061,(void*)0,&l_1061,&l_1061}};
        const struct S2 ** const **l_1059 = &l_1060[6][2];
        uint16_t l_1102 = 0x691EL;
        uint32_t *l_1121 = &g_1009[0][3];
        struct S1 *l_1137 = &g_135[2];
        uint16_t l_1142 = 1UL;
        int8_t ** const * const l_1179 = &g_623;
        int8_t ** const * const *l_1178 = &l_1179;
        int64_t l_1249 = 0xAC1527BD1A30BBC0LL;
        int8_t l_1272 = (-1L);
        struct S0 l_1277[7] = {{0xBD77L},{0xBD77L},{-4L},{0xBD77L},{0xBD77L},{-4L},{0xBD77L}};
        uint16_t **l_1316[5] = {&g_759,&g_759,&g_759,&g_759,&g_759};
        uint16_t ** const l_1317[5][5][7] = {{{&g_759,(void*)0,&g_759,&g_759,(void*)0,&g_759,(void*)0},{&g_759,&g_759,&g_759,&g_759,&g_759,&g_759,(void*)0},{(void*)0,&g_759,&g_759,&g_759,&g_759,&g_759,&g_759},{&g_759,(void*)0,(void*)0,&g_759,&g_759,&g_759,&g_759},{&g_759,&g_759,&g_759,(void*)0,(void*)0,(void*)0,&g_759}},{{&g_759,&g_759,&g_759,&g_759,(void*)0,&g_759,&g_759},{&g_759,&g_759,&g_759,&g_759,&g_759,&g_759,(void*)0},{&g_759,&g_759,&g_759,&g_759,&g_759,&g_759,&g_759},{(void*)0,&g_759,&g_759,(void*)0,&g_759,(void*)0,(void*)0},{&g_759,(void*)0,&g_759,&g_759,(void*)0,&g_759,&g_759}},{{&g_759,&g_759,&g_759,&g_759,&g_759,&g_759,(void*)0},{&g_759,&g_759,&g_759,&g_759,&g_759,&g_759,&g_759},{&g_759,&g_759,&g_759,(void*)0,&g_759,&g_759,(void*)0},{&g_759,&g_759,&g_759,&g_759,&g_759,&g_759,&g_759},{&g_759,&g_759,&g_759,&g_759,&g_759,&g_759,&g_759}},{{&g_759,&g_759,(void*)0,&g_759,&g_759,&g_759,&g_759},{&g_759,&g_759,&g_759,(void*)0,&g_759,&g_759,&g_759},{&g_759,&g_759,&g_759,(void*)0,(void*)0,&g_759,(void*)0},{&g_759,(void*)0,(void*)0,&g_759,(void*)0,(void*)0,(void*)0},{&g_759,&g_759,&g_759,&g_759,&g_759,&g_759,&g_759}},{{(void*)0,(void*)0,(void*)0,&g_759,(void*)0,&g_759,&g_759},{&g_759,&g_759,(void*)0,(void*)0,&g_759,(void*)0,&g_759},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&g_759,&g_759},{&g_759,&g_759,&g_759,&g_759,&g_759,(void*)0,&g_759},{&g_759,&g_759,&g_759,&g_759,&g_759,&g_759,(void*)0}}};
        int64_t l_1334 = 0xA8AB18645C7B8841LL;
        struct S3 *l_1350 = &g_1351[0];
        int i, j, k;
    }
    if ((&l_1036 == &g_374))
    { 
        if (l_809)
            goto lbl_863;
        return &g_85;
    }
    else
    { 
        int32_t *l_1402 = (void*)0;
        int32_t *l_1403[1][3];
        uint8_t l_1404 = 255UL;
        const struct S0 * const *l_1436 = (void*)0;
        int16_t l_1439 = 6L;
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 3; j++)
                l_1403[i][j] = &g_85;
        }
        l_1404++;
        for (g_443 = 0; (g_443 <= 0); g_443 += 1)
        { 
            int32_t l_1411 = 0x108D0F82L;
            int32_t l_1412 = 0xFE924E07L;
            int32_t l_1414 = 0x5889C148L;
            int32_t l_1416 = 0x77B863EFL;
            int32_t l_1418 = (-1L);
            int32_t l_1420 = 0x391837EBL;
            int32_t l_1422 = 0x156C6470L;
            int32_t l_1423 = (-4L);
            int32_t l_1425 = (-1L);
            int32_t l_1426[3][2][3] = {{{0x44B6BE00L,(-5L),(-5L)},{2L,(-5L),0L}},{{(-1L),(-5L),0x359482FDL},{0x44B6BE00L,(-5L),(-5L)}},{{2L,(-5L),0L},{(-1L),(-5L),0x359482FDL}}};
            uint32_t l_1430[1][7][2] = {{{0x534BD3B9L,0x534BD3B9L},{0x534BD3B9L,0x534BD3B9L},{0x534BD3B9L,0x534BD3B9L},{0x534BD3B9L,0x534BD3B9L},{0x534BD3B9L,0x534BD3B9L},{0x534BD3B9L,0x534BD3B9L},{0x534BD3B9L,0x534BD3B9L}}};
            union U4 l_1435 = {0UL};
            struct S0 ***l_1437[1][6] = {{&l_1379,&l_1379,&l_1379,&l_1379,&l_1379,&l_1379}};
            int i, j, k;
            l_811[3][1][4] = (l_1407 , ((**g_1115) = g_135[(g_443 + 1)]));
            for (g_1291 = 0; (g_1291 <= 0); g_1291 += 1)
            { 
                int32_t l_1408 = 0x4744DA23L;
                int32_t l_1409 = 0xAE61B983L;
                int32_t l_1410 = 0L;
                int32_t l_1413 = 0x0132ABA6L;
                int32_t l_1415 = 0x1AB48363L;
                int32_t l_1417 = 0xFF1A3AE8L;
                int32_t l_1419[2][1][3];
                int i, j, k;
                for (i = 0; i < 2; i++)
                {
                    for (j = 0; j < 1; j++)
                    {
                        for (k = 0; k < 3; k++)
                            l_1419[i][j][k] = (-1L);
                    }
                }
                (*l_866) = ((*g_389) |= g_135[(g_443 + 1)].f1);
                for (g_212 = 0; (g_212 <= 0); g_212 += 1)
                { 
                    int i, j, k;
                    if (g_269[g_212][(g_212 + 4)][(g_212 + 3)])
                        break;
                    (*g_389) &= (((*g_759) = 0x6C8CL) , ((*l_866) |= ((**g_1048) , 0x253AB187L)));
                    l_1403[g_443][(g_1291 + 2)] = l_1403[g_1291][(g_1291 + 2)];
                }
                l_1408 = ((((**g_623) &= p_57) || (*l_866)) || (*g_389));
                if (p_57)
                    break;
                l_1430[0][3][1]--;
                for (l_1414 = 0; (l_1414 >= 0); l_1414 -= 1)
                { 
                    return l_1403[0][1];
                }
            }
            l_1416 = (((!(**g_758)) ^ l_1426[1][0][2]) != (~(0L <= ((l_1435 , ((*g_1116) , (l_1436 = (void*)0))) != (l_1379 = &p_56)))));
            for (l_1428 = 0; (l_1428 <= 0); l_1428 += 1)
            { 
                int32_t l_1438[7][4][3] = {{{0L,0L,0x6BE26F2CL},{0x5461B713L,0xAEEAB79DL,0xAEEAB79DL},{0x6BE26F2CL,8L,6L},{0x5461B713L,0L,0x5461B713L}},{{0L,0x6BE26F2CL,6L},{(-6L),(-6L),0xAEEAB79DL},{0xEB936131L,0x6BE26F2CL,0x6BE26F2CL},{0xAEEAB79DL,0L,0xE0F4BCB5L}},{{0xEB936131L,8L,0xEB936131L},{(-6L),0xAEEAB79DL,0xE0F4BCB5L},{0L,0L,0x6BE26F2CL},{0x5461B713L,0xAEEAB79DL,0xAEEAB79DL}},{{0x6BE26F2CL,8L,6L},{0x5461B713L,0L,0x5461B713L},{0L,0x6BE26F2CL,6L},{(-6L),(-6L),0xAEEAB79DL}},{{0xEB936131L,0x6BE26F2CL,0x6BE26F2CL},{0xAEEAB79DL,0L,0xE0F4BCB5L},{0xEB936131L,8L,0xEB936131L},{(-6L),0xAEEAB79DL,0xE0F4BCB5L}},{{0L,0L,0x6BE26F2CL},{0x5461B713L,0xAEEAB79DL,0xAEEAB79DL},{0x6BE26F2CL,8L,6L},{0x5461B713L,0L,0x5461B713L}},{{0L,0x6BE26F2CL,6L},{(-6L),(-6L),0xAEEAB79DL},{0xEB936131L,0x6BE26F2CL,0x6BE26F2CL},{0xAEEAB79DL,0L,0xE0F4BCB5L}}};
                uint32_t l_1440 = 6UL;
                union U4 *l_1444 = &g_32;
                union U4 **l_1443 = &l_1444;
                struct S3 **l_1445 = (void*)0;
                struct S3 *l_1447[5];
                struct S3 **l_1446 = &l_1447[3];
                int i, j, k;
                for (i = 0; i < 5; i++)
                    l_1447[i] = &g_770;
                ++l_1440;
                (*l_1443) = &g_32;
                (*l_1446) = (g_769 = &l_1407);
                for (g_191 = 0; (g_191 <= 0); g_191 += 1)
                { 
                    uint32_t l_1448 = 18446744073709551609UL;
                    ++l_1448;
                }
            }
        }
    }
    return &g_719;
}



static struct S0 * func_58(uint8_t  p_59, struct S0  p_60, struct S0 * p_61, union U4  p_62, uint16_t  p_63)
{ 
    uint32_t l_86 = 18446744073709551606UL;
    int8_t l_148[6];
    int32_t l_198 = 0x246BF972L;
    int32_t l_210[2];
    struct S2 *l_220 = &g_25;
    uint64_t **l_239 = (void*)0;
    int64_t *l_268[7];
    const struct S0 *l_303 = &g_40;
    uint8_t * const l_334[2][3] = {{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}};
    int32_t l_346 = 0xF0431196L;
    const int64_t l_351 = 0x177D20EFBC22A8BALL;
    const struct S1 l_424 = {18446744073709551615UL,65535UL,1L};
    int16_t l_439 = 0xBC58L;
    uint64_t l_512 = 0UL;
    const uint16_t *l_515 = (void*)0;
    struct S2 ***l_516 = &g_484;
    int32_t *l_517[4][3] = {{&g_381,&g_381,(void*)0},{&g_381,&g_381,(void*)0},{&g_381,&g_381,(void*)0},{&g_381,&l_198,&g_381}};
    union U4 l_529 = {8UL};
    uint32_t *l_530 = &g_383;
    struct S2 l_533 = {5UL};
    int32_t l_547 = 0x66630447L;
    struct S3 l_558 = {-5L,0xD4A6B513L,0x3EDBDBDF9D0D41EALL,5UL,{2L},-7L};
    int8_t *** const l_626 = &g_623;
    const uint32_t *l_666 = &g_667;
    int16_t *l_676 = (void*)0;
    int16_t *l_677 = &l_439;
    int32_t *l_680 = &g_407.f5;
    int16_t *l_687[3][5] = {{&g_269[0][4][3],(void*)0,(void*)0,&g_269[0][6][4],(void*)0},{(void*)0,(void*)0,&g_269[0][4][3],&g_269[0][6][4],&g_442},{(void*)0,&g_269[0][4][3],&g_269[0][4][3],(void*)0,(void*)0}};
    uint16_t l_688 = 65535UL;
    int8_t *l_690 = &l_148[1];
    int8_t **l_689 = &l_690;
    uint32_t l_732[4][3];
    uint64_t ***l_764 = &l_239;
    uint64_t ****l_763 = &l_764;
    uint64_t *****l_762 = &l_763;
    int32_t l_771[1];
    int64_t l_781 = 0xE54C493BFAD4B773LL;
    struct S0 *l_802[1][4][6] = {{{&g_40,&g_40,&g_40,(void*)0,(void*)0,&g_40},{(void*)0,(void*)0,&g_40,(void*)0,(void*)0,&g_40},{(void*)0,(void*)0,&g_40,&g_40,&g_40,&g_40},{&g_40,&g_40,&g_40,(void*)0,(void*)0,&g_40}}};
    int i, j, k;
    for (i = 0; i < 6; i++)
        l_148[i] = 2L;
    for (i = 0; i < 2; i++)
        l_210[i] = 0x38CBB9BCL;
    for (i = 0; i < 7; i++)
        l_268[i] = &g_172;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
            l_732[i][j] = 0xB2E47B1CL;
    }
    for (i = 0; i < 1; i++)
        l_771[i] = 5L;
    return l_802[0][0][4];
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_12, "g_12", print_hash_value);
    transparent_crc(g_15, "g_15", print_hash_value);
    transparent_crc(g_25.f0, "g_25.f0", print_hash_value);
    transparent_crc(g_32.f0, "g_32.f0", print_hash_value);
    transparent_crc(g_32.f1, "g_32.f1", print_hash_value);
    transparent_crc(g_32.f2, "g_32.f2", print_hash_value);
    transparent_crc(g_40.f0, "g_40.f0", print_hash_value);
    transparent_crc(g_44, "g_44", print_hash_value);
    transparent_crc(g_49, "g_49", print_hash_value);
    transparent_crc(g_85, "g_85", print_hash_value);
    transparent_crc(g_96, "g_96", print_hash_value);
    transparent_crc(g_100, "g_100", print_hash_value);
    transparent_crc(g_102, "g_102", print_hash_value);
    transparent_crc(g_111, "g_111", print_hash_value);
    transparent_crc(g_132, "g_132", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_135[i].f0, "g_135[i].f0", print_hash_value);
        transparent_crc(g_135[i].f1, "g_135[i].f1", print_hash_value);
        transparent_crc(g_135[i].f2, "g_135[i].f2", print_hash_value);

    }
    transparent_crc(g_172, "g_172", print_hash_value);
    transparent_crc(g_191, "g_191", print_hash_value);
    transparent_crc(g_211, "g_211", print_hash_value);
    transparent_crc(g_212, "g_212", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_224[i].f0, "g_224[i].f0", print_hash_value);

    }
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(g_269[i][j][k], "g_269[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_271, "g_271", print_hash_value);
    transparent_crc(g_350, "g_350", print_hash_value);
    transparent_crc(g_365, "g_365", print_hash_value);
    transparent_crc(g_374, "g_374", print_hash_value);
    transparent_crc(g_381, "g_381", print_hash_value);
    transparent_crc(g_382, "g_382", print_hash_value);
    transparent_crc(g_383, "g_383", print_hash_value);
    transparent_crc(g_407.f0, "g_407.f0", print_hash_value);
    transparent_crc(g_407.f1, "g_407.f1", print_hash_value);
    transparent_crc(g_407.f2, "g_407.f2", print_hash_value);
    transparent_crc(g_407.f3, "g_407.f3", print_hash_value);
    transparent_crc(g_407.f4.f0, "g_407.f4.f0", print_hash_value);
    transparent_crc(g_407.f5, "g_407.f5", print_hash_value);
    transparent_crc(g_441, "g_441", print_hash_value);
    transparent_crc(g_442, "g_442", print_hash_value);
    transparent_crc(g_443, "g_443", print_hash_value);
    transparent_crc(g_444, "g_444", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_447[i], "g_447[i]", print_hash_value);

    }
    transparent_crc(g_667, "g_667", print_hash_value);
    transparent_crc(g_718, "g_718", print_hash_value);
    transparent_crc(g_719, "g_719", print_hash_value);
    transparent_crc(g_738, "g_738", print_hash_value);
    transparent_crc(g_755, "g_755", print_hash_value);
    transparent_crc(g_770.f0, "g_770.f0", print_hash_value);
    transparent_crc(g_770.f1, "g_770.f1", print_hash_value);
    transparent_crc(g_770.f2, "g_770.f2", print_hash_value);
    transparent_crc(g_770.f3, "g_770.f3", print_hash_value);
    transparent_crc(g_770.f4.f0, "g_770.f4.f0", print_hash_value);
    transparent_crc(g_770.f5, "g_770.f5", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_783[i][j][k], "g_783[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_1008[i], "g_1008[i]", print_hash_value);

    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_1009[i][j], "g_1009[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_1024[i][j].f0, "g_1024[i][j].f0", print_hash_value);

        }
    }
    transparent_crc(g_1145, "g_1145", print_hash_value);
    transparent_crc(g_1291, "g_1291", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_1351[i].f0, "g_1351[i].f0", print_hash_value);
        transparent_crc(g_1351[i].f1, "g_1351[i].f1", print_hash_value);
        transparent_crc(g_1351[i].f2, "g_1351[i].f2", print_hash_value);
        transparent_crc(g_1351[i].f3, "g_1351[i].f3", print_hash_value);
        transparent_crc(g_1351[i].f4.f0, "g_1351[i].f4.f0", print_hash_value);
        transparent_crc(g_1351[i].f5, "g_1351[i].f5", print_hash_value);

    }
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_1502[i][j][k].f0, "g_1502[i][j][k].f0", print_hash_value);

            }
        }
    }
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_1504[i].f0, "g_1504[i].f0", print_hash_value);

    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_1546[i][j], "g_1546[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_1581[i], "g_1581[i]", print_hash_value);

    }
    transparent_crc(g_1623, "g_1623", print_hash_value);
    transparent_crc(g_1793, "g_1793", print_hash_value);
    transparent_crc(g_1995, "g_1995", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_1999[i].f0, "g_1999[i].f0", print_hash_value);
        transparent_crc(g_1999[i].f1, "g_1999[i].f1", print_hash_value);
        transparent_crc(g_1999[i].f2, "g_1999[i].f2", print_hash_value);

    }
    transparent_crc(g_2069.f0, "g_2069.f0", print_hash_value);
    transparent_crc(g_2069.f1, "g_2069.f1", print_hash_value);
    transparent_crc(g_2069.f2, "g_2069.f2", print_hash_value);
    transparent_crc(g_2069.f3, "g_2069.f3", print_hash_value);
    transparent_crc(g_2069.f4.f0, "g_2069.f4.f0", print_hash_value);
    transparent_crc(g_2069.f5, "g_2069.f5", print_hash_value);
    transparent_crc(g_2326, "g_2326", print_hash_value);
    transparent_crc(g_2416, "g_2416", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(g_2446[i][j], "g_2446[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_2463, "g_2463", print_hash_value);
    transparent_crc(g_2569.f0, "g_2569.f0", print_hash_value);
    transparent_crc(g_2569.f1, "g_2569.f1", print_hash_value);
    transparent_crc(g_2569.f2, "g_2569.f2", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_2692[i], "g_2692[i]", print_hash_value);

    }
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
