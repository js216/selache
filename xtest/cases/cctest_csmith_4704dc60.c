// SPDX-License-Identifier: MIT
// cctest_csmith_4704dc60.c --- cctest case csmith_4704dc60 (csmith seed 1191500896)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x5b35277c */
/* @exp_ticks 0x621e */

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

// Options:   -s 1191500896 -o /tmp/csmith_gen_daku068a/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   uint32_t  f0;
};
#pragma pack(pop)

struct S1 {
   int16_t  f0;
   struct S0  f1;
   uint32_t  f2;
   uint8_t  f3;
   uint32_t  f4;
};

#pragma pack(push)
#pragma pack(1)
struct S2 {
   int16_t  f0;
   struct S1  f1;
   const struct S1  f2;
   uint32_t  f3;
   uint16_t  f4;
   int16_t  f5;
};
#pragma pack(pop)

struct S3 {
   uint8_t  f0;
   int16_t  f1;
};

union U4 {
   const uint8_t  f0;
   int32_t  f1;
};

union U5 {
   uint32_t  f0;
   int16_t  f1;
   uint64_t  f2;
};

union U6 {
   int8_t  f0;
};

union U7 {
   int64_t  f0;
   const int32_t  f1;
};

union U8 {
   struct S2  f0;
   struct S2  f1;
};


static struct S0 g_6 = {4294967290UL};
static union U5 g_13 = {0UL};
static union U5 g_14 = {0xAAE07EA4L};
static struct S3 g_15[5][4] = {{{0UL,2L},{0x3BL,0xCFF2L},{0UL,2L},{0x06L,0x7E80L}},{{9UL,0x7990L},{0x3BL,0xCFF2L},{0x44L,1L},{7UL,1L}},{{0x3BL,0xCFF2L},{0xDBL,0xABEBL},{0xDBL,0xABEBL},{0x3BL,0xCFF2L}},{{0UL,2L},{7UL,1L},{0xDBL,0xABEBL},{0x06L,0x7E80L}},{{0x3BL,0xCFF2L},{9UL,0x7990L},{0x44L,1L},{9UL,0x7990L}}};
static union U8 g_16[2] = {{{-1L,{2L,{0UL},4UL,0x23L,0x37F4A1D2L},{5L,{0xA898CBDBL},0x2B2FAA96L,1UL,0x1B36C938L},0UL,1UL,0x933BL}},{{-1L,{2L,{0UL},4UL,0x23L,0x37F4A1D2L},{5L,{0xA898CBDBL},0x2B2FAA96L,1UL,0x1B36C938L},0UL,1UL,0x933BL}}};
static int32_t g_18 = 0x99FF93F8L;
static uint32_t g_43 = 0x471C2AA0L;
static uint32_t g_44 = 0xC39FA237L;
static const union U6 g_59[5][2][4] = {{{{1L},{0x7DL},{0x7DL},{1L}},{{0x17L},{0x7DL},{0L},{0x7DL}}},{{{0x7DL},{0xFBL},{0L},{0L}},{{0x17L},{0x17L},{0x7DL},{0L}}},{{{1L},{0xFBL},{1L},{0x7DL}},{{1L},{0x7DL},{0x7DL},{1L}}},{{{0x7DL},{1L},{0xFBL},{1L}},{{1L},{0x17L},{0xFBL},{0xFBL}}},{{{0x7DL},{0x7DL},{1L},{0xFBL}},{{0L},{0x17L},{0L},{1L}}}};
static union U4 g_60 = {4UL};
static uint32_t g_71[2][2][2] = {{{0UL,0xF76CAF44L},{0UL,0UL}},{{0xF76CAF44L,0UL},{0UL,0xF76CAF44L}}};
static union U7 g_89 = {-4L};
static int8_t g_214 = 0L;
static int32_t g_218 = 9L;
static int64_t g_219 = 0xACFF28DE542F5EF4LL;
static int16_t g_220[2][4][1] = {{{1L},{1L},{1L},{1L}},{{1L},{1L},{1L},{1L}}};
static int64_t g_221[3] = {(-7L),(-7L),(-7L)};
static int16_t g_222[3][2] = {{3L,3L},{3L,3L},{3L,3L}};
static uint32_t g_223 = 4294967295UL;
static int64_t g_240[3][4] = {{4L,4L,4L,4L},{4L,4L,4L,4L},{4L,4L,4L,4L}};
static int32_t g_241[3][5] = {{0x7AF14CE2L,0x2E266AF2L,0x7AF14CE2L,0x7AF14CE2L,0x2E266AF2L},{0x2E266AF2L,0x7AF14CE2L,0x7AF14CE2L,0x2E266AF2L,0x7AF14CE2L},{0x2E266AF2L,0x2E266AF2L,1L,0x2E266AF2L,0x2E266AF2L}};



static union U7  func_1(void);
static int8_t  func_2(union U8  p_3, int64_t  p_4);
static int32_t  func_7(const union U5  p_8, struct S3  p_9, uint64_t  p_10, union U8  p_11);
static union U5  func_23(int8_t  p_24);




static union U7  func_1(void)
{ 
    union U8 l_5[3] = {{{-10L,{-2L,{4294967293UL},1UL,0UL,1UL},{-10L,{0x100C4307L},0x4A90611BL,0x38L,0xC67EE39FL},0xFAA32F3FL,65535UL,0xE071L}},{{-10L,{-2L,{4294967293UL},1UL,0UL,1UL},{-10L,{0x100C4307L},0x4A90611BL,0x38L,0xC67EE39FL},0xFAA32F3FL,65535UL,0xE071L}},{{-10L,{-2L,{4294967293UL},1UL,0UL,1UL},{-10L,{0x100C4307L},0x4A90611BL,0x38L,0xC67EE39FL},0xFAA32F3FL,65535UL,0xE071L}}};
    const union U5 l_12 = {1UL};
    int32_t l_250 = (-7L);
    int i;
    l_250 |= (func_2(l_5[1], (g_6 , ((-4L) < (func_7((g_14 = (g_13 = l_12)), g_15[1][3], l_5[1].f0.f2.f0, g_16[1]) || g_6.f0)))) >= 0x8EL);
    return g_89;
}



static int8_t  func_2(union U8  p_3, int64_t  p_4)
{ 
    const union U5 l_22 = {18446744073709551615UL};
    const union U7 l_30 = {0L};
    int32_t l_116 = 0xE813F23DL;
    int32_t l_138 = (-1L);
    int32_t l_139 = 0x42CEBDE3L;
    uint64_t l_199 = 0x4EADEB179A86176ELL;
    struct S1 l_226[2][1] = {{{-2L,{0xAD141778L},1UL,253UL,4294967295UL}},{{-2L,{0xAD141778L},1UL,253UL,4294967295UL}}};
    uint32_t l_227[2][2][4] = {{{8UL,0UL,8UL,0UL},{8UL,0UL,8UL,0UL}},{{8UL,0UL,8UL,0UL},{8UL,0UL,8UL,0UL}}};
    struct S3 l_248 = {255UL,1L};
    int i, j, k;
    for (p_3.f1.f5 = 4; (p_3.f1.f5 <= (-8)); p_3.f1.f5 = safe_sub_func_uint64_t_u_u(p_3.f1.f5, 7))
    { 
        int8_t l_21 = 0L;
        l_21 ^= g_16[1].f0.f0;
        return l_21;
    }
    if (func_7(l_22, g_15[1][1], (func_23((!(safe_sub_func_uint16_t_u_u(0xA048L, (safe_rshift_func_int16_t_s_u(((l_30 , 0x265DL) ^ 0x0039L), g_14.f1)))))) , p_3.f0.f3), g_16[0]))
    { 
        int32_t l_113 = (-5L);
        int32_t l_173 = 0x9FCAAD6EL;
        int64_t l_179 = 9L;
        int64_t l_184 = 0xB3299B2AD0072B36LL;
        l_116 &= (p_3.f0.f1.f4 ^ (((l_113 , g_16[1].f0.f1.f2) ^ (safe_sub_func_int32_t_s_s((((p_3.f0.f2.f4 && 4294967287UL) && 4294967295UL) <= 0x6DL), p_3.f0.f1.f3))) == g_16[1].f0.f2.f1.f0));
        for (l_116 = (-5); (l_116 < (-21)); l_116 = safe_sub_func_uint16_t_u_u(l_116, 1))
        { 
            const int8_t l_125 = (-1L);
            uint16_t l_137 = 0x0255L;
            int32_t l_152 = (-9L);
            int32_t l_153 = 0xEF8C87ACL;
            l_139 |= (g_18 ^= ((l_138 = ((safe_lshift_func_uint16_t_u_s(((safe_rshift_func_int8_t_s_u((safe_rshift_func_int8_t_s_s(l_125, 4)), (+(safe_div_func_int8_t_s_s((((safe_rshift_func_int16_t_s_u((safe_lshift_func_uint16_t_u_u(((((safe_rshift_func_int16_t_s_s(g_16[1].f0.f1.f4, 13)) && (p_3.f0.f2.f0 < l_125)) == g_16[1].f0.f1.f3) || g_16[1].f0.f1.f1.f0), g_16[1].f0.f1.f1.f0)), g_16[1].f0.f1.f2)) , l_125) == g_13.f0), g_16[1].f0.f2.f1.f0))))) == 4294967295UL), l_137)) & g_16[1].f0.f2.f3)) && 0UL));
            for (p_3.f0.f1.f3 = 0; (p_3.f0.f1.f3 != 56); p_3.f0.f1.f3 = safe_add_func_int8_t_s_s(p_3.f0.f1.f3, 8))
            { 
                uint8_t l_151 = 3UL;
                int32_t l_154 = 0x6A01D589L;
                l_154 &= (safe_rshift_func_int8_t_s_s((l_153 &= ((l_152 = (p_3.f0 , ((safe_add_func_int8_t_s_s((((safe_unary_minus_func_uint8_t_u((safe_sub_func_int16_t_s_s(p_3.f0.f1.f3, ((safe_add_func_int8_t_s_s((-7L), ((p_3.f0.f2.f0 | 1UL) | 4UL))) > l_113))))) == l_151) , l_30.f1), g_18)) || g_16[1].f0.f4))) > g_15[1][3].f1)), 7));
                l_173 = (safe_sub_func_uint32_t_u_u((p_3.f0.f2.f3 , (g_16[1].f0.f1.f4--)), (safe_add_func_int16_t_s_s((safe_lshift_func_int8_t_s_s((((safe_rshift_func_int16_t_s_s((((((l_113 = (safe_div_func_uint8_t_u_u(((safe_add_func_int16_t_s_s((p_3.f0.f2 , g_15[1][3].f1), ((safe_lshift_func_uint8_t_u_s((0x8D08L < 0x0D6EL), 2)) && l_113))) >= p_3.f0.f5), 5L))) != 0UL) ^ g_60.f0) & p_3.f0.f1.f3) >= p_3.f0.f2.f4), 10)) < l_152) | 0UL), l_152)), 0UL))));
                if (l_173)
                    continue;
            }
            if (g_14.f0)
                continue;
        }
        g_18 &= (((+(safe_div_func_uint32_t_u_u(((safe_add_func_int16_t_s_s((l_179 ^= p_3.f0.f5), ((safe_div_func_uint64_t_u_u(2UL, (safe_mul_func_int16_t_s_s((l_113 >= (l_184 &= g_16[1].f0.f1.f2)), l_113)))) > g_15[1][3].f1))) <= 18446744073709551613UL), g_16[1].f0.f2.f1.f0))) != 0x720279D622751AD0LL) == l_30.f0);
    }
    else
    { 
        int8_t l_193 = (-1L);
        uint8_t l_196 = 0xABL;
        int32_t l_217 = (-8L);
        struct S1 l_237 = {0L,{1UL},3UL,0x08L,0x4C53010FL};
        if (((g_59[1][0][3] , (g_60.f1 = (safe_mul_func_int8_t_s_s((safe_mod_func_int16_t_s_s((safe_sub_func_uint8_t_u_u((g_6 , (safe_div_func_uint8_t_u_u(l_193, g_16[1].f0.f5))), g_15[1][3].f0)), p_3.f0.f1.f1.f0)), g_59[1][0][3].f0)))) > 0x9071E436L))
        { 
            for (l_193 = 19; (l_193 >= 25); l_193++)
            { 
                int32_t l_197 = (-4L);
                int32_t l_198 = (-1L);
                l_196 = p_3.f0.f0;
                l_199++;
            }
            if (l_30.f1)
            { 
                return p_3.f0.f5;
            }
            else
            { 
                int32_t l_216 = 0xCB1CE7FFL;
                l_116 = (safe_lshift_func_uint16_t_u_u((g_214 |= (((safe_div_func_int64_t_s_s(((safe_add_func_uint64_t_u_u((safe_div_func_int32_t_s_s((((safe_rshift_func_int8_t_s_s(g_71[0][0][0], (l_22 , (1L && (safe_sub_func_int64_t_s_s(p_3.f0.f2.f4, l_139)))))) <= g_16[1].f0.f4) , p_3.f0.f1.f4), (-1L))), 18446744073709551615UL)) < p_3.f0.f2.f2), g_89.f0)) >= p_3.f0.f2.f0) > (-8L))), 8));
                g_60.f1 = (+l_216);
            }
            for (p_3.f0.f4 = 0; (p_3.f0.f4 <= 1); p_3.f0.f4 += 1)
            { 
                uint32_t l_236[4];
                int i;
                for (i = 0; i < 4; i++)
                    l_236[i] = 0x9DA0880AL;
                l_217 = l_196;
                --g_223;
                l_237 = (l_226[0][0] , (((l_227[0][1][0] & (l_236[2] = ((safe_div_func_int16_t_s_s((((safe_mod_func_uint16_t_u_u(((safe_div_func_uint8_t_u_u(((safe_lshift_func_int8_t_s_s(0L, 2)) , g_16[1].f0.f2.f0), 0x1EL)) ^ 0xD82FEA0AL), p_3.f0.f2.f0)) >= p_3.f0.f1.f0) || g_16[1].f0.f1.f3), p_3.f0.f2.f3)) || 5UL))) , p_3.f0.f3) , g_16[1].f0.f2));
            }
        }
        else
        { 
            int64_t l_238 = 0xA7757BED90661D1CLL;
            int32_t l_239[4][2] = {{1L,1L},{1L,1L},{1L,1L},{1L,1L}};
            int i, j;
            for (p_3.f1.f1.f1.f0 = 0; (p_3.f1.f1.f1.f0 <= 3); p_3.f1.f1.f1.f0 += 1)
            { 
                uint32_t l_242 = 8UL;
                l_242--;
            }
        }
        return l_196;
    }
    for (p_3.f0.f0 = (-17); (p_3.f0.f0 <= (-28)); p_3.f0.f0 = safe_sub_func_uint16_t_u_u(p_3.f0.f0, 9))
    { 
        union U6 l_247 = {-1L};
        for (l_199 = 0; (l_199 <= 2); l_199 += 1)
        { 
            struct S3 l_249 = {0x1EL,0x59A6L};
            l_249 = (l_247 , l_248);
        }
        l_226[0][0] = p_3.f0.f2;
    }
    return g_71[0][1][1];
}



static int32_t  func_7(const union U5  p_8, struct S3  p_9, uint64_t  p_10, union U8  p_11)
{ 
    int32_t l_17[2][5] = {{1L,1L,1L,1L,1L},{0x89276496L,0x89276496L,0x89276496L,0x89276496L,0x89276496L}};
    int i, j;
    g_18 ^= l_17[1][4];
    return g_16[1].f0.f1.f1.f0;
}



static union U5  func_23(int8_t  p_24)
{ 
    uint32_t l_39[3][1][4] = {{{0x833686A8L,0UL,0x833686A8L,0x833686A8L}},{{0UL,0UL,0x20EAADAFL,0UL}},{{0UL,0x833686A8L,0x833686A8L,0UL}}};
    int32_t l_42[2];
    uint32_t l_61 = 0x16A1EA56L;
    int32_t l_62 = 0x9E6D5949L;
    union U6 l_85[3] = {{2L},{2L},{2L}};
    struct S3 l_90[4][4] = {{{1UL,0x2B5FL},{255UL,3L},{1UL,0x2B5FL},{3UL,0x4D26L}},{{1UL,0x2B5FL},{3UL,0x4D26L},{3UL,0x4D26L},{1UL,0x2B5FL}},{{247UL,-7L},{3UL,0x4D26L},{0x26L,0xE350L},{3UL,0x4D26L}},{{3UL,0x4D26L},{255UL,3L},{0x26L,0xE350L},{0x26L,0xE350L}}};
    union U5 l_110 = {1UL};
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_42[i] = 0x5EFB48CAL;
    if ((safe_lshift_func_uint8_t_u_u((((0x2CL < 0x11L) ^ (safe_mod_func_uint8_t_u_u((l_42[1] = (safe_sub_func_int16_t_s_s(0xD231L, (safe_rshift_func_int8_t_s_s((g_44 = ((g_43 = ((++l_39[1][0][3]) | (((1UL || 0x7D9CL) < l_42[0]) , g_15[1][3].f0))) > g_16[1].f0.f1.f0)), 7))))), 0x77L))) <= g_16[1].f0.f4), 2)))
    { 
        struct S0 l_47 = {0x3BD65BDFL};
        for (g_14.f1 = 0; g_14.f1 < 2; g_14.f1 += 1)
        {
            l_42[g_14.f1] = (-3L);
        }
        for (g_6.f0 = (-10); (g_6.f0 < 19); g_6.f0 = safe_add_func_uint32_t_u_u(g_6.f0, 8))
        { 
            struct S0 l_48 = {0UL};
            l_48 = l_47;
            l_42[0] = (l_62 ^= (safe_add_func_uint64_t_u_u((safe_div_func_int16_t_s_s((safe_sub_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u((safe_div_func_uint64_t_u_u(g_16[1].f0.f1.f3, ((g_59[1][0][3] , g_60) , g_43))), 13)), l_61)), g_16[1].f0.f4)), g_18)));
        }
    }
    else
    { 
        int64_t l_63[5][1][5] = {{{0xCC827221BDB030F3LL,0xCC827221BDB030F3LL,0xCC827221BDB030F3LL,0xCC827221BDB030F3LL,0xCC827221BDB030F3LL}},{{0x82417F16C3B14A51LL,0L,0x82417F16C3B14A51LL,0L,0x82417F16C3B14A51LL}},{{0xCC827221BDB030F3LL,0xCC827221BDB030F3LL,0xCC827221BDB030F3LL,0xCC827221BDB030F3LL,0xCC827221BDB030F3LL}},{{0x82417F16C3B14A51LL,0L,0x82417F16C3B14A51LL,0L,0x82417F16C3B14A51LL}},{{0xCC827221BDB030F3LL,0xCC827221BDB030F3LL,0xCC827221BDB030F3LL,0xCC827221BDB030F3LL,0xCC827221BDB030F3LL}}};
        int32_t l_64 = 0xB8AEA200L;
        int32_t l_66 = 0x54C0A206L;
        int32_t l_68 = 0xA768641AL;
        struct S2 l_76 = {-7L,{2L,{4294967295UL},4UL,0UL,1UL},{0x7BDFL,{4294967294UL},0x5C771C75L,255UL,0x9A8392DDL},3UL,65535UL,-3L};
        union U6 l_84[4][1] = {{{0x02L}},{{0xB6L}},{{0x02L}},{{0xB6L}}};
        int64_t l_101 = 0L;
        union U5 l_105 = {0xA99605DBL};
        int i, j, k;
        for (l_61 = 0; (l_61 <= 0); l_61 += 1)
        { 
            int32_t l_65 = 8L;
            int32_t l_67 = 0x345D263DL;
            int32_t l_69 = 0x559F947EL;
            int32_t l_70 = (-6L);
            --g_71[0][0][0];
            for (g_13.f2 = 0; (g_13.f2 <= 0); g_13.f2 += 1)
            { 
                return g_13;
            }
        }
        if (((0x35L < (safe_add_func_int8_t_s_s((l_76 , l_39[1][0][3]), (safe_lshift_func_uint8_t_u_s((safe_lshift_func_int8_t_s_u(((safe_add_func_uint32_t_u_u(((~(((l_84[1][0] = (l_85[2] = l_84[0][0])) , g_14.f0) == 0x7C9AL)) != 0xCAL), 4294967295UL)) ^ 0x4EFE8F33L), l_39[1][0][3])), 3))))) & g_71[0][0][0]))
        { 
            int64_t l_103 = 0x68C9157731B4BD6BLL;
            for (g_6.f0 = 0; (g_6.f0 >= 44); ++g_6.f0)
            { 
                int16_t l_88[2];
                uint32_t l_102 = 9UL;
                int32_t l_104 = (-1L);
                int i;
                for (i = 0; i < 2; i++)
                    l_88[i] = 0x89D4L;
                l_104 = ((l_103 = (l_102 |= ((l_88[0] < (g_89 , (l_90[3][1] , (safe_mul_func_uint8_t_u_u((safe_rshift_func_int16_t_s_s(((safe_sub_func_uint64_t_u_u((safe_mod_func_uint16_t_u_u((safe_sub_func_int16_t_s_s(l_101, l_76.f1.f2)), p_24)), g_16[1].f0.f1.f1.f0)) | p_24), g_16[1].f0.f3)), g_71[0][0][0]))))) && p_24))) < g_18);
                g_18 = 0x1FAE61DEL;
            }
        }
        else
        { 
            return l_105;
        }
    }
    g_18 = ((251UL < (5UL >= ((safe_lshift_func_uint16_t_u_u((safe_add_func_uint16_t_u_u((g_16[1].f0.f2.f2 == (g_16[1].f0.f2.f1 , l_61)), l_39[1][0][2])), 7)) <= g_71[0][0][1]))) | 5UL);
    return l_110;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_6.f0, "g_6.f0", print_hash_value);
    transparent_crc(g_13.f0, "g_13.f0", print_hash_value);
    transparent_crc(g_13.f1, "g_13.f1", print_hash_value);
    transparent_crc(g_14.f0, "g_14.f0", print_hash_value);
    transparent_crc(g_14.f1, "g_14.f1", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_15[i][j].f0, "g_15[i][j].f0", print_hash_value);
            transparent_crc(g_15[i][j].f1, "g_15[i][j].f1", print_hash_value);

        }
    }
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_16[i].f0.f0, "g_16[i].f0.f0", print_hash_value);
        transparent_crc(g_16[i].f0.f1.f0, "g_16[i].f0.f1.f0", print_hash_value);
        transparent_crc(g_16[i].f0.f1.f1.f0, "g_16[i].f0.f1.f1.f0", print_hash_value);
        transparent_crc(g_16[i].f0.f1.f2, "g_16[i].f0.f1.f2", print_hash_value);
        transparent_crc(g_16[i].f0.f1.f3, "g_16[i].f0.f1.f3", print_hash_value);
        transparent_crc(g_16[i].f0.f1.f4, "g_16[i].f0.f1.f4", print_hash_value);
        transparent_crc(g_16[i].f0.f2.f0, "g_16[i].f0.f2.f0", print_hash_value);
        transparent_crc(g_16[i].f0.f2.f1.f0, "g_16[i].f0.f2.f1.f0", print_hash_value);
        transparent_crc(g_16[i].f0.f2.f2, "g_16[i].f0.f2.f2", print_hash_value);
        transparent_crc(g_16[i].f0.f2.f3, "g_16[i].f0.f2.f3", print_hash_value);
        transparent_crc(g_16[i].f0.f2.f4, "g_16[i].f0.f2.f4", print_hash_value);
        transparent_crc(g_16[i].f0.f3, "g_16[i].f0.f3", print_hash_value);
        transparent_crc(g_16[i].f0.f4, "g_16[i].f0.f4", print_hash_value);
        transparent_crc(g_16[i].f0.f5, "g_16[i].f0.f5", print_hash_value);

    }
    transparent_crc(g_18, "g_18", print_hash_value);
    transparent_crc(g_43, "g_43", print_hash_value);
    transparent_crc(g_44, "g_44", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_59[i][j][k].f0, "g_59[i][j][k].f0", print_hash_value);

            }
        }
    }
    transparent_crc(g_60.f0, "g_60.f0", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_71[i][j][k], "g_71[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_89.f0, "g_89.f0", print_hash_value);
    transparent_crc(g_89.f1, "g_89.f1", print_hash_value);
    transparent_crc(g_214, "g_214", print_hash_value);
    transparent_crc(g_218, "g_218", print_hash_value);
    transparent_crc(g_219, "g_219", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_220[i][j][k], "g_220[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_221[i], "g_221[i]", print_hash_value);

    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_222[i][j], "g_222[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_223, "g_223", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_240[i][j], "g_240[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_241[i][j], "g_241[i][j]", print_hash_value);

        }
    }
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
